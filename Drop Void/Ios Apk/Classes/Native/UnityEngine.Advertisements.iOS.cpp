#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Advertisements.Purchasing.IPurchasingEventSender
struct IPurchasingEventSender_t50C2B046DC0186CD6714ED2A40F5E137C8AB039D;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform
struct PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand
struct unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog
struct unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion
struct unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize
struct unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral159E98CAE03BDED0522C8ACCFA36B0B1D3F09C67;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D4D542B0104C9893CE06E8E96A04AA1B1200B07;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE0855C9C91F56F4F5842F4BDBA9C41C9C713AD56;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralFD28190374E8020BFFA63441226A3A4A88D84FA5;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A_m6415074BC8AC295E648C6209417467D9584AD9EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mAB372A363598237DBC481E92ECEF17DE66291FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mFC8E7272CCC2D0B6802C31E5D8CDB42EAD7172ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ApplicationQuit_add_OnApplicationQuitEventHandler_m6B717384EA8AFF41DBA121B62B7A4443BFFAB49A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApplicationQuit_remove_OnApplicationQuitEventHandler_m187AD324A096F38CF3DD37C5D97B16BB41BC833D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerPlaceholder_BackgroundTexture_m0B9AC8DC73940BCFB6EF64C545EB996183398BA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BannerPlaceholder_OnGUI_mBDC7318B3A541A4CE918765BEE8B441416DE93F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoroutineExecutor_Update_mD4F70B307D00AEDC2ED1E76A906A30EA37907C41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CoroutineExecutor__ctor_mF17DB14C13A9AADE22358EF1AA59A86B33AE609A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_Initialize_m261DEB27B76AE7F6CA2C71EDE7666E1368CD1951_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712FUnityEngine_Advertisements_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3UnityEngine_Advertisements_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Purchasing_GetPromoVersion_mEFECB081EBAF2E4C6946C8E1BBF96F24177E0CB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Purchasing_GetPurchasingCatalog_m6F958CF001C4513AF22B86B1DEEE198BF55AD89C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Purchasing_InitiatePurchasingCommand_mE2BD140F9B0999F82323B72C26E03863A7E90C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Purchasing__cctor_m4D96404668FF4A1B91514C71C2972694023C0649_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityLifecycleManager_Dispose_m396389E710831AE9EDF3E1720C3412F4F9F8391A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityLifecycleManager_Post_m6FC3349F84F3854BBF3B4ADCB39C66EB16F4B837_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1027A0DCD37C4F23AC2F667BDB10775725CAB3B6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Queue`1<System.Action>
struct  Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____array_0)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// UnityEngine.Advertisements.BannerOptions
struct  BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.BannerOptions_BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions_BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions_BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * ___U3CclickCallbackU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CshowCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95, ___U3CshowCallbackU3Ek__BackingField_0)); }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * get_U3CshowCallbackU3Ek__BackingField_0() const { return ___U3CshowCallbackU3Ek__BackingField_0; }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E ** get_address_of_U3CshowCallbackU3Ek__BackingField_0() { return &___U3CshowCallbackU3Ek__BackingField_0; }
	inline void set_U3CshowCallbackU3Ek__BackingField_0(BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * value)
	{
		___U3CshowCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshowCallbackU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChideCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95, ___U3ChideCallbackU3Ek__BackingField_1)); }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * get_U3ChideCallbackU3Ek__BackingField_1() const { return ___U3ChideCallbackU3Ek__BackingField_1; }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E ** get_address_of_U3ChideCallbackU3Ek__BackingField_1() { return &___U3ChideCallbackU3Ek__BackingField_1; }
	inline void set_U3ChideCallbackU3Ek__BackingField_1(BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * value)
	{
		___U3ChideCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChideCallbackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CclickCallbackU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95, ___U3CclickCallbackU3Ek__BackingField_2)); }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * get_U3CclickCallbackU3Ek__BackingField_2() const { return ___U3CclickCallbackU3Ek__BackingField_2; }
	inline BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E ** get_address_of_U3CclickCallbackU3Ek__BackingField_2() { return &___U3CclickCallbackU3Ek__BackingField_2; }
	inline void set_U3CclickCallbackU3Ek__BackingField_2(BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * value)
	{
		___U3CclickCallbackU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CclickCallbackU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Advertisements.Purchasing.Purchasing
struct  Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8  : public RuntimeObject
{
public:

public:
};

struct Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields
{
public:
	// System.Type UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingManagerType
	Type_t * ___s_PurchasingManagerType_0;
	// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::s_Initialized
	bool ___s_Initialized_1;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingInitiatePurchaseMethodInfo
	MethodInfo_t * ___s_PurchasingInitiatePurchaseMethodInfo_2;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoVersionMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoVersionMethodInfo_3;
	// System.Reflection.MethodInfo UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoCatalogMethodInfo
	MethodInfo_t * ___s_PurchasingGetPromoCatalogMethodInfo_4;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingManagerClassName
	String_t* ___s_PurchasingManagerClassName_5;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingInitiatePurchaseMethodName
	String_t* ___s_PurchasingInitiatePurchaseMethodName_6;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoVersionMethodName
	String_t* ___s_PurchasingGetPromoVersionMethodName_7;
	// System.String UnityEngine.Advertisements.Purchasing.Purchasing::s_PurchasingGetPromoCatalogMethodName
	String_t* ___s_PurchasingGetPromoCatalogMethodName_8;
	// UnityEngine.Advertisements.Purchasing.IPurchasingEventSender UnityEngine.Advertisements.Purchasing.Purchasing::s_Platform
	RuntimeObject* ___s_Platform_9;

public:
	inline static int32_t get_offset_of_s_PurchasingManagerType_0() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingManagerType_0)); }
	inline Type_t * get_s_PurchasingManagerType_0() const { return ___s_PurchasingManagerType_0; }
	inline Type_t ** get_address_of_s_PurchasingManagerType_0() { return &___s_PurchasingManagerType_0; }
	inline void set_s_PurchasingManagerType_0(Type_t * value)
	{
		___s_PurchasingManagerType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingManagerType_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_1() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_Initialized_1)); }
	inline bool get_s_Initialized_1() const { return ___s_Initialized_1; }
	inline bool* get_address_of_s_Initialized_1() { return &___s_Initialized_1; }
	inline void set_s_Initialized_1(bool value)
	{
		___s_Initialized_1 = value;
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingInitiatePurchaseMethodInfo_2)); }
	inline MethodInfo_t * get_s_PurchasingInitiatePurchaseMethodInfo_2() const { return ___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline MethodInfo_t ** get_address_of_s_PurchasingInitiatePurchaseMethodInfo_2() { return &___s_PurchasingInitiatePurchaseMethodInfo_2; }
	inline void set_s_PurchasingInitiatePurchaseMethodInfo_2(MethodInfo_t * value)
	{
		___s_PurchasingInitiatePurchaseMethodInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingInitiatePurchaseMethodInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodInfo_3() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingGetPromoVersionMethodInfo_3)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoVersionMethodInfo_3() const { return ___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoVersionMethodInfo_3() { return &___s_PurchasingGetPromoVersionMethodInfo_3; }
	inline void set_s_PurchasingGetPromoVersionMethodInfo_3(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoVersionMethodInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoVersionMethodInfo_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingGetPromoCatalogMethodInfo_4)); }
	inline MethodInfo_t * get_s_PurchasingGetPromoCatalogMethodInfo_4() const { return ___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline MethodInfo_t ** get_address_of_s_PurchasingGetPromoCatalogMethodInfo_4() { return &___s_PurchasingGetPromoCatalogMethodInfo_4; }
	inline void set_s_PurchasingGetPromoCatalogMethodInfo_4(MethodInfo_t * value)
	{
		___s_PurchasingGetPromoCatalogMethodInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoCatalogMethodInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingManagerClassName_5() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingManagerClassName_5)); }
	inline String_t* get_s_PurchasingManagerClassName_5() const { return ___s_PurchasingManagerClassName_5; }
	inline String_t** get_address_of_s_PurchasingManagerClassName_5() { return &___s_PurchasingManagerClassName_5; }
	inline void set_s_PurchasingManagerClassName_5(String_t* value)
	{
		___s_PurchasingManagerClassName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingManagerClassName_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingInitiatePurchaseMethodName_6() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingInitiatePurchaseMethodName_6)); }
	inline String_t* get_s_PurchasingInitiatePurchaseMethodName_6() const { return ___s_PurchasingInitiatePurchaseMethodName_6; }
	inline String_t** get_address_of_s_PurchasingInitiatePurchaseMethodName_6() { return &___s_PurchasingInitiatePurchaseMethodName_6; }
	inline void set_s_PurchasingInitiatePurchaseMethodName_6(String_t* value)
	{
		___s_PurchasingInitiatePurchaseMethodName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingInitiatePurchaseMethodName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoVersionMethodName_7() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingGetPromoVersionMethodName_7)); }
	inline String_t* get_s_PurchasingGetPromoVersionMethodName_7() const { return ___s_PurchasingGetPromoVersionMethodName_7; }
	inline String_t** get_address_of_s_PurchasingGetPromoVersionMethodName_7() { return &___s_PurchasingGetPromoVersionMethodName_7; }
	inline void set_s_PurchasingGetPromoVersionMethodName_7(String_t* value)
	{
		___s_PurchasingGetPromoVersionMethodName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoVersionMethodName_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_PurchasingGetPromoCatalogMethodName_8() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_PurchasingGetPromoCatalogMethodName_8)); }
	inline String_t* get_s_PurchasingGetPromoCatalogMethodName_8() const { return ___s_PurchasingGetPromoCatalogMethodName_8; }
	inline String_t** get_address_of_s_PurchasingGetPromoCatalogMethodName_8() { return &___s_PurchasingGetPromoCatalogMethodName_8; }
	inline void set_s_PurchasingGetPromoCatalogMethodName_8(String_t* value)
	{
		___s_PurchasingGetPromoCatalogMethodName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PurchasingGetPromoCatalogMethodName_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_Platform_9() { return static_cast<int32_t>(offsetof(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields, ___s_Platform_9)); }
	inline RuntimeObject* get_s_Platform_9() const { return ___s_Platform_9; }
	inline RuntimeObject** get_address_of_s_Platform_9() { return &___s_Platform_9; }
	inline void set_s_Platform_9(RuntimeObject* value)
	{
		___s_Platform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_9), (void*)value);
	}
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform
struct  PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43  : public RuntimeObject
{
public:

public:
};

struct PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields
{
public:
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<Instance>k__BackingField
	PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * ___U3CInstanceU3Ek__BackingField_0;
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<>f__mgU24cache0
	unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * ___U3CU3Ef__mgU24cache0_1;
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<>f__mgU24cache1
	unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * ___U3CU3Ef__mgU24cache1_2;
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<>f__mgU24cache2
	unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * ___U3CU3Ef__mgU24cache2_3;
	// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize UnityEngine.Advertisements.Purchasing.PurchasingPlatform::<>f__mgU24cache3
	unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * ___U3CU3Ef__mgU24cache3_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_3() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields, ___U3CU3Ef__mgU24cache2_3)); }
	inline unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * get_U3CU3Ef__mgU24cache2_3() const { return ___U3CU3Ef__mgU24cache2_3; }
	inline unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 ** get_address_of_U3CU3Ef__mgU24cache2_3() { return &___U3CU3Ef__mgU24cache2_3; }
	inline void set_U3CU3Ef__mgU24cache2_3(unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * value)
	{
		___U3CU3Ef__mgU24cache2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_4() { return static_cast<int32_t>(offsetof(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields, ___U3CU3Ef__mgU24cache3_4)); }
	inline unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * get_U3CU3Ef__mgU24cache3_4() const { return ___U3CU3Ef__mgU24cache3_4; }
	inline unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 ** get_address_of_U3CU3Ef__mgU24cache3_4() { return &___U3CU3Ef__mgU24cache3_4; }
	inline void set_U3CU3Ef__mgU24cache3_4(unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * value)
	{
		___U3CU3Ef__mgU24cache3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache3_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct  UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * ___m_CoroutineExecutor_1;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * ___m_ApplicationQuit_2;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CoroutineExecutor_1() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6, ___m_CoroutineExecutor_1)); }
	inline CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * get_m_CoroutineExecutor_1() const { return ___m_CoroutineExecutor_1; }
	inline CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 ** get_address_of_m_CoroutineExecutor_1() { return &___m_CoroutineExecutor_1; }
	inline void set_m_CoroutineExecutor_1(CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * value)
	{
		___m_CoroutineExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CoroutineExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ApplicationQuit_2() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6, ___m_ApplicationQuit_2)); }
	inline ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * get_m_ApplicationQuit_2() const { return ___m_ApplicationQuit_2; }
	inline ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A ** get_address_of_m_ApplicationQuit_2() { return &___m_ApplicationQuit_2; }
	inline void set_m_ApplicationQuit_2(ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * value)
	{
		___m_ApplicationQuit_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplicationQuit_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Advertisements.BannerPosition
struct  BannerPosition_t60DC48C51F52965F2FDA14AB77B9C1F0123FD718 
{
public:
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_t60DC48C51F52965F2FDA14AB77B9C1F0123FD718, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.ScaleMode
struct  ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2D41D186D047D8156791981072D8E7F8759ABB49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct  TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.BannerOptions_BannerCallback
struct  BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand
struct  unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog
struct  unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion
struct  unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize
struct  unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_26;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_27;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_28;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_30;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_18() const { return ___m_horizontalScrollbar_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_18() { return &___m_horizontalScrollbar_18; }
	inline void set_m_horizontalScrollbar_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_19() const { return ___m_horizontalScrollbarThumb_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_19() { return &___m_horizontalScrollbarThumb_19; }
	inline void set_m_horizontalScrollbarThumb_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_20() const { return ___m_horizontalScrollbarLeftButton_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_20() { return &___m_horizontalScrollbarLeftButton_20; }
	inline void set_m_horizontalScrollbarLeftButton_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_21() const { return ___m_horizontalScrollbarRightButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_21() { return &___m_horizontalScrollbarRightButton_21; }
	inline void set_m_horizontalScrollbarRightButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_22() const { return ___m_verticalScrollbar_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_22() { return &___m_verticalScrollbar_22; }
	inline void set_m_verticalScrollbar_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_23() const { return ___m_verticalScrollbarThumb_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_23() { return &___m_verticalScrollbarThumb_23; }
	inline void set_m_verticalScrollbarThumb_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_24() const { return ___m_verticalScrollbarUpButton_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_24() { return &___m_verticalScrollbarUpButton_24; }
	inline void set_m_verticalScrollbarUpButton_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_25() const { return ___m_verticalScrollbarDownButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_25() { return &___m_verticalScrollbarDownButton_25; }
	inline void set_m_verticalScrollbarDownButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_26() const { return ___m_ScrollView_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_26() { return &___m_ScrollView_26; }
	inline void set_m_ScrollView_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_27)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_27() const { return ___m_CustomStyles_27; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_27() { return &___m_CustomStyles_27; }
	inline void set_m_CustomStyles_27(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_28)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_28() const { return ___m_Settings_28; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_28() { return &___m_Settings_28; }
	inline void set_m_Settings_28(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_30)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_30() const { return ___m_Styles_30; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_30() { return &___m_Styles_30; }
	inline void set_m_Styles_30(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_30), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_29;
	// UnityEngine.GUISkin_SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_31;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_32;

public:
	inline static int32_t get_offset_of_ms_Error_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_29)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_29() const { return ___ms_Error_29; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_29() { return &___ms_Error_29; }
	inline void set_ms_Error_29(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_31)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_31() const { return ___m_SkinChanged_31; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_31() { return &___m_SkinChanged_31; }
	inline void set_m_SkinChanged_31(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_current_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_32)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_32() const { return ___current_32; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_32() { return &___current_32; }
	inline void set_current_32(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_32), (void*)value);
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct  BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;

public:
	inline static int32_t get_offset_of_aTexture_4() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A, ___aTexture_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_aTexture_4() const { return ___aTexture_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_aTexture_4() { return &___aTexture_4; }
	inline void set_aTexture_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___aTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_BannerPosition_5() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A, ___BannerPosition_5)); }
	inline int32_t get_BannerPosition_5() const { return ___BannerPosition_5; }
	inline int32_t* get_address_of_BannerPosition_5() { return &___BannerPosition_5; }
	inline void set_BannerPosition_5(int32_t value)
	{
		___BannerPosition_5 = value;
	}

	inline static int32_t get_offset_of_BannerOptions_6() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A, ___BannerOptions_6)); }
	inline BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * get_BannerOptions_6() const { return ___BannerOptions_6; }
	inline BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 ** get_address_of_BannerOptions_6() { return &___BannerOptions_6; }
	inline void set_BannerOptions_6(BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * value)
	{
		___BannerOptions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BannerOptions_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsShowing_7() { return static_cast<int32_t>(offsetof(BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A, ___IsShowing_7)); }
	inline bool get_IsShowing_7() const { return ___IsShowing_7; }
	inline bool* get_address_of_IsShowing_7() { return &___IsShowing_7; }
	inline void set_IsShowing_7(bool value)
	{
		___IsShowing_7 = value;
	}
};


// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct  ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___OnApplicationQuitEventHandler_4;

public:
	inline static int32_t get_offset_of_OnApplicationQuitEventHandler_4() { return static_cast<int32_t>(offsetof(ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A, ___OnApplicationQuitEventHandler_4)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_OnApplicationQuitEventHandler_4() const { return ___OnApplicationQuitEventHandler_4; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_OnApplicationQuitEventHandler_4() { return &___OnApplicationQuitEventHandler_4; }
	inline void set_OnApplicationQuitEventHandler_4(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___OnApplicationQuitEventHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnApplicationQuitEventHandler_4), (void*)value);
	}
};


// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct  CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * ___queue_5;

public:
	inline static int32_t get_offset_of_referenceCount_4() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805, ___referenceCount_4)); }
	inline int32_t get_referenceCount_4() const { return ___referenceCount_4; }
	inline int32_t* get_address_of_referenceCount_4() { return &___referenceCount_4; }
	inline void set_referenceCount_4(int32_t value)
	{
		___referenceCount_4 = value;
	}

	inline static int32_t get_offset_of_queue_5() { return static_cast<int32_t>(offsetof(CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805, ___queue_5)); }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * get_queue_5() const { return ___queue_5; }
	inline Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 ** get_address_of_queue_5() { return &___queue_5; }
	inline void set_queue_5(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * value)
	{
		___queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9 (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA (const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m0B9AC8DC73940BCFB6EF64C545EB996183398BA2 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_m67443DF1F88BAAAA9E13A51A9044070A2F26C7E2 (int32_t ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * BannerOptions_get_clickCallback_mD1828DFAF3F84CA39B77945ABE1FA9BEBEFF7E7E_inline (BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_mA9EBB907DC13A22AE5369023B61800CCCDBC2EEC (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E (Type_t * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsDidInitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6 (String_t* ___eventString0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetProductCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetPurchasingVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::InitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_InitiatePurchasingCommand_mE2BD140F9B0999F82323B72C26E03863A7E90C0C (String_t* ___eventString0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C (int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPurchasingCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPurchasingCatalog_m6F958CF001C4513AF22B86B1DEEE198BF55AD89C (const RuntimeMethod* method);
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPromoVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPromoVersion_mEFECB081EBAF2E4C6946C8E1BBF96F24177E0CB2 (const RuntimeMethod* method);
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::Initialize(UnityEngine.Advertisements.Purchasing.IPurchasingEventSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368 (RuntimeObject* ___platform0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::set_Instance(UnityEngine.Advertisements.Purchasing.PurchasingPlatform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3_inline (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m590CF45B5BE07EE23665FBB7E1B8C2C74D13A3E2 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mC47E7E05A255D3ACCDCA1400A954E3A3FA02A817 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog__ctor_m7DD17B5A548D57D975DA13EFF3370F219BCFCD4F (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m3B01B53A52EC1CE26578EC061AA90C632F7626CF (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion__ctor_m7FD3636336B0081D066D1326FCBA083EDE46D59D (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetVersionCallback_m1E0F625490460A10C73F48C32CFFDC491CC5A8DF (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize__ctor_m464BF627B04D98F5FEA743E8C13F2159FBABD427 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mD043FDF5C3D1095A75DB365E077E30075AD2CB77 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * GameObject_GetComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mFC8E7272CCC2D0B6802C31E5D8CDB42EAD7172ED (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * GameObject_AddComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mAB372A363598237DBC481E92ECEF17DE66291FAA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * GameObject_AddComponent_TisApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A_m6415074BC8AC295E648C6209417467D9584AD9EC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(!0)
inline void Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09 (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsPurchasingDispatchReturnEvent(int64_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetDidInitiatePurchasingCommandCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetGetProductCatalogCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetGetVersionCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetInitializePurchasingCallback(Il2CppMethodPointer);
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
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_m5B1A28454D92AB71F2D8AA3F2FEECA755ECC3ED3 (ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m6B717384EA8AFF41DBA121B62B7A4443BFFAB49A (ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationQuit_add_OnApplicationQuitEventHandler_m6B717384EA8AFF41DBA121B62B7A4443BFFAB49A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_2 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_2, ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_5, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_8) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_m187AD324A096F38CF3DD37C5D97B16BB41BC833D (ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationQuit_remove_OnApplicationQuitEventHandler_m187AD324A096F38CF3DD37C5D97B16BB41BC833D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_0 = NULL;
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * V_1 = NULL;
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** L_2 = __this->get_address_of_OnApplicationQuitEventHandler_4();
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = V_1;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_7 = InterlockedCompareExchangeImpl<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *>((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 **)L_2, ((UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)CastclassSealed((RuntimeObject*)L_5, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_8 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_9 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_8) == ((RuntimeObject*)(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_m003906A17266C49FA87D63EA42BA02F60EE6C568 (ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * __this, const RuntimeMethod* method)
{
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_0 = __this->get_OnApplicationQuitEventHandler_4();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_1 = __this->get_OnApplicationQuitEventHandler_4();
		NullCheck(L_1);
		UnityAction_Invoke_mFFF1FFE59D8285F8A81350E6D5C4D791F44F6AC9(L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
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
// UnityEngine.Advertisements.BannerOptions_BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * BannerOptions_get_clickCallback_mD1828DFAF3F84CA39B77945ABE1FA9BEBEFF7E7E (BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * __this, const RuntimeMethod* method)
{
	{
		BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
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
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_m98BD04E49E5A1DF0C3A2BADA8C807F5E9323160F (BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_m7DB57FBE8B77777677F6352C7BDBB5EFF9BC0544 (BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A * __this, const RuntimeMethod* method)
{
	{
		__this->set_IsShowing_7((bool)0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = Color_get_grey_mB2E29B47327F20233856F933DC00ACADEBFDBDFA(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = BannerPlaceholder_BackgroundTexture_m0B9AC8DC73940BCFB6EF64C545EB996183398BA2(((int32_t)320), ((int32_t)50), L_0, /*hidden argument*/NULL);
		__this->set_aTexture_4(L_1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_mBDC7318B3A541A4CE918765BEE8B441416DE93F5 (BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerPlaceholder_OnGUI_mBDC7318B3A541A4CE918765BEE8B441416DE93F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_1 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		bool L_0 = __this->get_IsShowing_7();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_2 = GUISkin_get_box_m3877DF429E9B3E7A4ADF39EAAEA4948DD6C38BB0(L_1, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_3 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_4 = V_1;
		NullCheck(L_4);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_4, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_5 = V_1;
		NullCheck(L_5);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_5, ((int32_t)20), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = V_1;
		V_0 = L_6;
		int32_t L_7 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8 = BannerPlaceholder_GetBannerRect_m67443DF1F88BAAAA9E13A51A9044070A2F26C7E2(L_7, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = __this->get_aTexture_4();
		bool L_10 = GUI_Button_m2D990F18AA1E71C725D759D25935878C8795BCB7(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * L_11 = __this->get_BannerOptions_6();
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0065;
	}

IL_0055:
	{
		BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * L_12 = __this->get_BannerOptions_6();
		NullCheck(L_12);
		BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * L_13 = BannerOptions_get_clickCallback_mD1828DFAF3F84CA39B77945ABE1FA9BEBEFF7E7E_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		BannerCallback_Invoke_mA9EBB907DC13A22AE5369023B61800CCCDBC2EEC(L_13, /*hidden argument*/NULL);
	}

IL_0065:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_16 = __this->get_BannerPosition_5();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_17 = BannerPlaceholder_GetBannerRect_m67443DF1F88BAAAA9E13A51A9044070A2F26C7E2(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_19 = __this->get_aTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(L_18, L_19, 2, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20 = V_2;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21 = V_0;
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_20, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_21, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_m881CDA2C98B36B83F95527649373BE6F5847A9E5 (BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A * __this, int32_t ___bannerPosition0, BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * ___bannerOptions1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bannerPosition0;
		__this->set_BannerPosition_5(L_0);
		BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * L_1 = ___bannerOptions1;
		__this->set_BannerOptions_6(L_1);
		__this->set_IsShowing_7((bool)1);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_m867B1DC07DA4B37516A64596AF076390C4A7237B (BannerPlaceholder_t081632559F0F6DF5D049114C94438B5871A2CE5A * __this, const RuntimeMethod* method)
{
	{
		__this->set_IsShowing_7((bool)0);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * BannerPlaceholder_BackgroundTexture_m0B9AC8DC73940BCFB6EF64C545EB996183398BA2 (int32_t ___width0, int32_t ___height1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BannerPlaceholder_BackgroundTexture_m0B9AC8DC73940BCFB6EF64C545EB996183398BA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_0 = NULL;
	int32_t V_1 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color2;
		*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))) = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = V_2;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_12, L_13, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = V_2;
		NullCheck(L_14);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_14, /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_2;
		return L_15;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  BannerPlaceholder_GetBannerRect_m67443DF1F88BAAAA9E13A51A9044070A2F26C7E2 (int32_t ___position0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___position0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		int32_t L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_1/(int32_t)2)), (int32_t)((int32_t)160)))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		int32_t L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_5), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)320)))))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		int32_t L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_6/(int32_t)2)), (int32_t)((int32_t)160)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_7/(int32_t)2)), (int32_t)((int32_t)25)))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		int32_t L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_11), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)160)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)50)))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		int32_t L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)((int32_t)50)))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		int32_t L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_15 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_16), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)320)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)50)))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		int32_t L_17 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_18 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_17/(int32_t)2)), (int32_t)((int32_t)160)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)50)))))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_mF17DB14C13A9AADE22358EF1AA59A86B33AE609A (CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineExecutor__ctor_mF17DB14C13A9AADE22358EF1AA59A86B33AE609A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = (Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 *)il2cpp_codegen_object_new(Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4_il2cpp_TypeInfo_var);
		Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4(L_0, /*hidden argument*/Queue_1__ctor_mACC1ECFCEB577B20631212FA725036B41E9D3CE4_RuntimeMethod_var);
		__this->set_queue_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_mD4F70B307D00AEDC2ED1E76A906A30EA37907C41 (CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoroutineExecutor_Update_mD4F70B307D00AEDC2ED1E76A906A30EA37907C41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B3_0 = NULL;
	{
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_0 = __this->get_queue_5();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0012:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_2 = __this->get_queue_5();
			NullCheck(L_2);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5(L_2, /*hidden argument*/Queue_1_Dequeue_m89A4FDB09560CA30F458FCD713599446E236FED5_RuntimeMethod_var);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0026;
			}
		}

IL_0020:
		{
			goto IL_002b;
		}

IL_0026:
		{
			NullCheck(G_B4_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B4_0, /*hidden argument*/NULL);
		}

IL_002b:
		{
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_5 = __this->get_queue_5();
			NullCheck(L_5);
			int32_t L_6 = Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_inline(L_5, /*hidden argument*/Queue_1_get_Count_m232CC1FAF848326233C702B3E4860D7EB205A990_RuntimeMethod_var);
			if ((((int32_t)L_6) > ((int32_t)0)))
			{
				goto IL_0012;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
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
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::Initialize(UnityEngine.Advertisements.Purchasing.IPurchasingEventSender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368 (RuntimeObject* ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		bool L_0 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		if (L_0)
		{
			goto IL_0097;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerClassName_5();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_1, (bool)1, Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368_RuntimeMethod_var);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingManagerType_0(L_2);
		Type_t * L_3 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_4 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodName_6();
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_5 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = L_5;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_8);
		NullCheck(L_3);
		MethodInfo_t * L_9 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_3, L_4, L_6, /*hidden argument*/NULL);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodInfo_2(L_9);
		Type_t * L_10 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_11 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodName_7();
		NullCheck(L_10);
		MethodInfo_t * L_12 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_10, L_11, /*hidden argument*/NULL);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodInfo_3(L_12);
		Type_t * L_13 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		String_t* L_14 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodName_8();
		NullCheck(L_13);
		MethodInfo_t * L_15 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_13, L_14, /*hidden argument*/NULL);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodInfo_4(L_15);
		goto IL_008b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006e;
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_16);
		String_t* L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteral159E98CAE03BDED0522C8ACCFA36B0B1D3F09C67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_18, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_009d;
	} // end catch (depth: 1)

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_Initialized_1((bool)1);
		RuntimeObject* L_19 = ___platform0;
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_Platform_9(L_19);
	}

IL_0097:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		bool L_20 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		return L_20;
	}

IL_009d:
	{
		bool L_21 = V_1;
		return L_21;
	}
}
// System.Boolean UnityEngine.Advertisements.Purchasing.Purchasing::InitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Purchasing_InitiatePurchasingCommand_mE2BD140F9B0999F82323B72C26E03863A7E90C0C (String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_InitiatePurchasingCommand_mE2BD140F9B0999F82323B72C26E03863A7E90C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		if (!L_0)
		{
			goto IL_0043;
		}
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingInitiatePurchaseMethodInfo_2();
		Type_t * L_2 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5 = ___eventString0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		NullCheck(L_1);
		RuntimeObject * L_6 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_1, L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_6, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		goto IL_0043;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_8, /*hidden argument*/NULL);
		V_2 = (bool)0;
		goto IL_0045;
	} // end catch (depth: 1)

IL_0043:
	{
		bool L_9 = V_0;
		return L_9;
	}

IL_0045:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPurchasingCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPurchasingCatalog_m6F958CF001C4513AF22B86B1DEEE198BF55AD89C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_GetPurchasingCatalog_m6F958CF001C4513AF22B86B1DEEE198BF55AD89C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		if (!L_0)
		{
			goto IL_003c;
		}
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoCatalogMethodInfo_4();
		Type_t * L_2 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_1);
		RuntimeObject * L_3 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_1, L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		goto IL_003c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		goto IL_003c;
	} // end catch (depth: 1)

IL_003c:
	{
		String_t* L_6 = V_0;
		String_t* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0049;
		}
	}
	{
		G_B5_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}

IL_0049:
	{
		return G_B5_0;
	}
}
// System.String UnityEngine.Advertisements.Purchasing.Purchasing::GetPromoVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Purchasing_GetPromoVersion_mEFECB081EBAF2E4C6946C8E1BBF96F24177E0CB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing_GetPromoVersion_mEFECB081EBAF2E4C6946C8E1BBF96F24177E0CB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_0 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		if (!L_0)
		{
			goto IL_003c;
		}
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		MethodInfo_t * L_1 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingGetPromoVersionMethodInfo_3();
		Type_t * L_2 = ((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->get_s_PurchasingManagerType_0();
		NullCheck(L_1);
		RuntimeObject * L_3 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_1, L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		goto IL_003c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		goto IL_003c;
	} // end catch (depth: 1)

IL_003c:
	{
		String_t* L_6 = V_0;
		String_t* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0049;
		}
	}
	{
		G_B5_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}

IL_0049:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.Purchasing::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Purchasing__cctor_m4D96404668FF4A1B91514C71C2972694023C0649 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Purchasing__cctor_m4D96404668FF4A1B91514C71C2972694023C0649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingManagerClassName_5(_stringLiteralE0855C9C91F56F4F5842F4BDBA9C41C9C713AD56);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingInitiatePurchaseMethodName_6(_stringLiteralFD28190374E8020BFFA63441226A3A4A88D84FA5);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoVersionMethodName_7(_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		((Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_StaticFields*)il2cpp_codegen_static_fields_for(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var))->set_s_PurchasingGetPromoCatalogMethodName_8(_stringLiteral7D4D542B0104C9893CE06E8E96A04AA1B1200B07);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6(char* ___eventString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___eventString0' to managed representation
	String_t* ____eventString0_unmarshaled = NULL;
	____eventString0_unmarshaled = il2cpp_codegen_marshal_string_result(___eventString0);

	// Managed method invocation
	PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6(____eventString0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62(NULL);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform__ctor_m246019D33132E210E081FC0878B7E2BA0545434C (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform UnityEngine.Advertisements.Purchasing.PurchasingPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_0 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::set_Instance(UnityEngine.Advertisements.Purchasing.PurchasingPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3 (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_0 = ___value0;
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingDispatchReturnEvent(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C (int64_t ___eventType0, String_t* ___payload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t, char*);

	// Marshaling of parameter '___payload1' to native representation
	char* ____payload1_marshaled = NULL;
	____payload1_marshaled = il2cpp_codegen_marshal_string(___payload1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsPurchasingDispatchReturnEvent)(___eventType0, ____payload1_marshaled);

	// Marshaling cleanup of parameter '___payload1' native representation
	il2cpp_codegen_marshal_free(____payload1_marshaled);
	____payload1_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetDidInitiatePurchasingCommandCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mC47E7E05A255D3ACCDCA1400A954E3A3FA02A817 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetDidInitiatePurchasingCommandCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetProductCatalogCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m3B01B53A52EC1CE26578EC061AA90C632F7626CF (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetProductCatalogCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetGetVersionCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetGetVersionCallback_m1E0F625490460A10C73F48C32CFFDC491CC5A8DF (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetGetVersionCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsSetInitializePurchasingCallback(UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mD043FDF5C3D1095A75DB365E077E30075AD2CB77 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetInitializePurchasingCallback)(____callback0_marshaled);

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsDidInitiatePurchasingCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6 (String_t* ___eventString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		String_t* L_0 = ___eventString0;
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		bool L_1 = Purchasing_InitiatePurchasingCommand_mE2BD140F9B0999F82323B72C26E03863A7E90C0C(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C((((int64_t)((int64_t)0))), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetProductCatalog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		String_t* L_0 = Purchasing_GetPurchasingCatalog_m6F958CF001C4513AF22B86B1DEEE198BF55AD89C(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C((((int64_t)((int64_t)2))), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingGetPurchasingVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		String_t* L_0 = Purchasing_GetPromoVersion_mEFECB081EBAF2E4C6946C8E1BBF96F24177E0CB2(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C((((int64_t)((int64_t)1))), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::UnityAdsPurchasingInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_0 = PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Purchasing_t3129649BADC263B9CC00688901FED93D18B149E8_il2cpp_TypeInfo_var);
		bool L_1 = Purchasing_Initialize_m7287D5747E5444DEEE00BAD89044FAF3B1830368(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		PurchasingPlatform_UnityAdsPurchasingDispatchReturnEvent_mB8531C9CA7C2F5569E203AFEDF07F33BEB814F5C((((int64_t)((int64_t)3))), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_Initialize_m261DEB27B76AE7F6CA2C71EDE7666E1368CD1951 (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_Initialize_m261DEB27B76AE7F6CA2C71EDE7666E1368CD1951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3_inline(__this, /*hidden argument*/NULL);
		unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * L_0 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * L_1 = (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF *)il2cpp_codegen_object_new(unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF_il2cpp_TypeInfo_var);
		unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m590CF45B5BE07EE23665FBB7E1B8C2C74D13A3E2(L_1, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_mA910F3DE727D91ADBEB097FAB3B268EF78E963B6_RuntimeMethod_var), /*hidden argument*/NULL);
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_1);
	}

IL_001e:
	{
		unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * L_2 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		PurchasingPlatform_UnityAdsSetDidInitiatePurchasingCommandCallback_mC47E7E05A255D3ACCDCA1400A954E3A3FA02A817(L_2, /*hidden argument*/NULL);
		unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * L_3 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * L_4 = (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 *)il2cpp_codegen_object_new(unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetProductCatalog__ctor_m7DD17B5A548D57D975DA13EFF3370F219BCFCD4F(L_4, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m43893984B031353D806A8391B018A96EC3C6707D_RuntimeMethod_var), /*hidden argument*/NULL);
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_2(L_4);
	}

IL_0040:
	{
		unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * L_5 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_2();
		PurchasingPlatform_UnityAdsSetGetProductCatalogCallback_m3B01B53A52EC1CE26578EC061AA90C632F7626CF(L_5, /*hidden argument*/NULL);
		unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * L_6 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_3();
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * L_7 = (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 *)il2cpp_codegen_object_new(unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968_il2cpp_TypeInfo_var);
		unityAdsPurchasingGetPurchasingVersion__ctor_m7FD3636336B0081D066D1326FCBA083EDE46D59D(L_7, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m9BF736A175ED3CD1E0615B4E6B3CFD425F45DB1E_RuntimeMethod_var), /*hidden argument*/NULL);
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_3(L_7);
	}

IL_0062:
	{
		unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * L_8 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_3();
		PurchasingPlatform_UnityAdsSetGetVersionCallback_m1E0F625490460A10C73F48C32CFFDC491CC5A8DF(L_8, /*hidden argument*/NULL);
		unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * L_9 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_4();
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * L_10 = (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 *)il2cpp_codegen_object_new(unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923_il2cpp_TypeInfo_var);
		unityAdsPurchasingInitialize__ctor_m464BF627B04D98F5FEA743E8C13F2159FBABD427(L_10, NULL, (intptr_t)((intptr_t)PurchasingPlatform_UnityAdsPurchasingInitialize_m38A4FD6CB888A8699B9F1E09EEF7FE0CBE72CF62_RuntimeMethod_var), /*hidden argument*/NULL);
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_4(L_10);
	}

IL_0084:
	{
		unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * L_11 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_4();
		PurchasingPlatform_UnityAdsSetInitializePurchasingCallback_mD043FDF5C3D1095A75DB365E077E30075AD2CB77(L_11, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_mA859476434221EEA92E637746E84D3FED8474913 (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		__this->set_m_GameObject_0(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_m_GameObject_0();
		NullCheck(L_4);
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_5 = GameObject_GetComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mFC8E7272CCC2D0B6802C31E5D8CDB42EAD7172ED(L_4, /*hidden argument*/GameObject_GetComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mFC8E7272CCC2D0B6802C31E5D8CDB42EAD7172ED_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_5);
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_6 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_8 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_referenceCount_4();
		NullCheck(L_9);
		L_9->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		return;
	}

IL_0054:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_11, /*hidden argument*/NULL);
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0066:
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, /*hidden argument*/NULL);
		V_1 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		NullCheck(L_13);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_13, 3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_1;
		__this->set_m_GameObject_0(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_m_GameObject_0();
		NullCheck(L_15);
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_16 = GameObject_AddComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mAB372A363598237DBC481E92ECEF17DE66291FAA(L_15, /*hidden argument*/GameObject_AddComponent_TisCoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805_mAB372A363598237DBC481E92ECEF17DE66291FAA_RuntimeMethod_var);
		__this->set_m_CoroutineExecutor_1(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_m_GameObject_0();
		NullCheck(L_17);
		ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A * L_18 = GameObject_AddComponent_TisApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A_m6415074BC8AC295E648C6209417467D9584AD9EC(L_17, /*hidden argument*/GameObject_AddComponent_TisApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A_m6415074BC8AC295E648C6209417467D9584AD9EC_RuntimeMethod_var);
		__this->set_m_ApplicationQuit_2(L_18);
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_19 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_referenceCount_4();
		NullCheck(L_20);
		L_20->set_referenceCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_m6FC3349F84F3854BBF3B4ADCB39C66EB16F4B837 (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLifecycleManager_Post_m6FC3349F84F3854BBF3B4ADCB39C66EB16F4B837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B7_0 = NULL;
	Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * G_B6_0 = NULL;
	{
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_0 = __this->get_m_CoroutineExecutor_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		UnityLifecycleManager_Initialize_mCCCCF32D191A3FB5F45C0E502306C369760027AB(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_2 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_2);
		Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_3 = L_2->get_queue_5();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_5 = __this->get_m_CoroutineExecutor_1();
			if (L_5)
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_004f;
		}

IL_0035:
		{
			CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_6 = __this->get_m_CoroutineExecutor_1();
			NullCheck(L_6);
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_7 = L_6->get_queue_5();
			Queue_1_t1CEAFBBE28DBFFBB495734A06904F4783D889BD4 * L_8 = L_7;
			G_B6_0 = L_8;
			if (L_8)
			{
				G_B7_0 = L_8;
				goto IL_0049;
			}
		}

IL_0043:
		{
			goto IL_004f;
		}

IL_0049:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = ___action0;
			NullCheck(G_B7_0);
			Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09(G_B7_0, L_9, /*hidden argument*/Queue_1_Enqueue_m3207A44EE0E775C2C6190CCB28FF399A6592BE09_RuntimeMethod_var);
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(84)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_m396389E710831AE9EDF3E1720C3412F4F9F8391A (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLifecycleManager_Dispose_m396389E710831AE9EDF3E1720C3412F4F9F8391A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Disposed_3();
		if (L_0)
		{
			goto IL_0055;
		}
	}
	{
		__this->set_m_Disposed_3((bool)1);
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_1 = __this->get_m_CoroutineExecutor_1();
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_referenceCount_4();
		NullCheck(L_2);
		L_2->set_referenceCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)));
		CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 * L_4 = __this->get_m_CoroutineExecutor_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_referenceCount_4();
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_m_GameObject_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_6, /*hidden argument*/NULL);
	}

IL_0040:
	{
		__this->set_m_GameObject_0((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		__this->set_m_CoroutineExecutor_1((CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805 *)NULL);
		__this->set_m_ApplicationQuit_2((ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A *)NULL);
	}

IL_0055:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions_BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_mFE0AADACDEB3B70F4089AB9C6166E7EC8C8E6DA0 (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.BannerOptions_BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_mA9EBB907DC13A22AE5369023B61800CCCDBC2EEC (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.BannerOptions_BannerCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BannerCallback_BeginInvoke_mF7CCBDB6881B0808302DC2CEAF1D0F36E20D37A5 (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.BannerOptions_BannerCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_EndInvoke_m854BCF7E45908B620CB6DA373C9690AA2412122A (BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___eventString0' to native representation
	char* ____eventString0_marshaled = NULL;
	____eventString0_marshaled = il2cpp_codegen_marshal_string(___eventString0);

	// Native function invocation
	il2cppPInvokeFunc(____eventString0_marshaled);

	// Marshaling cleanup of parameter '___eventString0' native representation
	il2cpp_codegen_marshal_free(____eventString0_marshaled);
	____eventString0_marshaled = NULL;

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand__ctor_m590CF45B5BE07EE23665FBB7E1B8C2C74D13A3E2 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand_Invoke_m8179A1B95A43E59F75F19F134B7B00E067E634CF (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, String_t* ___eventString0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventString0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___eventString0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___eventString0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___eventString0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___eventString0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventString0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventString0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___eventString0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___eventString0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventString0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingDidInitiatePurchasingCommand_BeginInvoke_mD635CCA1DA5CD6EF0BE7858C7C40585A00EAE0E2 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, String_t* ___eventString0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___eventString0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingDidInitiatePurchasingCommand::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingDidInitiatePurchasingCommand_EndInvoke_mBF4B5A63A3858DCC86D2A5C4163AEBF289C6EC11 (unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog__ctor_m7DD17B5A548D57D975DA13EFF3370F219BCFCD4F (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog_Invoke_m5B0DF2F58EBA98B06DC997C4731D9F166D36675E (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingGetProductCatalog_BeginInvoke_mA11FA3016DF5524A17CF7B1A7BF53E172CC397EE (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetProductCatalog::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetProductCatalog_EndInvoke_m3E8C990CEEF3AEFB00C5DD9D5999B3AD92BB7048 (unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion__ctor_m7FD3636336B0081D066D1326FCBA083EDE46D59D (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion_Invoke_mACB792C34954817D9979AEA8B88069D78BB1C410 (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingGetPurchasingVersion_BeginInvoke_m4E96E1278CE599A130250F97298B124572AA5354 (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingGetPurchasingVersion::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingGetPurchasingVersion_EndInvoke_mF44F708DB6334FB311740E358F230008898DC440 (unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize__ctor_m464BF627B04D98F5FEA743E8C13F2159FBABD427 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize_Invoke_m4689AD3EFB2140A44E2B47CB359AD6AB9B16C87D (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAdsPurchasingInitialize_BeginInvoke_m2F511701FE0C01816052D3A8026BF38A65DE6AA1 (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform_unityAdsPurchasingInitialize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAdsPurchasingInitialize_EndInvoke_mC34DD292E548943AA5FA0027EE2E9B9353AC151F (unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * BannerOptions_get_clickCallback_mD1828DFAF3F84CA39B77945ABE1FA9BEBEFF7E7E_inline (BannerOptions_tD33C8A224892660DCA42FB6B5C234CAB85819C95 * __this, const RuntimeMethod* method)
{
	{
		BannerCallback_tE2B2B6886BF46DA34333F413D49E2A4419EB204E * L_0 = __this->get_U3CclickCallbackU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_get_Instance_mA2099BC01A58C7F1AEEBD66DEF1F45A84D39712FUnityEngine_Advertisements_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_0 = ((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3_inline (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchasingPlatform_set_Instance_m01DAC211CD3292C029C1E7CDC3750CC7356590F3UnityEngine_Advertisements_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_0 = ___value0;
		((PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_StaticFields*)il2cpp_codegen_static_fields_for(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
