#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct Pinnable_1_t4DBC8C87814E048C340212CF18C72C9E48ADED18;
struct ImmutableArray_1U5BU5D_t93D015A206693C97E9863E18CAF1C53A046FC59B;
struct ImmutableArray_1U5BU5D_t03C3BF5D133389EAD31B3AF26B4DFBA97593457B;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DebugDirectoryEntryU5BU5D_t6E30469456D888AB7539643CF43DDD44B0CDBB4A;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExceptionRegionU5BU5D_tF7EE98C9E3726493946E6AFA4D186C982CBA91DC;
struct ExportedTypeHandleU5BU5D_t45D34F3ED27CB3E707E471F4AFB258D6703F7C82;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct MethodDefinitionHandleU5BU5D_tC280E36A9E4682B478FAB35FF5CFA3104524642E;
struct NamespaceDefinitionHandleU5BU5D_tCE25041F731EE1F79F23E79DFF60298B8CED3FE8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SectionHeaderU5BU5D_t9055323282B2AEC1351AFE10DDECD215B5A0BA47;
struct TypeDefinitionHandleU5BU5D_t8C7546DBA0D5787ED394612EA2049991E4DD4794;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct BranchInfoU5BU5D_tB2137023B38F766E582D017FAF58CADF4B4B82DC;
struct ExceptionHandlerInfoU5BU5D_t60751C99AA210AC883D0A6CC00304E77BDF95C49;
struct DbRowU5BU5D_tF5877F670DDFB65AFE024E838A052E972DA6CFFD;
struct StackRowU5BU5D_t880B2E7DABDC745599E47FEA9805AE9DA77F1328;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct RowCountsU5BU5D_tC4ED2FD26697A80FA8E5F9C82E33CD59D9B27ECE;
struct SectionU5BU5D_t9159F69B4B7B5AF81B707FDFAAC738276431D984;
struct SerializedSectionU5BU5D_tED17DFB1D134C50581AB0BE6D4ED8894A9D3885D;
struct BlobBuilder_tB14F53E1B9949E7914620B9BB067D81CDC223282;
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MethodInfo_t;
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
struct Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct PerTypeValues_1_t170415969C0F770C1C021A4CA21C7ED48CB49E0E  : public RuntimeObject
{
};
struct PerTypeValues_1_t02882CCC0AF9FBABF2885A85B0DA24BC46D6B4FD  : public RuntimeObject
{
};
struct PerTypeValues_1_tD610EFC470613B433455B12AC9F956D5D8A091AF  : public RuntimeObject
{
};
struct PerTypeValues_1_t2C897A1886FBB90D31AC2BF54693C76721847D2C  : public RuntimeObject
{
};
struct PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F  : public RuntimeObject
{
};
struct PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3  : public RuntimeObject
{
};
struct PerTypeValues_1_tCEDA9A7A86A9124A8FFF028781CB0D7F709616D2  : public RuntimeObject
{
};
struct PerTypeValues_1_tFC0A4B4B1F40045391DF43665B6261A6347C487B  : public RuntimeObject
{
};
struct PerTypeValues_1_tB4D21AFF8DDF2FAF614E5205A25A2A4709D9B4E4  : public RuntimeObject
{
};
struct PerTypeValues_1_tCBF603E01C68F0184B9163A4FFDBCAD5BAB8D704  : public RuntimeObject
{
};
struct PerTypeValues_1_t1706B1C881DA6E6031EF6EF049251587CEA25E36  : public RuntimeObject
{
};
struct PerTypeValues_1_t13BF6AB91C61274F85CC4AC4A7673B32D4A978EA  : public RuntimeObject
{
};
struct PerTypeValues_1_tEF2179D9EE3BF142D51B54AE356A48C87CCD46F8  : public RuntimeObject
{
};
struct PerTypeValues_1_t250FC61FA3CE7EBE59D5E5CE666ADEA38220C5F4  : public RuntimeObject
{
};
struct PerTypeValues_1_tD71AE6E5E729A9A107962F8206D5E1D4915AC2A2  : public RuntimeObject
{
};
struct PerTypeValues_1_t4F6A004F91A89EF0FDF17B84CD4CBF5D0E5F9951  : public RuntimeObject
{
};
struct PerTypeValues_1_t927CC6B30B622374BD4DF7D4E5A2B61A03C618F8  : public RuntimeObject
{
};
struct PerTypeValues_1_t0480731D4B520C25079410C2B834E1BB013C766F  : public RuntimeObject
{
};
struct PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287  : public RuntimeObject
{
};
struct PerTypeValues_1_t5CAE71594C3B7DD4A3AF9B1E157F4D8CAFB27BD6  : public RuntimeObject
{
};
struct PerTypeValues_1_tB05607B96FF1A50155BFB6695D30DB5F666FEB6B  : public RuntimeObject
{
};
struct PerTypeValues_1_tD184BBE738C94A17C3033EFCD17E2A346CEB442F  : public RuntimeObject
{
};
struct PerTypeValues_1_t4D4ED9D9AE7099D1F6958540C7613EE0E936ED91  : public RuntimeObject
{
};
struct PerTypeValues_1_tDF2E15FFD5C8E486C1546BE9DB83A4933F8F5E92  : public RuntimeObject
{
};
struct PerTypeValues_1_tD86D9FC35120379235838D86F3DC3D7A5AD02822  : public RuntimeObject
{
};
struct PerTypeValues_1_t06AD0B53F3900A6F2E33EF8B601A7AF5BEB0F416  : public RuntimeObject
{
};
struct PerTypeValues_1_t63733233144576C28E01A8F5F2F91E4289D40077  : public RuntimeObject
{
};
struct PerTypeValues_1_t4E5A9E37491A7A79FD9BFE4257C1FFA4AF0F7D47  : public RuntimeObject
{
};
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE  : public RuntimeObject
{
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CsamplerU3Ek__BackingField;
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___U3CinlineSamplerU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_Recorder;
	Recorder_t0A14385FB0F5829CAAC1E16F88B095769D648C90* ___m_InlineRecorder;
};
struct SpanHelpers_t02BB72C98A94870116CBF8EA422985A2F6651374  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array;
};
struct ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 
{
	RowCountsU5BU5D_tC4ED2FD26697A80FA8E5F9C82E33CD59D9B27ECE* ___array;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct EntityHandle_tDB6FE1029C6A507BEF0D6DF74897CF4E3801BC94 
{
	uint32_t ____vToken;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 
{
	int32_t ____rowId;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 
{
	int32_t ___U3CIdU3Ek__BackingField;
};
struct MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 
{
	int32_t ____rowId;
};
struct NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A 
{
	uint32_t ____value;
};
struct ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD__padding[1];
	};
};
struct Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6__padding[1];
	};
};
struct TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 
{
	int32_t ____rowId;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE 
{
	int32_t ___AggregateInserts;
	int32_t ___Updates;
};
struct ReadOnlySpan_1_tC4A75E85AFCD0920E1DE9D1130444BD790ABB37B 
{
	Pinnable_1_t4DBC8C87814E048C340212CF18C72C9E48ADED18* ____pinnable;
	intptr_t ____byteOffset;
	int32_t ____length;
};
struct DebugDirectoryEntryType_t3B0D051B7EE492FB28C3C6736BDA7FA82AAD4D6B 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct ExceptionArgument_t7DEB1DC2A275807FC6E8D15BB11F34D3D007482B 
{
	int32_t ___value__;
};
struct ExceptionRegionKind_tFF98E177C18ADBADD5DB9F76F69DEA6C8EDBF95C 
{
	uint16_t ___value__;
};
struct SectionCharacteristics_tB1F92B5CC921AB4385FDEE7F05B39AB176286002 
{
	uint32_t ___value__;
};
struct BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 
{
	int32_t ___ILOffset;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___Label;
	uint8_t ____opCode;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB 
{
	uint32_t ___U3CStampU3Ek__BackingField;
	uint16_t ___U3CMajorVersionU3Ek__BackingField;
	uint16_t ___U3CMinorVersionU3Ek__BackingField;
	int32_t ___U3CTypeU3Ek__BackingField;
	int32_t ___U3CDataSizeU3Ek__BackingField;
	int32_t ___U3CDataRelativeVirtualAddressU3Ek__BackingField;
	int32_t ___U3CDataPointerU3Ek__BackingField;
};
struct ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 
{
	uint16_t ____kind;
	int32_t ____tryOffset;
	int32_t ____tryLength;
	int32_t ____handlerOffset;
	int32_t ____handlerLength;
	int32_t ____classTokenOrFilterOffset;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE 
{
	String_t* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_marshaled_pinvoke
{
	char* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_marshaled_com
{
	Il2CppChar* ___U3CNameU3Ek__BackingField;
	int32_t ___U3CVirtualSizeU3Ek__BackingField;
	int32_t ___U3CVirtualAddressU3Ek__BackingField;
	int32_t ___U3CSizeOfRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRawDataU3Ek__BackingField;
	int32_t ___U3CPointerToRelocationsU3Ek__BackingField;
	int32_t ___U3CPointerToLineNumbersU3Ek__BackingField;
	uint16_t ___U3CNumberOfRelocationsU3Ek__BackingField;
	uint16_t ___U3CNumberOfLineNumbersU3Ek__BackingField;
	uint32_t ___U3CSectionCharacteristicsU3Ek__BackingField;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 
{
	uint16_t ___Kind;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___TryStart;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___TryEnd;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___HandlerStart;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___HandlerEnd;
	LabelHandle_t254D61B52F2BB7BEC3CE5570B6EA40CD9B900A09 ___FilterStart;
	EntityHandle_tDB6FE1029C6A507BEF0D6DF74897CF4E3801BC94 ___CatchType;
};
struct Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 
{
	String_t* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_marshaled_pinvoke
{
	char* ___Name;
	uint32_t ___Characteristics;
};
struct Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_marshaled_com
{
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
};
struct SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 
{
	BlobBuilder_tB14F53E1B9949E7914620B9BB067D81CDC223282* ___Builder;
	String_t* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_marshaled_pinvoke
{
	BlobBuilder_tB14F53E1B9949E7914620B9BB067D81CDC223282* ___Builder;
	char* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_marshaled_com
{
	BlobBuilder_tB14F53E1B9949E7914620B9BB067D81CDC223282* ___Builder;
	Il2CppChar* ___Name;
	uint32_t ___Characteristics;
	int32_t ___RelativeVirtualAddress;
	int32_t ___SizeOfRawData;
	int32_t ___PointerToRawData;
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct PerTypeValues_1_t170415969C0F770C1C021A4CA21C7ED48CB49E0E_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ImmutableArray_1U5BU5D_t93D015A206693C97E9863E18CAF1C53A046FC59B* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t02882CCC0AF9FBABF2885A85B0DA24BC46D6B4FD_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ImmutableArray_1U5BU5D_t03C3BF5D133389EAD31B3AF26B4DFBA97593457B* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tD610EFC470613B433455B12AC9F956D5D8A091AF_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t2C897A1886FBB90D31AC2BF54693C76721847D2C_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tCEDA9A7A86A9124A8FFF028781CB0D7F709616D2_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	DebugDirectoryEntryU5BU5D_t6E30469456D888AB7539643CF43DDD44B0CDBB4A* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tFC0A4B4B1F40045391DF43665B6261A6347C487B_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ExceptionRegionU5BU5D_tF7EE98C9E3726493946E6AFA4D186C982CBA91DC* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tB4D21AFF8DDF2FAF614E5205A25A2A4709D9B4E4_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ExportedTypeHandleU5BU5D_t45D34F3ED27CB3E707E471F4AFB258D6703F7C82* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tCBF603E01C68F0184B9163A4FFDBCAD5BAB8D704_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t1706B1C881DA6E6031EF6EF049251587CEA25E36_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t13BF6AB91C61274F85CC4AC4A7673B32D4A978EA_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tEF2179D9EE3BF142D51B54AE356A48C87CCD46F8_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	MethodDefinitionHandleU5BU5D_tC280E36A9E4682B478FAB35FF5CFA3104524642E* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t250FC61FA3CE7EBE59D5E5CE666ADEA38220C5F4_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	NamespaceDefinitionHandleU5BU5D_tCE25041F731EE1F79F23E79DFF60298B8CED3FE8* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tD71AE6E5E729A9A107962F8206D5E1D4915AC2A2_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t4F6A004F91A89EF0FDF17B84CD4CBF5D0E5F9951_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	SectionHeaderU5BU5D_t9055323282B2AEC1351AFE10DDECD215B5A0BA47* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t927CC6B30B622374BD4DF7D4E5A2B61A03C618F8_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	TypeDefinitionHandleU5BU5D_t8C7546DBA0D5787ED394612EA2049991E4DD4794* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t0480731D4B520C25079410C2B834E1BB013C766F_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t5CAE71594C3B7DD4A3AF9B1E157F4D8CAFB27BD6_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tB05607B96FF1A50155BFB6695D30DB5F666FEB6B_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tD184BBE738C94A17C3033EFCD17E2A346CEB442F_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	BranchInfoU5BU5D_tB2137023B38F766E582D017FAF58CADF4B4B82DC* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t4D4ED9D9AE7099D1F6958540C7613EE0E936ED91_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	ExceptionHandlerInfoU5BU5D_t60751C99AA210AC883D0A6CC00304E77BDF95C49* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tDF2E15FFD5C8E486C1546BE9DB83A4933F8F5E92_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	DbRowU5BU5D_tF5877F670DDFB65AFE024E838A052E972DA6CFFD* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_tD86D9FC35120379235838D86F3DC3D7A5AD02822_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	StackRowU5BU5D_t880B2E7DABDC745599E47FEA9805AE9DA77F1328* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t06AD0B53F3900A6F2E33EF8B601A7AF5BEB0F416_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	RowCountsU5BU5D_tC4ED2FD26697A80FA8E5F9C82E33CD59D9B27ECE* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t63733233144576C28E01A8F5F2F91E4289D40077_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	SectionU5BU5D_t9159F69B4B7B5AF81B707FDFAAC738276431D984* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct PerTypeValues_1_t4E5A9E37491A7A79FD9BFE4257C1FFA4AF0F7D47_StaticFields
{
	bool ___IsReferenceOrContainsReferences;
	SerializedSectionU5BU5D_tED17DFB1D134C50581AB0BE6D4ED8894A9D3885D* ___EmptyArray;
	intptr_t ___ArrayAdjustment;
};
struct ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_StaticFields
{
	ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD ___Empty;
};
struct ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_StaticFields
{
	ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticFields
{
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___s_QuickSortSampler;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___s_InsertionSortSampler;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334  : public RuntimeArray
{
	ALIGN_FIELD (8) ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE m_Items[1];

	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE value)
	{
		m_Items[index] = value;
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9182B24BC2E06DBEF5043197E0BEC5837F6CB4BD_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m423F3757713ABC1BC2A4B86BD4B33F2F713AA72F_gshared (uint8_t* ___0_first, uint8_t* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4CA9EFB2F26A98F5FA6CBA1078413780F739BAC2_gshared (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;

inline ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___4_compare, const RuntimeMethod* method)
{
	return ((  ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, const RuntimeMethod*))Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_pivot, int32_t ___3_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___4_compare, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D_gshared)(___0_data, ___1_start, ___2_pivot, ___3_end, ___4_compare, method);
}
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope__ctor_m4B73587A2295443A73B64DDD3D484D8EAECC0D65 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___0_sampler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4 (ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD* __this, const RuntimeMethod* method) ;
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5 (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334*, int32_t, int32_t, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF*, const RuntimeMethod*))Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared)(___0_data, ___1_start, ___2_end, ___3_compare, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05F48EAC860345D84EAC0DB576114A7C0989E30B (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F (intptr_t ___0_value, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_gshared_inline)(method);
}
inline bool SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9 (bool* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9182B24BC2E06DBEF5043197E0BEC5837F6CB4BD (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, uint8_t, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9182B24BC2E06DBEF5043197E0BEC5837F6CB4BD_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m423F3757713ABC1BC2A4B86BD4B33F2F713AA72F (uint8_t* ___0_first, uint8_t* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (uint8_t*, uint8_t*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m423F3757713ABC1BC2A4B86BD4B33F2F713AA72F_gshared)(___0_first, ___1_second, ___2_length, method);
}
inline int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5 (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5_gshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
inline bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4CA9EFB2F26A98F5FA6CBA1078413780F739BAC2 (Il2CppChar* ___0_first, Il2CppChar* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4CA9EFB2F26A98F5FA6CBA1078413780F739BAC2_gshared)(___0_first, ___1_second, ___2_length, method);
}
// Method Definition Index: 36257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:79>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:80>
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:82>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_9;
		L_9 = Sorting_Median3Pivot_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF7295183B95C5E00B86EAB95E8EF6A3527EF430F(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:86>
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:86>
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_11 = ___3_compare;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:87>
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:87>
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_19 = ___3_compare;
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:89>
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:91>
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:94>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:95>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_39);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:96>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE)L_43);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:84>
		goto IL_001c;
	}
}
// Method Definition Index: 36257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:79>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:80>
		int32_t L_2 = ___1_start;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:82>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m20F7770D3471D02435A3C651255854443F749A4D(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_001c;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:86>
		int32_t L_10 = ___1_start;
		___1_start = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:86>
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___0_data;
		int32_t L_13 = ___1_start;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0034;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:87>
		int32_t L_18 = ___2_end;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0034:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:87>
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___0_data;
		int32_t L_21 = ___2_end;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = V_2;
		NullCheck(L_19);
		int32_t L_25;
		L_25 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_19, L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:89>
		int32_t L_26 = ___1_start;
		int32_t L_27 = ___2_end;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:91>
		int32_t L_28 = ___2_end;
		return L_28;
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:94>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_29 = ___0_data;
		int32_t L_30 = ___1_start;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:95>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = ___0_data;
		int32_t L_34 = ___1_start;
		int32_t L_35 = L_34;
		___1_start = ((int32_t)il2cpp_codegen_add(L_35, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___0_data;
		int32_t L_37 = ___2_end;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_39);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:96>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_40 = ___0_data;
		int32_t L_41 = ___2_end;
		int32_t L_42 = L_41;
		___2_end = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_43 = V_3;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_43);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:84>
		goto IL_001c;
	}
}
// Method Definition Index: 36254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m05A9EDED93F2302BD3A5003A96EED8356C840577_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___1_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ProfilingScope_t57898BA31E8EF8F083EF84E0DA2737AC61CBC5BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:18>
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* L_0 = ((Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticFields*)il2cpp_codegen_static_fields_for(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var))->___s_QuickSortSampler;
		ProfilingScope__ctor_m4B73587A2295443A73B64DDD3D484D8EAECC0D65((&V_0), L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{
				ProfilingScope_Dispose_m4231A2ACA1F8E345BB0078310A9F7601704C8BE4((&V_0), NULL);
				return;
			}
		});
		try
		{
			//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:19>
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_data;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_data;
			NullCheck(L_2);
			Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_3 = ___1_compare;
			il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
			((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1)), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
			//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:20>
			goto IL_0029;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:20>
		return;
	}
}
// Method Definition Index: 36255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:38>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:39>
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:40>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:41>
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:43>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3565D582F40FDBBFA49D6BC0B04AB449EA74E672(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:44>
		return;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:50>
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:52>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB7FB1CD1502515D3660B0FD07A623414D974C6DE(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:54>
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:55>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:57>
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:58>
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:60>
		return;
	}
}
// Method Definition Index: 36255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mFECEFDEFE0154FD35AB3600D1EC1BCA3688FB81D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:38>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:39>
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:40>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:41>
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:43>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:44>
		return;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:50>
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:52>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:54>
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:55>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:57>
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:58>
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:60>
		return;
	}
}
// Method Definition Index: 36255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F_gshared (ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:38>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:39>
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:40>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:41>
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:43>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_mF878B84A10CDB6293A41BB11BD203C7F3038F0BC(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:44>
		return;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:50>
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:52>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m104A9C9BE930B4C90844EAD6EF846FA5787F7DB5(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:54>
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:55>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:57>
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:58>
		ShadowResolutionRequestU5BU5D_tC33A2E5E2712B8688E21C80BB2350155D029B334* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m02C944B93F94BB0652D9C62D7C42639D23B3709F(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:60>
		return;
	}
}
// Method Definition Index: 36255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:38>
		int32_t L_0 = ___2_end;
		int32_t L_1 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:39>
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:40>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:41>
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:43>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_data;
		int32_t L_5 = ___1_start;
		int32_t L_6 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_7 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m6B1E78D6877EE3C4F07CABE67B92AE123C023C76(L_4, L_5, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:44>
		return;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:50>
		int32_t L_8 = ___1_start;
		int32_t L_9 = ___2_end;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:52>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___0_data;
		int32_t L_11 = ___1_start;
		int32_t L_12 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_13 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m9F2CB2AB7B0FE6D69D6365BB3A3FE33DD1F48CF4(L_10, L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_14;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:54>
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:55>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_16 = ___0_data;
		int32_t L_17 = ___1_start;
		int32_t L_18 = V_1;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_19 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:57>
		int32_t L_20 = V_1;
		int32_t L_21 = ___2_end;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1))) >= ((int32_t)L_21)))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:58>
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_22 = ___0_data;
		int32_t L_23 = V_1;
		int32_t L_24 = ___2_end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_25 = ___3_compare;
		il2cpp_codegen_runtime_class_init_inline(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_22, ((int32_t)il2cpp_codegen_add(L_23, 1)), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@4976252adeb8/Runtime/NoAllocUtils.cs:60>
		return;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_mE2E29C94559A3EADC5897604622ADD2554058AE1_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_m2CA29B8D0182025F6B65D5A543252BAC2D5F227B_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m5690DB187C316234FA02A66D2FDD6A76AF8F307D_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5E27F329875DEDF15124F5187A6F4F4F47710CE0_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<bool>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<bool>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A52D522A0DF772DE00FBB3B1A8DE153863926C7_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint8_t>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8C2E96471A665DA0C9366A58A54F154B82A7E787_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m14B10EA6EDA97D5DEDC2A873C5FFE2F2DD605626_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m3735EC0E1212E9731988A4D5B0E36DEA3D53149F_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_m91620643644A6B8D2E8AC943D5CF796CD648D3C1_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB8DD768069E99ECB0C053448BBC03666FEBBE483_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<int32_t>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_m97E59AAE8FB1CD130417D98F311C4912906F75F3_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_mFEF01F84CD16049FCA66F47D35C3C4677EBC74E6_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisRuntimeObject_mF97803E19178879EFF58961F7D25D4A8D2A7C815_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m4DC03FE554E99786DA94157506FC4D66373DEF0E_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mEEC49868CB2CE88FB8F9C0649DFAAEFE46BCC00C_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7DEAD4AD3A83072ECF11D5A8744302A0D54C629_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<uint32_t>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint32_t>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisIl2CppFullySharedGenericAny_m5CB4E8643842A75C309F0EC7BA3AE5C736CCD7CB_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_m5DAA7FFCEAD4C7394E077C6217262C7D5AF04836_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_mA09C9DE983748D4510DDD2905625B583D4265BCE_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_mCC2DE59D573139594F94C7C300035A3E62369AA5_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m59265143D12995BBEFE813077BAAE5E4AC7C3303_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpanHelpers_Add_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mBE074C3470A9CDCBF7F61C7A1A66413B6D47DA01_gshared (intptr_t ___0_start, int32_t ___1_index, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = il2cpp_unsafe_sizeof<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3>();
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_2));
		intptr_t L_3 = ___0_start;
		void* L_4;
		L_4 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_3, NULL);
		uint32_t L_5 = V_0;
		intptr_t L_6;
		L_6 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((uintptr_t)L_5))), NULL);
		return L_6;
	}

IL_0020:
	{
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3>();
		V_1 = (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_7), ((int64_t)L_8)));
		intptr_t L_9 = ___0_start;
		void* L_10;
		L_10 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_9, NULL);
		uint64_t L_11 = V_1;
		intptr_t L_12;
		L_12 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(((void*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((uintptr_t)L_11))), NULL);
		return L_12;
	}
}
// Method Definition Index: 85808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_BinarySearch_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mCD5C785425B5F1B9F77DB24E89BAB0BFDD8C4BF8_gshared (ReadOnlySpan_1_tC4A75E85AFCD0920E1DE9D1130444BD790ABB37B ___0_span, Il2CppFullySharedGenericAny ___1_comparable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TComparable_tE6002298A39B5B9531CD1BA86A254F4A8EA14922 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TComparable_tE6002298A39B5B9531CD1BA86A254F4A8EA14922);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_comparable : &___1_comparable), SizeOf_TComparable_tE6002298A39B5B9531CD1BA86A254F4A8EA14922);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05F48EAC860345D84EAC0DB576114A7C0989E30B((int32_t)4, NULL);
	}

IL_000e:
	{
		ReadOnlySpan_1_tC4A75E85AFCD0920E1DE9D1130444BD790ABB37B L_2 = ___0_span;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC4A75E85AFCD0920E1DE9D1130444BD790ABB37B, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_4;
		L_4 = ((  int32_t (*) (ReadOnlySpan_1_tC4A75E85AFCD0920E1DE9D1130444BD790ABB37B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_comparable : &___1_comparable), SizeOf_TComparable_tE6002298A39B5B9531CD1BA86A254F4A8EA14922);
		int32_t L_6;
		L_6 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		return L_6;
	}
}
// Method Definition Index: 85809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_BinarySearch_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1B64514052539E23E73D6402A89E3F09945D5F17_gshared (Il2CppFullySharedGenericAny* ___0_spanStart, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comparable, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0C3A034DADE7E489E4A2877E37D07AE6126002EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t0C3A034DADE7E489E4A2877E37D07AE6126002EA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_003b;
	}

IL_0008:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		V_2 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		Il2CppFullySharedGenericAny* L_3 = ___0_spanStart;
		int32_t L_4 = V_2;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_t0C3A034DADE7E489E4A2877E37D07AE6126002EA);
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), L_7, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_comparable : &___2_comparable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_6: *(void**)L_6));
		V_3 = L_8;
		int32_t L_9 = V_3;
		if (L_9)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_10 = V_2;
		return L_10;
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_12 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_003b;
	}

IL_0037:
	{
		int32_t L_13 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_003b:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_16 = V_0;
		return ((~L_16));
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_mE77BA7E660558B26C699E3E5BF3845209868DDBA_gshared (ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* ___0_dst, int32_t ___1_dstLength, ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_0 = ___2_src;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_3;
		L_3 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_5 = ___0_dst;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_8;
		L_8 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_10 = ___2_src;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_69;
		L_69 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_67, L_68);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_70 = ___2_src;
		int32_t L_71 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_72;
		L_72 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_70, L_71);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_73 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_72);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_69)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_77;
		L_77 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_81;
		L_81 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_82 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_81);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_77)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_86;
		L_86 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_90;
		L_90 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_91 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_90);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_86)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_95;
		L_95 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_99;
		L_99 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_100 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_99);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_95)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_104;
		L_104 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_108;
		L_108 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_109 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_108);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_104)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_113;
		L_113 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_117;
		L_117 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_118 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_117);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_113)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_122;
		L_122 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_126;
		L_126 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_127 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_126);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_122)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_131;
		L_131 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_135;
		L_135 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_136 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_135);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_131)->___array), (void*)NULL);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_146;
		L_146 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_144, L_145);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_147 = ___2_src;
		int32_t L_148 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_149;
		L_149 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_147, L_148);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_150 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_149);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_146)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_154;
		L_154 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_158;
		L_158 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_159 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_158);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_154)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_163;
		L_163 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_167;
		L_167 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_168 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_167);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_163)->___array), (void*)NULL);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_172;
		L_172 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_176;
		L_176 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_177 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_176);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_172)->___array), (void*)NULL);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_183;
		L_183 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_181, L_182);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_184 = ___2_src;
		int32_t L_185 = V_11;
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD* L_186;
		L_186 = il2cpp_unsafe_add<ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD,int32_t>(L_184, L_185);
		ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD L_187 = (*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_186);
		*(ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD*)L_183)->___array), (void*)NULL);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mE7788587502912B52C3804228E0B0A7AA921168B_gshared (ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* ___0_dst, int32_t ___1_dstLength, ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_0 = ___2_src;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_3;
		L_3 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_5 = ___0_dst;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_8;
		L_8 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_10 = ___2_src;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_69;
		L_69 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_67, L_68);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_70 = ___2_src;
		int32_t L_71 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_72;
		L_72 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_70, L_71);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_73 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_72);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_69)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_77;
		L_77 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_81;
		L_81 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_82 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_81);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_77)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_86;
		L_86 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_90;
		L_90 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_91 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_90);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_86)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_95;
		L_95 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_99;
		L_99 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_100 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_99);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_95)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_104;
		L_104 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_108;
		L_108 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_109 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_108);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_104)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_113;
		L_113 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_117;
		L_117 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_118 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_117);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_113)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_122;
		L_122 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_126;
		L_126 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_127 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_126);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_122)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_131;
		L_131 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_135;
		L_135 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_136 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_135);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_131)->___array), (void*)NULL);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_146;
		L_146 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_144, L_145);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_147 = ___2_src;
		int32_t L_148 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_149;
		L_149 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_147, L_148);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_150 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_149);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_146)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_154;
		L_154 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_158;
		L_158 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_159 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_158);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_154)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_163;
		L_163 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_167;
		L_167 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_168 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_167);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_163)->___array), (void*)NULL);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_172;
		L_172 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_176;
		L_176 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_177 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_176);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_172)->___array), (void*)NULL);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_183;
		L_183 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_181, L_182);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_184 = ___2_src;
		int32_t L_185 = V_11;
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9* L_186;
		L_186 = il2cpp_unsafe_add<ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9,int32_t>(L_184, L_185);
		ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9 L_187 = (*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_186);
		*(ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((ImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9*)L_183)->___array), (void*)NULL);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m647D709E5998109D25F5E2D6DF7F396B691A604F_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___0_dst, int32_t ___1_dstLength, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_0 = ___2_src;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_3;
		L_3 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___0_dst;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_8;
		L_8 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_10 = ___2_src;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_69;
		L_69 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_67, L_68);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_70 = ___2_src;
		int32_t L_71 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_72;
		L_72 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_70, L_71);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_73 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_72);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_69)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_69)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_77;
		L_77 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_81;
		L_81 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_82 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_81);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_77)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_77)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_86;
		L_86 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_90;
		L_90 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_91 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_90);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_86)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_86)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_95;
		L_95 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_99;
		L_99 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_100 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_99);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_95)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_95)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_104;
		L_104 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_108;
		L_108 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_109 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_108);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_104)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_104)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_113;
		L_113 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_117;
		L_117 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_118 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_117);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_122;
		L_122 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_126;
		L_126 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_127 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_126);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_122)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_122)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_131;
		L_131 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_135;
		L_135 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_136 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_135);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_131)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_131)->___value), (void*)NULL);
		#endif
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_146;
		L_146 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_144, L_145);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_147 = ___2_src;
		int32_t L_148 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_149;
		L_149 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_147, L_148);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_150 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_149);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_146)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_146)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_154;
		L_154 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_158;
		L_158 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_159 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_158);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_154)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_154)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_163;
		L_163 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_167;
		L_167 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_168 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_167);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_163)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_163)->___value), (void*)NULL);
		#endif
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_172;
		L_172 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_176;
		L_176 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_177 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_176);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_172)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_172)->___value), (void*)NULL);
		#endif
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_183;
		L_183 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_181, L_182);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_184 = ___2_src;
		int32_t L_185 = V_11;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_186;
		L_186 = il2cpp_unsafe_add<KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230,int32_t>(L_184, L_185);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_187 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_186);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_183)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_183)->___value), (void*)NULL);
		#endif
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB294B492334B0991C6A093573C429C45B9BA4CC3_gshared (bool* ___0_dst, int32_t ___1_dstLength, bool* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		bool* L_0 = ___2_src;
		bool* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		bool* L_3;
		L_3 = il2cpp_unsafe_add<bool,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		bool* L_5 = ___0_dst;
		bool* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		bool* L_10 = ___2_src;
		bool* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		bool* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		bool* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		bool* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		bool* L_69;
		L_69 = il2cpp_unsafe_add<bool,int32_t>(L_67, L_68);
		bool* L_70 = ___2_src;
		int32_t L_71 = V_11;
		bool* L_72;
		L_72 = il2cpp_unsafe_add<bool,int32_t>(L_70, L_71);
		bool L_73 = (*(bool*)L_72);
		*(bool*)L_69 = L_73;
		bool* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		bool* L_77;
		L_77 = il2cpp_unsafe_add<bool,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		bool* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		bool* L_81;
		L_81 = il2cpp_unsafe_add<bool,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		bool L_82 = (*(bool*)L_81);
		*(bool*)L_77 = L_82;
		bool* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		bool* L_86;
		L_86 = il2cpp_unsafe_add<bool,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		bool* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		bool* L_90;
		L_90 = il2cpp_unsafe_add<bool,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		bool L_91 = (*(bool*)L_90);
		*(bool*)L_86 = L_91;
		bool* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		bool* L_95;
		L_95 = il2cpp_unsafe_add<bool,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		bool* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		bool* L_99;
		L_99 = il2cpp_unsafe_add<bool,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		bool L_100 = (*(bool*)L_99);
		*(bool*)L_95 = L_100;
		bool* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		bool* L_104;
		L_104 = il2cpp_unsafe_add<bool,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		bool* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		bool* L_108;
		L_108 = il2cpp_unsafe_add<bool,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		bool L_109 = (*(bool*)L_108);
		*(bool*)L_104 = L_109;
		bool* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		bool* L_113;
		L_113 = il2cpp_unsafe_add<bool,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		bool* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		bool* L_117;
		L_117 = il2cpp_unsafe_add<bool,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		bool L_118 = (*(bool*)L_117);
		*(bool*)L_113 = L_118;
		bool* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		bool* L_122;
		L_122 = il2cpp_unsafe_add<bool,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		bool* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		bool* L_126;
		L_126 = il2cpp_unsafe_add<bool,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		bool L_127 = (*(bool*)L_126);
		*(bool*)L_122 = L_127;
		bool* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		bool* L_131;
		L_131 = il2cpp_unsafe_add<bool,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		bool* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		bool* L_135;
		L_135 = il2cpp_unsafe_add<bool,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		bool L_136 = (*(bool*)L_135);
		*(bool*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		bool* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		bool* L_146;
		L_146 = il2cpp_unsafe_add<bool,int32_t>(L_144, L_145);
		bool* L_147 = ___2_src;
		int32_t L_148 = V_11;
		bool* L_149;
		L_149 = il2cpp_unsafe_add<bool,int32_t>(L_147, L_148);
		bool L_150 = (*(bool*)L_149);
		*(bool*)L_146 = L_150;
		bool* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		bool* L_154;
		L_154 = il2cpp_unsafe_add<bool,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		bool* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		bool* L_158;
		L_158 = il2cpp_unsafe_add<bool,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		bool L_159 = (*(bool*)L_158);
		*(bool*)L_154 = L_159;
		bool* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		bool* L_163;
		L_163 = il2cpp_unsafe_add<bool,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		bool* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		bool* L_167;
		L_167 = il2cpp_unsafe_add<bool,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		bool L_168 = (*(bool*)L_167);
		*(bool*)L_163 = L_168;
		bool* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		bool* L_172;
		L_172 = il2cpp_unsafe_add<bool,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		bool* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		bool* L_176;
		L_176 = il2cpp_unsafe_add<bool,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		bool L_177 = (*(bool*)L_176);
		*(bool*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		bool* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		bool* L_183;
		L_183 = il2cpp_unsafe_add<bool,int32_t>(L_181, L_182);
		bool* L_184 = ___2_src;
		int32_t L_185 = V_11;
		bool* L_186;
		L_186 = il2cpp_unsafe_add<bool,int32_t>(L_184, L_185);
		bool L_187 = (*(bool*)L_186);
		*(bool*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7FF161E96CBCA1CFB994D22637C2ACCE4087BD04_gshared (uint8_t* ___0_dst, int32_t ___1_dstLength, uint8_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		uint8_t* L_0 = ___2_src;
		uint8_t* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		uint8_t* L_5 = ___0_dst;
		uint8_t* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		uint8_t* L_10 = ___2_src;
		uint8_t* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		uint8_t* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		uint8_t* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		uint8_t* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		uint8_t* L_69;
		L_69 = il2cpp_unsafe_add<uint8_t,int32_t>(L_67, L_68);
		uint8_t* L_70 = ___2_src;
		int32_t L_71 = V_11;
		uint8_t* L_72;
		L_72 = il2cpp_unsafe_add<uint8_t,int32_t>(L_70, L_71);
		uint8_t L_73 = (*(uint8_t*)L_72);
		*(uint8_t*)L_69 = L_73;
		uint8_t* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		uint8_t* L_77;
		L_77 = il2cpp_unsafe_add<uint8_t,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		uint8_t* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		uint8_t L_82 = (*(uint8_t*)L_81);
		*(uint8_t*)L_77 = L_82;
		uint8_t* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		uint8_t* L_86;
		L_86 = il2cpp_unsafe_add<uint8_t,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		uint8_t* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		uint8_t* L_90;
		L_90 = il2cpp_unsafe_add<uint8_t,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		uint8_t L_91 = (*(uint8_t*)L_90);
		*(uint8_t*)L_86 = L_91;
		uint8_t* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		uint8_t* L_95;
		L_95 = il2cpp_unsafe_add<uint8_t,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		uint8_t* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		uint8_t* L_99;
		L_99 = il2cpp_unsafe_add<uint8_t,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		uint8_t L_100 = (*(uint8_t*)L_99);
		*(uint8_t*)L_95 = L_100;
		uint8_t* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		uint8_t* L_104;
		L_104 = il2cpp_unsafe_add<uint8_t,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		uint8_t* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		uint8_t* L_108;
		L_108 = il2cpp_unsafe_add<uint8_t,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		uint8_t L_109 = (*(uint8_t*)L_108);
		*(uint8_t*)L_104 = L_109;
		uint8_t* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		uint8_t* L_113;
		L_113 = il2cpp_unsafe_add<uint8_t,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		uint8_t* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		uint8_t* L_117;
		L_117 = il2cpp_unsafe_add<uint8_t,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		uint8_t L_118 = (*(uint8_t*)L_117);
		*(uint8_t*)L_113 = L_118;
		uint8_t* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		uint8_t* L_122;
		L_122 = il2cpp_unsafe_add<uint8_t,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		uint8_t* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		uint8_t* L_126;
		L_126 = il2cpp_unsafe_add<uint8_t,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		uint8_t L_127 = (*(uint8_t*)L_126);
		*(uint8_t*)L_122 = L_127;
		uint8_t* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		uint8_t* L_131;
		L_131 = il2cpp_unsafe_add<uint8_t,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		uint8_t* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		uint8_t* L_135;
		L_135 = il2cpp_unsafe_add<uint8_t,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		uint8_t L_136 = (*(uint8_t*)L_135);
		*(uint8_t*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		uint8_t* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		uint8_t* L_146;
		L_146 = il2cpp_unsafe_add<uint8_t,int32_t>(L_144, L_145);
		uint8_t* L_147 = ___2_src;
		int32_t L_148 = V_11;
		uint8_t* L_149;
		L_149 = il2cpp_unsafe_add<uint8_t,int32_t>(L_147, L_148);
		uint8_t L_150 = (*(uint8_t*)L_149);
		*(uint8_t*)L_146 = L_150;
		uint8_t* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		uint8_t* L_154;
		L_154 = il2cpp_unsafe_add<uint8_t,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		uint8_t* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		uint8_t* L_158;
		L_158 = il2cpp_unsafe_add<uint8_t,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		uint8_t L_159 = (*(uint8_t*)L_158);
		*(uint8_t*)L_154 = L_159;
		uint8_t* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		uint8_t* L_163;
		L_163 = il2cpp_unsafe_add<uint8_t,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		uint8_t* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		uint8_t* L_167;
		L_167 = il2cpp_unsafe_add<uint8_t,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		uint8_t L_168 = (*(uint8_t*)L_167);
		*(uint8_t*)L_163 = L_168;
		uint8_t* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		uint8_t* L_172;
		L_172 = il2cpp_unsafe_add<uint8_t,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		uint8_t* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		uint8_t* L_176;
		L_176 = il2cpp_unsafe_add<uint8_t,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		uint8_t L_177 = (*(uint8_t*)L_176);
		*(uint8_t*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		uint8_t* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		uint8_t* L_183;
		L_183 = il2cpp_unsafe_add<uint8_t,int32_t>(L_181, L_182);
		uint8_t* L_184 = ___2_src;
		int32_t L_185 = V_11;
		uint8_t* L_186;
		L_186 = il2cpp_unsafe_add<uint8_t,int32_t>(L_184, L_185);
		uint8_t L_187 = (*(uint8_t*)L_186);
		*(uint8_t*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5C86725605EBFB3745E82DA9BE4DBA7708A28260_gshared (Il2CppChar* ___0_dst, int32_t ___1_dstLength, Il2CppChar* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		Il2CppChar* L_0 = ___2_src;
		Il2CppChar* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		Il2CppChar* L_5 = ___0_dst;
		Il2CppChar* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		Il2CppChar* L_10 = ___2_src;
		Il2CppChar* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		Il2CppChar* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		Il2CppChar* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		Il2CppChar* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		Il2CppChar* L_69;
		L_69 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_67, L_68);
		Il2CppChar* L_70 = ___2_src;
		int32_t L_71 = V_11;
		Il2CppChar* L_72;
		L_72 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_70, L_71);
		Il2CppChar L_73 = (*(Il2CppChar*)L_72);
		*(Il2CppChar*)L_69 = L_73;
		Il2CppChar* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		Il2CppChar* L_77;
		L_77 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		Il2CppChar* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		*(Il2CppChar*)L_77 = L_82;
		Il2CppChar* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		Il2CppChar* L_86;
		L_86 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		Il2CppChar* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		Il2CppChar L_91 = (*(Il2CppChar*)L_90);
		*(Il2CppChar*)L_86 = L_91;
		Il2CppChar* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		Il2CppChar* L_95;
		L_95 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		Il2CppChar* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		Il2CppChar L_100 = (*(Il2CppChar*)L_99);
		*(Il2CppChar*)L_95 = L_100;
		Il2CppChar* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		Il2CppChar* L_104;
		L_104 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		Il2CppChar* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		Il2CppChar* L_108;
		L_108 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		Il2CppChar L_109 = (*(Il2CppChar*)L_108);
		*(Il2CppChar*)L_104 = L_109;
		Il2CppChar* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		Il2CppChar* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		Il2CppChar* L_117;
		L_117 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		Il2CppChar L_118 = (*(Il2CppChar*)L_117);
		*(Il2CppChar*)L_113 = L_118;
		Il2CppChar* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		Il2CppChar* L_122;
		L_122 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		Il2CppChar* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		Il2CppChar* L_126;
		L_126 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		Il2CppChar L_127 = (*(Il2CppChar*)L_126);
		*(Il2CppChar*)L_122 = L_127;
		Il2CppChar* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		Il2CppChar* L_131;
		L_131 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		Il2CppChar* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		Il2CppChar* L_135;
		L_135 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		Il2CppChar L_136 = (*(Il2CppChar*)L_135);
		*(Il2CppChar*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		Il2CppChar* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		Il2CppChar* L_146;
		L_146 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_144, L_145);
		Il2CppChar* L_147 = ___2_src;
		int32_t L_148 = V_11;
		Il2CppChar* L_149;
		L_149 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_147, L_148);
		Il2CppChar L_150 = (*(Il2CppChar*)L_149);
		*(Il2CppChar*)L_146 = L_150;
		Il2CppChar* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		Il2CppChar* L_154;
		L_154 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		Il2CppChar* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		Il2CppChar* L_158;
		L_158 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		Il2CppChar L_159 = (*(Il2CppChar*)L_158);
		*(Il2CppChar*)L_154 = L_159;
		Il2CppChar* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		Il2CppChar* L_163;
		L_163 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		Il2CppChar* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		Il2CppChar* L_167;
		L_167 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		Il2CppChar L_168 = (*(Il2CppChar*)L_167);
		*(Il2CppChar*)L_163 = L_168;
		Il2CppChar* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		Il2CppChar* L_172;
		L_172 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		Il2CppChar* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		Il2CppChar* L_176;
		L_176 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		Il2CppChar L_177 = (*(Il2CppChar*)L_176);
		*(Il2CppChar*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		Il2CppChar* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		Il2CppChar* L_183;
		L_183 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_181, L_182);
		Il2CppChar* L_184 = ___2_src;
		int32_t L_185 = V_11;
		Il2CppChar* L_186;
		L_186 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_184, L_185);
		Il2CppChar L_187 = (*(Il2CppChar*)L_186);
		*(Il2CppChar*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m11D6C239D91312C10916DCDD384C09B5A562D4C1_gshared (DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* ___0_dst, int32_t ___1_dstLength, DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_0 = ___2_src;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_3;
		L_3 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_5 = ___0_dst;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_8;
		L_8 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_10 = ___2_src;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_69;
		L_69 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_67, L_68);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_70 = ___2_src;
		int32_t L_71 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_72;
		L_72 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_70, L_71);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_73 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_72);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_69 = L_73;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_77;
		L_77 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_81;
		L_81 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_82 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_81);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_77 = L_82;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_86;
		L_86 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_90;
		L_90 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_91 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_90);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_86 = L_91;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_95;
		L_95 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_99;
		L_99 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_100 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_99);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_95 = L_100;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_104;
		L_104 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_108;
		L_108 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_109 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_108);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_104 = L_109;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_113;
		L_113 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_117;
		L_117 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_118 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_117);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_113 = L_118;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_122;
		L_122 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_126;
		L_126 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_127 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_126);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_122 = L_127;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_131;
		L_131 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_135;
		L_135 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_136 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_135);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_146;
		L_146 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_144, L_145);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_147 = ___2_src;
		int32_t L_148 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_149;
		L_149 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_147, L_148);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_150 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_149);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_146 = L_150;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_154;
		L_154 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_158;
		L_158 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_159 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_158);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_154 = L_159;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_163;
		L_163 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_167;
		L_167 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_168 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_167);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_163 = L_168;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_172;
		L_172 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_176;
		L_176 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_177 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_176);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_183;
		L_183 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_181, L_182);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_184 = ___2_src;
		int32_t L_185 = V_11;
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB* L_186;
		L_186 = il2cpp_unsafe_add<DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB,int32_t>(L_184, L_185);
		DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB L_187 = (*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_186);
		*(DebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m1D44B2F9C2F89F402E3AC6C5DECEF0DAB94C037C_gshared (ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* ___0_dst, int32_t ___1_dstLength, ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_0 = ___2_src;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_3;
		L_3 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_5 = ___0_dst;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_8;
		L_8 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_10 = ___2_src;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_69;
		L_69 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_67, L_68);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_70 = ___2_src;
		int32_t L_71 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_72;
		L_72 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_70, L_71);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_73 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_72);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_69 = L_73;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_77;
		L_77 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_81;
		L_81 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_82 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_81);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_77 = L_82;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_86;
		L_86 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_90;
		L_90 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_91 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_90);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_86 = L_91;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_95;
		L_95 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_99;
		L_99 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_100 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_99);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_95 = L_100;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_104;
		L_104 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_108;
		L_108 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_109 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_108);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_104 = L_109;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_113;
		L_113 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_117;
		L_117 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_118 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_117);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_113 = L_118;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_122;
		L_122 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_126;
		L_126 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_127 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_126);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_122 = L_127;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_131;
		L_131 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_135;
		L_135 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_136 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_135);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_146;
		L_146 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_144, L_145);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_147 = ___2_src;
		int32_t L_148 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_149;
		L_149 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_147, L_148);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_150 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_149);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_146 = L_150;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_154;
		L_154 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_158;
		L_158 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_159 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_158);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_154 = L_159;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_163;
		L_163 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_167;
		L_167 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_168 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_167);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_163 = L_168;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_172;
		L_172 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_176;
		L_176 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_177 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_176);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_183;
		L_183 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_181, L_182);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_184 = ___2_src;
		int32_t L_185 = V_11;
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014* L_186;
		L_186 = il2cpp_unsafe_add<ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014,int32_t>(L_184, L_185);
		ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014 L_187 = (*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_186);
		*(ExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_m85B4329A193C4DDB805CC41C13C0BC0B774D80CE_gshared (ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* ___0_dst, int32_t ___1_dstLength, ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_0 = ___2_src;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_3;
		L_3 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_5 = ___0_dst;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_8;
		L_8 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_10 = ___2_src;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_69;
		L_69 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_67, L_68);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_70 = ___2_src;
		int32_t L_71 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_72;
		L_72 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_70, L_71);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_73 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_72);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_69 = L_73;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_77;
		L_77 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_81;
		L_81 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_82 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_81);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_77 = L_82;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_86;
		L_86 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_90;
		L_90 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_91 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_90);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_86 = L_91;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_95;
		L_95 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_99;
		L_99 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_100 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_99);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_95 = L_100;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_104;
		L_104 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_108;
		L_108 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_109 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_108);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_104 = L_109;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_113;
		L_113 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_117;
		L_117 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_118 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_117);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_113 = L_118;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_122;
		L_122 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_126;
		L_126 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_127 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_126);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_122 = L_127;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_131;
		L_131 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_135;
		L_135 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_136 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_135);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_146;
		L_146 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_144, L_145);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_147 = ___2_src;
		int32_t L_148 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_149;
		L_149 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_147, L_148);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_150 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_149);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_146 = L_150;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_154;
		L_154 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_158;
		L_158 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_159 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_158);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_154 = L_159;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_163;
		L_163 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_167;
		L_167 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_168 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_167);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_163 = L_168;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_172;
		L_172 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_176;
		L_176 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_177 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_176);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_183;
		L_183 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_181, L_182);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_184 = ___2_src;
		int32_t L_185 = V_11;
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198* L_186;
		L_186 = il2cpp_unsafe_add<ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198,int32_t>(L_184, L_185);
		ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198 L_187 = (*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_186);
		*(ExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A66B68C82F5B0D0F41EE8C5534539317F648FC_gshared (int32_t* ___0_dst, int32_t ___1_dstLength, int32_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		int32_t* L_0 = ___2_src;
		int32_t* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		int32_t* L_3;
		L_3 = il2cpp_unsafe_add<int32_t,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		int32_t* L_5 = ___0_dst;
		int32_t* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		int32_t* L_8;
		L_8 = il2cpp_unsafe_add<int32_t,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		int32_t* L_10 = ___2_src;
		int32_t* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		int32_t* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		int32_t* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		int32_t* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		int32_t* L_69;
		L_69 = il2cpp_unsafe_add<int32_t,int32_t>(L_67, L_68);
		int32_t* L_70 = ___2_src;
		int32_t L_71 = V_11;
		int32_t* L_72;
		L_72 = il2cpp_unsafe_add<int32_t,int32_t>(L_70, L_71);
		int32_t L_73 = (*(int32_t*)L_72);
		*(int32_t*)L_69 = L_73;
		int32_t* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		int32_t* L_77;
		L_77 = il2cpp_unsafe_add<int32_t,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		int32_t* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		int32_t* L_81;
		L_81 = il2cpp_unsafe_add<int32_t,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		int32_t L_82 = (*(int32_t*)L_81);
		*(int32_t*)L_77 = L_82;
		int32_t* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		int32_t* L_86;
		L_86 = il2cpp_unsafe_add<int32_t,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		int32_t* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		int32_t* L_90;
		L_90 = il2cpp_unsafe_add<int32_t,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		int32_t L_91 = (*(int32_t*)L_90);
		*(int32_t*)L_86 = L_91;
		int32_t* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		int32_t* L_95;
		L_95 = il2cpp_unsafe_add<int32_t,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		int32_t* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		int32_t* L_99;
		L_99 = il2cpp_unsafe_add<int32_t,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		int32_t L_100 = (*(int32_t*)L_99);
		*(int32_t*)L_95 = L_100;
		int32_t* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		int32_t* L_104;
		L_104 = il2cpp_unsafe_add<int32_t,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		int32_t* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		int32_t* L_108;
		L_108 = il2cpp_unsafe_add<int32_t,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		int32_t L_109 = (*(int32_t*)L_108);
		*(int32_t*)L_104 = L_109;
		int32_t* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		int32_t* L_113;
		L_113 = il2cpp_unsafe_add<int32_t,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		int32_t* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		int32_t* L_117;
		L_117 = il2cpp_unsafe_add<int32_t,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		int32_t L_118 = (*(int32_t*)L_117);
		*(int32_t*)L_113 = L_118;
		int32_t* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		int32_t* L_122;
		L_122 = il2cpp_unsafe_add<int32_t,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		int32_t* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		int32_t* L_126;
		L_126 = il2cpp_unsafe_add<int32_t,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		int32_t L_127 = (*(int32_t*)L_126);
		*(int32_t*)L_122 = L_127;
		int32_t* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		int32_t* L_131;
		L_131 = il2cpp_unsafe_add<int32_t,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		int32_t* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		int32_t* L_135;
		L_135 = il2cpp_unsafe_add<int32_t,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		int32_t L_136 = (*(int32_t*)L_135);
		*(int32_t*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		int32_t* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		int32_t* L_146;
		L_146 = il2cpp_unsafe_add<int32_t,int32_t>(L_144, L_145);
		int32_t* L_147 = ___2_src;
		int32_t L_148 = V_11;
		int32_t* L_149;
		L_149 = il2cpp_unsafe_add<int32_t,int32_t>(L_147, L_148);
		int32_t L_150 = (*(int32_t*)L_149);
		*(int32_t*)L_146 = L_150;
		int32_t* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		int32_t* L_154;
		L_154 = il2cpp_unsafe_add<int32_t,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		int32_t* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		int32_t* L_158;
		L_158 = il2cpp_unsafe_add<int32_t,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		int32_t L_159 = (*(int32_t*)L_158);
		*(int32_t*)L_154 = L_159;
		int32_t* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		int32_t* L_163;
		L_163 = il2cpp_unsafe_add<int32_t,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		int32_t* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		int32_t* L_167;
		L_167 = il2cpp_unsafe_add<int32_t,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		int32_t L_168 = (*(int32_t*)L_167);
		*(int32_t*)L_163 = L_168;
		int32_t* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		int32_t* L_172;
		L_172 = il2cpp_unsafe_add<int32_t,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		int32_t* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		int32_t* L_176;
		L_176 = il2cpp_unsafe_add<int32_t,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		int32_t L_177 = (*(int32_t*)L_176);
		*(int32_t*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		int32_t* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		int32_t* L_183;
		L_183 = il2cpp_unsafe_add<int32_t,int32_t>(L_181, L_182);
		int32_t* L_184 = ___2_src;
		int32_t L_185 = V_11;
		int32_t* L_186;
		L_186 = il2cpp_unsafe_add<int32_t,int32_t>(L_184, L_185);
		int32_t L_187 = (*(int32_t*)L_186);
		*(int32_t*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_m2D606E08C8EA229326CD060C83DA38BEBC601608_gshared (MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* ___0_dst, int32_t ___1_dstLength, MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_0 = ___2_src;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_3;
		L_3 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_5 = ___0_dst;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_8;
		L_8 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_10 = ___2_src;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_69;
		L_69 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_67, L_68);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_70 = ___2_src;
		int32_t L_71 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_72;
		L_72 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_70, L_71);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_73 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_72);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_69 = L_73;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_77;
		L_77 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_81;
		L_81 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_82 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_81);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_77 = L_82;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_86;
		L_86 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_90;
		L_90 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_91 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_90);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_86 = L_91;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_95;
		L_95 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_99;
		L_99 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_100 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_99);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_95 = L_100;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_104;
		L_104 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_108;
		L_108 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_109 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_108);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_104 = L_109;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_113;
		L_113 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_117;
		L_117 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_118 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_117);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_113 = L_118;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_122;
		L_122 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_126;
		L_126 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_127 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_126);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_122 = L_127;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_131;
		L_131 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_135;
		L_135 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_136 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_135);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_146;
		L_146 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_144, L_145);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_147 = ___2_src;
		int32_t L_148 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_149;
		L_149 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_147, L_148);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_150 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_149);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_146 = L_150;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_154;
		L_154 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_158;
		L_158 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_159 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_158);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_154 = L_159;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_163;
		L_163 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_167;
		L_167 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_168 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_167);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_163 = L_168;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_172;
		L_172 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_176;
		L_176 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_177 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_176);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_183;
		L_183 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_181, L_182);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_184 = ___2_src;
		int32_t L_185 = V_11;
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8* L_186;
		L_186 = il2cpp_unsafe_add<MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8,int32_t>(L_184, L_185);
		MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8 L_187 = (*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_186);
		*(MethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_mE67F5D0CF118676FC5D283867BF4499F7860C3F7_gshared (NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* ___0_dst, int32_t ___1_dstLength, NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_0 = ___2_src;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_3;
		L_3 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_5 = ___0_dst;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_8;
		L_8 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_10 = ___2_src;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_69;
		L_69 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_67, L_68);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_70 = ___2_src;
		int32_t L_71 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_72;
		L_72 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_70, L_71);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_73 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_72);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_69 = L_73;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_77;
		L_77 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_81;
		L_81 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_82 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_81);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_77 = L_82;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_86;
		L_86 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_90;
		L_90 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_91 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_90);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_86 = L_91;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_95;
		L_95 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_99;
		L_99 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_100 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_99);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_95 = L_100;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_104;
		L_104 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_108;
		L_108 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_109 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_108);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_104 = L_109;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_113;
		L_113 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_117;
		L_117 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_118 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_117);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_113 = L_118;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_122;
		L_122 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_126;
		L_126 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_127 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_126);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_122 = L_127;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_131;
		L_131 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_135;
		L_135 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_136 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_135);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_146;
		L_146 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_144, L_145);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_147 = ___2_src;
		int32_t L_148 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_149;
		L_149 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_147, L_148);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_150 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_149);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_146 = L_150;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_154;
		L_154 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_158;
		L_158 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_159 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_158);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_154 = L_159;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_163;
		L_163 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_167;
		L_167 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_168 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_167);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_163 = L_168;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_172;
		L_172 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_176;
		L_176 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_177 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_176);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_183;
		L_183 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_181, L_182);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_184 = ___2_src;
		int32_t L_185 = V_11;
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A* L_186;
		L_186 = il2cpp_unsafe_add<NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A,int32_t>(L_184, L_185);
		NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A L_187 = (*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_186);
		*(NamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisRuntimeObject_m30107E64DD5314832957CCEC73348FDE08186898_gshared (RuntimeObject** ___0_dst, int32_t ___1_dstLength, RuntimeObject** ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		RuntimeObject** L_0 = ___2_src;
		RuntimeObject** L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		RuntimeObject** L_5 = ___0_dst;
		RuntimeObject** L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		RuntimeObject** L_8;
		L_8 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		RuntimeObject** L_10 = ___2_src;
		RuntimeObject** L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject** L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		RuntimeObject** L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		RuntimeObject** L_67 = ___0_dst;
		int32_t L_68 = V_11;
		RuntimeObject** L_69;
		L_69 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_67, L_68);
		RuntimeObject** L_70 = ___2_src;
		int32_t L_71 = V_11;
		RuntimeObject** L_72;
		L_72 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_70, L_71);
		RuntimeObject* L_73 = (*(RuntimeObject**)L_72);
		*(RuntimeObject**)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_69, (void*)L_73);
		RuntimeObject** L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		RuntimeObject** L_77;
		L_77 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		RuntimeObject** L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		RuntimeObject** L_81;
		L_81 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		*(RuntimeObject**)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_77, (void*)L_82);
		RuntimeObject** L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		RuntimeObject** L_86;
		L_86 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		RuntimeObject** L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		RuntimeObject** L_90;
		L_90 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		RuntimeObject* L_91 = (*(RuntimeObject**)L_90);
		*(RuntimeObject**)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_86, (void*)L_91);
		RuntimeObject** L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		RuntimeObject** L_95;
		L_95 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		RuntimeObject** L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		RuntimeObject** L_99;
		L_99 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		RuntimeObject* L_100 = (*(RuntimeObject**)L_99);
		*(RuntimeObject**)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_95, (void*)L_100);
		RuntimeObject** L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		RuntimeObject** L_104;
		L_104 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		RuntimeObject** L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		RuntimeObject** L_108;
		L_108 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		RuntimeObject* L_109 = (*(RuntimeObject**)L_108);
		*(RuntimeObject**)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_104, (void*)L_109);
		RuntimeObject** L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		RuntimeObject** L_113;
		L_113 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		RuntimeObject** L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		RuntimeObject** L_117;
		L_117 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		RuntimeObject* L_118 = (*(RuntimeObject**)L_117);
		*(RuntimeObject**)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)L_118);
		RuntimeObject** L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		RuntimeObject** L_122;
		L_122 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		RuntimeObject** L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		RuntimeObject** L_126;
		L_126 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		RuntimeObject* L_127 = (*(RuntimeObject**)L_126);
		*(RuntimeObject**)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_122, (void*)L_127);
		RuntimeObject** L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		RuntimeObject** L_131;
		L_131 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		RuntimeObject** L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		RuntimeObject** L_135;
		L_135 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		RuntimeObject* L_136 = (*(RuntimeObject**)L_135);
		*(RuntimeObject**)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_131, (void*)L_136);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		RuntimeObject** L_144 = ___0_dst;
		int32_t L_145 = V_11;
		RuntimeObject** L_146;
		L_146 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_144, L_145);
		RuntimeObject** L_147 = ___2_src;
		int32_t L_148 = V_11;
		RuntimeObject** L_149;
		L_149 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_147, L_148);
		RuntimeObject* L_150 = (*(RuntimeObject**)L_149);
		*(RuntimeObject**)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_146, (void*)L_150);
		RuntimeObject** L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		RuntimeObject** L_154;
		L_154 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		RuntimeObject** L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		RuntimeObject** L_158;
		L_158 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		RuntimeObject* L_159 = (*(RuntimeObject**)L_158);
		*(RuntimeObject**)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_154, (void*)L_159);
		RuntimeObject** L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		RuntimeObject** L_163;
		L_163 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		RuntimeObject** L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		RuntimeObject** L_167;
		L_167 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		RuntimeObject* L_168 = (*(RuntimeObject**)L_167);
		*(RuntimeObject**)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_163, (void*)L_168);
		RuntimeObject** L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		RuntimeObject** L_172;
		L_172 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		RuntimeObject** L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		RuntimeObject** L_176;
		L_176 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		RuntimeObject* L_177 = (*(RuntimeObject**)L_176);
		*(RuntimeObject**)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_172, (void*)L_177);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		RuntimeObject** L_181 = ___0_dst;
		int32_t L_182 = V_11;
		RuntimeObject** L_183;
		L_183 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_181, L_182);
		RuntimeObject** L_184 = ___2_src;
		int32_t L_185 = V_11;
		RuntimeObject** L_186;
		L_186 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_184, L_185);
		RuntimeObject* L_187 = (*(RuntimeObject**)L_186);
		*(RuntimeObject**)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_183, (void*)L_187);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m72BACF92C0A924E0A5BAF1EA8A50B1D23D93D5C7_gshared (SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* ___0_dst, int32_t ___1_dstLength, SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_0 = ___2_src;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_3;
		L_3 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_5 = ___0_dst;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_8;
		L_8 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_10 = ___2_src;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_69;
		L_69 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_67, L_68);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_70 = ___2_src;
		int32_t L_71 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_72;
		L_72 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_70, L_71);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_73 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_72);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_69)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_77;
		L_77 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_81;
		L_81 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_82 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_81);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_77)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_86;
		L_86 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_90;
		L_90 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_91 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_90);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_86)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_95;
		L_95 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_99;
		L_99 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_100 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_99);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_95)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_104;
		L_104 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_108;
		L_108 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_109 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_108);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_104)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_113;
		L_113 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_117;
		L_117 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_118 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_117);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_113)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_122;
		L_122 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_126;
		L_126 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_127 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_126);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_122)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_131;
		L_131 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_135;
		L_135 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_136 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_135);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_131)->___U3CNameU3Ek__BackingField), (void*)NULL);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_146;
		L_146 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_144, L_145);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_147 = ___2_src;
		int32_t L_148 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_149;
		L_149 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_147, L_148);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_150 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_149);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_146)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_154;
		L_154 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_158;
		L_158 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_159 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_158);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_154)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_163;
		L_163 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_167;
		L_167 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_168 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_167);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_163)->___U3CNameU3Ek__BackingField), (void*)NULL);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_172;
		L_172 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_176;
		L_176 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_177 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_176);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_172)->___U3CNameU3Ek__BackingField), (void*)NULL);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_183;
		L_183 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_181, L_182);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_184 = ___2_src;
		int32_t L_185 = V_11;
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE* L_186;
		L_186 = il2cpp_unsafe_add<SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE,int32_t>(L_184, L_185);
		SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE L_187 = (*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_186);
		*(SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((SectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE*)L_183)->___U3CNameU3Ek__BackingField), (void*)NULL);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mB9BAB3FDD551FE4A31D0A4D9A18C833DD797B8F8_gshared (TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* ___0_dst, int32_t ___1_dstLength, TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_0 = ___2_src;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_3;
		L_3 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_5 = ___0_dst;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_8;
		L_8 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_10 = ___2_src;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_69;
		L_69 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_67, L_68);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_70 = ___2_src;
		int32_t L_71 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_72;
		L_72 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_70, L_71);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_73 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_72);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_69 = L_73;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_77;
		L_77 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_81;
		L_81 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_82 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_81);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_77 = L_82;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_86;
		L_86 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_90;
		L_90 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_91 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_90);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_86 = L_91;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_95;
		L_95 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_99;
		L_99 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_100 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_99);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_95 = L_100;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_104;
		L_104 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_108;
		L_108 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_109 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_108);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_104 = L_109;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_113;
		L_113 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_117;
		L_117 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_118 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_117);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_113 = L_118;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_122;
		L_122 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_126;
		L_126 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_127 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_126);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_122 = L_127;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_131;
		L_131 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_135;
		L_135 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_136 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_135);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_146;
		L_146 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_144, L_145);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_147 = ___2_src;
		int32_t L_148 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_149;
		L_149 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_147, L_148);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_150 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_149);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_146 = L_150;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_154;
		L_154 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_158;
		L_158 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_159 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_158);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_154 = L_159;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_163;
		L_163 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_167;
		L_167 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_168 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_167);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_163 = L_168;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_172;
		L_172 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_176;
		L_176 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_177 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_176);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_183;
		L_183 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_181, L_182);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_184 = ___2_src;
		int32_t L_185 = V_11;
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0* L_186;
		L_186 = il2cpp_unsafe_add<TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0,int32_t>(L_184, L_185);
		TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0 L_187 = (*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_186);
		*(TypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m5D212CA756E230A0A48F58394DF77B5F06716570_gshared (uint32_t* ___0_dst, int32_t ___1_dstLength, uint32_t* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		uint32_t* L_0 = ___2_src;
		uint32_t* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_add<uint32_t,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		uint32_t* L_5 = ___0_dst;
		uint32_t* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		uint32_t* L_8;
		L_8 = il2cpp_unsafe_add<uint32_t,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		uint32_t* L_10 = ___2_src;
		uint32_t* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		uint32_t* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		uint32_t* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		uint32_t* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		uint32_t* L_69;
		L_69 = il2cpp_unsafe_add<uint32_t,int32_t>(L_67, L_68);
		uint32_t* L_70 = ___2_src;
		int32_t L_71 = V_11;
		uint32_t* L_72;
		L_72 = il2cpp_unsafe_add<uint32_t,int32_t>(L_70, L_71);
		uint32_t L_73 = (*(uint32_t*)L_72);
		*(uint32_t*)L_69 = L_73;
		uint32_t* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		uint32_t* L_77;
		L_77 = il2cpp_unsafe_add<uint32_t,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		uint32_t* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		uint32_t* L_81;
		L_81 = il2cpp_unsafe_add<uint32_t,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		uint32_t L_82 = (*(uint32_t*)L_81);
		*(uint32_t*)L_77 = L_82;
		uint32_t* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		uint32_t* L_86;
		L_86 = il2cpp_unsafe_add<uint32_t,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		uint32_t* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		uint32_t* L_90;
		L_90 = il2cpp_unsafe_add<uint32_t,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		uint32_t L_91 = (*(uint32_t*)L_90);
		*(uint32_t*)L_86 = L_91;
		uint32_t* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		uint32_t* L_95;
		L_95 = il2cpp_unsafe_add<uint32_t,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		uint32_t* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		uint32_t* L_99;
		L_99 = il2cpp_unsafe_add<uint32_t,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		uint32_t L_100 = (*(uint32_t*)L_99);
		*(uint32_t*)L_95 = L_100;
		uint32_t* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		uint32_t* L_104;
		L_104 = il2cpp_unsafe_add<uint32_t,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		uint32_t* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		uint32_t* L_108;
		L_108 = il2cpp_unsafe_add<uint32_t,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		uint32_t L_109 = (*(uint32_t*)L_108);
		*(uint32_t*)L_104 = L_109;
		uint32_t* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		uint32_t* L_113;
		L_113 = il2cpp_unsafe_add<uint32_t,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		uint32_t* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		uint32_t* L_117;
		L_117 = il2cpp_unsafe_add<uint32_t,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		uint32_t L_118 = (*(uint32_t*)L_117);
		*(uint32_t*)L_113 = L_118;
		uint32_t* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		uint32_t* L_122;
		L_122 = il2cpp_unsafe_add<uint32_t,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		uint32_t* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		uint32_t* L_126;
		L_126 = il2cpp_unsafe_add<uint32_t,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		uint32_t L_127 = (*(uint32_t*)L_126);
		*(uint32_t*)L_122 = L_127;
		uint32_t* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		uint32_t* L_131;
		L_131 = il2cpp_unsafe_add<uint32_t,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		uint32_t* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		uint32_t* L_135;
		L_135 = il2cpp_unsafe_add<uint32_t,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		uint32_t L_136 = (*(uint32_t*)L_135);
		*(uint32_t*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		uint32_t* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		uint32_t* L_146;
		L_146 = il2cpp_unsafe_add<uint32_t,int32_t>(L_144, L_145);
		uint32_t* L_147 = ___2_src;
		int32_t L_148 = V_11;
		uint32_t* L_149;
		L_149 = il2cpp_unsafe_add<uint32_t,int32_t>(L_147, L_148);
		uint32_t L_150 = (*(uint32_t*)L_149);
		*(uint32_t*)L_146 = L_150;
		uint32_t* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		uint32_t* L_154;
		L_154 = il2cpp_unsafe_add<uint32_t,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		uint32_t* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		uint32_t* L_158;
		L_158 = il2cpp_unsafe_add<uint32_t,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		uint32_t L_159 = (*(uint32_t*)L_158);
		*(uint32_t*)L_154 = L_159;
		uint32_t* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		uint32_t* L_163;
		L_163 = il2cpp_unsafe_add<uint32_t,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		uint32_t* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		uint32_t* L_167;
		L_167 = il2cpp_unsafe_add<uint32_t,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		uint32_t L_168 = (*(uint32_t*)L_167);
		*(uint32_t*)L_163 = L_168;
		uint32_t* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		uint32_t* L_172;
		L_172 = il2cpp_unsafe_add<uint32_t,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		uint32_t* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		uint32_t* L_176;
		L_176 = il2cpp_unsafe_add<uint32_t,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		uint32_t L_177 = (*(uint32_t*)L_176);
		*(uint32_t*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		uint32_t* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		uint32_t* L_183;
		L_183 = il2cpp_unsafe_add<uint32_t,int32_t>(L_181, L_182);
		uint32_t* L_184 = ___2_src;
		int32_t L_185 = V_11;
		uint32_t* L_186;
		L_186 = il2cpp_unsafe_add<uint32_t,int32_t>(L_184, L_185);
		uint32_t L_187 = (*(uint32_t*)L_186);
		*(uint32_t*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisIl2CppFullySharedGenericAny_m9243FC886CAB5599D6012FDE32CFD41B9BD3F8C3_gshared (Il2CppFullySharedGenericAny* ___0_dst, int32_t ___1_dstLength, Il2CppFullySharedGenericAny* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_73 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_150 = L_73;
	const Il2CppFullySharedGenericAny L_187 = L_73;
	const Il2CppFullySharedGenericAny L_82 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_159 = L_82;
	const Il2CppFullySharedGenericAny L_91 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_168 = L_91;
	const Il2CppFullySharedGenericAny L_100 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_177 = L_100;
	const Il2CppFullySharedGenericAny L_109 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_118 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_127 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	const Il2CppFullySharedGenericAny L_136 = alloca(SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_src;
		Il2CppFullySharedGenericAny* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___0_dst;
		Il2CppFullySharedGenericAny* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_9;
		L_9 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_9;
		Il2CppFullySharedGenericAny* L_10 = ___2_src;
		Il2CppFullySharedGenericAny* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = ((  intptr_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		Il2CppFullySharedGenericAny* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		Il2CppFullySharedGenericAny* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		Il2CppFullySharedGenericAny* L_69;
		L_69 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_67, L_68, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_70 = ___2_src;
		int32_t L_71 = V_11;
		Il2CppFullySharedGenericAny* L_72;
		L_72 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_70, L_71, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_73, L_72, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_69, L_73, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_69, (void*)L_73);
		Il2CppFullySharedGenericAny* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		Il2CppFullySharedGenericAny* L_77;
		L_77 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		Il2CppFullySharedGenericAny* L_81;
		L_81 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_82, L_81, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_77, L_82, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_77, (void*)L_82);
		Il2CppFullySharedGenericAny* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		Il2CppFullySharedGenericAny* L_86;
		L_86 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		Il2CppFullySharedGenericAny* L_90;
		L_90 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_91, L_90, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_86, L_91, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_86, (void*)L_91);
		Il2CppFullySharedGenericAny* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		Il2CppFullySharedGenericAny* L_95;
		L_95 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		Il2CppFullySharedGenericAny* L_99;
		L_99 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_100, L_99, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_95, L_100, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_95, (void*)L_100);
		Il2CppFullySharedGenericAny* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		Il2CppFullySharedGenericAny* L_104;
		L_104 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		Il2CppFullySharedGenericAny* L_108;
		L_108 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_109, L_108, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_104, L_109, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_104, (void*)L_109);
		Il2CppFullySharedGenericAny* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		Il2CppFullySharedGenericAny* L_113;
		L_113 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_113, L_118, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_113, (void*)L_118);
		Il2CppFullySharedGenericAny* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		Il2CppFullySharedGenericAny* L_122;
		L_122 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		Il2CppFullySharedGenericAny* L_126;
		L_126 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_127, L_126, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_122, L_127, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_122, (void*)L_127);
		Il2CppFullySharedGenericAny* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		Il2CppFullySharedGenericAny* L_131;
		L_131 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		Il2CppFullySharedGenericAny* L_135;
		L_135 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_136, L_135, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_131, L_136, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_131, (void*)L_136);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		Il2CppFullySharedGenericAny* L_146;
		L_146 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_144, L_145, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_147 = ___2_src;
		int32_t L_148 = V_11;
		Il2CppFullySharedGenericAny* L_149;
		L_149 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_147, L_148, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_150, L_149, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_146, L_150, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_146, (void*)L_150);
		Il2CppFullySharedGenericAny* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		Il2CppFullySharedGenericAny* L_154;
		L_154 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		Il2CppFullySharedGenericAny* L_158;
		L_158 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_159, L_158, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_154, L_159, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_154, (void*)L_159);
		Il2CppFullySharedGenericAny* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		Il2CppFullySharedGenericAny* L_163;
		L_163 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		Il2CppFullySharedGenericAny* L_167;
		L_167 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_168, L_167, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_163, L_168, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_163, (void*)L_168);
		Il2CppFullySharedGenericAny* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		Il2CppFullySharedGenericAny* L_172;
		L_172 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		Il2CppFullySharedGenericAny* L_176;
		L_176 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_177, L_176, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_172, L_177, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_172, (void*)L_177);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		Il2CppFullySharedGenericAny* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		Il2CppFullySharedGenericAny* L_183;
		L_183 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_181, L_182, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericAny* L_184 = ___2_src;
		int32_t L_185 = V_11;
		Il2CppFullySharedGenericAny* L_186;
		L_186 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_184, L_185, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_187, L_186, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_183, L_187, SizeOf_T_tC4E52D25B03DE77DC17B39F0BBAA102123A9058D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_183, (void*)L_187);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mED014B9119B42EED0C6091F0C3CCDB32F6115B79_gshared (BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* ___0_dst, int32_t ___1_dstLength, BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_0 = ___2_src;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_3;
		L_3 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_5 = ___0_dst;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_8;
		L_8 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_10 = ___2_src;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_69;
		L_69 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_67, L_68);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_70 = ___2_src;
		int32_t L_71 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_72;
		L_72 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_70, L_71);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_73 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_72);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_69 = L_73;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_77;
		L_77 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_81;
		L_81 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_82 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_81);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_77 = L_82;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_86;
		L_86 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_90;
		L_90 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_91 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_90);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_86 = L_91;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_95;
		L_95 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_99;
		L_99 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_100 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_99);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_95 = L_100;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_104;
		L_104 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_108;
		L_108 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_109 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_108);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_104 = L_109;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_113;
		L_113 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_117;
		L_117 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_118 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_117);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_113 = L_118;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_122;
		L_122 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_126;
		L_126 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_127 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_126);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_122 = L_127;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_131;
		L_131 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_135;
		L_135 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_136 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_135);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_146;
		L_146 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_144, L_145);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_147 = ___2_src;
		int32_t L_148 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_149;
		L_149 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_147, L_148);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_150 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_149);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_146 = L_150;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_154;
		L_154 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_158;
		L_158 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_159 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_158);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_154 = L_159;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_163;
		L_163 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_167;
		L_167 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_168 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_167);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_163 = L_168;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_172;
		L_172 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_176;
		L_176 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_177 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_176);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_183;
		L_183 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_181, L_182);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_184 = ___2_src;
		int32_t L_185 = V_11;
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1* L_186;
		L_186 = il2cpp_unsafe_add<BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1,int32_t>(L_184, L_185);
		BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1 L_187 = (*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_186);
		*(BranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_mAB5E3A5CF87C84F57FDC9F4ED38390F45F865739_gshared (ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* ___0_dst, int32_t ___1_dstLength, ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_0 = ___2_src;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_3;
		L_3 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_5 = ___0_dst;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_8;
		L_8 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_10 = ___2_src;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_69;
		L_69 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_67, L_68);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_70 = ___2_src;
		int32_t L_71 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_72;
		L_72 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_70, L_71);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_73 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_72);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_69 = L_73;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_77;
		L_77 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_81;
		L_81 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_82 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_81);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_77 = L_82;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_86;
		L_86 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_90;
		L_90 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_91 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_90);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_86 = L_91;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_95;
		L_95 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_99;
		L_99 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_100 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_99);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_95 = L_100;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_104;
		L_104 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_108;
		L_108 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_109 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_108);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_104 = L_109;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_113;
		L_113 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_117;
		L_117 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_118 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_117);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_113 = L_118;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_122;
		L_122 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_126;
		L_126 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_127 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_126);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_122 = L_127;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_131;
		L_131 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_135;
		L_135 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_136 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_135);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_146;
		L_146 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_144, L_145);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_147 = ___2_src;
		int32_t L_148 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_149;
		L_149 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_147, L_148);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_150 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_149);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_146 = L_150;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_154;
		L_154 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_158;
		L_158 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_159 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_158);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_154 = L_159;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_163;
		L_163 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_167;
		L_167 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_168 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_167);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_163 = L_168;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_172;
		L_172 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_176;
		L_176 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_177 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_176);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_183;
		L_183 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_181, L_182);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_184 = ___2_src;
		int32_t L_185 = V_11;
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28* L_186;
		L_186 = il2cpp_unsafe_add<ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28,int32_t>(L_184, L_185);
		ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28 L_187 = (*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_186);
		*(ExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m1F37EB4F920158C61D9677798C2E767830BAB8BE_gshared (RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* ___0_dst, int32_t ___1_dstLength, RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_0 = ___2_src;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_3;
		L_3 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_5 = ___0_dst;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_8;
		L_8 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_10 = ___2_src;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_69;
		L_69 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_67, L_68);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_70 = ___2_src;
		int32_t L_71 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_72;
		L_72 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_70, L_71);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_73 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_72);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_69 = L_73;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_77;
		L_77 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_81;
		L_81 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_82 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_81);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_77 = L_82;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_86;
		L_86 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_90;
		L_90 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_91 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_90);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_86 = L_91;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_95;
		L_95 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_99;
		L_99 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_100 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_99);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_95 = L_100;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_104;
		L_104 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_108;
		L_108 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_109 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_108);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_104 = L_109;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_113;
		L_113 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_117;
		L_117 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_118 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_117);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_113 = L_118;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_122;
		L_122 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_126;
		L_126 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_127 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_126);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_122 = L_127;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_131;
		L_131 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_135;
		L_135 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_136 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_135);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_131 = L_136;
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_146;
		L_146 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_144, L_145);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_147 = ___2_src;
		int32_t L_148 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_149;
		L_149 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_147, L_148);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_150 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_149);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_146 = L_150;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_154;
		L_154 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_158;
		L_158 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_159 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_158);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_154 = L_159;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_163;
		L_163 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_167;
		L_167 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_168 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_167);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_163 = L_168;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_172;
		L_172 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_176;
		L_176 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_177 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_176);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_172 = L_177;
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_183;
		L_183 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_181, L_182);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_184 = ___2_src;
		int32_t L_185 = V_11;
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE* L_186;
		L_186 = il2cpp_unsafe_add<RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE,int32_t>(L_184, L_185);
		RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE L_187 = (*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_186);
		*(RowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE*)L_183 = L_187;
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m6BDFE65EEA33EEEE1CBF3D29B42CBF4BC9BB8AAF_gshared (Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* ___0_dst, int32_t ___1_dstLength, Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_0 = ___2_src;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_3;
		L_3 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_5 = ___0_dst;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_8;
		L_8 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_10 = ___2_src;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_69;
		L_69 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_67, L_68);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_70 = ___2_src;
		int32_t L_71 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_72;
		L_72 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_70, L_71);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_73 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_72);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_69)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_77;
		L_77 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_81;
		L_81 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_82 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_81);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_77)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_86;
		L_86 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_90;
		L_90 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_91 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_90);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_86)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_95;
		L_95 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_99;
		L_99 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_100 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_99);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_95)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_104;
		L_104 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_108;
		L_108 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_109 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_108);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_104)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_113;
		L_113 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_117;
		L_117 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_118 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_117);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_113)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_122;
		L_122 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_126;
		L_126 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_127 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_126);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_122)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_131;
		L_131 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_135;
		L_135 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_136 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_135);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_131)->___Name), (void*)NULL);
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_146;
		L_146 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_144, L_145);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_147 = ___2_src;
		int32_t L_148 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_149;
		L_149 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_147, L_148);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_150 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_149);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_146)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_154;
		L_154 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_158;
		L_158 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_159 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_158);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_154)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_163;
		L_163 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_167;
		L_167 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_168 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_167);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_163)->___Name), (void*)NULL);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_172;
		L_172 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_176;
		L_176 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_177 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_176);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_172)->___Name), (void*)NULL);
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_183;
		L_183 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_181, L_182);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_184 = ___2_src;
		int32_t L_185 = V_11;
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16* L_186;
		L_186 = il2cpp_unsafe_add<Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16,int32_t>(L_184, L_185);
		Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16 L_187 = (*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_186);
		*(Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((Section_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16*)L_183)->___Name), (void*)NULL);
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_CopyTo_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mED5355EEC86871237FCB355295F2B0B2EC204218_gshared (SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* ___0_dst, int32_t ___1_dstLength, SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* ___2_src, int32_t ___3_srcLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B25_0 = 0;
	{
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_0 = ___2_src;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_1 = ___2_src;
		int32_t L_2 = ___3_srcLength;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_3;
		L_3 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_1, L_2);
		intptr_t L_4;
		L_4 = il2cpp_unsafe_byte_offset(L_0, L_3);
		V_0 = L_4;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_5 = ___0_dst;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_6 = ___0_dst;
		int32_t L_7 = ___1_dstLength;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_8;
		L_8 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_6, L_7);
		intptr_t L_9;
		L_9 = il2cpp_unsafe_byte_offset(L_5, L_8);
		V_1 = L_9;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_10 = ___2_src;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_11 = ___0_dst;
		intptr_t L_12;
		L_12 = il2cpp_unsafe_byte_offset(L_10, L_11);
		V_2 = L_12;
		uint32_t L_13 = sizeof(intptr_t);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_004f;
		}
	}
	{
		intptr_t L_14 = V_2;
		int64_t L_15;
		L_15 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_14, NULL);
		intptr_t L_16 = V_0;
		int64_t L_17;
		L_17 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_16, NULL);
		if ((!(((uint64_t)L_15) >= ((uint64_t)L_17))))
		{
			goto IL_004c;
		}
	}
	{
		intptr_t L_18 = V_2;
		int64_t L_19;
		L_19 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_18, NULL);
		intptr_t L_20 = V_1;
		int64_t L_21;
		L_21 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_20, NULL);
		G_B7_0 = ((!(((uint64_t)L_19) <= ((uint64_t)((-L_21)))))? 1 : 0);
		goto IL_006f;
	}

IL_004c:
	{
		G_B7_0 = 1;
		goto IL_006f;
	}

IL_004f:
	{
		intptr_t L_22 = V_2;
		int32_t L_23;
		L_23 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_22, NULL);
		intptr_t L_24 = V_0;
		int32_t L_25;
		L_25 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_24, NULL);
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_25))))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_26 = V_2;
		int32_t L_27;
		L_27 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_26, NULL);
		intptr_t L_28 = V_1;
		int32_t L_29;
		L_29 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_28, NULL);
		G_B7_0 = ((!(((uint32_t)L_27) <= ((uint32_t)((-L_29)))))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B7_0 = 1;
	}

IL_006f:
	{
		V_3 = (bool)G_B7_0;
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_00de;
		}
	}
	{
		bool L_31;
		L_31 = SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_31)
		{
			goto IL_00de;
		}
	}
	{
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_32 = ___0_dst;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_as_ref<uint8_t>(L_32);
		V_4 = L_33;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_34 = ___2_src;
		uint8_t* L_35;
		L_35 = il2cpp_unsafe_as_ref<uint8_t>(L_34);
		V_5 = L_35;
		intptr_t L_36 = V_0;
		int64_t L_37;
		L_37 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_36, NULL);
		V_6 = (uint64_t)L_37;
		V_7 = (uint64_t)((int64_t)0);
		goto IL_00d7;
	}

IL_0098:
	{
		uint64_t L_38 = V_6;
		uint64_t L_39 = V_7;
		if ((!(((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_38, (int64_t)L_39))) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_00a9;
		}
	}
	{
		uint64_t L_40 = V_6;
		uint64_t L_41 = V_7;
		G_B13_0 = ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_40, (int64_t)L_41)));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = (-1);
	}

IL_00aa:
	{
		V_8 = (uint32_t)G_B13_0;
		uint8_t* L_42 = V_4;
		uint64_t L_43 = V_7;
		intptr_t L_44;
		L_44 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_43, NULL);
		uint8_t* L_45;
		L_45 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_42, L_44);
		uint8_t* L_46 = V_5;
		uint64_t L_47 = V_7;
		intptr_t L_48;
		L_48 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0((int64_t)L_47, NULL);
		uint8_t* L_49;
		L_49 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_46, L_48);
		uint32_t L_50 = V_8;
		Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline(L_45, L_49, L_50, NULL);
		uint64_t L_51 = V_7;
		uint32_t L_52 = V_8;
		V_7 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)(uint64_t)((uint32_t)L_52))));
	}

IL_00d7:
	{
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_6;
		if ((!(((uint64_t)L_53) >= ((uint64_t)L_54))))
		{
			goto IL_0098;
		}
	}
	{
		return;
	}

IL_00de:
	{
		uint32_t L_55 = sizeof(intptr_t);
		if ((((int32_t)L_55) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		intptr_t L_56 = V_2;
		int64_t L_57;
		L_57 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_56, NULL);
		intptr_t L_58 = V_1;
		int64_t L_59;
		L_59 = IntPtr_op_Explicit_m735171330B3A339481D140F6A0DDD8D829E2084C(L_58, NULL);
		G_B19_0 = ((!(((uint64_t)L_57) <= ((uint64_t)((-L_59)))))? 1 : 0);
		goto IL_0107;
	}

IL_00f8:
	{
		intptr_t L_60 = V_2;
		int32_t L_61;
		L_61 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_60, NULL);
		intptr_t L_62 = V_1;
		int32_t L_63;
		L_63 = IntPtr_op_Explicit_mC33775570B5AC86421DABA8F8B9885DBFF49B02F(L_62, NULL);
		G_B19_0 = ((!(((uint32_t)L_61) <= ((uint32_t)((-L_63)))))? 1 : 0);
	}

IL_0107:
	{
		V_9 = (bool)G_B19_0;
		bool L_64 = V_9;
		if (L_64)
		{
			goto IL_0110;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_0111;
	}

IL_0110:
	{
		G_B22_0 = 1;
	}

IL_0111:
	{
		V_10 = G_B22_0;
		bool L_65 = V_9;
		if (L_65)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_66 = ___3_srcLength;
		G_B25_0 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
		goto IL_011d;
	}

IL_011c:
	{
		G_B25_0 = 0;
	}

IL_011d:
	{
		V_11 = G_B25_0;
		V_12 = 0;
		goto IL_0248;
	}

IL_0127:
	{
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_67 = ___0_dst;
		int32_t L_68 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_69;
		L_69 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_67, L_68);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_70 = ___2_src;
		int32_t L_71 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_72;
		L_72 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_70, L_71);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_73 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_72);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_69 = L_73;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_69)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_69)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_74 = ___0_dst;
		int32_t L_75 = V_11;
		int32_t L_76 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_77;
		L_77 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_78 = ___2_src;
		int32_t L_79 = V_11;
		int32_t L_80 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_81;
		L_81 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_78, ((int32_t)il2cpp_codegen_add(L_79, L_80)));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_82 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_81);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_77 = L_82;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_77)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_77)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_83 = ___0_dst;
		int32_t L_84 = V_11;
		int32_t L_85 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_86;
		L_86 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_83, ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)il2cpp_codegen_multiply(L_85, 2)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_87 = ___2_src;
		int32_t L_88 = V_11;
		int32_t L_89 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_90;
		L_90 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, 2)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_91 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_90);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_86 = L_91;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_86)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_86)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_92 = ___0_dst;
		int32_t L_93 = V_11;
		int32_t L_94 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_95;
		L_95 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_92, ((int32_t)il2cpp_codegen_add(L_93, ((int32_t)il2cpp_codegen_multiply(L_94, 3)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_96 = ___2_src;
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_99;
		L_99 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_96, ((int32_t)il2cpp_codegen_add(L_97, ((int32_t)il2cpp_codegen_multiply(L_98, 3)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_100 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_99);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_95 = L_100;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_95)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_95)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_101 = ___0_dst;
		int32_t L_102 = V_11;
		int32_t L_103 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_104;
		L_104 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_101, ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)il2cpp_codegen_multiply(L_103, 4)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_105 = ___2_src;
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_108;
		L_108 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)il2cpp_codegen_multiply(L_107, 4)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_109 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_108);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_104 = L_109;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_104)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_104)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_110 = ___0_dst;
		int32_t L_111 = V_11;
		int32_t L_112 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_113;
		L_113 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_110, ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply(L_112, 5)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_114 = ___2_src;
		int32_t L_115 = V_11;
		int32_t L_116 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_117;
		L_117 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_114, ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)il2cpp_codegen_multiply(L_116, 5)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_118 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_117);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_113 = L_118;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_113)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_113)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_119 = ___0_dst;
		int32_t L_120 = V_11;
		int32_t L_121 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_122;
		L_122 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_119, ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply(L_121, 6)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_123 = ___2_src;
		int32_t L_124 = V_11;
		int32_t L_125 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_126;
		L_126 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_123, ((int32_t)il2cpp_codegen_add(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, 6)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_127 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_126);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_122 = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_122)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_122)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_128 = ___0_dst;
		int32_t L_129 = V_11;
		int32_t L_130 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_131;
		L_131 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_128, ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_130, 7)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_132 = ___2_src;
		int32_t L_133 = V_11;
		int32_t L_134 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_135;
		L_135 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_132, ((int32_t)il2cpp_codegen_add(L_133, ((int32_t)il2cpp_codegen_multiply(L_134, 7)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_136 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_135);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_131 = L_136;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_131)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_131)->___Name), (void*)NULL);
		#endif
		int32_t L_137 = V_11;
		int32_t L_138 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_137, ((int32_t)il2cpp_codegen_multiply(L_138, 8))));
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 8));
	}

IL_0248:
	{
		int32_t L_140 = V_12;
		int32_t L_141 = ___3_srcLength;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)(L_141&((int32_t)-8))))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_142 = V_12;
		int32_t L_143 = ___3_srcLength;
		if ((((int32_t)L_142) >= ((int32_t)((int32_t)(L_143&((int32_t)-4))))))
		{
			goto IL_0318;
		}
	}
	{
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_144 = ___0_dst;
		int32_t L_145 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_146;
		L_146 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_144, L_145);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_147 = ___2_src;
		int32_t L_148 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_149;
		L_149 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_147, L_148);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_150 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_149);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_146 = L_150;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_146)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_146)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_151 = ___0_dst;
		int32_t L_152 = V_11;
		int32_t L_153 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_154;
		L_154 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_151, ((int32_t)il2cpp_codegen_add(L_152, L_153)));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_155 = ___2_src;
		int32_t L_156 = V_11;
		int32_t L_157 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_158;
		L_158 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_155, ((int32_t)il2cpp_codegen_add(L_156, L_157)));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_159 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_158);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_154 = L_159;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_154)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_154)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_160 = ___0_dst;
		int32_t L_161 = V_11;
		int32_t L_162 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_163;
		L_163 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_160, ((int32_t)il2cpp_codegen_add(L_161, ((int32_t)il2cpp_codegen_multiply(L_162, 2)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_164 = ___2_src;
		int32_t L_165 = V_11;
		int32_t L_166 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_167;
		L_167 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_164, ((int32_t)il2cpp_codegen_add(L_165, ((int32_t)il2cpp_codegen_multiply(L_166, 2)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_168 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_167);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_163 = L_168;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_163)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_163)->___Name), (void*)NULL);
		#endif
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_169 = ___0_dst;
		int32_t L_170 = V_11;
		int32_t L_171 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_172;
		L_172 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_169, ((int32_t)il2cpp_codegen_add(L_170, ((int32_t)il2cpp_codegen_multiply(L_171, 3)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_173 = ___2_src;
		int32_t L_174 = V_11;
		int32_t L_175 = V_10;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_176;
		L_176 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_173, ((int32_t)il2cpp_codegen_add(L_174, ((int32_t)il2cpp_codegen_multiply(L_175, 3)))));
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_177 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_176);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_172 = L_177;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_172)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_172)->___Name), (void*)NULL);
		#endif
		int32_t L_178 = V_11;
		int32_t L_179 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_178, ((int32_t)il2cpp_codegen_multiply(L_179, 4))));
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		goto IL_0318;
	}

IL_02f1:
	{
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_181 = ___0_dst;
		int32_t L_182 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_183;
		L_183 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_181, L_182);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_184 = ___2_src;
		int32_t L_185 = V_11;
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3* L_186;
		L_186 = il2cpp_unsafe_add<SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3,int32_t>(L_184, L_185);
		SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3 L_187 = (*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_186);
		*(SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_183 = L_187;
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_183)->___Builder), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3*)L_183)->___Name), (void*)NULL);
		#endif
		int32_t L_188 = V_11;
		int32_t L_189 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_190, 1));
	}

IL_0318:
	{
		int32_t L_191 = V_12;
		int32_t L_192 = ___3_srcLength;
		if ((((int32_t)L_191) < ((int32_t)L_192)))
		{
			goto IL_02f1;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 85835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0AFA9E14299B726C068263A0F86F53AD8995A8A7_gshared (bool* ___0_searchSpace, bool ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		bool* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		bool* L_4;
		L_4 = il2cpp_unsafe_add<bool,intptr_t>(L_2, L_3);
		bool L_5 = (*(bool*)L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_6;
		L_6 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		bool* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		bool* L_10;
		L_10 = il2cpp_unsafe_add<bool,intptr_t>(L_7, L_9);
		bool L_11 = (*(bool*)L_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_12;
		L_12 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		bool* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		bool* L_16;
		L_16 = il2cpp_unsafe_add<bool,intptr_t>(L_13, L_15);
		bool L_17 = (*(bool*)L_16);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_18;
		L_18 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		bool* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		bool* L_22;
		L_22 = il2cpp_unsafe_add<bool,intptr_t>(L_19, L_21);
		bool L_23 = (*(bool*)L_22);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_24;
		L_24 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		bool* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		bool* L_28;
		L_28 = il2cpp_unsafe_add<bool,intptr_t>(L_25, L_27);
		bool L_29 = (*(bool*)L_28);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_30;
		L_30 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		bool* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		bool* L_34;
		L_34 = il2cpp_unsafe_add<bool,intptr_t>(L_31, L_33);
		bool L_35 = (*(bool*)L_34);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_36;
		L_36 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		bool* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		bool* L_40;
		L_40 = il2cpp_unsafe_add<bool,intptr_t>(L_37, L_39);
		bool L_41 = (*(bool*)L_40);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_42;
		L_42 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		bool* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		bool* L_46;
		L_46 = il2cpp_unsafe_add<bool,intptr_t>(L_43, L_45);
		bool L_47 = (*(bool*)L_46);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_48;
		L_48 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		bool* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		bool* L_56;
		L_56 = il2cpp_unsafe_add<bool,intptr_t>(L_54, L_55);
		bool L_57 = (*(bool*)L_56);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_58;
		L_58 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		bool* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		bool* L_62;
		L_62 = il2cpp_unsafe_add<bool,intptr_t>(L_59, L_61);
		bool L_63 = (*(bool*)L_62);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_64;
		L_64 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		bool* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		bool* L_68;
		L_68 = il2cpp_unsafe_add<bool,intptr_t>(L_65, L_67);
		bool L_69 = (*(bool*)L_68);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_70;
		L_70 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		bool* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		bool* L_74;
		L_74 = il2cpp_unsafe_add<bool,intptr_t>(L_71, L_73);
		bool L_75 = (*(bool*)L_74);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_76;
		L_76 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		bool* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		bool* L_81;
		L_81 = il2cpp_unsafe_add<bool,intptr_t>(L_79, L_80);
		bool L_82 = (*(bool*)L_81);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		bool L_83;
		L_83 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// Method Definition Index: 85835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9182B24BC2E06DBEF5043197E0BEC5837F6CB4BD_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3);
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9);
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15);
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21);
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27);
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33);
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39);
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45);
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55);
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61);
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67);
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73);
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80);
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// Method Definition Index: 85835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___0_searchSpace;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___0_searchSpace;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___0_searchSpace;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21);
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___0_searchSpace;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27);
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___0_searchSpace;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33);
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_35, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___0_searchSpace;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___2_length;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___2_length;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___0_searchSpace;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55);
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___0_searchSpace;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61);
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_63, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___0_searchSpace;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67);
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___0_searchSpace;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73);
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___0_searchSpace;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80);
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value), L_82, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___2_length;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// Method Definition Index: 85835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mD6FACDB8D9D4B660A22DA478C11F9A48A763D2D4_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_80 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_87 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_95 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_33 = L_5;
	const Il2CppFullySharedGenericAny L_40 = L_5;
	const Il2CppFullySharedGenericAny L_47 = L_5;
	const Il2CppFullySharedGenericAny L_54 = L_5;
	const Il2CppFullySharedGenericAny L_65 = L_5;
	const Il2CppFullySharedGenericAny L_72 = L_5;
	const Il2CppFullySharedGenericAny L_79 = L_5;
	const Il2CppFullySharedGenericAny L_86 = L_5;
	const Il2CppFullySharedGenericAny L_94 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___0_searchSpace;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_7)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_searchSpace;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_9, 1, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_14;
		L_14 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		if (L_14)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___0_searchSpace;
		intptr_t L_16 = V_0;
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_16, 2, NULL);
		Il2CppFullySharedGenericAny* L_18;
		L_18 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_15, L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_21;
		L_21 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_19: *(void**)L_19));
		if (L_21)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_22 = ___0_searchSpace;
		intptr_t L_23 = V_0;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_23, 3, NULL);
		Il2CppFullySharedGenericAny* L_25;
		L_25 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_22, L_24, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_28;
		L_28 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_26: *(void**)L_26));
		if (L_28)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___0_searchSpace;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_30, 4, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_29, L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___0_searchSpace;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_37, 5, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_36, L_38, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_42;
		L_42 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_40: *(void**)L_40));
		if (L_42)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_43 = ___0_searchSpace;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 6, NULL);
		Il2CppFullySharedGenericAny* L_46;
		L_46 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_43, L_45, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_47, L_46, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___0_searchSpace;
		intptr_t L_51 = V_0;
		intptr_t L_52;
		L_52 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_51, 7, NULL);
		Il2CppFullySharedGenericAny* L_53;
		L_53 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_50, L_52, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_57 = V_0;
		intptr_t L_58;
		L_58 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_57, 8, NULL);
		V_0 = L_58;
	}

IL_0133:
	{
		int32_t L_59 = ___2_length;
		if ((((int32_t)L_59) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_60 = ___2_length;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_61 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_61, 4));
		Il2CppFullySharedGenericAny* L_62 = ___0_searchSpace;
		intptr_t L_63 = V_0;
		Il2CppFullySharedGenericAny* L_64;
		L_64 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_62, L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_67;
		L_67 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_66, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_65: *(void**)L_65));
		if (L_67)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___0_searchSpace;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_69, 1, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_68, L_70, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___0_searchSpace;
		intptr_t L_76 = V_0;
		intptr_t L_77;
		L_77 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_76, 2, NULL);
		Il2CppFullySharedGenericAny* L_78;
		L_78 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_75, L_77, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_81;
		L_81 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_80, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_79: *(void**)L_79));
		if (L_81)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_82 = ___0_searchSpace;
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 3, NULL);
		Il2CppFullySharedGenericAny* L_85;
		L_85 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_82, L_84, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_86, L_85, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_88;
		L_88 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_87, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_86: *(void**)L_86));
		if (L_88)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_89 = V_0;
		intptr_t L_90;
		L_90 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_89, 4, NULL);
		V_0 = L_90;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_91 = ___0_searchSpace;
		intptr_t L_92 = V_0;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_91, L_92, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_tCD6606990882ACA5553BEC2B3FD5E0CFA5CACD74);
		bool L_96;
		L_96 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_95, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_94: *(void**)L_94));
		if (L_96)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		V_0 = L_98;
		int32_t L_99 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
	}

IL_01fc:
	{
		int32_t L_100 = ___2_length;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_101 = V_0;
		void* L_102;
		L_102 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_101, NULL);
		return ((int32_t)(intptr_t)L_102);
	}

IL_020a:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_103, 1, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_104, NULL);
		return ((int32_t)(intptr_t)L_105);
	}

IL_0218:
	{
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_106, 2, NULL);
		void* L_108;
		L_108 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_107, NULL);
		return ((int32_t)(intptr_t)L_108);
	}

IL_0226:
	{
		intptr_t L_109 = V_0;
		intptr_t L_110;
		L_110 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_109, 3, NULL);
		void* L_111;
		L_111 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_110, NULL);
		return ((int32_t)(intptr_t)L_111);
	}

IL_0234:
	{
		intptr_t L_112 = V_0;
		intptr_t L_113;
		L_113 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_112, 4, NULL);
		void* L_114;
		L_114 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_113, NULL);
		return ((int32_t)(intptr_t)L_114);
	}

IL_0242:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_115, 5, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_116, NULL);
		return ((int32_t)(intptr_t)L_117);
	}

IL_0250:
	{
		intptr_t L_118 = V_0;
		intptr_t L_119;
		L_119 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_118, 6, NULL);
		void* L_120;
		L_120 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_119, NULL);
		return ((int32_t)(intptr_t)L_120);
	}

IL_025e:
	{
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 7, NULL);
		void* L_123;
		L_123 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_122, NULL);
		return ((int32_t)(intptr_t)L_123);
	}
}
// Method Definition Index: 85834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFDB2D769AC46A87CB9C2AC0133A16A3573CC5B50_gshared (uint8_t* ___0_searchSpace, int32_t ___1_searchSpaceLength, uint8_t* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t V_0 = 0x0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		uint8_t* L_1 = ___2_value;
		uint8_t L_2 = (*(uint8_t*)L_1);
		V_0 = L_2;
		uint8_t* L_3 = ___2_value;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, 1);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, L_11);
		uint8_t L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9182B24BC2E06DBEF5043197E0BEC5837F6CB4BD(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		uint8_t* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		uint8_t* L_21;
		L_21 = il2cpp_unsafe_add<uint8_t,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)));
		uint8_t* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = SpanHelpers_SequenceEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m423F3757713ABC1BC2A4B86BD4B33F2F713AA72F(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0055:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001a;
	}

IL_005b:
	{
		return (-1);
	}
}
// Method Definition Index: 85834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB8E2EEC17E50A6D772B482EB536D7405D06D90C_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	Il2CppChar* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Il2CppChar* L_1 = ___2_value;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		V_0 = L_2;
		Il2CppChar* L_3 = ___2_value;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, 1);
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_10, L_11);
		Il2CppChar L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Il2CppChar* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		Il2CppChar* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)));
		Il2CppChar* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4CA9EFB2F26A98F5FA6CBA1078413780F739BAC2(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0055:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001a;
	}

IL_005b:
	{
		return (-1);
	}
}
// Method Definition Index: 85834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mAFF006F63254873D8E8B8CF51CBC37F4B261D5AE_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
	const Il2CppFullySharedGenericAny L_13 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
	memset(V_0, 0, SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
	Il2CppFullySharedGenericAny* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Il2CppFullySharedGenericAny* L_1 = ___2_value;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, 1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = L_4;
		int32_t L_5 = ___3_valueLength;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_3 = 0;
	}

IL_001a:
	{
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), L_8));
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_searchSpace;
		int32_t L_11 = V_3;
		Il2CppFullySharedGenericAny* L_12;
		L_12 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T_tCDD99CE700B5350E0DF1913C4D649DEA8D03C8EE);
		int32_t L_14 = V_4;
		int32_t L_15;
		L_15 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_13: *(void**)L_13), L_14);
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		Il2CppFullySharedGenericAny* L_19 = ___0_searchSpace;
		int32_t L_20 = V_3;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_22 = V_1;
		int32_t L_23 = V_2;
		bool L_24;
		L_24 = ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_24)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_25 = V_3;
		return L_25;
	}

IL_0055:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_001a;
	}

IL_005b:
	{
		return (-1);
	}
}
// Method Definition Index: 85836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAE9D19362852ECBB68AFDF576FF60DD96A76E7A0_gshared (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value0, Il2CppChar ___2_value1, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_01b1;
	}

IL_0007:
	{
		Il2CppChar* L_0 = ___0_searchSpace;
		int32_t L_1 = V_1;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_0, L_1);
		Il2CppChar L_3 = (*(Il2CppChar*)L_2);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_5;
		L_5 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_5)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_7;
		L_7 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_7)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppChar* L_8 = ___0_searchSpace;
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)));
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		V_0 = L_11;
		Il2CppChar L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_13;
		L_13 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_12, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_13)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppChar L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_15;
		L_15 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_15)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppChar* L_16 = ___0_searchSpace;
		int32_t L_17 = V_1;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_16, ((int32_t)il2cpp_codegen_add(L_17, 2)));
		Il2CppChar L_19 = (*(Il2CppChar*)L_18);
		V_0 = L_19;
		Il2CppChar L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_21;
		L_21 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_20, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_21)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppChar L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_23;
		L_23 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_23)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppChar* L_24 = ___0_searchSpace;
		int32_t L_25 = V_1;
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_24, ((int32_t)il2cpp_codegen_add(L_25, 3)));
		Il2CppChar L_27 = (*(Il2CppChar*)L_26);
		V_0 = L_27;
		Il2CppChar L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_29;
		L_29 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_28, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_29)
		{
			goto IL_02d3;
		}
	}
	{
		Il2CppChar L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_31;
		L_31 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_30, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_31)
		{
			goto IL_02d3;
		}
	}
	{
		Il2CppChar* L_32 = ___0_searchSpace;
		int32_t L_33 = V_1;
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_32, ((int32_t)il2cpp_codegen_add(L_33, 4)));
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		V_0 = L_35;
		Il2CppChar L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_37;
		L_37 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_36, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_37)
		{
			goto IL_02d7;
		}
	}
	{
		Il2CppChar L_38 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_39;
		L_39 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_38, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_39)
		{
			goto IL_02d7;
		}
	}
	{
		Il2CppChar* L_40 = ___0_searchSpace;
		int32_t L_41 = V_1;
		Il2CppChar* L_42;
		L_42 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_40, ((int32_t)il2cpp_codegen_add(L_41, 5)));
		Il2CppChar L_43 = (*(Il2CppChar*)L_42);
		V_0 = L_43;
		Il2CppChar L_44 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_45;
		L_45 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_44, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_45)
		{
			goto IL_02db;
		}
	}
	{
		Il2CppChar L_46 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_47;
		L_47 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_46, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_47)
		{
			goto IL_02db;
		}
	}
	{
		Il2CppChar* L_48 = ___0_searchSpace;
		int32_t L_49 = V_1;
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_48, ((int32_t)il2cpp_codegen_add(L_49, 6)));
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		V_0 = L_51;
		Il2CppChar L_52 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_53;
		L_53 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_52, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_53)
		{
			goto IL_02df;
		}
	}
	{
		Il2CppChar L_54 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_55;
		L_55 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_54, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_55)
		{
			goto IL_02df;
		}
	}
	{
		Il2CppChar* L_56 = ___0_searchSpace;
		int32_t L_57 = V_1;
		Il2CppChar* L_58;
		L_58 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_56, ((int32_t)il2cpp_codegen_add(L_57, 7)));
		Il2CppChar L_59 = (*(Il2CppChar*)L_58);
		V_0 = L_59;
		Il2CppChar L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_61;
		L_61 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_60, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_61)
		{
			goto IL_02e3;
		}
	}
	{
		Il2CppChar L_62 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_63;
		L_63 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_62, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_63)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_64, 8));
	}

IL_01b1:
	{
		int32_t L_65 = ___3_length;
		int32_t L_66 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_65, L_66))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_67 = ___3_length;
		int32_t L_68 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_67, L_68))) < ((int32_t)4)))
		{
			goto IL_02c3;
		}
	}
	{
		Il2CppChar* L_69 = ___0_searchSpace;
		int32_t L_70 = V_1;
		Il2CppChar* L_71;
		L_71 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_69, L_70);
		Il2CppChar L_72 = (*(Il2CppChar*)L_71);
		V_0 = L_72;
		Il2CppChar L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_74;
		L_74 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_73, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_74)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppChar L_75 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_75, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_76)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppChar* L_77 = ___0_searchSpace;
		int32_t L_78 = V_1;
		Il2CppChar* L_79;
		L_79 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_77, ((int32_t)il2cpp_codegen_add(L_78, 1)));
		Il2CppChar L_80 = (*(Il2CppChar*)L_79);
		V_0 = L_80;
		Il2CppChar L_81 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_81, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_82)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppChar L_83 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_84;
		L_84 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_83, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_84)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppChar* L_85 = ___0_searchSpace;
		int32_t L_86 = V_1;
		Il2CppChar* L_87;
		L_87 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_85, ((int32_t)il2cpp_codegen_add(L_86, 2)));
		Il2CppChar L_88 = (*(Il2CppChar*)L_87);
		V_0 = L_88;
		Il2CppChar L_89 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_90;
		L_90 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_89, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_90)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppChar L_91 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_92;
		L_92 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_91, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_92)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppChar* L_93 = ___0_searchSpace;
		int32_t L_94 = V_1;
		Il2CppChar* L_95;
		L_95 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_93, ((int32_t)il2cpp_codegen_add(L_94, 3)));
		Il2CppChar L_96 = (*(Il2CppChar*)L_95);
		V_0 = L_96;
		Il2CppChar L_97 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_98;
		L_98 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_97, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_98)
		{
			goto IL_02d3;
		}
	}
	{
		Il2CppChar L_99 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_100;
		L_100 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_99, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_100)
		{
			goto IL_02d3;
		}
	}
	{
		int32_t L_101 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_101, 4));
		goto IL_02c3;
	}

IL_0292:
	{
		Il2CppChar* L_102 = ___0_searchSpace;
		int32_t L_103 = V_1;
		Il2CppChar* L_104;
		L_104 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_102, L_103);
		Il2CppChar L_105 = (*(Il2CppChar*)L_104);
		V_0 = L_105;
		Il2CppChar L_106 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_107;
		L_107 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___1_value0), L_106, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_107)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppChar L_108 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.char_class);
		bool L_109;
		L_109 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___2_value1), L_108, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_109)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_110 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_02c3:
	{
		int32_t L_111 = V_1;
		int32_t L_112 = ___3_length;
		if ((((int32_t)L_111) < ((int32_t)L_112)))
		{
			goto IL_0292;
		}
	}
	{
		return (-1);
	}

IL_02c9:
	{
		int32_t L_113 = V_1;
		return L_113;
	}

IL_02cb:
	{
		int32_t L_114 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02cf:
	{
		int32_t L_115 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_115, 2));
	}

IL_02d3:
	{
		int32_t L_116 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_116, 3));
	}

IL_02d7:
	{
		int32_t L_117 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_117, 4));
	}

IL_02db:
	{
		int32_t L_118 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_118, 5));
	}

IL_02df:
	{
		int32_t L_119 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_119, 6));
	}

IL_02e3:
	{
		int32_t L_120 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_120, 7));
	}
}
// Method Definition Index: 85838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3A056164A4108FF7E14D9416665D882D2C8B5A3D_gshared (Il2CppChar* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppChar* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppChar* L_1 = ___0_searchSpace;
		Il2CppChar* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1B34C7F7295ED428AEA332DD89AC9024BE2BC2C5(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 85836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_m9E4511B0ADB9F3899609498CC9A8AA1C55518A62_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value0, Il2CppFullySharedGenericAny ___2_value1, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_28 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_58 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_65 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_68 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_75 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_90 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_93 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_100 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_110 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_113 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_120 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_123 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_131 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_134 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_13 = L_3;
	const Il2CppFullySharedGenericAny L_17 = L_3;
	const Il2CppFullySharedGenericAny L_23 = L_3;
	const Il2CppFullySharedGenericAny L_27 = L_3;
	const Il2CppFullySharedGenericAny L_33 = L_3;
	const Il2CppFullySharedGenericAny L_37 = L_3;
	const Il2CppFullySharedGenericAny L_43 = L_3;
	const Il2CppFullySharedGenericAny L_47 = L_3;
	const Il2CppFullySharedGenericAny L_53 = L_3;
	const Il2CppFullySharedGenericAny L_57 = L_3;
	const Il2CppFullySharedGenericAny L_63 = L_3;
	const Il2CppFullySharedGenericAny L_67 = L_3;
	const Il2CppFullySharedGenericAny L_73 = L_3;
	const Il2CppFullySharedGenericAny L_77 = L_3;
	const Il2CppFullySharedGenericAny L_88 = L_3;
	const Il2CppFullySharedGenericAny L_92 = L_3;
	const Il2CppFullySharedGenericAny L_98 = L_3;
	const Il2CppFullySharedGenericAny L_102 = L_3;
	const Il2CppFullySharedGenericAny L_108 = L_3;
	const Il2CppFullySharedGenericAny L_112 = L_3;
	const Il2CppFullySharedGenericAny L_118 = L_3;
	const Il2CppFullySharedGenericAny L_122 = L_3;
	const Il2CppFullySharedGenericAny L_129 = L_3;
	const Il2CppFullySharedGenericAny L_133 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
	const Il2CppFullySharedGenericAny L_14 = L_4;
	const Il2CppFullySharedGenericAny L_24 = L_4;
	const Il2CppFullySharedGenericAny L_34 = L_4;
	const Il2CppFullySharedGenericAny L_44 = L_4;
	const Il2CppFullySharedGenericAny L_54 = L_4;
	const Il2CppFullySharedGenericAny L_64 = L_4;
	const Il2CppFullySharedGenericAny L_74 = L_4;
	const Il2CppFullySharedGenericAny L_89 = L_4;
	const Il2CppFullySharedGenericAny L_99 = L_4;
	const Il2CppFullySharedGenericAny L_109 = L_4;
	const Il2CppFullySharedGenericAny L_119 = L_4;
	const Il2CppFullySharedGenericAny L_130 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
	memset(V_0, 0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_01b1;
	}

IL_0007:
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_searchSpace;
		int32_t L_1 = V_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_6;
		L_6 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_4: *(void**)L_4));
		if (L_6)
		{
			goto IL_02c9;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_9;
		L_9 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_7: *(void**)L_7));
		if (L_9)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___0_searchSpace;
		int32_t L_11 = V_1;
		Il2CppFullySharedGenericAny* L_12;
		L_12 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_13, L_12, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_13, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_16;
		L_16 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_15, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_14: *(void**)L_14));
		if (L_16)
		{
			goto IL_02cb;
		}
	}
	{
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_18, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_17: *(void**)L_17));
		if (L_19)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_20 = ___0_searchSpace;
		int32_t L_21 = V_1;
		Il2CppFullySharedGenericAny* L_22;
		L_22 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_23, L_22, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_23, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_26;
		L_26 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_25, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_24: *(void**)L_24));
		if (L_26)
		{
			goto IL_02cf;
		}
	}
	{
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_29;
		L_29 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_28, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_27: *(void**)L_27));
		if (L_29)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_30 = ___0_searchSpace;
		int32_t L_31 = V_1;
		Il2CppFullySharedGenericAny* L_32;
		L_32 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_30, ((int32_t)il2cpp_codegen_add(L_31, 3)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_33, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_36;
		L_36 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_35, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_34: *(void**)L_34));
		if (L_36)
		{
			goto IL_02d3;
		}
	}
	{
		il2cpp_codegen_memcpy(L_37, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_39;
		L_39 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_38, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_37: *(void**)L_37));
		if (L_39)
		{
			goto IL_02d3;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_40 = ___0_searchSpace;
		int32_t L_41 = V_1;
		Il2CppFullySharedGenericAny* L_42;
		L_42 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_40, ((int32_t)il2cpp_codegen_add(L_41, 4)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_43, L_42, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_43, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_44, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_46;
		L_46 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_45, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_44: *(void**)L_44));
		if (L_46)
		{
			goto IL_02d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_47, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_02d7;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___0_searchSpace;
		int32_t L_51 = V_1;
		Il2CppFullySharedGenericAny* L_52;
		L_52 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_50, ((int32_t)il2cpp_codegen_add(L_51, 5)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_53, L_52, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_53, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_54, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_02db;
		}
	}
	{
		il2cpp_codegen_memcpy(L_57, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_59;
		L_59 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_58, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_57: *(void**)L_57));
		if (L_59)
		{
			goto IL_02db;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_60 = ___0_searchSpace;
		int32_t L_61 = V_1;
		Il2CppFullySharedGenericAny* L_62;
		L_62 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_60, ((int32_t)il2cpp_codegen_add(L_61, 6)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_63, L_62, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_63, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_64, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_66;
		L_66 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_65, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_64: *(void**)L_64));
		if (L_66)
		{
			goto IL_02df;
		}
	}
	{
		il2cpp_codegen_memcpy(L_67, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_69;
		L_69 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_68, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_67: *(void**)L_67));
		if (L_69)
		{
			goto IL_02df;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_70 = ___0_searchSpace;
		int32_t L_71 = V_1;
		Il2CppFullySharedGenericAny* L_72;
		L_72 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_70, ((int32_t)il2cpp_codegen_add(L_71, 7)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_73, L_72, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_73, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_74, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_76;
		L_76 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_75, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_74: *(void**)L_74));
		if (L_76)
		{
			goto IL_02e3;
		}
	}
	{
		il2cpp_codegen_memcpy(L_77, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_79;
		L_79 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_78, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_77: *(void**)L_77));
		if (L_79)
		{
			goto IL_02e3;
		}
	}
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_80, 8));
	}

IL_01b1:
	{
		int32_t L_81 = ___3_length;
		int32_t L_82 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_81, L_82))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_83 = ___3_length;
		int32_t L_84 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84))) < ((int32_t)4)))
		{
			goto IL_02c3;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_85 = ___0_searchSpace;
		int32_t L_86 = V_1;
		Il2CppFullySharedGenericAny* L_87;
		L_87 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_85, L_86, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_88, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_89, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_91;
		L_91 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_90, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_89: *(void**)L_89));
		if (L_91)
		{
			goto IL_02c9;
		}
	}
	{
		il2cpp_codegen_memcpy(L_92, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_94;
		L_94 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_93, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_92: *(void**)L_92));
		if (L_94)
		{
			goto IL_02c9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_95 = ___0_searchSpace;
		int32_t L_96 = V_1;
		Il2CppFullySharedGenericAny* L_97;
		L_97 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_95, ((int32_t)il2cpp_codegen_add(L_96, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_98, L_97, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_98, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_99, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_101;
		L_101 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_100, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_99: *(void**)L_99));
		if (L_101)
		{
			goto IL_02cb;
		}
	}
	{
		il2cpp_codegen_memcpy(L_102, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_104;
		L_104 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_103, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_102: *(void**)L_102));
		if (L_104)
		{
			goto IL_02cb;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_105 = ___0_searchSpace;
		int32_t L_106 = V_1;
		Il2CppFullySharedGenericAny* L_107;
		L_107 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_105, ((int32_t)il2cpp_codegen_add(L_106, 2)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_108, L_107, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_108, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_109, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_111;
		L_111 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_110, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_109: *(void**)L_109));
		if (L_111)
		{
			goto IL_02cf;
		}
	}
	{
		il2cpp_codegen_memcpy(L_112, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_114;
		L_114 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_113, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_112: *(void**)L_112));
		if (L_114)
		{
			goto IL_02cf;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_115 = ___0_searchSpace;
		int32_t L_116 = V_1;
		Il2CppFullySharedGenericAny* L_117;
		L_117 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_115, ((int32_t)il2cpp_codegen_add(L_116, 3)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_118, L_117, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_118, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_119, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_121;
		L_121 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_120, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_119: *(void**)L_119));
		if (L_121)
		{
			goto IL_02d3;
		}
	}
	{
		il2cpp_codegen_memcpy(L_122, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_124;
		L_124 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_123, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_122: *(void**)L_122));
		if (L_124)
		{
			goto IL_02d3;
		}
	}
	{
		int32_t L_125 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_125, 4));
		goto IL_02c3;
	}

IL_0292:
	{
		Il2CppFullySharedGenericAny* L_126 = ___0_searchSpace;
		int32_t L_127 = V_1;
		Il2CppFullySharedGenericAny* L_128;
		L_128 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_126, L_127, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_129, L_128, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(V_0, L_129, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		il2cpp_codegen_memcpy(L_130, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_132;
		L_132 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_131, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_130: *(void**)L_130));
		if (L_132)
		{
			goto IL_02c9;
		}
	}
	{
		il2cpp_codegen_memcpy(L_133, V_0, SizeOf_T_tE120458A80D7A75B5F0A605DE84257726EEB891B);
		bool L_135;
		L_135 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_134, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_133: *(void**)L_133));
		if (L_135)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_136 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_02c3:
	{
		int32_t L_137 = V_1;
		int32_t L_138 = ___3_length;
		if ((((int32_t)L_137) < ((int32_t)L_138)))
		{
			goto IL_0292;
		}
	}
	{
		return (-1);
	}

IL_02c9:
	{
		int32_t L_139 = V_1;
		return L_139;
	}

IL_02cb:
	{
		int32_t L_140 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_02cf:
	{
		int32_t L_141 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_141, 2));
	}

IL_02d3:
	{
		int32_t L_142 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_142, 3));
	}

IL_02d7:
	{
		int32_t L_143 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_143, 4));
	}

IL_02db:
	{
		int32_t L_144 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_144, 5));
	}

IL_02df:
	{
		int32_t L_145 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_145, 6));
	}

IL_02e3:
	{
		int32_t L_146 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_146, 7));
	}
}
// Method Definition Index: 85838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_m7A388B453A8F5333DB014351A856FF0728640D63_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t545C55A9B02599191A06E37EE4D18E1D46214732 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t545C55A9B02599191A06E37EE4D18E1D46214732);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___3_valueLength;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_searchSpace;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t545C55A9B02599191A06E37EE4D18E1D46214732);
		int32_t L_6 = ___1_searchSpaceLength;
		int32_t L_7;
		L_7 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___1_searchSpaceLength = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___3_valueLength;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// Method Definition Index: 85837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA240E7CDB4E3D322480EF20626403BA02EAF0014_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value0, uint8_t ___2_value1, uint8_t ___3_value2, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0249;
	}

IL_0007:
	{
		uint8_t* L_0 = ___0_searchSpace;
		int32_t L_1 = V_1;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_add<uint8_t,int32_t>(L_0, L_1);
		uint8_t L_3 = (*(uint8_t*)L_2);
		V_0 = L_3;
		uint8_t L_4 = V_0;
		bool L_5;
		L_5 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_5)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_6 = V_0;
		bool L_7;
		L_7 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_7)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_8 = V_0;
		bool L_9;
		L_9 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_8, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_9)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t* L_10 = ___0_searchSpace;
		int32_t L_11 = V_1;
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_add<uint8_t,int32_t>(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)));
		uint8_t L_13 = (*(uint8_t*)L_12);
		V_0 = L_13;
		uint8_t L_14 = V_0;
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_15)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t L_16 = V_0;
		bool L_17;
		L_17 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_17)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t L_18 = V_0;
		bool L_19;
		L_19 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_19)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t* L_20 = ___0_searchSpace;
		int32_t L_21 = V_1;
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,int32_t>(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)));
		uint8_t L_23 = (*(uint8_t*)L_22);
		V_0 = L_23;
		uint8_t L_24 = V_0;
		bool L_25;
		L_25 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_25)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t L_26 = V_0;
		bool L_27;
		L_27 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_27)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t L_28 = V_0;
		bool L_29;
		L_29 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_28, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_29)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t* L_30 = ___0_searchSpace;
		int32_t L_31 = V_1;
		uint8_t* L_32;
		L_32 = il2cpp_unsafe_add<uint8_t,int32_t>(L_30, ((int32_t)il2cpp_codegen_add(L_31, 3)));
		uint8_t L_33 = (*(uint8_t*)L_32);
		V_0 = L_33;
		uint8_t L_34 = V_0;
		bool L_35;
		L_35 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_35)
		{
			goto IL_03ca;
		}
	}
	{
		uint8_t L_36 = V_0;
		bool L_37;
		L_37 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_36, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_37)
		{
			goto IL_03ca;
		}
	}
	{
		uint8_t L_38 = V_0;
		bool L_39;
		L_39 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_38, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_39)
		{
			goto IL_03ca;
		}
	}
	{
		uint8_t* L_40 = ___0_searchSpace;
		int32_t L_41 = V_1;
		uint8_t* L_42;
		L_42 = il2cpp_unsafe_add<uint8_t,int32_t>(L_40, ((int32_t)il2cpp_codegen_add(L_41, 4)));
		uint8_t L_43 = (*(uint8_t*)L_42);
		V_0 = L_43;
		uint8_t L_44 = V_0;
		bool L_45;
		L_45 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_44, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_45)
		{
			goto IL_03ce;
		}
	}
	{
		uint8_t L_46 = V_0;
		bool L_47;
		L_47 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_46, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_47)
		{
			goto IL_03ce;
		}
	}
	{
		uint8_t L_48 = V_0;
		bool L_49;
		L_49 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_48, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_49)
		{
			goto IL_03ce;
		}
	}
	{
		uint8_t* L_50 = ___0_searchSpace;
		int32_t L_51 = V_1;
		uint8_t* L_52;
		L_52 = il2cpp_unsafe_add<uint8_t,int32_t>(L_50, ((int32_t)il2cpp_codegen_add(L_51, 5)));
		uint8_t L_53 = (*(uint8_t*)L_52);
		V_0 = L_53;
		uint8_t L_54 = V_0;
		bool L_55;
		L_55 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_54, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_55)
		{
			goto IL_03d2;
		}
	}
	{
		uint8_t L_56 = V_0;
		bool L_57;
		L_57 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_56, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_57)
		{
			goto IL_03d2;
		}
	}
	{
		uint8_t L_58 = V_0;
		bool L_59;
		L_59 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_58, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_59)
		{
			goto IL_03d2;
		}
	}
	{
		uint8_t* L_60 = ___0_searchSpace;
		int32_t L_61 = V_1;
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,int32_t>(L_60, ((int32_t)il2cpp_codegen_add(L_61, 6)));
		uint8_t L_63 = (*(uint8_t*)L_62);
		V_0 = L_63;
		uint8_t L_64 = V_0;
		bool L_65;
		L_65 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_64, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_65)
		{
			goto IL_03d6;
		}
	}
	{
		uint8_t L_66 = V_0;
		bool L_67;
		L_67 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_66, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_67)
		{
			goto IL_03d6;
		}
	}
	{
		uint8_t L_68 = V_0;
		bool L_69;
		L_69 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_68, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_69)
		{
			goto IL_03d6;
		}
	}
	{
		uint8_t* L_70 = ___0_searchSpace;
		int32_t L_71 = V_1;
		uint8_t* L_72;
		L_72 = il2cpp_unsafe_add<uint8_t,int32_t>(L_70, ((int32_t)il2cpp_codegen_add(L_71, 7)));
		uint8_t L_73 = (*(uint8_t*)L_72);
		V_0 = L_73;
		uint8_t L_74 = V_0;
		bool L_75;
		L_75 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_74, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_75)
		{
			goto IL_03da;
		}
	}
	{
		uint8_t L_76 = V_0;
		bool L_77;
		L_77 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_76, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_77)
		{
			goto IL_03da;
		}
	}
	{
		uint8_t L_78 = V_0;
		bool L_79;
		L_79 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_78, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_79)
		{
			goto IL_03da;
		}
	}
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_80, 8));
	}

IL_0249:
	{
		int32_t L_81 = ___4_length;
		int32_t L_82 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_81, L_82))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_83 = ___4_length;
		int32_t L_84 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84))) < ((int32_t)4)))
		{
			goto IL_03b9;
		}
	}
	{
		uint8_t* L_85 = ___0_searchSpace;
		int32_t L_86 = V_1;
		uint8_t* L_87;
		L_87 = il2cpp_unsafe_add<uint8_t,int32_t>(L_85, L_86);
		uint8_t L_88 = (*(uint8_t*)L_87);
		V_0 = L_88;
		uint8_t L_89 = V_0;
		bool L_90;
		L_90 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_89, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_90)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_91 = V_0;
		bool L_92;
		L_92 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_91, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_92)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_93 = V_0;
		bool L_94;
		L_94 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_93, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_94)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t* L_95 = ___0_searchSpace;
		int32_t L_96 = V_1;
		uint8_t* L_97;
		L_97 = il2cpp_unsafe_add<uint8_t,int32_t>(L_95, ((int32_t)il2cpp_codegen_add(L_96, 1)));
		uint8_t L_98 = (*(uint8_t*)L_97);
		V_0 = L_98;
		uint8_t L_99 = V_0;
		bool L_100;
		L_100 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_99, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_100)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t L_101 = V_0;
		bool L_102;
		L_102 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_101, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_102)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t L_103 = V_0;
		bool L_104;
		L_104 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_103, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_104)
		{
			goto IL_03c2;
		}
	}
	{
		uint8_t* L_105 = ___0_searchSpace;
		int32_t L_106 = V_1;
		uint8_t* L_107;
		L_107 = il2cpp_unsafe_add<uint8_t,int32_t>(L_105, ((int32_t)il2cpp_codegen_add(L_106, 2)));
		uint8_t L_108 = (*(uint8_t*)L_107);
		V_0 = L_108;
		uint8_t L_109 = V_0;
		bool L_110;
		L_110 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_109, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_110)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t L_111 = V_0;
		bool L_112;
		L_112 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_111, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_112)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t L_113 = V_0;
		bool L_114;
		L_114 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_113, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_114)
		{
			goto IL_03c6;
		}
	}
	{
		uint8_t* L_115 = ___0_searchSpace;
		int32_t L_116 = V_1;
		uint8_t* L_117;
		L_117 = il2cpp_unsafe_add<uint8_t,int32_t>(L_115, ((int32_t)il2cpp_codegen_add(L_116, 3)));
		uint8_t L_118 = (*(uint8_t*)L_117);
		V_0 = L_118;
		uint8_t L_119 = V_0;
		bool L_120;
		L_120 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_119, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_120)
		{
			goto IL_03ca;
		}
	}
	{
		uint8_t L_121 = V_0;
		bool L_122;
		L_122 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_121, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_122)
		{
			goto IL_03ca;
		}
	}
	{
		uint8_t L_123 = V_0;
		bool L_124;
		L_124 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_123, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_124)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_125 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_125, 4));
		goto IL_03b9;
	}

IL_0378:
	{
		uint8_t* L_126 = ___0_searchSpace;
		int32_t L_127 = V_1;
		uint8_t* L_128;
		L_128 = il2cpp_unsafe_add<uint8_t,int32_t>(L_126, L_127);
		uint8_t L_129 = (*(uint8_t*)L_128);
		V_0 = L_129;
		uint8_t L_130 = V_0;
		bool L_131;
		L_131 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value0), L_130, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_131)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_132 = V_0;
		bool L_133;
		L_133 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___2_value1), L_132, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_133)
		{
			goto IL_03c0;
		}
	}
	{
		uint8_t L_134 = V_0;
		bool L_135;
		L_135 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___3_value2), L_134, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_135)
		{
			goto IL_03c0;
		}
	}
	{
		int32_t L_136 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_03b9:
	{
		int32_t L_137 = V_1;
		int32_t L_138 = ___4_length;
		if ((((int32_t)L_137) < ((int32_t)L_138)))
		{
			goto IL_0378;
		}
	}
	{
		return (-1);
	}

IL_03c0:
	{
		int32_t L_139 = V_1;
		return L_139;
	}

IL_03c2:
	{
		int32_t L_140 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_03c6:
	{
		int32_t L_141 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_141, 2));
	}

IL_03ca:
	{
		int32_t L_142 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_142, 3));
	}

IL_03ce:
	{
		int32_t L_143 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_143, 4));
	}

IL_03d2:
	{
		int32_t L_144 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_144, 5));
	}

IL_03d6:
	{
		int32_t L_145 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_145, 6));
	}

IL_03da:
	{
		int32_t L_146 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_146, 7));
	}
}
// Method Definition Index: 85837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_m7356B71F49A06A0AD2638D123F9E2B15B14C03CD_gshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value0, Il2CppFullySharedGenericAny ___2_value1, Il2CppFullySharedGenericAny ___3_value2, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_37 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_50 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_57 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_60 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_63 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_70 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_76 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_83 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_86 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_96 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_99 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_102 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_114 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_117 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_120 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_127 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_130 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_133 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_140 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_143 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_146 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_153 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_156 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_159 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_167 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_170 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_173 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_10 = L_3;
	const Il2CppFullySharedGenericAny L_16 = L_3;
	const Il2CppFullySharedGenericAny L_20 = L_3;
	const Il2CppFullySharedGenericAny L_23 = L_3;
	const Il2CppFullySharedGenericAny L_29 = L_3;
	const Il2CppFullySharedGenericAny L_33 = L_3;
	const Il2CppFullySharedGenericAny L_36 = L_3;
	const Il2CppFullySharedGenericAny L_42 = L_3;
	const Il2CppFullySharedGenericAny L_46 = L_3;
	const Il2CppFullySharedGenericAny L_49 = L_3;
	const Il2CppFullySharedGenericAny L_55 = L_3;
	const Il2CppFullySharedGenericAny L_59 = L_3;
	const Il2CppFullySharedGenericAny L_62 = L_3;
	const Il2CppFullySharedGenericAny L_68 = L_3;
	const Il2CppFullySharedGenericAny L_72 = L_3;
	const Il2CppFullySharedGenericAny L_75 = L_3;
	const Il2CppFullySharedGenericAny L_81 = L_3;
	const Il2CppFullySharedGenericAny L_85 = L_3;
	const Il2CppFullySharedGenericAny L_88 = L_3;
	const Il2CppFullySharedGenericAny L_94 = L_3;
	const Il2CppFullySharedGenericAny L_98 = L_3;
	const Il2CppFullySharedGenericAny L_101 = L_3;
	const Il2CppFullySharedGenericAny L_112 = L_3;
	const Il2CppFullySharedGenericAny L_116 = L_3;
	const Il2CppFullySharedGenericAny L_119 = L_3;
	const Il2CppFullySharedGenericAny L_125 = L_3;
	const Il2CppFullySharedGenericAny L_129 = L_3;
	const Il2CppFullySharedGenericAny L_132 = L_3;
	const Il2CppFullySharedGenericAny L_138 = L_3;
	const Il2CppFullySharedGenericAny L_142 = L_3;
	const Il2CppFullySharedGenericAny L_145 = L_3;
	const Il2CppFullySharedGenericAny L_151 = L_3;
	const Il2CppFullySharedGenericAny L_155 = L_3;
	const Il2CppFullySharedGenericAny L_158 = L_3;
	const Il2CppFullySharedGenericAny L_165 = L_3;
	const Il2CppFullySharedGenericAny L_169 = L_3;
	const Il2CppFullySharedGenericAny L_172 = L_3;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
	const Il2CppFullySharedGenericAny L_17 = L_4;
	const Il2CppFullySharedGenericAny L_30 = L_4;
	const Il2CppFullySharedGenericAny L_43 = L_4;
	const Il2CppFullySharedGenericAny L_56 = L_4;
	const Il2CppFullySharedGenericAny L_69 = L_4;
	const Il2CppFullySharedGenericAny L_82 = L_4;
	const Il2CppFullySharedGenericAny L_95 = L_4;
	const Il2CppFullySharedGenericAny L_113 = L_4;
	const Il2CppFullySharedGenericAny L_126 = L_4;
	const Il2CppFullySharedGenericAny L_139 = L_4;
	const Il2CppFullySharedGenericAny L_152 = L_4;
	const Il2CppFullySharedGenericAny L_166 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
	memset(V_0, 0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0249;
	}

IL_0007:
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_searchSpace;
		int32_t L_1 = V_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_6;
		L_6 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_4: *(void**)L_4));
		if (L_6)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_9;
		L_9 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_8, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_7: *(void**)L_7));
		if (L_9)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_12;
		L_12 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_10: *(void**)L_10));
		if (L_12)
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_13 = ___0_searchSpace;
		int32_t L_14 = V_1;
		Il2CppFullySharedGenericAny* L_15;
		L_15 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_16, L_15, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_16, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_19;
		L_19 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_18, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_17: *(void**)L_17));
		if (L_19)
		{
			goto IL_03c2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_22;
		L_22 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_21, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_20: *(void**)L_20));
		if (L_22)
		{
			goto IL_03c2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_25;
		L_25 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_24, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_23: *(void**)L_23));
		if (L_25)
		{
			goto IL_03c2;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_26 = ___0_searchSpace;
		int32_t L_27 = V_1;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_29, L_28, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_29, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_32;
		L_32 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_31, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_30: *(void**)L_30));
		if (L_32)
		{
			goto IL_03c6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_33, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_03c6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_36, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_38;
		L_38 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_37, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_36: *(void**)L_36));
		if (L_38)
		{
			goto IL_03c6;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_39 = ___0_searchSpace;
		int32_t L_40 = V_1;
		Il2CppFullySharedGenericAny* L_41;
		L_41 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_39, ((int32_t)il2cpp_codegen_add(L_40, 3)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_42, L_41, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_42, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_43, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_45;
		L_45 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_44, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_43: *(void**)L_43));
		if (L_45)
		{
			goto IL_03ca;
		}
	}
	{
		il2cpp_codegen_memcpy(L_46, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_48;
		L_48 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_47, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_46: *(void**)L_46));
		if (L_48)
		{
			goto IL_03ca;
		}
	}
	{
		il2cpp_codegen_memcpy(L_49, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_51;
		L_51 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_50, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_49: *(void**)L_49));
		if (L_51)
		{
			goto IL_03ca;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_52 = ___0_searchSpace;
		int32_t L_53 = V_1;
		Il2CppFullySharedGenericAny* L_54;
		L_54 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_52, ((int32_t)il2cpp_codegen_add(L_53, 4)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_55, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_56, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_58;
		L_58 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_57, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_56: *(void**)L_56));
		if (L_58)
		{
			goto IL_03ce;
		}
	}
	{
		il2cpp_codegen_memcpy(L_59, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_61;
		L_61 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_60, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_59: *(void**)L_59));
		if (L_61)
		{
			goto IL_03ce;
		}
	}
	{
		il2cpp_codegen_memcpy(L_62, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_64;
		L_64 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_63, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_62: *(void**)L_62));
		if (L_64)
		{
			goto IL_03ce;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_65 = ___0_searchSpace;
		int32_t L_66 = V_1;
		Il2CppFullySharedGenericAny* L_67;
		L_67 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_65, ((int32_t)il2cpp_codegen_add(L_66, 5)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_68, L_67, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_68, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_69, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_71;
		L_71 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_70, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_69: *(void**)L_69));
		if (L_71)
		{
			goto IL_03d2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_72, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_03d2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_75, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_77;
		L_77 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_76, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_75: *(void**)L_75));
		if (L_77)
		{
			goto IL_03d2;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_78 = ___0_searchSpace;
		int32_t L_79 = V_1;
		Il2CppFullySharedGenericAny* L_80;
		L_80 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_78, ((int32_t)il2cpp_codegen_add(L_79, 6)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_81, L_80, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_81, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_82, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_84;
		L_84 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_83, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_82: *(void**)L_82));
		if (L_84)
		{
			goto IL_03d6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_85, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_87;
		L_87 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_86, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_85: *(void**)L_85));
		if (L_87)
		{
			goto IL_03d6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_88, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_90;
		L_90 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_89, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_88: *(void**)L_88));
		if (L_90)
		{
			goto IL_03d6;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_91 = ___0_searchSpace;
		int32_t L_92 = V_1;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_91, ((int32_t)il2cpp_codegen_add(L_92, 7)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_94, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_95, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_97;
		L_97 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_96, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_95: *(void**)L_95));
		if (L_97)
		{
			goto IL_03da;
		}
	}
	{
		il2cpp_codegen_memcpy(L_98, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_100;
		L_100 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_99, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_98: *(void**)L_98));
		if (L_100)
		{
			goto IL_03da;
		}
	}
	{
		il2cpp_codegen_memcpy(L_101, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_103;
		L_103 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_102, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_101: *(void**)L_101));
		if (L_103)
		{
			goto IL_03da;
		}
	}
	{
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_104, 8));
	}

IL_0249:
	{
		int32_t L_105 = ___4_length;
		int32_t L_106 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_105, L_106))) >= ((int32_t)8)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_107 = ___4_length;
		int32_t L_108 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_107, L_108))) < ((int32_t)4)))
		{
			goto IL_03b9;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_109 = ___0_searchSpace;
		int32_t L_110 = V_1;
		Il2CppFullySharedGenericAny* L_111;
		L_111 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_109, L_110, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_112, L_111, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_112, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_113, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_115;
		L_115 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_114, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_113: *(void**)L_113));
		if (L_115)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_116, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_118;
		L_118 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_117, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_116: *(void**)L_116));
		if (L_118)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_119, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_121;
		L_121 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_120, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_119: *(void**)L_119));
		if (L_121)
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_122 = ___0_searchSpace;
		int32_t L_123 = V_1;
		Il2CppFullySharedGenericAny* L_124;
		L_124 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_122, ((int32_t)il2cpp_codegen_add(L_123, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_125, L_124, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_125, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_126, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_128;
		L_128 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_127, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_126: *(void**)L_126));
		if (L_128)
		{
			goto IL_03c2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_129, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_131;
		L_131 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_130, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_129: *(void**)L_129));
		if (L_131)
		{
			goto IL_03c2;
		}
	}
	{
		il2cpp_codegen_memcpy(L_132, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_134;
		L_134 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_133, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_132: *(void**)L_132));
		if (L_134)
		{
			goto IL_03c2;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_135 = ___0_searchSpace;
		int32_t L_136 = V_1;
		Il2CppFullySharedGenericAny* L_137;
		L_137 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_135, ((int32_t)il2cpp_codegen_add(L_136, 2)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_138, L_137, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_138, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_139, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_141;
		L_141 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_140, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_139: *(void**)L_139));
		if (L_141)
		{
			goto IL_03c6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_142, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_144;
		L_144 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_143, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_142: *(void**)L_142));
		if (L_144)
		{
			goto IL_03c6;
		}
	}
	{
		il2cpp_codegen_memcpy(L_145, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_147;
		L_147 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_146, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_145: *(void**)L_145));
		if (L_147)
		{
			goto IL_03c6;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_148 = ___0_searchSpace;
		int32_t L_149 = V_1;
		Il2CppFullySharedGenericAny* L_150;
		L_150 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_148, ((int32_t)il2cpp_codegen_add(L_149, 3)), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_151, L_150, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_151, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_152, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_154;
		L_154 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_153, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_152: *(void**)L_152));
		if (L_154)
		{
			goto IL_03ca;
		}
	}
	{
		il2cpp_codegen_memcpy(L_155, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_157;
		L_157 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_156, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_155: *(void**)L_155));
		if (L_157)
		{
			goto IL_03ca;
		}
	}
	{
		il2cpp_codegen_memcpy(L_158, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_160;
		L_160 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_159, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_158: *(void**)L_158));
		if (L_160)
		{
			goto IL_03ca;
		}
	}
	{
		int32_t L_161 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_161, 4));
		goto IL_03b9;
	}

IL_0378:
	{
		Il2CppFullySharedGenericAny* L_162 = ___0_searchSpace;
		int32_t L_163 = V_1;
		Il2CppFullySharedGenericAny* L_164;
		L_164 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_162, L_163, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_165, L_164, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(V_0, L_165, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		il2cpp_codegen_memcpy(L_166, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_168;
		L_168 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_167, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_value0 : &___1_value0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_166: *(void**)L_166));
		if (L_168)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_169, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_171;
		L_171 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_170, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_value1 : &___2_value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_169: *(void**)L_169));
		if (L_171)
		{
			goto IL_03c0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_172, V_0, SizeOf_T_t83FB80FC9001BC122AFEEED799DE5282877075A3);
		bool L_174;
		L_174 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), L_173, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_value2 : &___3_value2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_172: *(void**)L_172));
		if (L_174)
		{
			goto IL_03c0;
		}
	}
	{
		int32_t L_175 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_175, 1));
	}

IL_03b9:
	{
		int32_t L_176 = V_1;
		int32_t L_177 = ___4_length;
		if ((((int32_t)L_176) < ((int32_t)L_177)))
		{
			goto IL_0378;
		}
	}
	{
		return (-1);
	}

IL_03c0:
	{
		int32_t L_178 = V_1;
		return L_178;
	}

IL_03c2:
	{
		int32_t L_179 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_03c6:
	{
		int32_t L_180 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_180, 2));
	}

IL_03ca:
	{
		int32_t L_181 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_181, 3));
	}

IL_03ce:
	{
		int32_t L_182 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_182, 4));
	}

IL_03d2:
	{
		int32_t L_183 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_183, 5));
	}

IL_03d6:
	{
		int32_t L_184 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_184, 6));
	}

IL_03da:
	{
		int32_t L_185 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_185, 7));
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t170415969C0F770C1C021A4CA21C7ED48CB49E0E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t02882CCC0AF9FBABF2885A85B0DA24BC46D6B4FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD610EFC470613B433455B12AC9F956D5D8A091AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t2C897A1886FBB90D31AC2BF54693C76721847D2C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tCEDA9A7A86A9124A8FFF028781CB0D7F709616D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFC0A4B4B1F40045391DF43665B6261A6347C487B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tB4D21AFF8DDF2FAF614E5205A25A2A4709D9B4E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m2BE9220188777EBC19BB42403D082EFBAEC22031_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tCBF603E01C68F0184B9163A4FFDBCAD5BAB8D704_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t1706B1C881DA6E6031EF6EF049251587CEA25E36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC4ECD912F2EF09E4B80647906E19D20AD588609E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t13BF6AB91C61274F85CC4AC4A7673B32D4A978EA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tEF2179D9EE3BF142D51B54AE356A48C87CCD46F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t250FC61FA3CE7EBE59D5E5CE666ADEA38220C5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD71AE6E5E729A9A107962F8206D5E1D4915AC2A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4F6A004F91A89EF0FDF17B84CD4CBF5D0E5F9951_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t927CC6B30B622374BD4DF7D4E5A2B61A03C618F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD6A1888A728BF35A9B97CE00C4349CB86C3F7962_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t0480731D4B520C25079410C2B834E1BB013C766F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mD5FFBEB9DEBDAD672625211EEB7528D9BC609A2D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t5CAE71594C3B7DD4A3AF9B1E157F4D8CAFB27BD6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m1F4571E21ED3BCEDA5F3D6BA631EBC05779C74D8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tB05607B96FF1A50155BFB6695D30DB5F666FEB6B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD184BBE738C94A17C3033EFCD17E2A346CEB442F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4D4ED9D9AE7099D1F6958540C7613EE0E936ED91_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisDbRow_tE69172B9B330C70BDF4B5EBFB995CA8E95538BBB_m2C4959897E2FC5585FF5926FE8E893632D5AAD9A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tDF2E15FFD5C8E486C1546BE9DB83A4933F8F5E92_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisStackRow_t9C4A64182B2A24B246EFBB0A6D304051F2CBBC02_mDFB9C2393187F43AB1FC730D5D45EBAA654B3301_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD86D9FC35120379235838D86F3DC3D7A5AD02822_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t06AD0B53F3900A6F2E33EF8B601A7AF5BEB0F416_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t63733233144576C28E01A8F5F2F91E4289D40077_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4E5A9E37491A7A79FD9BFE4257C1FFA4AF0F7D47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_LastIndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3BAECE99C7E5681CEA683C1BEF806B0BC72084A0_gshared (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		goto IL_0108;
	}

IL_0005:
	{
		int32_t L_0 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_0, 8));
		uint8_t* L_1 = ___0_searchSpace;
		int32_t L_2 = ___2_length;
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add<uint8_t,int32_t>(L_1, ((int32_t)il2cpp_codegen_add(L_2, 7)));
		uint8_t L_4 = (*(uint8_t*)L_3);
		bool L_5;
		L_5 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_5)
		{
			goto IL_01d2;
		}
	}
	{
		uint8_t* L_6 = ___0_searchSpace;
		int32_t L_7 = ___2_length;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, ((int32_t)il2cpp_codegen_add(L_7, 6)));
		uint8_t L_9 = (*(uint8_t*)L_8);
		bool L_10;
		L_10 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_9, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_10)
		{
			goto IL_01ce;
		}
	}
	{
		uint8_t* L_11 = ___0_searchSpace;
		int32_t L_12 = ___2_length;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, ((int32_t)il2cpp_codegen_add(L_12, 5)));
		uint8_t L_14 = (*(uint8_t*)L_13);
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_14, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_15)
		{
			goto IL_01ca;
		}
	}
	{
		uint8_t* L_16 = ___0_searchSpace;
		int32_t L_17 = ___2_length;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)));
		uint8_t L_19 = (*(uint8_t*)L_18);
		bool L_20;
		L_20 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_20)
		{
			goto IL_01c6;
		}
	}
	{
		uint8_t* L_21 = ___0_searchSpace;
		int32_t L_22 = ___2_length;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add<uint8_t,int32_t>(L_21, ((int32_t)il2cpp_codegen_add(L_22, 3)));
		uint8_t L_24 = (*(uint8_t*)L_23);
		bool L_25;
		L_25 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_24, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_25)
		{
			goto IL_01c2;
		}
	}
	{
		uint8_t* L_26 = ___0_searchSpace;
		int32_t L_27 = ___2_length;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,int32_t>(L_26, ((int32_t)il2cpp_codegen_add(L_27, 2)));
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_29, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_30)
		{
			goto IL_01be;
		}
	}
	{
		uint8_t* L_31 = ___0_searchSpace;
		int32_t L_32 = ___2_length;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add<uint8_t,int32_t>(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)));
		uint8_t L_34 = (*(uint8_t*)L_33);
		bool L_35;
		L_35 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_35)
		{
			goto IL_01ba;
		}
	}
	{
		uint8_t* L_36 = ___0_searchSpace;
		int32_t L_37 = ___2_length;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add<uint8_t,int32_t>(L_36, L_37);
		uint8_t L_39 = (*(uint8_t*)L_38);
		bool L_40;
		L_40 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_39, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_40)
		{
			goto IL_01b8;
		}
	}

IL_0108:
	{
		int32_t L_41 = ___2_length;
		if ((((int32_t)L_41) >= ((int32_t)8)))
		{
			goto IL_0005;
		}
	}
	{
		int32_t L_42 = ___2_length;
		if ((((int32_t)L_42) < ((int32_t)4)))
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_43 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_43, 4));
		uint8_t* L_44 = ___0_searchSpace;
		int32_t L_45 = ___2_length;
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,int32_t>(L_44, ((int32_t)il2cpp_codegen_add(L_45, 3)));
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_47, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_48)
		{
			goto IL_01c2;
		}
	}
	{
		uint8_t* L_49 = ___0_searchSpace;
		int32_t L_50 = ___2_length;
		uint8_t* L_51;
		L_51 = il2cpp_unsafe_add<uint8_t,int32_t>(L_49, ((int32_t)il2cpp_codegen_add(L_50, 2)));
		uint8_t L_52 = (*(uint8_t*)L_51);
		bool L_53;
		L_53 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_52, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_53)
		{
			goto IL_01be;
		}
	}
	{
		uint8_t* L_54 = ___0_searchSpace;
		int32_t L_55 = ___2_length;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,int32_t>(L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)));
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_57, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_58)
		{
			goto IL_01ba;
		}
	}
	{
		uint8_t* L_59 = ___0_searchSpace;
		int32_t L_60 = ___2_length;
		uint8_t* L_61;
		L_61 = il2cpp_unsafe_add<uint8_t,int32_t>(L_59, L_60);
		uint8_t L_62 = (*(uint8_t*)L_61);
		bool L_63;
		L_63 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_62, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_63)
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_01b8;
	}

IL_0192:
	{
		int32_t L_64 = ___2_length;
		___2_length = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		uint8_t* L_65 = ___0_searchSpace;
		int32_t L_66 = ___2_length;
		uint8_t* L_67;
		L_67 = il2cpp_unsafe_add<uint8_t,int32_t>(L_65, L_66);
		uint8_t L_68 = (*(uint8_t*)L_67);
		bool L_69;
		L_69 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___1_value), L_68, il2cpp_rgctx_method(method->rgctx_data, 4));
		if (L_69)
		{
			goto IL_01b8;
		}
	}

IL_01b2:
	{
		int32_t L_70 = ___2_length;
		if ((((int32_t)L_70) > ((int32_t)0)))
		{
			goto IL_0192;
		}
	}
	{
		return (-1);
	}

IL_01b8:
	{
		int32_t L_71 = ___2_length;
		return L_71;
	}

IL_01ba:
	{
		int32_t L_72 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_01be:
	{
		int32_t L_73 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_73, 2));
	}

IL_01c2:
	{
		int32_t L_74 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_74, 3));
	}

IL_01c6:
	{
		int32_t L_75 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_75, 4));
	}

IL_01ca:
	{
		int32_t L_76 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_76, 5));
	}

IL_01ce:
	{
		int32_t L_77 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_77, 6));
	}

IL_01d2:
	{
		int32_t L_78 = ___2_length;
		return ((int32_t)il2cpp_codegen_add(L_78, 7));
	}
}
// Method Definition Index: 94452
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C_inline (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mC54B129569863427FAE97F7F774DD7E11DF5E456_gshared_inline (Func_3_t04BCD613633CE8BB98EC046F90C4C9B0AA84F0BF* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_arg1, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 905
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_arg1, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t5FF1775B12401142FB01F049710243A07739E6BD_m457013E24F88044CE7F7D8130046A64CE6F5682E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t170415969C0F770C1C021A4CA21C7ED48CB49E0E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisImmutableArray_1_t63DC39B3601731EDBD74BE4717A87AC15C986BC9_mB844A067320109DBAE320F1AD6D433CB8E9DC5DE_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t02882CCC0AF9FBABF2885A85B0DA24BC46D6B4FD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4F4484B8382AAB291D80FBEDFF9D9C4CF056429C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD610EFC470613B433455B12AC9F956D5D8A091AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD778805702F07B4A5FBB1EF83EBC8A643CCDBC15_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t2C897A1886FBB90D31AC2BF54693C76721847D2C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD28E2B19089C4B4DF68BE44094F16F988CBB929A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tED776BA07B921050D08D92A9FB9AC262FF51C42F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD236073BE8618C512762A31F03143628421B4F06_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t0B8019F3E6AB4E0DA6368DE83FE051815AF8EDC3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisDebugDirectoryEntry_t297593285FF20EC0BBA2F660E24CB789738F12CB_m3E7F50435D791473A9B83BB42E16F0C10F5A960D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tCEDA9A7A86A9124A8FFF028781CB0D7F709616D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionRegion_t31A5B2D952E447CF67100F6F431A85FDB4F72014_m6F772C11A39B4B972B5D01C4CFC1FC59C8392F41_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tFC0A4B4B1F40045391DF43665B6261A6347C487B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExportedTypeHandle_t21622FD47A738BAE07BBFF9F47955535A8369198_mA8B0F805DC80456EDE20B5BA6E5C6F27AD1BA6B7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tB4D21AFF8DDF2FAF614E5205A25A2A4709D9B4E4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDD3AC44592FDAD434E3810D473F5E3BB290736FC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t1706B1C881DA6E6031EF6EF049251587CEA25E36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisMethodDefinitionHandle_t810D145BCEA85F1DCA317FE6A1D357EF13335BB8_mC4CD5508882B36F31EEAF33B23440CC8807B6799_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tEF2179D9EE3BF142D51B54AE356A48C87CCD46F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisNamespaceDefinitionHandle_t86D4F8530A780CE649CFA0F740BAC42119688F9A_m5A940E471561E86F49C57FA9E177DFD2B60D6FBD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t250FC61FA3CE7EBE59D5E5CE666ADEA38220C5F4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m62D1BC974FC4438B03CF03EA887C7B0613645867_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD71AE6E5E729A9A107962F8206D5E1D4915AC2A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSectionHeader_t157522D418D4275B15DA60DC7E288188AA5BA4CE_m9FD5E3C71924A1049E4410FD0FBD74F35756AD18_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4F6A004F91A89EF0FDF17B84CD4CBF5D0E5F9951_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisTypeDefinitionHandle_tA3638F59F1C32543E767BF86EEF42CFCDA0CF7B0_mE0BEE1592573CA0C75351D823E0613A4FA4D8944_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t927CC6B30B622374BD4DF7D4E5A2B61A03C618F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE619D6721FC09DD77E1DE96CF0CD78638187A73A_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t932E035F990BA84CB197B79D0DD828CC5F475287_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisBranchInfo_t0957D6E456AD8E32AD58C2B11F3FBBDD955130E1_mAFC066E16BABCDF3BA4D2C30F42C6DC0876A37E8_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_tD184BBE738C94A17C3033EFCD17E2A346CEB442F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisExceptionHandlerInfo_t47B8EBA67F5003C53A3B163FDC5CE22829C1FF28_m30C14E3DAD02430DF6918D66B39311AD1CBD11E5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4D4ED9D9AE7099D1F6958540C7613EE0E936ED91_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisRowCounts_tF0CB7331B4D7FC16FD4AB7C4DF9CC412BA1380CE_m4E85E97534A60105C96D3FA2A01B3114A0EE9235_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t06AD0B53F3900A6F2E33EF8B601A7AF5BEB0F416_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSection_t4C48E8DEE4A07CA15E0D1265A50466D7C0BD8A16_m7E5308A21B6FEBB52BF328D790DDC460D399E740_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t63733233144576C28E01A8F5F2F91E4289D40077_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
// Method Definition Index: 85848
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SpanHelpers_IsReferenceOrContainsReferences_TisSerializedSection_t7CD567571F8A2BA11F41CFB4BFEBA676C843F8B3_mD046CDA9E754FF9416EF9F3AD71945E6A4486C2F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		bool L_0 = ((PerTypeValues_1_t4E5A9E37491A7A79FD9BFE4257C1FFA4AF0F7D47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___IsReferenceOrContainsReferences;
		return L_0;
	}
}
