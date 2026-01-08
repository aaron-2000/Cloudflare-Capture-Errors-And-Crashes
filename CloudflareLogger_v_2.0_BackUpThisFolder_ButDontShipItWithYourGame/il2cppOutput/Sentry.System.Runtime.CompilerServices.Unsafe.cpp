#include "pch-cpp.hpp"






struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct EmbeddedAttribute_t4DA51D6689706B37140DB557F3FC42F2DB58AF8A;
struct IsReadOnlyAttribute_tC489F0F6C78F5F16389E83DF45E12E23E19AC6A0;
struct NativeIntegerAttribute_t6836839CA4CFE50074B62F046D5DFF46A90BD3D7;
struct NonVersionableAttribute_t90480F0DF1E2B92D57FE7CD79553EF355FD55898;
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tE570E1DABA1CF420DE9AF12C60257A1BF3D84B1F 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct Unsafe_t159D20568E40CBEC8CA2AF52C829C09989B13E8D  : public RuntimeObject
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct EmbeddedAttribute_t4DA51D6689706B37140DB557F3FC42F2DB58AF8A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct IsReadOnlyAttribute_tC489F0F6C78F5F16389E83DF45E12E23E19AC6A0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct NativeIntegerAttribute_t6836839CA4CFE50074B62F046D5DFF46A90BD3D7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct NonVersionableAttribute_t90480F0DF1E2B92D57FE7CD79553EF355FD55898  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 94451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_m9B96B1B129E1FFE50097FD710BDCEA559D2169F4 (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlock_mB4D2A1379D35E39203FE9AB2820C3EF75F95B12C (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m04172B36E0DAA77AA4DA48264F4536EABDA5CED3 (void* ___0_destination, void* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		void* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_CopyBlockUnaligned_m4132A753CB688EA10007FCEDCD91EAA9848E8733 (uint8_t* ___0_destination, uint8_t* ___1_source, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1 = ___1_source;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memcpy(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_mD44DF41C4DB940A6D880C986A40261369FB81634 (void* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlock_m996B5E6BB30A8E0835C99AD167AD69492E06FBC1 (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6CCB6018CBE4054DB6D8273C814CF40048271862 (void* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 94458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m20E4F93B73FEEEFC709D54A9CEEDCB914DDE6A52 (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_startAddress;
		uint8_t L_1 = ___1_value;
		uint32_t L_2 = ___2_byteCount;
		il2cpp_codegen_memset(L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 94482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonVersionableAttribute__ctor_m0BA0A1742AA85E74FF14E54ABB6BCF369D07F43A (NonVersionableAttribute_t90480F0DF1E2B92D57FE7CD79553EF355FD55898* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 94483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mEF0894B98FB3471134B4D62C4483520867C5704F (IsReadOnlyAttribute_tC489F0F6C78F5F16389E83DF45E12E23E19AC6A0* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 94484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m3968675BD390C377F44AB6174660CDB267BD46D5 (NativeIntegerAttribute_t6836839CA4CFE50074B62F046D5DFF46A90BD3D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)1);
		__this->___TransformFlags = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_1);
		return;
	}
}
// Method Definition Index: 94485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeIntegerAttribute__ctor_m38CC422A504177E82F178ED9D7DCF3830F5406FC (NativeIntegerAttribute_t6836839CA4CFE50074B62F046D5DFF46A90BD3D7* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_A_0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_A_0;
		__this->___TransformFlags = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TransformFlags), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 94486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m900004AD66B10548C6C2DB66830FAECE4BDA6D2C (EmbeddedAttribute_t4DA51D6689706B37140DB557F3FC42F2DB58AF8A* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
