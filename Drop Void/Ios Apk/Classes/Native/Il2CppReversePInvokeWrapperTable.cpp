#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Monetization.ShowResult
struct  ShowResult_t92F096726EA586A94ABCE45E6F40F4A099D4E91D 
{
public:
	// System.Int32 UnityEngine.Monetization.ShowResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShowResult_t92F096726EA586A94ABCE45E6F40F4A099D4E91D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6(char* ___eventString0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A(char* ___extras0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2(int32_t ___result0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F(char* ___placementId0, intptr_t ___placementContent1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC(char* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10(int64_t ___error0, char* ___message1);


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[13] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10),
};
