using System;
using System.Collections;
using System.Net.Http;
using TMPro;
using UnityEngine;
using UnityEngine.Diagnostics;
using UnityEngine.Networking;

[System.Serializable]
public class CrashReportPayload
{
    public string deviceName;
    public string timestamp;

    // public string logString;
    public string stack;
    public string platform;
    public string version;
    // Optionally add more fields like platform and version
    // public string platform;
    // public string version;
}

public class CloudLogger : MonoBehaviour
{
    public TMPro.TMP_Text consoleText;
    private string responseMessage;

    // Replace this with your Cloudflare Worker or API URL
    // [SerializeField]
    private string reportUrl = "https://shy-sound-2070.aaron-bf6.workers.dev/";
    private string deviceName;

    // public CrashReportPayload crashReportPayload;

    void OnEnable()
    {
        deviceName = SystemInfo.deviceName;
        // Subscribe to Unity's log events
        Application.logMessageReceived += CaptureLog;
    }

    void OnDisable()
    {
        // Always unsubscribe to prevent memory leaks
        Application.logMessageReceived -= CaptureLog;
    }

    void CaptureLog(string logString, string stackTrace, LogType type)
    {
        // We only care about Errors and Exceptions
        if (type == LogType.Exception || type == LogType.Error)
        {
            StartCoroutine(SendReport(deviceName, logString, stackTrace));
        }
    }

    IEnumerator SendReport(string deviceId, string logString, string stack)
    {
        // Create a simple JSON structure using a serializable class
        CrashReportPayload payload = new()
        {
            deviceName = deviceName,
            timestamp = DateTimeOffset.UtcNow.ToString("o"),
            // logString = logString,
            stack = logString + "\n" + stack,
            platform = Application.platform.ToString(),
            version = Application.version,
        };
        string jsonPayload = JsonUtility.ToJson(payload);

        // Setup the web request
        using (UnityWebRequest request = new UnityWebRequest(reportUrl, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonPayload);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");

            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                responseMessage =
                    "Failed to send crash report: "
                    + request.error
                    + "\nResponse: "
                    + request.downloadHandler.text;
            }
            else
            {
                responseMessage = "Crash report sent successfully.";
            }
            Debug.Log(responseMessage);
            consoleText.text = responseMessage;
        }
    }

    public void SendNullReferenceException()
    {
        try
        {
            throw new NullReferenceException("Button-triggered Null Reference Exception");
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
        }
    }

    public void SendInvalidOperationException()
    {
        try
        {
            throw new InvalidOperationException("Button-triggered Invalid Operation Exception");
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
        }
    }

    public void SendArgumentException()
    {
        try
        {
            throw new ArgumentException("Button-triggered Argument Exception");
        }
        catch (Exception ex)
        {
            Debug.LogException(ex);
        }
    }

    public void SendCrash()
    {
        Utils.ForceCrash(ForcedCrashCategory.FatalError);
    }
}
