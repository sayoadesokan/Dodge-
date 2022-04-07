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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t4BE29659C607003789AD7DC3D59E5B8CB038091A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_t468D6E5FF9F1ADA3CC2D31EE9574EBDF6B0E5805;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.Monetization.IMonetizationPlatform
struct IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6;
// UnityEngine.Monetization.IPlacementContentOperations
struct IPlacementContentOperations_tD9EBB09F0842A9838D7D51321003B3AD518BC01E;
// UnityEngine.Monetization.IPromoAdOperations
struct IPromoAdOperations_t50C1774D25DD9DBE44033C96699F23BE70E68C75;
// UnityEngine.Monetization.IRewardedOperations
struct IRewardedOperations_t77E0FD222A8FE3F8D8E2687835A65DF32CE14016;
// UnityEngine.Monetization.IShowAdOperations
struct IShowAdOperations_tF011A374A90BFBC07FD6A12CCF4B1C8C3ECAC97C;
// UnityEngine.Monetization.IosAnalytics
struct IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A;
// UnityEngine.Monetization.IosPlacementContentOperations
struct IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234;
// UnityEngine.Monetization.IosPromoAdOperations
struct IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097;
// UnityEngine.Monetization.IosRewardedOperations
struct IosRewardedOperations_tE0436EE6504404F80807B1584BB305EA64F1F6B3;
// UnityEngine.Monetization.IosShowAdOperations
struct IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Monetization.MetaData
struct MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Monetization.Placeholder
struct Placeholder_t388F859DD4536E470772567760268E218C2BE406;
// UnityEngine.Monetization.PlacementContent
struct PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B;
// UnityEngine.Monetization.PlacementContentReadyEventArgs
struct PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D;
// UnityEngine.Monetization.PlacementContentStateChangeEventArgs
struct PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2;
// UnityEngine.Monetization.Platform
struct Platform_t3CA6706D896B21AE91B279233D2964C16710E98B;
// UnityEngine.Monetization.Product
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749;
// UnityEngine.Monetization.PromoAdPlacementContent
struct PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3;
// UnityEngine.Monetization.PromoItem
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360;
// UnityEngine.Monetization.RewardablePlacementContent
struct RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// UnityEngine.Monetization.ShowAdFinishCallback
struct ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11;
// UnityEngine.Monetization.ShowAdPlacementContent
struct ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF;
// UnityEngine.Monetization.ShowAdStartCallback
struct ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A;
// UnityEngine.Monetization.ShowAdYield
struct ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Monetization.UnityServicesErrorEventArgs
struct UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377;
// UnityEngine.Monetization.UnsupportedPlatform
struct UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UnityEngine.Monetization.IosAnalytics/unityAnalyticsTriggerAddExtras
struct unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8;
// UnityEngine.Monetization.IosShowAdOperations/<FinishHandler>c__AnonStorey0
struct U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F;
// UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs
struct AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507;
// UnityEngine.Monetization.MiniJSON.Json/Parser
struct Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8;
// UnityEngine.Monetization.MiniJSON.Json/Serializer
struct Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2;
// UnityEngine.Monetization.Platform/<OnNativePlacementContentReady>c__AnonStorey0
struct U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247;
// UnityEngine.Monetization.Platform/<OnNativePlacementContentStateChanged>c__AnonStorey1
struct U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA;
// UnityEngine.Monetization.Platform/<OnNativePlacementContentStateChanged>c__AnonStorey2
struct U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingDidInitiatePurchasingCommand
struct unityAdsPurchasingDidInitiatePurchasingCommand_t450B90B5ADACF3BCCCE9D188B73290BAC3B3E1AF;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetProductCatalog
struct unityAdsPurchasingGetProductCatalog_tBD20F8E88776D64F644974367EB449FB53022FE2;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingGetPurchasingVersion
struct unityAdsPurchasingGetPurchasingVersion_t4A7E2E4A54C4ADA35BA883CCD8E106BC8C6A6968;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform/unityAdsPurchasingInitialize
struct unityAdsPurchasingInitialize_t721166EC9417B9D785CFC8C84ADA55F1FFEE1923;
// UnityEngine.Monetization.ShowAdPlacementContent/<Show>c__AnonStorey0
struct U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnErrorCallback
struct OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30;
// UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnPlacementContentReadyCallback
struct OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C;
// UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnPlacementContentStateChangedCallback
struct OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74;
// UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202;
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContent>
struct Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>
struct Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.EventHandler`1<UnityEngine.Monetization.PlacementContentReadyEventArgs>
struct EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785;
// System.EventHandler`1<UnityEngine.Monetization.PlacementContentStateChangeEventArgs>
struct EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8;
// System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>
struct EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1;
// System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs>
struct EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>
struct IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>
struct IDictionary_2_t42CB8C2559D87F45DCC3D354B4FB964E4306F382;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Monetization.PlacementContent>
struct KeyCollection_t50FEA982391F46F6EA03222C748618CA98120B0D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Monetization.PlacementContentType>
struct KeyCollection_t200DB05B9609B2ED006170A19C98517C576E8904;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Monetization.PlacementContent>
struct ValueCollection_t921A061AB6B767E5EA1E5E0B2AF8D72CE38F72D0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Monetization.PlacementContentType>
struct ValueCollection_t922442419A91CB49C759EC4635B69FCB947F1DDA;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Monetization.PlacementContent>[]
struct EntryU5BU5D_t34600A9C774EEBE710392537B3B34C4DAD907E7C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Monetization.PlacementContentType>[]
struct EntryU5BU5D_t0A6086C50F15CD31FB32EC88EC09173A3617F08E;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_tDF6F8C92E8EEB332498A16D9A28E6E37AB8AFA07;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
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
// UnityEngine.Monetization.PromoItem[]
struct PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55;
// UnityEngine.Advertisements.Purchasing.PurchasingPlatform
struct PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;

IL2CPP_EXTERN_C RuntimeClass* Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t42CB8C2559D87F45DCC3D354B4FB964E4306F382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPromoAdOperations_t50C1774D25DD9DBE44033C96699F23BE70E68C75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IShowAdOperations_tF011A374A90BFBC07FD6A12CCF4B1C8C3ECAC97C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_tDF6F8C92E8EEB332498A16D9A28E6E37AB8AFA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowResult_t92F096726EA586A94ABCE45E6F40F4A099D4E91D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A05F966C448D0FD18C918766B523D576C657BA9;
IL2CPP_EXTERN_C String_t* _stringLiteral10590099A63B60578060E167E455B4E51D074470;
IL2CPP_EXTERN_C String_t* _stringLiteral1317CF02F3F3926703DF869C594244C35D400F6A;
IL2CPP_EXTERN_C String_t* _stringLiteral18679B43A06DA25B1A1D8CD6C08BB8A4C5E229DB;
IL2CPP_EXTERN_C String_t* _stringLiteral1A41E3C18FFD98C6713CDD8CC14C2714DB7ACE5B;
IL2CPP_EXTERN_C String_t* _stringLiteral2466D6C8BB3FC5F5AE8CC45F146CF52249B90642;
IL2CPP_EXTERN_C String_t* _stringLiteral269B276065AA2FD25E2FC1E4ED6E8FBDFB83D44D;
IL2CPP_EXTERN_C String_t* _stringLiteral29873ED7BF4D9C2274D1255FDAC2BDB0568B3E80;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2F635357E5FEC863042F5E6D0C8D1E573C4B2B52;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9D6BE9ED0695031C1172B2312E305D1598421D;
IL2CPP_EXTERN_C String_t* _stringLiteral395C75DAFC96AE1C9B89E497397FF16296D6A49E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral3CAD586069D825336BB926A6885F14CD8387E428;
IL2CPP_EXTERN_C String_t* _stringLiteral3E5A9053249DBE20AD4567649EF4747DDCAB8FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral5827561F28381559DB55AE5BECDB975B4C21C317;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6A659F2B5C01542D3F9AC0ECBD286AC45CAAFBE6;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral75C31F921190D23025E4798404BE5CF780FD77C3;
IL2CPP_EXTERN_C String_t* _stringLiteral77703AFDD859337C4E07BF3653719EAA41AE948E;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF54FBDB79A782B92813B9F989D9F88E2014B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral8C721E9C23CBA46D8FE304BE8A12021C466E2F32;
IL2CPP_EXTERN_C String_t* _stringLiteral8D0F3D8C434A2A8C41F0FF6F8575715A9C3E47CF;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE234BF7086CE6171766043BF45BA029090B703;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9612547B7B21E8E91ECA6701AFAE9239B1461294;
IL2CPP_EXTERN_C String_t* _stringLiteral97477674B4FAEABB7EF4572E35FA41BB43976360;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral9BD14BD1AB98100D0A2E4F1746AF3C642D563A34;
IL2CPP_EXTERN_C String_t* _stringLiteral9DBBA9026B14633D4AEB9F9B3E79D9DAA5687F90;
IL2CPP_EXTERN_C String_t* _stringLiteralA150492C0B6DBDEF449EC1A258A399B9EFEF880B;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9A28D66793160C504DD8F9507163593DBAF0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC16A75A5226763D4A88C0B4C11588FFC574435F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralC781D5A1BA3A0018886B3596240708A950C073B3;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC18C640F78369BEAC229EC6D467F636AEAF7BD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD109F8C18D98178489430D8CAC2B8B4A2575550D;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE0228745E227EA8D7812EA85DF6FB01E66F3535A;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralEA9719ECDAC1DE837C524AE48BF34A1DE4C7D702;
IL2CPP_EXTERN_C String_t* _stringLiteralEEA06E7856F9193806A07E5D988E95B2981E1620;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF51C0F9CE38D4A8832919DB2A9A19DC212BB790E;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B058782EE1BA819AFC565B4FBA3C90CC9A9F36;
IL2CPP_EXTERN_C String_t* _stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mDEC5DC4B8F9E25929AB8A7FB5D059D7A0DDA90CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2E7D8054C40A2CCBA4240698380C04F4A768E5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7544D4263000A3B262B0A8777199D57885F1F98E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m0F267EEA688520BCCCAB71283DED72317DD3DA9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m2FE8206E1952FA462F0EF4CD50548B38272FA9A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mBD48CAE7B84D441AB920E7D312D9207B46F8E814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mCFF0376B743C5D708D0E4823F63447D014CAF894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mF6B0B4FA789A8B5BE08AC975938B6366DBC83951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Analytics__cctor_m5AA23D8A43EFA1C6FA0252FE36B4006274EF8638_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215UnityEngine_Monetization_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_Show_m478B3D02F1EA7777B15B2A74E075E49F4C5767F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_GetPlacementContent_mC9FB6BD2A2FEB6A742DF8DDB284C228AB9FFAE15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_Initialize_mDF1D1F08799564B8F300DB4C0507351261A8DFD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_IsReady_m0BEBFFCEBDFAD89D854C3481D8C37265C2595093_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization__cctor_m15A8872B1A25BCC3DA66C66D006BFD73EB88F6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0UnityEngine_Monetization_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7UnityEngine_Monetization_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnErrorCallback_BeginInvoke_mB560035D4D3D6C570E4176578D469CED5883194B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPlacementContentReadyCallback_BeginInvoke_mFE4F390B1B9BC7A71C5F3225166652F8F993CE5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPlacementContentStateChangedCallback_BeginInvoke_m48817263A145FEF8EDF67C52ADB0AB56C878FA11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_Awake_m09CEF99F85BB7AF04AE046C401E6435AC348C3E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_OnGUI_mB177A7010188F5942209969FA862F4D76F592027_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_add_onFinish_m81A539110A0E54EE7CB6CE12BB300A031D529264_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_add_onStart_m1424BE3F3C16C13099CDF7B981B70C30981B9E40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_remove_onFinish_m467402379788590BAEF37D78401E71901185F06B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Placeholder_remove_onStart_m921D1406E2184705FA31128C74E26EE0F29B1165_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper__cctor_m1972E1BCD087BEDE15FF362358EFE6CF7B4E498D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480DUnityEngine_Monetization_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51UnityEngine_Monetization_iOS_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetPlacementContent_mEAF4E9BCC75E68266E91AA3A79F66CCB8A98BB68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_Initialize_m6AE746F98A64A5F5105AF115B1889818563E24A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_IsReady_m0481099A2684D49432CE2E711553A36078A81766_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_SetMetaData_m67CC76B190FB2E83018026CDD72B34F152ED95D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__cctor_m0314C5697872BAF6856977DE8EC9ABBC1D3677E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_add_onError_mDF22B9541BC65ABC702B17552399E33806E393B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_get_version_mDABC3E98F5FE88026F5DA15D15CBA9847DD3292C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_remove_onError_mFDCCEA5BBDD433C26D9429AB2F499FB0C997EFD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowAdFinishCallback_BeginInvoke_m2A6F9BE3C8CC66A863671A059EBC591C48117B66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowAdPlacementContent_Show_mC52CACC70A3FA7177A087F9ED12B3A20CA52287C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368_MetadataUsageId;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749;;
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com;
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com;;
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke;
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke;;
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360;;
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com;
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com;;
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke;
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke;;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202;;
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke;
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke;;

struct Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t18678548F886CBC2E1F3E1E1F9BB237DB63A2DF3 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContent>
struct  Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t34600A9C774EEBE710392537B3B34C4DAD907E7C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t50FEA982391F46F6EA03222C748618CA98120B0D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t921A061AB6B767E5EA1E5E0B2AF8D72CE38F72D0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___entries_1)); }
	inline EntryU5BU5D_t34600A9C774EEBE710392537B3B34C4DAD907E7C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t34600A9C774EEBE710392537B3B34C4DAD907E7C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t34600A9C774EEBE710392537B3B34C4DAD907E7C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___keys_7)); }
	inline KeyCollection_t50FEA982391F46F6EA03222C748618CA98120B0D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t50FEA982391F46F6EA03222C748618CA98120B0D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t50FEA982391F46F6EA03222C748618CA98120B0D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ___values_8)); }
	inline ValueCollection_t921A061AB6B767E5EA1E5E0B2AF8D72CE38F72D0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t921A061AB6B767E5EA1E5E0B2AF8D72CE38F72D0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t921A061AB6B767E5EA1E5E0B2AF8D72CE38F72D0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>
struct  Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0A6086C50F15CD31FB32EC88EC09173A3617F08E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t200DB05B9609B2ED006170A19C98517C576E8904 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t922442419A91CB49C759EC4635B69FCB947F1DDA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___entries_1)); }
	inline EntryU5BU5D_t0A6086C50F15CD31FB32EC88EC09173A3617F08E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0A6086C50F15CD31FB32EC88EC09173A3617F08E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0A6086C50F15CD31FB32EC88EC09173A3617F08E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___keys_7)); }
	inline KeyCollection_t200DB05B9609B2ED006170A19C98517C576E8904 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t200DB05B9609B2ED006170A19C98517C576E8904 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t200DB05B9609B2ED006170A19C98517C576E8904 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ___values_8)); }
	inline ValueCollection_t922442419A91CB49C759EC4635B69FCB947F1DDA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t922442419A91CB49C759EC4635B69FCB947F1DDA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t922442419A91CB49C759EC4635B69FCB947F1DDA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Monetization.Analytics
struct  Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36  : public RuntimeObject
{
public:

public:
};

struct Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields
{
public:
	// System.String UnityEngine.Monetization.Analytics::s_StandardEventsClassName
	String_t* ___s_StandardEventsClassName_0;
	// System.Type UnityEngine.Monetization.Analytics::s_StandardEventsType
	Type_t * ___s_StandardEventsType_1;
	// System.String UnityEngine.Monetization.Analytics::s_StandardEventsRegisterMethodName
	String_t* ___s_StandardEventsRegisterMethodName_2;
	// System.String UnityEngine.Monetization.Analytics::s_StandardEventsUnregisterMethodName
	String_t* ___s_StandardEventsUnregisterMethodName_3;
	// System.Reflection.MethodInfo UnityEngine.Monetization.Analytics::s_StandardEventsRegisterMethodInfo
	MethodInfo_t * ___s_StandardEventsRegisterMethodInfo_4;
	// System.Reflection.MethodInfo UnityEngine.Monetization.Analytics::s_StandardEventsUnregisterMethodInfo
	MethodInfo_t * ___s_StandardEventsUnregisterMethodInfo_5;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.Analytics::s_StandardEventsExtras
	RuntimeObject* ___s_StandardEventsExtras_6;
	// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> UnityEngine.Monetization.Analytics::s_StandardEventsAction
	Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * ___s_StandardEventsAction_7;

public:
	inline static int32_t get_offset_of_s_StandardEventsClassName_0() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsClassName_0)); }
	inline String_t* get_s_StandardEventsClassName_0() const { return ___s_StandardEventsClassName_0; }
	inline String_t** get_address_of_s_StandardEventsClassName_0() { return &___s_StandardEventsClassName_0; }
	inline void set_s_StandardEventsClassName_0(String_t* value)
	{
		___s_StandardEventsClassName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsClassName_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsType_1() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsType_1)); }
	inline Type_t * get_s_StandardEventsType_1() const { return ___s_StandardEventsType_1; }
	inline Type_t ** get_address_of_s_StandardEventsType_1() { return &___s_StandardEventsType_1; }
	inline void set_s_StandardEventsType_1(Type_t * value)
	{
		___s_StandardEventsType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsType_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsRegisterMethodName_2() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsRegisterMethodName_2)); }
	inline String_t* get_s_StandardEventsRegisterMethodName_2() const { return ___s_StandardEventsRegisterMethodName_2; }
	inline String_t** get_address_of_s_StandardEventsRegisterMethodName_2() { return &___s_StandardEventsRegisterMethodName_2; }
	inline void set_s_StandardEventsRegisterMethodName_2(String_t* value)
	{
		___s_StandardEventsRegisterMethodName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsRegisterMethodName_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsUnregisterMethodName_3() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsUnregisterMethodName_3)); }
	inline String_t* get_s_StandardEventsUnregisterMethodName_3() const { return ___s_StandardEventsUnregisterMethodName_3; }
	inline String_t** get_address_of_s_StandardEventsUnregisterMethodName_3() { return &___s_StandardEventsUnregisterMethodName_3; }
	inline void set_s_StandardEventsUnregisterMethodName_3(String_t* value)
	{
		___s_StandardEventsUnregisterMethodName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsUnregisterMethodName_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsRegisterMethodInfo_4() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsRegisterMethodInfo_4)); }
	inline MethodInfo_t * get_s_StandardEventsRegisterMethodInfo_4() const { return ___s_StandardEventsRegisterMethodInfo_4; }
	inline MethodInfo_t ** get_address_of_s_StandardEventsRegisterMethodInfo_4() { return &___s_StandardEventsRegisterMethodInfo_4; }
	inline void set_s_StandardEventsRegisterMethodInfo_4(MethodInfo_t * value)
	{
		___s_StandardEventsRegisterMethodInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsRegisterMethodInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsUnregisterMethodInfo_5() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsUnregisterMethodInfo_5)); }
	inline MethodInfo_t * get_s_StandardEventsUnregisterMethodInfo_5() const { return ___s_StandardEventsUnregisterMethodInfo_5; }
	inline MethodInfo_t ** get_address_of_s_StandardEventsUnregisterMethodInfo_5() { return &___s_StandardEventsUnregisterMethodInfo_5; }
	inline void set_s_StandardEventsUnregisterMethodInfo_5(MethodInfo_t * value)
	{
		___s_StandardEventsUnregisterMethodInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsUnregisterMethodInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsExtras_6() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsExtras_6)); }
	inline RuntimeObject* get_s_StandardEventsExtras_6() const { return ___s_StandardEventsExtras_6; }
	inline RuntimeObject** get_address_of_s_StandardEventsExtras_6() { return &___s_StandardEventsExtras_6; }
	inline void set_s_StandardEventsExtras_6(RuntimeObject* value)
	{
		___s_StandardEventsExtras_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsExtras_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandardEventsAction_7() { return static_cast<int32_t>(offsetof(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields, ___s_StandardEventsAction_7)); }
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * get_s_StandardEventsAction_7() const { return ___s_StandardEventsAction_7; }
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 ** get_address_of_s_StandardEventsAction_7() { return &___s_StandardEventsAction_7; }
	inline void set_s_StandardEventsAction_7(Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * value)
	{
		___s_StandardEventsAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandardEventsAction_7), (void*)value);
	}
};


// UnityEngine.Monetization.Creator
struct  Creator_tF41B7C1184DA3F4A41A1BE967AFF53DA782FA16F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Monetization.IosAnalytics
struct  IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A  : public RuntimeObject
{
public:

public:
};

struct IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields
{
public:
	// UnityEngine.Monetization.IosAnalytics UnityEngine.Monetization.IosAnalytics::<Instance>k__BackingField
	IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * ___U3CInstanceU3Ek__BackingField_0;
	// UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras UnityEngine.Monetization.IosAnalytics::<>f__mgU24cache0
	unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}
};


// UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0
struct  U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F  : public RuntimeObject
{
public:
	// UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::e
	AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * ___e_0;
	// UnityEngine.Monetization.IosShowAdOperations UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::U24this
	IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * ___U24this_1;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F, ___e_0)); }
	inline AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * get_e_0() const { return ___e_0; }
	inline AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 ** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F, ___U24this_1)); }
	inline IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * get_U24this_1() const { return ___U24this_1; }
	inline IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// UnityEngine.Monetization.MiniJSON.Json
struct  Json_t7D219742286BA38B03E39656D74059B843753FC0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Monetization.MiniJSON.Json_Parser
struct  Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8  : public RuntimeObject
{
public:
	// System.IO.StringReader UnityEngine.Monetization.MiniJSON.Json_Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_0;

public:
	inline static int32_t get_offset_of_json_0() { return static_cast<int32_t>(offsetof(Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8, ___json_0)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_0() const { return ___json_0; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_0() { return &___json_0; }
	inline void set_json_0(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_0), (void*)value);
	}
};


// UnityEngine.Monetization.MiniJSON.Json_Serializer
struct  Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2  : public RuntimeObject
{
public:
	// System.Text.StringBuilder UnityEngine.Monetization.MiniJSON.Json_Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// UnityEngine.Monetization.Monetization
struct  Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9  : public RuntimeObject
{
public:

public:
};

struct Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields
{
public:
	// UnityEngine.Monetization.IMonetizationPlatform UnityEngine.Monetization.Monetization::s_Platform
	RuntimeObject* ___s_Platform_0;
	// System.Boolean UnityEngine.Monetization.Monetization::s_Initialized
	bool ___s_Initialized_1;
	// System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs> UnityEngine.Monetization.Monetization::<>f__mgU24cache0
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_s_Platform_0() { return static_cast<int32_t>(offsetof(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields, ___s_Platform_0)); }
	inline RuntimeObject* get_s_Platform_0() const { return ___s_Platform_0; }
	inline RuntimeObject** get_address_of_s_Platform_0() { return &___s_Platform_0; }
	inline void set_s_Platform_0(RuntimeObject* value)
	{
		___s_Platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Platform_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_1() { return static_cast<int32_t>(offsetof(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields, ___s_Initialized_1)); }
	inline bool get_s_Initialized_1() const { return ___s_Initialized_1; }
	inline bool* get_address_of_s_Initialized_1() { return &___s_Initialized_1; }
	inline void set_s_Initialized_1(bool value)
	{
		___s_Initialized_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_2), (void*)value);
	}
};


// UnityEngine.Monetization.PlacementContent
struct  PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B  : public RuntimeObject
{
public:
	// System.String UnityEngine.Monetization.PlacementContent::<placementId>k__BackingField
	String_t* ___U3CplacementIdU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.PlacementContent::<extras>k__BackingField
	RuntimeObject* ___U3CextrasU3Ek__BackingField_1;
	// UnityEngine.Monetization.IPlacementContentOperations UnityEngine.Monetization.PlacementContent::<placementContentOperations>k__BackingField
	RuntimeObject* ___U3CplacementContentOperationsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CplacementIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B, ___U3CplacementIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CplacementIdU3Ek__BackingField_0() const { return ___U3CplacementIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplacementIdU3Ek__BackingField_0() { return &___U3CplacementIdU3Ek__BackingField_0; }
	inline void set_U3CplacementIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CplacementIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CextrasU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B, ___U3CextrasU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CextrasU3Ek__BackingField_1() const { return ___U3CextrasU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CextrasU3Ek__BackingField_1() { return &___U3CextrasU3Ek__BackingField_1; }
	inline void set_U3CextrasU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CextrasU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CextrasU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CplacementContentOperationsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B, ___U3CplacementContentOperationsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CplacementContentOperationsU3Ek__BackingField_2() const { return ___U3CplacementContentOperationsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CplacementContentOperationsU3Ek__BackingField_2() { return &___U3CplacementContentOperationsU3Ek__BackingField_2; }
	inline void set_U3CplacementContentOperationsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CplacementContentOperationsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CplacementContentOperationsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Monetization.Platform
struct  Platform_t3CA6706D896B21AE91B279233D2964C16710E98B  : public RuntimeObject
{
public:
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Monetization.Platform::_callbackExecutor
	RuntimeObject* ____callbackExecutor_1;
	// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent> UnityEngine.Monetization.Platform::_placementContents
	RuntimeObject* ____placementContents_2;
	// System.EventHandler`1<UnityEngine.Monetization.PlacementContentReadyEventArgs> UnityEngine.Monetization.Platform::OnPlacementContentReady
	EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * ___OnPlacementContentReady_3;
	// System.EventHandler`1<UnityEngine.Monetization.PlacementContentStateChangeEventArgs> UnityEngine.Monetization.Platform::OnPlacementContentStateChange
	EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * ___OnPlacementContentStateChange_4;
	// System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs> UnityEngine.Monetization.Platform::onError
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___onError_5;

public:
	inline static int32_t get_offset_of__callbackExecutor_1() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B, ____callbackExecutor_1)); }
	inline RuntimeObject* get__callbackExecutor_1() const { return ____callbackExecutor_1; }
	inline RuntimeObject** get_address_of__callbackExecutor_1() { return &____callbackExecutor_1; }
	inline void set__callbackExecutor_1(RuntimeObject* value)
	{
		____callbackExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbackExecutor_1), (void*)value);
	}

	inline static int32_t get_offset_of__placementContents_2() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B, ____placementContents_2)); }
	inline RuntimeObject* get__placementContents_2() const { return ____placementContents_2; }
	inline RuntimeObject** get_address_of__placementContents_2() { return &____placementContents_2; }
	inline void set__placementContents_2(RuntimeObject* value)
	{
		____placementContents_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____placementContents_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnPlacementContentReady_3() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B, ___OnPlacementContentReady_3)); }
	inline EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * get_OnPlacementContentReady_3() const { return ___OnPlacementContentReady_3; }
	inline EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 ** get_address_of_OnPlacementContentReady_3() { return &___OnPlacementContentReady_3; }
	inline void set_OnPlacementContentReady_3(EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * value)
	{
		___OnPlacementContentReady_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlacementContentReady_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnPlacementContentStateChange_4() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B, ___OnPlacementContentStateChange_4)); }
	inline EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * get_OnPlacementContentStateChange_4() const { return ___OnPlacementContentStateChange_4; }
	inline EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 ** get_address_of_OnPlacementContentStateChange_4() { return &___OnPlacementContentStateChange_4; }
	inline void set_OnPlacementContentStateChange_4(EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * value)
	{
		___OnPlacementContentStateChange_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPlacementContentStateChange_4), (void*)value);
	}

	inline static int32_t get_offset_of_onError_5() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B, ___onError_5)); }
	inline EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * get_onError_5() const { return ___onError_5; }
	inline EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 ** get_address_of_onError_5() { return &___onError_5; }
	inline void set_onError_5(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * value)
	{
		___onError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onError_5), (void*)value);
	}
};

struct Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContentType> UnityEngine.Monetization.Platform::PlacementContentTypesMap
	RuntimeObject* ___PlacementContentTypesMap_0;

public:
	inline static int32_t get_offset_of_PlacementContentTypesMap_0() { return static_cast<int32_t>(offsetof(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_StaticFields, ___PlacementContentTypesMap_0)); }
	inline RuntimeObject* get_PlacementContentTypesMap_0() const { return ___PlacementContentTypesMap_0; }
	inline RuntimeObject** get_address_of_PlacementContentTypesMap_0() { return &___PlacementContentTypesMap_0; }
	inline void set_PlacementContentTypesMap_0(RuntimeObject* value)
	{
		___PlacementContentTypesMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlacementContentTypesMap_0), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0
struct  U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247  : public RuntimeObject
{
public:
	// System.String UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::placementId
	String_t* ___placementId_0;
	// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::placementContent
	PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent_1;
	// UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::U24this
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___U24this_2;

public:
	inline static int32_t get_offset_of_placementId_0() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247, ___placementId_0)); }
	inline String_t* get_placementId_0() const { return ___placementId_0; }
	inline String_t** get_address_of_placementId_0() { return &___placementId_0; }
	inline void set_placementId_0(String_t* value)
	{
		___placementId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_0), (void*)value);
	}

	inline static int32_t get_offset_of_placementContent_1() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247, ___placementContent_1)); }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * get_placementContent_1() const { return ___placementContent_1; }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B ** get_address_of_placementContent_1() { return &___placementContent_1; }
	inline void set_placementContent_1(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * value)
	{
		___placementContent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementContent_1), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247, ___U24this_2)); }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_2), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1
struct  U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA  : public RuntimeObject
{
public:
	// System.String UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::placementId
	String_t* ___placementId_0;
	// System.Int32 UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::previousState
	int32_t ___previousState_1;
	// System.Int32 UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::newState
	int32_t ___newState_2;
	// UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::U24this
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___U24this_3;

public:
	inline static int32_t get_offset_of_placementId_0() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA, ___placementId_0)); }
	inline String_t* get_placementId_0() const { return ___placementId_0; }
	inline String_t** get_address_of_placementId_0() { return &___placementId_0; }
	inline void set_placementId_0(String_t* value)
	{
		___placementId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_0), (void*)value);
	}

	inline static int32_t get_offset_of_previousState_1() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA, ___previousState_1)); }
	inline int32_t get_previousState_1() const { return ___previousState_1; }
	inline int32_t* get_address_of_previousState_1() { return &___previousState_1; }
	inline void set_previousState_1(int32_t value)
	{
		___previousState_1 = value;
	}

	inline static int32_t get_offset_of_newState_2() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA, ___newState_2)); }
	inline int32_t get_newState_2() const { return ___newState_2; }
	inline int32_t* get_address_of_newState_2() { return &___newState_2; }
	inline void set_newState_2(int32_t value)
	{
		___newState_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA, ___U24this_3)); }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * get_U24this_3() const { return ___U24this_3; }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_3), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2
struct  U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78  : public RuntimeObject
{
public:
	// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::placementContent
	PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent_0;
	// UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1 UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::<>f__refU241
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_placementContent_0() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78, ___placementContent_0)); }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * get_placementContent_0() const { return ___placementContent_0; }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B ** get_address_of_placementContent_0() { return &___placementContent_0; }
	inline void set_placementContent_0(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * value)
	{
		___placementContent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementContent_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78, ___U3CU3Ef__refU241_1)); }
	inline U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_1), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper
struct  PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41  : public RuntimeObject
{
public:

public:
};

struct PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields
{
public:
	// UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::<Platform>k__BackingField
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___U3CPlatformU3Ek__BackingField_0;
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::<>f__mgU24cache0
	OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * ___U3CU3Ef__mgU24cache0_1;
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::<>f__mgU24cache1
	OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * ___U3CU3Ef__mgU24cache1_2;
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::<>f__mgU24cache2
	OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * ___U3CU3Ef__mgU24cache2_3;

public:
	inline static int32_t get_offset_of_U3CPlatformU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields, ___U3CPlatformU3Ek__BackingField_0)); }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * get_U3CPlatformU3Ek__BackingField_0() const { return ___U3CPlatformU3Ek__BackingField_0; }
	inline Platform_t3CA6706D896B21AE91B279233D2964C16710E98B ** get_address_of_U3CPlatformU3Ek__BackingField_0() { return &___U3CPlatformU3Ek__BackingField_0; }
	inline void set_U3CPlatformU3Ek__BackingField_0(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * value)
	{
		___U3CPlatformU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPlatformU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_2() { return static_cast<int32_t>(offsetof(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields, ___U3CU3Ef__mgU24cache1_2)); }
	inline OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * get_U3CU3Ef__mgU24cache1_2() const { return ___U3CU3Ef__mgU24cache1_2; }
	inline OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 ** get_address_of_U3CU3Ef__mgU24cache1_2() { return &___U3CU3Ef__mgU24cache1_2; }
	inline void set_U3CU3Ef__mgU24cache1_2(OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * value)
	{
		___U3CU3Ef__mgU24cache1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_3() { return static_cast<int32_t>(offsetof(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields, ___U3CU3Ef__mgU24cache2_3)); }
	inline OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * get_U3CU3Ef__mgU24cache2_3() const { return ___U3CU3Ef__mgU24cache2_3; }
	inline OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 ** get_address_of_U3CU3Ef__mgU24cache2_3() { return &___U3CU3Ef__mgU24cache2_3; }
	inline void set_U3CU3Ef__mgU24cache2_3(OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * value)
	{
		___U3CU3Ef__mgU24cache2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache2_3), (void*)value);
	}
};


// UnityEngine.Monetization.PromoMetadataJsonDeserializer
struct  PromoMetadataJsonDeserializer_tD9ABE60C8BF3DB61CEF7EC551881C8847CB16DD6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Monetization.UnsupportedPlatform
struct  UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB  : public RuntimeObject
{
public:
	// System.String UnityEngine.Monetization.UnsupportedPlatform::<version>k__BackingField
	String_t* ___U3CversionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CversionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB, ___U3CversionU3Ek__BackingField_0)); }
	inline String_t* get_U3CversionU3Ek__BackingField_0() const { return ___U3CversionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CversionU3Ek__BackingField_0() { return &___U3CversionU3Ek__BackingField_0; }
	inline void set_U3CversionU3Ek__BackingField_0(String_t* value)
	{
		___U3CversionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CversionU3Ek__BackingField_0), (void*)value);
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.IO.Stream
struct  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Nullable`1<System.Int64>
struct  Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
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


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.Monetization.MetaData
struct  MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B  : public Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399
{
public:
	// System.String UnityEngine.Monetization.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CcategoryU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B, ___U3CcategoryU3Ek__BackingField_14)); }
	inline String_t* get_U3CcategoryU3Ek__BackingField_14() const { return ___U3CcategoryU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CcategoryU3Ek__BackingField_14() { return &___U3CcategoryU3Ek__BackingField_14; }
	inline void set_U3CcategoryU3Ek__BackingField_14(String_t* value)
	{
		___U3CcategoryU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcategoryU3Ek__BackingField_14), (void*)value);
	}
};


// UnityEngine.Monetization.PlacementContentReadyEventArgs
struct  PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String UnityEngine.Monetization.PlacementContentReadyEventArgs::placementId
	String_t* ___placementId_1;
	// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.PlacementContentReadyEventArgs::placementContent
	PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent_2;

public:
	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_placementContent_2() { return static_cast<int32_t>(offsetof(PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D, ___placementContent_2)); }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * get_placementContent_2() const { return ___placementContent_2; }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B ** get_address_of_placementContent_2() { return &___placementContent_2; }
	inline void set_placementContent_2(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * value)
	{
		___placementContent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementContent_2), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks
struct  UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 
{
public:
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks::onPlacementContentReadyCallback
	OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * ___onPlacementContentReadyCallback_0;
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks::onPlacementContentStateChangedCallback
	OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * ___onPlacementContentStateChangedCallback_1;
	// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks::onErrorCallback
	OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * ___onErrorCallback_2;

public:
	inline static int32_t get_offset_of_onPlacementContentReadyCallback_0() { return static_cast<int32_t>(offsetof(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202, ___onPlacementContentReadyCallback_0)); }
	inline OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * get_onPlacementContentReadyCallback_0() const { return ___onPlacementContentReadyCallback_0; }
	inline OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C ** get_address_of_onPlacementContentReadyCallback_0() { return &___onPlacementContentReadyCallback_0; }
	inline void set_onPlacementContentReadyCallback_0(OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * value)
	{
		___onPlacementContentReadyCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacementContentReadyCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_onPlacementContentStateChangedCallback_1() { return static_cast<int32_t>(offsetof(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202, ___onPlacementContentStateChangedCallback_1)); }
	inline OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * get_onPlacementContentStateChangedCallback_1() const { return ___onPlacementContentStateChangedCallback_1; }
	inline OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 ** get_address_of_onPlacementContentStateChangedCallback_1() { return &___onPlacementContentStateChangedCallback_1; }
	inline void set_onPlacementContentStateChangedCallback_1(OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * value)
	{
		___onPlacementContentStateChangedCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacementContentStateChangedCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_onErrorCallback_2() { return static_cast<int32_t>(offsetof(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202, ___onErrorCallback_2)); }
	inline OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * get_onErrorCallback_2() const { return ___onErrorCallback_2; }
	inline OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 ** get_address_of_onErrorCallback_2() { return &___onErrorCallback_2; }
	inline void set_onErrorCallback_2(OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * value)
	{
		___onErrorCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onErrorCallback_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke
{
	Il2CppMethodPointer ___onPlacementContentReadyCallback_0;
	Il2CppMethodPointer ___onPlacementContentStateChangedCallback_1;
	Il2CppMethodPointer ___onErrorCallback_2;
};
// Native definition for COM marshalling of UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
struct UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_com
{
	Il2CppMethodPointer ___onPlacementContentReadyCallback_0;
	Il2CppMethodPointer ___onPlacementContentStateChangedCallback_1;
	Il2CppMethodPointer ___onErrorCallback_2;
};

// UnityEngine.Monetization.RewardablePlacementContent
struct  RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297  : public PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B
{
public:
	// UnityEngine.Monetization.IRewardedOperations UnityEngine.Monetization.RewardablePlacementContent::<rewardedOperations>k__BackingField
	RuntimeObject* ___U3CrewardedOperationsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CrewardedOperationsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297, ___U3CrewardedOperationsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CrewardedOperationsU3Ek__BackingField_3() const { return ___U3CrewardedOperationsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CrewardedOperationsU3Ek__BackingField_3() { return &___U3CrewardedOperationsU3Ek__BackingField_3; }
	inline void set_U3CrewardedOperationsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CrewardedOperationsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrewardedOperationsU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.Monetization.ShowAdCallbacks
struct  ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C 
{
public:
	// UnityEngine.Monetization.ShowAdFinishCallback UnityEngine.Monetization.ShowAdCallbacks::finishCallback
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___finishCallback_0;
	// UnityEngine.Monetization.ShowAdStartCallback UnityEngine.Monetization.ShowAdCallbacks::startCallback
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___startCallback_1;

public:
	inline static int32_t get_offset_of_finishCallback_0() { return static_cast<int32_t>(offsetof(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C, ___finishCallback_0)); }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * get_finishCallback_0() const { return ___finishCallback_0; }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 ** get_address_of_finishCallback_0() { return &___finishCallback_0; }
	inline void set_finishCallback_0(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * value)
	{
		___finishCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___finishCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_startCallback_1() { return static_cast<int32_t>(offsetof(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C, ___startCallback_1)); }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * get_startCallback_1() const { return ___startCallback_1; }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A ** get_address_of_startCallback_1() { return &___startCallback_1; }
	inline void set_startCallback_1(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * value)
	{
		___startCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Monetization.ShowAdCallbacks
struct ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_pinvoke
{
	Il2CppMethodPointer ___finishCallback_0;
	Il2CppMethodPointer ___startCallback_1;
};
// Native definition for COM marshalling of UnityEngine.Monetization.ShowAdCallbacks
struct ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_com
{
	Il2CppMethodPointer ___finishCallback_0;
	Il2CppMethodPointer ___startCallback_1;
};

// UnityEngine.Monetization.UnityServicesErrorEventArgs
struct  UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.Int64 UnityEngine.Monetization.UnityServicesErrorEventArgs::<error>k__BackingField
	int64_t ___U3CerrorU3Ek__BackingField_1;
	// System.String UnityEngine.Monetization.UnityServicesErrorEventArgs::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377, ___U3CerrorU3Ek__BackingField_1)); }
	inline int64_t get_U3CerrorU3Ek__BackingField_1() const { return ___U3CerrorU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CerrorU3Ek__BackingField_1() { return &___U3CerrorU3Ek__BackingField_1; }
	inline void set_U3CerrorU3Ek__BackingField_1(int64_t value)
	{
		___U3CerrorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377, ___U3CmessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_2() const { return ___U3CmessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_2() { return &___U3CmessageU3Ek__BackingField_2; }
	inline void set_U3CmessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmessageU3Ek__BackingField_2), (void*)value);
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


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.Object>
struct  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___current_3)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>
struct  Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 
{
public:
	// T System.Nullable`1::value
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145, ___value_0)); }
	inline ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  get_value_0() const { return ___value_0; }
	inline ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___finishCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___startCallback_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.Monetization.IosPlacementContentOperations
struct  IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Monetization.IosPlacementContentOperations::<placementContentPtr>k__BackingField
	intptr_t ___U3CplacementContentPtrU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CplacementContentPtrU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234, ___U3CplacementContentPtrU3Ek__BackingField_0)); }
	inline intptr_t get_U3CplacementContentPtrU3Ek__BackingField_0() const { return ___U3CplacementContentPtrU3Ek__BackingField_0; }
	inline intptr_t* get_address_of_U3CplacementContentPtrU3Ek__BackingField_0() { return &___U3CplacementContentPtrU3Ek__BackingField_0; }
	inline void set_U3CplacementContentPtrU3Ek__BackingField_0(intptr_t value)
	{
		___U3CplacementContentPtrU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN
struct  TOKEN_t2DA4061A50174BD4DF513DEC4907447FBDC674CE 
{
public:
	// System.Int32 UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t2DA4061A50174BD4DF513DEC4907447FBDC674CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Monetization.PlacementContentState
struct  PlacementContentState_t49A643D98825B0BEEFE85A4B629173B7CF66BA23 
{
public:
	// System.Int32 UnityEngine.Monetization.PlacementContentState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlacementContentState_t49A643D98825B0BEEFE85A4B629173B7CF66BA23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Monetization.PlacementContentType
struct  PlacementContentType_tAC154F03AEC30ADC6F5E75D93C880281FE4E109E 
{
public:
	// System.Int32 UnityEngine.Monetization.PlacementContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlacementContentType_tAC154F03AEC30ADC6F5E75D93C880281FE4E109E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Monetization.Platform_IosRetrieveProductsListener
struct  IosRetrieveProductsListener_tB3341954A9375F81B8775BF3ECF719DC1C2A3F4F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Monetization.Platform_IosRetrieveProductsListener::_pCallback
	intptr_t ____pCallback_0;

public:
	inline static int32_t get_offset_of__pCallback_0() { return static_cast<int32_t>(offsetof(IosRetrieveProductsListener_tB3341954A9375F81B8775BF3ECF719DC1C2A3F4F, ____pCallback_0)); }
	inline intptr_t get__pCallback_0() const { return ____pCallback_0; }
	inline intptr_t* get_address_of__pCallback_0() { return &____pCallback_0; }
	inline void set__pCallback_0(intptr_t value)
	{
		____pCallback_0 = value;
	}
};


// UnityEngine.Monetization.Platform_IosTransactionListener
struct  IosTransactionListener_tA7E1700BC84CC1D844DCAC00DD02BBBF90F1044B  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Monetization.Platform_IosTransactionListener::_pCallbacks
	intptr_t ____pCallbacks_0;

public:
	inline static int32_t get_offset_of__pCallbacks_0() { return static_cast<int32_t>(offsetof(IosTransactionListener_tA7E1700BC84CC1D844DCAC00DD02BBBF90F1044B, ____pCallbacks_0)); }
	inline intptr_t get__pCallbacks_0() const { return ____pCallbacks_0; }
	inline intptr_t* get_address_of__pCallbacks_0() { return &____pCallbacks_0; }
	inline void set__pCallbacks_0(intptr_t value)
	{
		____pCallbacks_0 = value;
	}
};


// UnityEngine.Monetization.Product
struct  Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749 
{
public:
	// System.String UnityEngine.Monetization.Product::productId
	String_t* ___productId_0;
	// System.String UnityEngine.Monetization.Product::localizedTitle
	String_t* ___localizedTitle_1;
	// System.String UnityEngine.Monetization.Product::localizedDescription
	String_t* ___localizedDescription_2;
	// System.String UnityEngine.Monetization.Product::localizedPriceString
	String_t* ___localizedPriceString_3;
	// System.String UnityEngine.Monetization.Product::isoCurrencyCode
	String_t* ___isoCurrencyCode_4;
	// System.String UnityEngine.Monetization.Product::productType
	String_t* ___productType_5;
	// System.Decimal UnityEngine.Monetization.Product::localizedPrice
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___localizedPrice_6;

public:
	inline static int32_t get_offset_of_productId_0() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___productId_0)); }
	inline String_t* get_productId_0() const { return ___productId_0; }
	inline String_t** get_address_of_productId_0() { return &___productId_0; }
	inline void set_productId_0(String_t* value)
	{
		___productId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedTitle_1() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___localizedTitle_1)); }
	inline String_t* get_localizedTitle_1() const { return ___localizedTitle_1; }
	inline String_t** get_address_of_localizedTitle_1() { return &___localizedTitle_1; }
	inline void set_localizedTitle_1(String_t* value)
	{
		___localizedTitle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedTitle_1), (void*)value);
	}

	inline static int32_t get_offset_of_localizedDescription_2() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___localizedDescription_2)); }
	inline String_t* get_localizedDescription_2() const { return ___localizedDescription_2; }
	inline String_t** get_address_of_localizedDescription_2() { return &___localizedDescription_2; }
	inline void set_localizedDescription_2(String_t* value)
	{
		___localizedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedDescription_2), (void*)value);
	}

	inline static int32_t get_offset_of_localizedPriceString_3() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___localizedPriceString_3)); }
	inline String_t* get_localizedPriceString_3() const { return ___localizedPriceString_3; }
	inline String_t** get_address_of_localizedPriceString_3() { return &___localizedPriceString_3; }
	inline void set_localizedPriceString_3(String_t* value)
	{
		___localizedPriceString_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedPriceString_3), (void*)value);
	}

	inline static int32_t get_offset_of_isoCurrencyCode_4() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___isoCurrencyCode_4)); }
	inline String_t* get_isoCurrencyCode_4() const { return ___isoCurrencyCode_4; }
	inline String_t** get_address_of_isoCurrencyCode_4() { return &___isoCurrencyCode_4; }
	inline void set_isoCurrencyCode_4(String_t* value)
	{
		___isoCurrencyCode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isoCurrencyCode_4), (void*)value);
	}

	inline static int32_t get_offset_of_productType_5() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___productType_5)); }
	inline String_t* get_productType_5() const { return ___productType_5; }
	inline String_t** get_address_of_productType_5() { return &___productType_5; }
	inline void set_productType_5(String_t* value)
	{
		___productType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productType_5), (void*)value);
	}

	inline static int32_t get_offset_of_localizedPrice_6() { return static_cast<int32_t>(offsetof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749, ___localizedPrice_6)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_localizedPrice_6() const { return ___localizedPrice_6; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_localizedPrice_6() { return &___localizedPrice_6; }
	inline void set_localizedPrice_6(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___localizedPrice_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Monetization.Product
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke
{
	char* ___productId_0;
	char* ___localizedTitle_1;
	char* ___localizedDescription_2;
	char* ___localizedPriceString_3;
	char* ___isoCurrencyCode_4;
	char* ___productType_5;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___localizedPrice_6;
};
// Native definition for COM marshalling of UnityEngine.Monetization.Product
struct Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com
{
	Il2CppChar* ___productId_0;
	Il2CppChar* ___localizedTitle_1;
	Il2CppChar* ___localizedDescription_2;
	Il2CppChar* ___localizedPriceString_3;
	Il2CppChar* ___isoCurrencyCode_4;
	Il2CppChar* ___productType_5;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___localizedPrice_6;
};

// UnityEngine.Monetization.PromoItem
struct  PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 
{
public:
	// System.String UnityEngine.Monetization.PromoItem::productId
	String_t* ___productId_0;
	// System.Decimal UnityEngine.Monetization.PromoItem::quantity
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___quantity_1;
	// System.String UnityEngine.Monetization.PromoItem::itemType
	String_t* ___itemType_2;

public:
	inline static int32_t get_offset_of_productId_0() { return static_cast<int32_t>(offsetof(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360, ___productId_0)); }
	inline String_t* get_productId_0() const { return ___productId_0; }
	inline String_t** get_address_of_productId_0() { return &___productId_0; }
	inline void set_productId_0(String_t* value)
	{
		___productId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___productId_0), (void*)value);
	}

	inline static int32_t get_offset_of_quantity_1() { return static_cast<int32_t>(offsetof(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360, ___quantity_1)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_quantity_1() const { return ___quantity_1; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_quantity_1() { return &___quantity_1; }
	inline void set_quantity_1(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___quantity_1 = value;
	}

	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360, ___itemType_2)); }
	inline String_t* get_itemType_2() const { return ___itemType_2; }
	inline String_t** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(String_t* value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemType_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Monetization.PromoItem
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke
{
	char* ___productId_0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___quantity_1;
	char* ___itemType_2;
};
// Native definition for COM marshalling of UnityEngine.Monetization.PromoItem
struct PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com
{
	Il2CppChar* ___productId_0;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___quantity_1;
	Il2CppChar* ___itemType_2;
};

// UnityEngine.Monetization.ShowAdPlacementContent
struct  ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF  : public RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297
{
public:
	// System.String UnityEngine.Monetization.ShowAdPlacementContent::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Monetization.ShowAdPlacementContent::<showing>k__BackingField
	bool ___U3CshowingU3Ek__BackingField_5;
	// UnityEngine.Monetization.IShowAdOperations UnityEngine.Monetization.ShowAdPlacementContent::<showAdOperations>k__BackingField
	RuntimeObject* ___U3CshowAdOperationsU3Ek__BackingField_6;
	// UnityEngine.Monetization.ShowAdYield UnityEngine.Monetization.ShowAdPlacementContent::adYield
	ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * ___adYield_7;

public:
	inline static int32_t get_offset_of_U3CgamerSidU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF, ___U3CgamerSidU3Ek__BackingField_4)); }
	inline String_t* get_U3CgamerSidU3Ek__BackingField_4() const { return ___U3CgamerSidU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CgamerSidU3Ek__BackingField_4() { return &___U3CgamerSidU3Ek__BackingField_4; }
	inline void set_U3CgamerSidU3Ek__BackingField_4(String_t* value)
	{
		___U3CgamerSidU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgamerSidU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshowingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF, ___U3CshowingU3Ek__BackingField_5)); }
	inline bool get_U3CshowingU3Ek__BackingField_5() const { return ___U3CshowingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CshowingU3Ek__BackingField_5() { return &___U3CshowingU3Ek__BackingField_5; }
	inline void set_U3CshowingU3Ek__BackingField_5(bool value)
	{
		___U3CshowingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CshowAdOperationsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF, ___U3CshowAdOperationsU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CshowAdOperationsU3Ek__BackingField_6() const { return ___U3CshowAdOperationsU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CshowAdOperationsU3Ek__BackingField_6() { return &___U3CshowAdOperationsU3Ek__BackingField_6; }
	inline void set_U3CshowAdOperationsU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CshowAdOperationsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshowAdOperationsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_adYield_7() { return static_cast<int32_t>(offsetof(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF, ___adYield_7)); }
	inline ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * get_adYield_7() const { return ___adYield_7; }
	inline ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA ** get_address_of_adYield_7() { return &___adYield_7; }
	inline void set_adYield_7(ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * value)
	{
		___adYield_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adYield_7), (void*)value);
	}
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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

// UnityEngine.Monetization.IosRewardedOperations
struct  IosRewardedOperations_tE0436EE6504404F80807B1584BB305EA64F1F6B3  : public IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234
{
public:

public:
};


// UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs
struct  AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// UnityEngine.Monetization.ShowResult UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507, ___U3CresultU3Ek__BackingField_1)); }
	inline int32_t get_U3CresultU3Ek__BackingField_1() const { return ___U3CresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_1() { return &___U3CresultU3Ek__BackingField_1; }
	inline void set_U3CresultU3Ek__BackingField_1(int32_t value)
	{
		___U3CresultU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Monetization.PlacementContentStateChangeEventArgs
struct  PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String UnityEngine.Monetization.PlacementContentStateChangeEventArgs::placementId
	String_t* ___placementId_1;
	// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.PlacementContentStateChangeEventArgs::placementContent
	PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent_2;
	// UnityEngine.Monetization.PlacementContentState UnityEngine.Monetization.PlacementContentStateChangeEventArgs::previousState
	int32_t ___previousState_3;
	// UnityEngine.Monetization.PlacementContentState UnityEngine.Monetization.PlacementContentStateChangeEventArgs::newState
	int32_t ___newState_4;

public:
	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementId_1), (void*)value);
	}

	inline static int32_t get_offset_of_placementContent_2() { return static_cast<int32_t>(offsetof(PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2, ___placementContent_2)); }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * get_placementContent_2() const { return ___placementContent_2; }
	inline PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B ** get_address_of_placementContent_2() { return &___placementContent_2; }
	inline void set_placementContent_2(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * value)
	{
		___placementContent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___placementContent_2), (void*)value);
	}

	inline static int32_t get_offset_of_previousState_3() { return static_cast<int32_t>(offsetof(PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2, ___previousState_3)); }
	inline int32_t get_previousState_3() const { return ___previousState_3; }
	inline int32_t* get_address_of_previousState_3() { return &___previousState_3; }
	inline void set_previousState_3(int32_t value)
	{
		___previousState_3 = value;
	}

	inline static int32_t get_offset_of_newState_4() { return static_cast<int32_t>(offsetof(PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2, ___newState_4)); }
	inline int32_t get_newState_4() const { return ___newState_4; }
	inline int32_t* get_address_of_newState_4() { return &___newState_4; }
	inline void set_newState_4(int32_t value)
	{
		___newState_4 = value;
	}
};


// UnityEngine.Monetization.PromoAdPlacementContent
struct  PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3  : public ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF
{
public:
	// UnityEngine.Monetization.IPromoAdOperations UnityEngine.Monetization.PromoAdPlacementContent::<promoAdOperations>k__BackingField
	RuntimeObject* ___U3CpromoAdOperationsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CpromoAdOperationsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3, ___U3CpromoAdOperationsU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CpromoAdOperationsU3Ek__BackingField_8() const { return ___U3CpromoAdOperationsU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CpromoAdOperationsU3Ek__BackingField_8() { return &___U3CpromoAdOperationsU3Ek__BackingField_8; }
	inline void set_U3CpromoAdOperationsU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CpromoAdOperationsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpromoAdOperationsU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Monetization.PromoMetadata
struct  PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224 
{
public:
	// System.DateTime UnityEngine.Monetization.PromoMetadata::impressionDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___impressionDate_0;
	// System.TimeSpan UnityEngine.Monetization.PromoMetadata::offerDuration
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___offerDuration_1;
	// UnityEngine.Monetization.Product UnityEngine.Monetization.PromoMetadata::premiumProduct
	Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  ___premiumProduct_2;
	// UnityEngine.Monetization.PromoItem[] UnityEngine.Monetization.PromoMetadata::costs
	PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* ___costs_3;
	// UnityEngine.Monetization.PromoItem[] UnityEngine.Monetization.PromoMetadata::payouts
	PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* ___payouts_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.PromoMetadata::customInfo
	RuntimeObject* ___customInfo_5;

public:
	inline static int32_t get_offset_of_impressionDate_0() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___impressionDate_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_impressionDate_0() const { return ___impressionDate_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_impressionDate_0() { return &___impressionDate_0; }
	inline void set_impressionDate_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___impressionDate_0 = value;
	}

	inline static int32_t get_offset_of_offerDuration_1() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___offerDuration_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_offerDuration_1() const { return ___offerDuration_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_offerDuration_1() { return &___offerDuration_1; }
	inline void set_offerDuration_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___offerDuration_1 = value;
	}

	inline static int32_t get_offset_of_premiumProduct_2() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___premiumProduct_2)); }
	inline Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  get_premiumProduct_2() const { return ___premiumProduct_2; }
	inline Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749 * get_address_of_premiumProduct_2() { return &___premiumProduct_2; }
	inline void set_premiumProduct_2(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  value)
	{
		___premiumProduct_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___productId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___localizedTitle_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___localizedDescription_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___localizedPriceString_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___isoCurrencyCode_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___premiumProduct_2))->___productType_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_costs_3() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___costs_3)); }
	inline PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* get_costs_3() const { return ___costs_3; }
	inline PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55** get_address_of_costs_3() { return &___costs_3; }
	inline void set_costs_3(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* value)
	{
		___costs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costs_3), (void*)value);
	}

	inline static int32_t get_offset_of_payouts_4() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___payouts_4)); }
	inline PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* get_payouts_4() const { return ___payouts_4; }
	inline PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55** get_address_of_payouts_4() { return &___payouts_4; }
	inline void set_payouts_4(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* value)
	{
		___payouts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payouts_4), (void*)value);
	}

	inline static int32_t get_offset_of_customInfo_5() { return static_cast<int32_t>(offsetof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224, ___customInfo_5)); }
	inline RuntimeObject* get_customInfo_5() const { return ___customInfo_5; }
	inline RuntimeObject** get_address_of_customInfo_5() { return &___customInfo_5; }
	inline void set_customInfo_5(RuntimeObject* value)
	{
		___customInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customInfo_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Monetization.PromoMetadata
struct PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_pinvoke
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___impressionDate_0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___offerDuration_1;
	Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke ___premiumProduct_2;
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke* ___costs_3;
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke* ___payouts_4;
	RuntimeObject* ___customInfo_5;
};
// Native definition for COM marshalling of UnityEngine.Monetization.PromoMetadata
struct PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_com
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___impressionDate_0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___offerDuration_1;
	Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com ___premiumProduct_2;
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com* ___costs_3;
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com* ___payouts_4;
	RuntimeObject* ___customInfo_5;
};

// UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0
struct  U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8  : public RuntimeObject
{
public:
	// System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks> UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::callbacks
	Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  ___callbacks_0;
	// UnityEngine.Monetization.ShowAdPlacementContent UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::U24this
	ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * ___U24this_1;

public:
	inline static int32_t get_offset_of_callbacks_0() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8, ___callbacks_0)); }
	inline Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  get_callbacks_0() const { return ___callbacks_0; }
	inline Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * get_address_of_callbacks_0() { return &___callbacks_0; }
	inline void set_callbacks_0(Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  value)
	{
		___callbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___callbacks_0))->___value_0))->___finishCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___callbacks_0))->___value_0))->___startCallback_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8, ___U24this_1)); }
	inline ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * get_U24this_1() const { return ___U24this_1; }
	inline ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// UnityEngine.Monetization.ShowAdYield
struct  ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Monetization.ShowResult UnityEngine.Monetization.ShowAdYield::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Monetization.ShowAdYield::<showing>k__BackingField
	bool ___U3CshowingU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CshowingU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA, ___U3CshowingU3Ek__BackingField_1)); }
	inline bool get_U3CshowingU3Ek__BackingField_1() const { return ___U3CshowingU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CshowingU3Ek__BackingField_1() { return &___U3CshowingU3Ek__BackingField_1; }
	inline void set_U3CshowingU3Ek__BackingField_1(bool value)
	{
		___U3CshowingU3Ek__BackingField_1 = value;
	}
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


// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct  Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1  : public MulticastDelegate_t
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


// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs>
struct  EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Monetization.PlacementContentReadyEventArgs>
struct  EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Monetization.PlacementContentStateChangeEventArgs>
struct  EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>
struct  EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1  : public MulticastDelegate_t
{
public:

public:
};


// System.MemberAccessException
struct  MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.GUI_WindowFunction
struct  WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
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


// UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras
struct  unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Monetization.IosShowAdOperations
struct  IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84  : public IosRewardedOperations_tE0436EE6504404F80807B1584BB305EA64F1F6B3
{
public:
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Monetization.IosShowAdOperations::_executor
	RuntimeObject* ____executor_3;
	// System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks> UnityEngine.Monetization.IosShowAdOperations::_showAdCallbacks
	Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  ____showAdCallbacks_4;

public:
	inline static int32_t get_offset_of__executor_3() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84, ____executor_3)); }
	inline RuntimeObject* get__executor_3() const { return ____executor_3; }
	inline RuntimeObject** get_address_of__executor_3() { return &____executor_3; }
	inline void set__executor_3(RuntimeObject* value)
	{
		____executor_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____executor_3), (void*)value);
	}

	inline static int32_t get_offset_of__showAdCallbacks_4() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84, ____showAdCallbacks_4)); }
	inline Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  get__showAdCallbacks_4() const { return ____showAdCallbacks_4; }
	inline Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * get_address_of__showAdCallbacks_4() { return &____showAdCallbacks_4; }
	inline void set__showAdCallbacks_4(Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  value)
	{
		____showAdCallbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____showAdCallbacks_4))->___value_0))->___finishCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____showAdCallbacks_4))->___value_0))->___startCallback_1), (void*)NULL);
		#endif
	}
};

struct IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields
{
public:
	// System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs> UnityEngine.Monetization.IosShowAdOperations::OnAdFinished
	EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * ___OnAdFinished_1;
	// System.EventHandler`1<System.EventArgs> UnityEngine.Monetization.IosShowAdOperations::OnAdStarted
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdStarted_2;
	// UnityEngine.Monetization.ShowAdStartCallback UnityEngine.Monetization.IosShowAdOperations::<>f__mgU24cache0
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___U3CU3Ef__mgU24cache0_5;
	// UnityEngine.Monetization.ShowAdFinishCallback UnityEngine.Monetization.IosShowAdOperations::<>f__mgU24cache1
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___U3CU3Ef__mgU24cache1_6;

public:
	inline static int32_t get_offset_of_OnAdFinished_1() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields, ___OnAdFinished_1)); }
	inline EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * get_OnAdFinished_1() const { return ___OnAdFinished_1; }
	inline EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 ** get_address_of_OnAdFinished_1() { return &___OnAdFinished_1; }
	inline void set_OnAdFinished_1(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * value)
	{
		___OnAdFinished_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFinished_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdStarted_2() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields, ___OnAdStarted_2)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdStarted_2() const { return ___OnAdStarted_2; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdStarted_2() { return &___OnAdStarted_2; }
	inline void set_OnAdStarted_2(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdStarted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdStarted_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_6() { return static_cast<int32_t>(offsetof(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields, ___U3CU3Ef__mgU24cache1_6)); }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * get_U3CU3Ef__mgU24cache1_6() const { return ___U3CU3Ef__mgU24cache1_6; }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 ** get_address_of_U3CU3Ef__mgU24cache1_6() { return &___U3CU3Ef__mgU24cache1_6; }
	inline void set_U3CU3Ef__mgU24cache1_6(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * value)
	{
		___U3CU3Ef__mgU24cache1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_6), (void*)value);
	}
};


// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback
struct  OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback
struct  OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback
struct  OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Monetization.ShowAdFinishCallback
struct  ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Monetization.ShowAdStartCallback
struct  ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// System.MissingMemberException
struct  MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639, ___Signature_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// UnityEngine.Monetization.IosPromoAdOperations
struct  IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097  : public IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84
{
public:
	// UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.IosPromoAdOperations::<metadata>k__BackingField
	PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  ___U3CmetadataU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097, ___U3CmetadataU3Ek__BackingField_7)); }
	inline PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  get_U3CmetadataU3Ek__BackingField_7() const { return ___U3CmetadataU3Ek__BackingField_7; }
	inline PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224 * get_address_of_U3CmetadataU3Ek__BackingField_7() { return &___U3CmetadataU3Ek__BackingField_7; }
	inline void set_U3CmetadataU3Ek__BackingField_7(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  value)
	{
		___U3CmetadataU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___productId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___localizedTitle_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___localizedDescription_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___localizedPriceString_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___isoCurrencyCode_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CmetadataU3Ek__BackingField_7))->___premiumProduct_2))->___productType_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmetadataU3Ek__BackingField_7))->___costs_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmetadataU3Ek__BackingField_7))->___payouts_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmetadataU3Ek__BackingField_7))->___customInfo_5), (void*)NULL);
		#endif
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.MissingMethodException
struct  MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41  : public MissingMemberException_t890E7665FD7C812DAD826E4B5CF55F20F16CF639
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_20), (void*)value);
	}
};


// UnityEngine.Monetization.Placeholder
struct  Placeholder_t388F859DD4536E470772567760268E218C2BE406  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::m_LandscapeTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_LandscapeTexture_4;
	// UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::m_PortraitTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_PortraitTexture_5;
	// UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::m_LandscapeAdTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_LandscapeAdTexture_6;
	// UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::m_PortraitAdTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_PortraitAdTexture_7;
	// System.Boolean UnityEngine.Monetization.Placeholder::m_Showing
	bool ___m_Showing_8;
	// System.Boolean UnityEngine.Monetization.Placeholder::purchaseButtonIsClicked
	bool ___purchaseButtonIsClicked_9;
	// System.String UnityEngine.Monetization.Placeholder::m_PlacementId
	String_t* ___m_PlacementId_10;
	// System.Boolean UnityEngine.Monetization.Placeholder::m_AllowSkip
	bool ___m_AllowSkip_11;
	// UnityEngine.Monetization.ShowAdStartCallback UnityEngine.Monetization.Placeholder::onStart
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___onStart_12;
	// UnityEngine.Monetization.ShowAdFinishCallback UnityEngine.Monetization.Placeholder::onFinish
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___onFinish_13;

public:
	inline static int32_t get_offset_of_m_LandscapeTexture_4() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_LandscapeTexture_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_LandscapeTexture_4() const { return ___m_LandscapeTexture_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_LandscapeTexture_4() { return &___m_LandscapeTexture_4; }
	inline void set_m_LandscapeTexture_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_LandscapeTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LandscapeTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PortraitTexture_5() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_PortraitTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_PortraitTexture_5() const { return ___m_PortraitTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_PortraitTexture_5() { return &___m_PortraitTexture_5; }
	inline void set_m_PortraitTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_PortraitTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PortraitTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LandscapeAdTexture_6() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_LandscapeAdTexture_6)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_LandscapeAdTexture_6() const { return ___m_LandscapeAdTexture_6; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_LandscapeAdTexture_6() { return &___m_LandscapeAdTexture_6; }
	inline void set_m_LandscapeAdTexture_6(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_LandscapeAdTexture_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LandscapeAdTexture_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_PortraitAdTexture_7() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_PortraitAdTexture_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_PortraitAdTexture_7() const { return ___m_PortraitAdTexture_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_PortraitAdTexture_7() { return &___m_PortraitAdTexture_7; }
	inline void set_m_PortraitAdTexture_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_PortraitAdTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PortraitAdTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Showing_8() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_Showing_8)); }
	inline bool get_m_Showing_8() const { return ___m_Showing_8; }
	inline bool* get_address_of_m_Showing_8() { return &___m_Showing_8; }
	inline void set_m_Showing_8(bool value)
	{
		___m_Showing_8 = value;
	}

	inline static int32_t get_offset_of_purchaseButtonIsClicked_9() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___purchaseButtonIsClicked_9)); }
	inline bool get_purchaseButtonIsClicked_9() const { return ___purchaseButtonIsClicked_9; }
	inline bool* get_address_of_purchaseButtonIsClicked_9() { return &___purchaseButtonIsClicked_9; }
	inline void set_purchaseButtonIsClicked_9(bool value)
	{
		___purchaseButtonIsClicked_9 = value;
	}

	inline static int32_t get_offset_of_m_PlacementId_10() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_PlacementId_10)); }
	inline String_t* get_m_PlacementId_10() const { return ___m_PlacementId_10; }
	inline String_t** get_address_of_m_PlacementId_10() { return &___m_PlacementId_10; }
	inline void set_m_PlacementId_10(String_t* value)
	{
		___m_PlacementId_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlacementId_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowSkip_11() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___m_AllowSkip_11)); }
	inline bool get_m_AllowSkip_11() const { return ___m_AllowSkip_11; }
	inline bool* get_address_of_m_AllowSkip_11() { return &___m_AllowSkip_11; }
	inline void set_m_AllowSkip_11(bool value)
	{
		___m_AllowSkip_11 = value;
	}

	inline static int32_t get_offset_of_onStart_12() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___onStart_12)); }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * get_onStart_12() const { return ___onStart_12; }
	inline ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A ** get_address_of_onStart_12() { return &___onStart_12; }
	inline void set_onStart_12(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * value)
	{
		___onStart_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_12), (void*)value);
	}

	inline static int32_t get_offset_of_onFinish_13() { return static_cast<int32_t>(offsetof(Placeholder_t388F859DD4536E470772567760268E218C2BE406, ___onFinish_13)); }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * get_onFinish_13() const { return ___onFinish_13; }
	inline ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 ** get_address_of_onFinish_13() { return &___onFinish_13; }
	inline void set_onFinish_13(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * value)
	{
		___onFinish_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFinish_13), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>[]
struct Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * m_Items[1];

public:
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * value)
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Monetization.PromoItem[]
struct PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  m_Items[1];

public:
	inline PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___productId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___itemType_2), (void*)NULL);
		#endif
	}
	inline PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___productId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___itemType_2), (void*)NULL);
		#endif
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke_back(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled);
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke_cleanup(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke_back(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke_cleanup(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com_back(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled);
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com_cleanup(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com_back(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled);
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com_cleanup(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_back(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled);
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_cleanup(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled);

// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_gshared_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_gshared_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared (Dictionary_2_t5B35D5550B4D9CDDB7D248BEEE75285BC3023229 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D_gshared (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E (Type_t * __this, String_t* ___name0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Object UnityEngine.Monetization.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5 (String_t* ___json0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592 (String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356 (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Boolean UnityEngine.Monetization.Analytics::InitializeStandardEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9 (const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDEC5DC4B8F9E25929AB8A7FB5D059D7A0DDA90CF (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Monetization.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mCFDBDAA0C48857D823D75E36B2B064ABD5AFF9FB (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::TriggerAddExtras(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A (String_t* ___extras0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19 (String_t* ___jsonExtras0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::set_Instance(UnityEngine.Monetization.IosAnalytics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215_inline (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics/unityAnalyticsTriggerAddExtras::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAnalyticsTriggerAddExtras__ctor_m781966E811E862FC94ED3D80C57ED1AD084F3601 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::UANAEngineDelegateSetTriggerAddExtras(UnityEngine.Monetization.IosAnalytics/unityAnalyticsTriggerAddExtras)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_UANAEngineDelegateSetTriggerAddExtras_mDA06D57D342D7F4B72AEDCDB0CDC5F3D109A00EE (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * ___trigger0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::InitializeUANAEngineWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_InitializeUANAEngineWrapper_mBD978D4B04ED2DC8B0B43CF5BA0D4ABD568AFD7D (const RuntimeMethod* method);
// System.IntPtr UnityEngine.Monetization.IosPlacementContentOperations::get_placementContentPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC_inline (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosPlacementContentOperations::UnityMonetizationPlacementContentReleaseReference(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlacementContentOperations_UnityMonetizationPlacementContentReleaseReference_m62ECB5920BFC87A7EFB344D417E82A2425BADCC7 (intptr_t ___pPlacementContentPtr0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * __this, intptr_t ___placementContentPtr0, RuntimeObject* ___executor1, const RuntimeMethod* method);
// UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.IosPromoAdOperations::GetMetadataForObjCObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  IosPromoAdOperations_GetMetadataForObjCObject_m0D4748AE4376EF29ACFED2DEE4F5688272F6D61F (intptr_t ___intPtr0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.IosPromoAdOperations::UnityMonetizationGetPromoAdMetadata(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPromoAdOperations_UnityMonetizationGetPromoAdMetadata_mF089924830D7ABEADF93D027EEFDDDAF6557AA53 (intptr_t ___pPlacementContent0, const RuntimeMethod* method);
// UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.PromoMetadataJsonDeserializer::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosPlacementContentOperations::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4 (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, intptr_t ___placementContentPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdFinishedCallback(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2 (int32_t ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdStartedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F (const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosRewardedOperations::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosRewardedOperations__ctor_m3EA9766F9296562477BA2EA752C567E839B017C9 (IosRewardedOperations_tE0436EE6504404F80807B1584BB305EA64F1F6B3 * __this, intptr_t ___placementContentPtr0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975 (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::get_HasValue()
inline bool Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *, const RuntimeMethod*))Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::GetValueOrDefault()
inline ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method)
{
	return ((  ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  (*) (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Monetization.ShowAdStartCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations/<FinishHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishHandlerU3Ec__AnonStorey0__ctor_m5C5BFE0270B8FAC2CDF2189E261A0DA61C6B7952 (U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343 (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6 (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdFinishCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2 (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations::UnityMonetizationPlacementContentShowAd(System.IntPtr,UnityEngine.Monetization.ShowAdStartCallback,UnityEngine.Monetization.ShowAdFinishCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_UnityMonetizationPlacementContentShowAd_m0AB00FB9B6E5C589C04C36128EC43BE7A2114B3A (intptr_t ___pPlacementContent0, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___startCallback1, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___finishCallback2, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs::.ctor(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * __this, int32_t ___result0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m2FE8206E1952FA462F0EF4CD50548B38272FA9A6 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * __this, RuntimeObject * ___sender0, AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *, RuntimeObject *, AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Object UnityEngine.Monetization.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.String UnityEngine.Monetization.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m7AEC14A2398EC183BCB6DF25ABA5D1E258E29AD3 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.Monetization.IMonetizationPlatform UnityEngine.Monetization.Creator::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Monetization.Monetization::get_isInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Monetization::set_isInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7_inline (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, String_t* ___category0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1 (const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Monetization::SetMetaData(UnityEngine.Monetization.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * ___metaData0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.Monetization::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62 (const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mF6B0B4FA789A8B5BE08AC975938B6366DBC83951 (EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Int64 UnityEngine.Monetization.UnityServicesErrorEventArgs::get_error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
inline void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, int64_t, const RuntimeMethod*))Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.Monetization.UnityServicesErrorEventArgs::get_message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUI_ModalWindow_mB12C4F791B1CEDB704047871E4180B5208C05B6D (int32_t ___id0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___clientRect1, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func2, String_t* ___text3, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, int32_t ___scaleMode2, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdFinishCallback::Invoke(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, int32_t ___finishState0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PlacementContent::set_placementId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PlacementContent::set_placementContentOperations(UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::.ctor()
inline void Dictionary_2__ctor_m7544D4263000A3B262B0A8777199D57885F1F98E (Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_mA859476434221EEA92E637746E84D3FED8474913 (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::set_Platform(UnityEngine.Monetization.Platform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51_inline (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics__ctor_m8C4342459031CF482AC883C29C8440AA7386F49C (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosAnalytics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816 (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform__ctor_m246019D33132E210E081FC0878B7E2BA0545434C (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Purchasing.PurchasingPlatform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchasingPlatform_Initialize_m261DEB27B76AE7F6CA2C71EDE7666E1368CD1951 (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform::UnityMonetizationInitialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityMonetizationInitialize_m31765AA977BEC99DBE33E5FEC30EE74444690BB9 (String_t* ___gameId0, bool ___isTestMode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Monetization.Platform::UnityMonetizationIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityMonetizationIsReady_m02660D666B8E6CAEDABE6BAC07806E9777F3A0A0 (String_t* ___placementId0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416_inline (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_m00E1A6255AC7E46ACDAD72FDF4983BA19D87998E (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsSetMetaData_mA0A9D3383ABDB80F3FFEB03BA937A64C8DC9CE9D (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.Platform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsGetVersion_m97C4F189DF02CFC87C923E5612EC7A1BA74960FB (const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/<OnNativePlacementContentReady>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentReadyU3Ec__AnonStorey0__ctor_m97B2233A013BC6430BA3F7A486A91571E3438FA2 (U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * __this, const RuntimeMethod* method);
// UnityEngine.Monetization.PlacementContentType UnityEngine.Monetization.Platform::GetPlacementContentTypeForPlacementContentPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213 (intptr_t ___pPlacementContent0, const RuntimeMethod* method);
// UnityEngine.Monetization.IPlacementContentOperations UnityEngine.Monetization.Platform::GetPlacementContentOperationsForType(UnityEngine.Monetization.PlacementContentType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int32_t ___type0, intptr_t ___pPlacementContent1, const RuntimeMethod* method);
// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform::GetPlacementContentForType(UnityEngine.Monetization.PlacementContentType,System.String,UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int32_t ___type0, String_t* ___placementId1, RuntimeObject* ___operations2, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.Platform::GetPlacementContentExtras(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, intptr_t ___pPlacementContent0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PlacementContent::set_extras(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentExtras(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityMonetizationGetPlacementContentExtras_m040B800828B20A554503B1E01F079A8174C69E53 (intptr_t ___pPlacementContent0, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityMonetizationGetPlacementContentType_m28261F243410B5CC928620DC3928914FCEE44B52 (intptr_t ___pPlacementContent0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.IosPromoAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPromoAdOperations__ctor_m5CFBBB2E0E3386B831BC8D77EA1E668BEA37939B (IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097 * __this, intptr_t ___placementContentPtr0, RuntimeObject* ___executor1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IShowAdOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952 (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PromoAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IPromoAdOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromoAdPlacementContent__ctor_m482DFF7BC2FEE1F7C20DA63535B2B2EAD338A2DD (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PlacementContent::.ctor(System.String,UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136 (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/<OnNativePlacementContentStateChanged>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1__ctor_m5EF63C2FC89596DB5C9CDEBF53919ED4337810F4 (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/<OnNativePlacementContentStateChanged>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2__ctor_mAA98EEB2209D25027B63B08B40DD13492DEC1D17 (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::.ctor(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368 (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m0F267EEA688520BCCCAB71283DED72317DD3DA9B (EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * __this, RuntimeObject * ___sender0, UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *, RuntimeObject *, UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>::.ctor()
inline void Dictionary_2__ctor_m2E7D8054C40A2CCBA4240698380C04F4A768E5A0 (Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF *, const RuntimeMethod*))Dictionary_2__ctor_mDD94B092289B595591F7BFA6575667F3FCD66B00_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>::Add(!0,!1)
inline void Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F (Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_mABEB0118462E5CA83603DB684E8E73682AC01EE6_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Monetization.PromoAdPlacementContent::set_promoAdOperations(UnityEngine.Monetization.IPromoAdOperations)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146_inline (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.DateTime UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetImpressionDateTime(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3 (RuntimeObject * ___rawDateTime0, const RuntimeMethod* method);
// System.TimeSpan UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetOfferDuration(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A (RuntimeObject * ___rawOfferDuration0, const RuntimeMethod* method);
// UnityEngine.Monetization.PromoItem[] UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8 (RuntimeObject * ___rawArray0, const RuntimeMethod* method);
// UnityEngine.Monetization.Product UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetProductFromDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9 (RuntimeObject * ___rawProduct0, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0 (double ___value0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Monetization.PromoItem UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemFromDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076 (RuntimeObject * ___rawItem0, const RuntimeMethod* method);
// System.Decimal UnityEngine.Monetization.PromoMetadataJsonDeserializer::ParseDecimal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1 (RuntimeObject * ___rawDecimal0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m145E08923E726750B62B4CB80C5A758ED3A4669C (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m25A12AAF4018E9040B6D8BD32648E3A71959A71C (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.RewardablePlacementContent::.ctor(System.String,UnityEngine.Monetization.IRewardedOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardablePlacementContent__ctor_m0F9474629B40CAE3F1E228CE84AE89BC60426288 (RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297 * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdPlacementContent/<Show>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_mAE624C059D9C43B942ECA5DA0BB1A72F0EB1204D (U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.ShowAdPlacementContent::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdYield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdYield__ctor_m240765C70263B816520AC89DE2039F3986F382EB (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdYield::set_showing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Monetization.IShowAdOperations UnityEngine.Monetization.ShowAdPlacementContent::get_showAdOperations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>::.ctor(!0)
inline void Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C , const RuntimeMethod*))Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Monetization.ShowAdYield::get_showing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_error(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Monetization.ShowResult UnityEngine.Monetization.IosShowAdOperations/AdFinishedEventArgs::get_result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC_inline (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object UnityEngine.Monetization.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// UnityEngine.Monetization.MiniJSON.Json/Parser/TOKEN UnityEngine.Monetization.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object UnityEngine.Monetization.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Monetization.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object UnityEngine.Monetization.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Monetization.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> UnityEngine.Monetization.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char UnityEngine.Monetization.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String UnityEngine.Monetization.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Char UnityEngine.Monetization.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Monetization.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.PlacementContentReadyEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F (PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D * __this, String_t* ___id0, PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.PlacementContentReadyEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mBD48CAE7B84D441AB920E7D312D9207B46F8E814 (EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * __this, RuntimeObject * ___sender0, PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 *, RuntimeObject *, PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Monetization.PlacementContentStateChangeEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent,UnityEngine.Monetization.PlacementContentState,UnityEngine.Monetization.PlacementContentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48 (PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 * __this, String_t* ___id0, PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent1, int32_t ___preState2, int32_t ___newState3, const RuntimeMethod* method);
// System.Void System.EventHandler`1<UnityEngine.Monetization.PlacementContentStateChangeEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mCFF0376B743C5D708D0E4823F63447D014CAF894 (EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * __this, RuntimeObject * ___sender0, PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 *, RuntimeObject *, PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::OnPlacementContentReady(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F (String_t* ___placementId0, intptr_t ___placementContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::OnPlacementContentChanged(System.String,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC (String_t* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::OnError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10 (int64_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnPlacementContentReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentReadyCallback__ctor_m72979DE2865B20A30FCD9A095404F5C691122214 (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnPlacementContentStateChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentStateChangedCallback__ctor_m879A48543E431BF08DAD8950D3F82DBABF3029A5 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m3B8F314C59F530BCBA2A26A66B2C681856F88819 (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::UnityMonetizationSetMonetizationCallbacks(UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_UnityMonetizationSetMonetizationCallbacks_mEE2AEE69825D41327908C5F64375BA12E3F8B70E (UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * ___callback0, const RuntimeMethod* method);
// UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform/PlatformCallbacksWrapper::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_inline (const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentReady(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, intptr_t ___pPlacementContent1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentStateChanged(System.String,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, intptr_t ___pPlacementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.Platform::OnNativeError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdYield::set_result(UnityEngine.Monetization.ShowResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Monetization.ShowAdPlacementContent::set_showing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL UANAEngineDelegateSetTriggerAddExtras(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL InitializeUANAEngineWrapper();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMonetizationPlacementContentReleaseReference(intptr_t);
IL2CPP_EXTERN_C Il2CppChar* DEFAULT_CALL UnityMonetizationGetPromoAdMetadata(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMonetizationPlacementContentShowAd(intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityMonetizationIsReady(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMonetizationInitialize(char*, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityMonetizationGetPlacementContentType(intptr_t);
IL2CPP_EXTERN_C Il2CppChar* DEFAULT_CALL UnityMonetizationGetPlacementContentExtras(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityAdsSetMetaData(char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL UnityAdsGetVersion();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMonetizationSetMonetizationCallbacks(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke*);
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
// System.Boolean UnityEngine.Monetization.Analytics::InitializeStandardEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B8_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
			Type_t * L_0 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
			if (L_0)
			{
				goto IL_0072;
			}
		}

IL_000a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
			String_t* L_1 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsClassName_0();
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_2 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_1, (bool)1, Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9_RuntimeMethod_var);
			((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsType_1(L_2);
			Type_t * L_3 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
			if (!L_3)
			{
				goto IL_0072;
			}
		}

IL_0024:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
			Type_t * L_4 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
			String_t* L_5 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsRegisterMethodName_2();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = L_6;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_9);
			NullCheck(L_4);
			MethodInfo_t * L_10 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_4, L_5, L_7, /*hidden argument*/NULL);
			((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsRegisterMethodInfo_4(L_10);
			Type_t * L_11 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
			String_t* L_12 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsUnregisterMethodName_3();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_13 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_14 = L_13;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1_0_0_0_var) };
			Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_16);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_16);
			NullCheck(L_11);
			MethodInfo_t * L_17 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_11, L_12, L_14, /*hidden argument*/NULL);
			((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsUnregisterMethodInfo_5(L_17);
		}

IL_0072:
		{
			goto IL_0088;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0077;
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		goto IL_0088;
	} // end catch (depth: 1)

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsRegisterMethodInfo_4();
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		MethodInfo_t * L_21 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsUnregisterMethodInfo_5();
		G_B8_0 = ((((int32_t)((((RuntimeObject*)(MethodInfo_t *)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00a0;
	}

IL_009f:
	{
		G_B8_0 = 0;
	}

IL_00a0:
	{
		return (bool)G_B8_0;
	}
}
// System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19 (String_t* ___jsonExtras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_1 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)1;
		String_t* L_0 = ___jsonExtras0;
		RuntimeObject * L_1 = Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5(L_0, /*hidden argument*/NULL);
		V_1 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = V_1;
		NullCheck(L_2);
		Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  L_3 = Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		V_3 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001a:
		{
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_4 = Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
			V_2 = L_4;
			String_t* L_5 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			RuntimeObject * L_6 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
			bool L_7 = Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592(L_5, L_6, /*hidden argument*/NULL);
			V_4 = L_7;
			bool L_8 = V_4;
			if (L_8)
			{
				goto IL_0040;
			}
		}

IL_003e:
		{
			V_0 = (bool)0;
		}

IL_0040:
		{
			bool L_9 = Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001a;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		IL2CPP_END_FINALLY(81)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592 (String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		bool L_0 = Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsExtras_6();
		String_t* L_2 = ___key0;
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_1, L_2);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsExtras_6();
		String_t* L_5 = ___key0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0028:
	{
		RuntimeObject * L_6 = ___value1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsExtras_6();
		String_t* L_8 = ___key0;
		RuntimeObject * L_9 = ___value1;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(2 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_7, L_8, L_9);
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsUnregisterMethodInfo_5();
		Type_t * L_11 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
		Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F* L_12 = (Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F*)(Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F*)SZArrayNew(Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F_il2cpp_TypeInfo_var, (uint32_t)1);
		Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F* L_13 = L_12;
		Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * L_14 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsAction_7();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 *)L_14);
		NullCheck(L_10);
		MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_10, L_11, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_13, /*hidden argument*/NULL);
		MethodInfo_t * L_15 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsRegisterMethodInfo_4();
		Type_t * L_16 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsType_1();
		Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F* L_17 = (Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F*)(Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F*)SZArrayNew(Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F_il2cpp_TypeInfo_var, (uint32_t)1);
		Action_1U5BU5D_t05A7618104232929FCB0DB00F32B63838FE3796F* L_18 = L_17;
		Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * L_19 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsAction_7();
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 *)L_19);
		NullCheck(L_15);
		MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_15, L_16, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_18, /*hidden argument*/NULL);
		goto IL_008c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007b;
		throw e;
	}

CATCH_007b:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
		goto IL_008c;
	} // end catch (depth: 1)

IL_008c:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.Monetization.Analytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics__cctor_m5AA23D8A43EFA1C6FA0252FE36B4006274EF8638 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics__cctor_m5AA23D8A43EFA1C6FA0252FE36B4006274EF8638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsClassName_0(_stringLiteral8C721E9C23CBA46D8FE304BE8A12021C466E2F32);
		((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsRegisterMethodName_2(_stringLiteralFE34A5566036903FCE3E0CEBAC53DFD920F981F0);
		((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsUnregisterMethodName_3(_stringLiteral8BF54FBDB79A782B92813B9F989D9F88E2014B3D);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsExtras_6(L_0);
		Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 * L_1 = (Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1 *)il2cpp_codegen_object_new(Action_1_t10E4D8580168CBEF8B03D2717E34336E8B0156E1_il2cpp_TypeInfo_var);
		Action_1__ctor_mDEC5DC4B8F9E25929AB8A7FB5D059D7A0DDA90CF(L_1, NULL, (intptr_t)((intptr_t)Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mDEC5DC4B8F9E25929AB8A7FB5D059D7A0DDA90CF_RuntimeMethod_var);
		((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->set_s_StandardEventsAction_7(L_1);
		return;
	}
}
// System.Void UnityEngine.Monetization.Analytics::<s_StandardEventsAction>m__0(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61 (RuntimeObject* ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_StaticFields*)il2cpp_codegen_static_fields_for(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var))->get_s_StandardEventsExtras_6();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_3 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject* L_4 = ___eventData0;
			String_t* L_5 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			NullCheck(L_4);
			bool L_6 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_4, L_5);
			if (!L_6)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			RuntimeObject* L_7 = ___eventData0;
			String_t* L_8 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			NullCheck(L_7);
			InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_7, L_8);
		}

IL_0037:
		{
			RuntimeObject* L_9 = ___eventData0;
			String_t* L_10 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			RuntimeObject * L_11 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			NullCheck(L_9);
			InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(2 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		}

IL_004b:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0010;
			}
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0067;
			}
		}

IL_0061:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0067:
		{
			IL2CPP_END_FINALLY(91)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
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
// UnityEngine.Monetization.IMonetizationPlatform UnityEngine.Monetization.Creator::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B *)il2cpp_codegen_object_new(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)__exception_local);
		}

IL_000c:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralEA9719ECDAC1DE837C524AE48BF34A1DE4C7D702, /*hidden argument*/NULL);
			Exception_t * L_1 = V_1;
			NullCheck(L_1);
			String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_1);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_2, /*hidden argument*/NULL);
			goto IL_002c;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (MissingMethodException_t84403BAD115335684834149401CDDFF3BDD42B41_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0026;
			throw e;
		}

CATCH_0026:
		{ // begin catch(System.MissingMethodException)
			goto IL_002c;
		} // end catch (depth: 2)

IL_002c:
		{
			UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * L_3 = (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB *)il2cpp_codegen_object_new(UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB_il2cpp_TypeInfo_var);
			UnsupportedPlatform__ctor_mCFDBDAA0C48857D823D75E36B2B064ABD5AFF9FB(L_3, /*hidden argument*/NULL);
			V_0 = L_3;
			goto IL_0037;
		}
	} // end catch (depth: 1)

IL_0037:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A(char* ___extras0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___extras0' to managed representation
	String_t* ____extras0_unmarshaled = NULL;
	____extras0_unmarshaled = il2cpp_codegen_marshal_string_result(___extras0);

	// Managed method invocation
	IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A(____extras0_unmarshaled, NULL);

}
// System.Void UnityEngine.Monetization.IosAnalytics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics__ctor_m8C4342459031CF482AC883C29C8440AA7386F49C (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosAnalytics::set_Instance(UnityEngine.Monetization.IosAnalytics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215 (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * L_0 = ___value0;
		((IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields*)il2cpp_codegen_static_fields_for(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosAnalytics::UANAEngineDelegateSetTriggerAddExtras(UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_UANAEngineDelegateSetTriggerAddExtras_mDA06D57D342D7F4B72AEDCDB0CDC5F3D109A00EE (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * ___trigger0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___trigger0' to native representation
	Il2CppMethodPointer ____trigger0_marshaled = NULL;
	____trigger0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___trigger0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UANAEngineDelegateSetTriggerAddExtras)(____trigger0_marshaled);

}
// System.Void UnityEngine.Monetization.IosAnalytics::InitializeUANAEngineWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_InitializeUANAEngineWrapper_mBD978D4B04ED2DC8B0B43CF5BA0D4ABD568AFD7D (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(InitializeUANAEngineWrapper)();

}
// System.Void UnityEngine.Monetization.IosAnalytics::TriggerAddExtras(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A (String_t* ___extras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___extras0;
		IL2CPP_RUNTIME_CLASS_INIT(Analytics_t852A7D4B13801352AFAC90488373CB2956F8CB36_il2cpp_TypeInfo_var);
		Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosAnalytics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816 (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215_inline(__this, /*hidden argument*/NULL);
		unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * L_0 = ((IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields*)il2cpp_codegen_static_fields_for(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * L_1 = (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 *)il2cpp_codegen_object_new(unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8_il2cpp_TypeInfo_var);
		unityAnalyticsTriggerAddExtras__ctor_m781966E811E862FC94ED3D80C57ED1AD084F3601(L_1, NULL, (intptr_t)((intptr_t)IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_RuntimeMethod_var), /*hidden argument*/NULL);
		((IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields*)il2cpp_codegen_static_fields_for(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_1);
	}

IL_001e:
	{
		unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * L_2 = ((IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields*)il2cpp_codegen_static_fields_for(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		IosAnalytics_UANAEngineDelegateSetTriggerAddExtras_mDA06D57D342D7F4B72AEDCDB0CDC5F3D109A00EE(L_2, /*hidden argument*/NULL);
		IosAnalytics_InitializeUANAEngineWrapper_mBD978D4B04ED2DC8B0B43CF5BA0D4ABD568AFD7D(/*hidden argument*/NULL);
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
// System.Void UnityEngine.Monetization.IosPlacementContentOperations::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4 (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, intptr_t ___placementContentPtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___placementContentPtr0;
		__this->set_U3CplacementContentPtrU3Ek__BackingField_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosPlacementContentOperations::UnityMonetizationPlacementContentReleaseReference(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlacementContentOperations_UnityMonetizationPlacementContentReleaseReference_m62ECB5920BFC87A7EFB344D417E82A2425BADCC7 (intptr_t ___pPlacementContentPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMonetizationPlacementContentReleaseReference)(___pPlacementContentPtr0);

}
// System.IntPtr UnityEngine.Monetization.IosPlacementContentOperations::get_placementContentPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_U3CplacementContentPtrU3Ek__BackingField_0();
		return (intptr_t)L_0;
	}
}
// System.Void UnityEngine.Monetization.IosPlacementContentOperations::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPlacementContentOperations_Finalize_m2791BE3666A0FDEE5FBDD7307F9DF4AAF80B3E47 (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC_inline(__this, /*hidden argument*/NULL);
		IosPlacementContentOperations_UnityMonetizationPlacementContentReleaseReference_m62ECB5920BFC87A7EFB344D417E82A2425BADCC7((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
// System.Void UnityEngine.Monetization.IosPromoAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosPromoAdOperations__ctor_m5CFBBB2E0E3386B831BC8D77EA1E668BEA37939B (IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097 * __this, intptr_t ___placementContentPtr0, RuntimeObject* ___executor1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___placementContentPtr0;
		RuntimeObject* L_1 = ___executor1;
		IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F(__this, (intptr_t)L_0, L_1, /*hidden argument*/NULL);
		intptr_t L_2 = ___placementContentPtr0;
		PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  L_3 = IosPromoAdOperations_GetMetadataForObjCObject_m0D4748AE4376EF29ACFED2DEE4F5688272F6D61F((intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_U3CmetadataU3Ek__BackingField_7(L_3);
		return;
	}
}
// System.String UnityEngine.Monetization.IosPromoAdOperations::UnityMonetizationGetPromoAdMetadata(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosPromoAdOperations_UnityMonetizationGetPromoAdMetadata_mF089924830D7ABEADF93D027EEFDDDAF6557AA53 (intptr_t ___pPlacementContent0, const RuntimeMethod* method)
{
	typedef Il2CppChar* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(UnityMonetizationGetPromoAdMetadata)(___pPlacementContent0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_wstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.IosPromoAdOperations::GetMetadataForObjCObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  IosPromoAdOperations_GetMetadataForObjCObject_m0D4748AE4376EF29ACFED2DEE4F5688272F6D61F (intptr_t ___intPtr0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___intPtr0;
		String_t* L_1 = IosPromoAdOperations_UnityMonetizationGetPromoAdMetadata_mF089924830D7ABEADF93D027EEFDDDAF6557AA53((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  L_3 = PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Monetization.IosRewardedOperations::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosRewardedOperations__ctor_m3EA9766F9296562477BA2EA752C567E839B017C9 (IosRewardedOperations_tE0436EE6504404F80807B1584BB305EA64F1F6B3 * __this, intptr_t ___placementContentPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___placementContentPtr0;
		IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4(__this, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2(int32_t ___result0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2(___result0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F(NULL);

}
// System.Void UnityEngine.Monetization.IosShowAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * __this, intptr_t ___placementContentPtr0, RuntimeObject* ___executor1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___placementContentPtr0;
		IosRewardedOperations__ctor_m3EA9766F9296562477BA2EA752C567E839B017C9(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___executor1;
		__this->set__executor_3(L_1);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::UnityMonetizationPlacementContentShowAd(System.IntPtr,UnityEngine.Monetization.ShowAdStartCallback,UnityEngine.Monetization.ShowAdFinishCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_UnityMonetizationPlacementContentShowAd_m0AB00FB9B6E5C589C04C36128EC43BE7A2114B3A (intptr_t ___pPlacementContent0, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___startCallback1, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___finishCallback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___startCallback1' to native representation
	Il2CppMethodPointer ____startCallback1_marshaled = NULL;
	____startCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___startCallback1));

	// Marshaling of parameter '___finishCallback2' to native representation
	Il2CppMethodPointer ____finishCallback2_marshaled = NULL;
	____finishCallback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___finishCallback2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMonetizationPlacementContentShowAd)(___pPlacementContent0, ____startCallback1_marshaled, ____finishCallback2_marshaled);

}
// System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * V_0 = NULL;
	EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * V_1 = NULL;
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdFinished_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_2 = V_1;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_5 = V_0;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *>((EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 **)(((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_address_of_OnAdFinished_1()), ((EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_7 = V_0;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)L_7) == ((RuntimeObject*)(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7 (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * V_0 = NULL;
	EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * V_1 = NULL;
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdFinished_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_2 = V_1;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_5 = V_0;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *>((EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 **)(((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_address_of_OnAdFinished_1()), ((EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_7 = V_0;
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)L_7) == ((RuntimeObject*)(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343 (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdStarted_2();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_2 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)(((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_address_of_OnAdStarted_2()), ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_7) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975 (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdStarted_2();
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_2 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)(((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_address_of_OnAdStarted_2()), ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_7) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::StartHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22 (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_0, __this, (intptr_t)((intptr_t)IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975(L_0, /*hidden argument*/NULL);
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_1 = __this->get__showAdCallbacks_4();
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_003a;
	}

IL_0026:
	{
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_3 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_1 = L_3;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_4 = (&V_1)->get_startCallback_1();
		NullCheck(L_4);
		ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD(L_4, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::FinishHandler(System.Object,UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7 (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * __this, RuntimeObject * ___sender0, AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * V_0 = NULL;
	{
		U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * L_0 = (U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F *)il2cpp_codegen_object_new(U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F_il2cpp_TypeInfo_var);
		U3CFinishHandlerU3Ec__AnonStorey0__ctor_m5C5BFE0270B8FAC2CDF2189E261A0DA61C6B7952(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * L_1 = V_0;
		AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * L_2 = ___e1;
		NullCheck(L_1);
		L_1->set_e_0(L_2);
		U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_4 = (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)il2cpp_codegen_object_new(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56(L_4, __this, (intptr_t)((intptr_t)IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56_RuntimeMethod_var);
		IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = __this->get__executor_3();
		U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * L_6 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_7, L_6, (intptr_t)((intptr_t)U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tDF6F8C92E8EEB332498A16D9A28E6E37AB8AFA07_il2cpp_TypeInfo_var, L_5, L_7);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_Show_m478B3D02F1EA7777B15B2A74E075E49F4C5767F2 (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * __this, Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  ___callbacks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_Show_m478B3D02F1EA7777B15B2A74E075E49F4C5767F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * G_B3_0 = NULL;
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * G_B8_0 = NULL;
	intptr_t G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	intptr_t G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * G_B14_0 = NULL;
	intptr_t G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * G_B13_0 = NULL;
	intptr_t G_B13_1;
	memset((&G_B13_1), 0, sizeof(G_B13_1));
	{
		bool L_0 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&___callbacks0), /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)(NULL));
		goto IL_001e;
	}

IL_000f:
	{
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_1 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&___callbacks0), /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_0 = L_1;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_2 = (&V_0)->get_startCallback_1();
		G_B3_0 = L_2;
	}

IL_001e:
	{
		if (!G_B3_0)
		{
			goto IL_003b;
		}
	}
	{
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_3 = ___callbacks0;
		__this->set__showAdCallbacks_4(L_3);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_4, __this, (intptr_t)((intptr_t)IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343(L_4, /*hidden argument*/NULL);
	}

IL_003b:
	{
		bool L_5 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&___callbacks0), /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		G_B8_0 = ((ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)(NULL));
		goto IL_0059;
	}

IL_004a:
	{
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_6 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&___callbacks0), /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_0 = L_6;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_7 = (&V_0)->get_finishCallback_0();
		G_B8_0 = L_7;
	}

IL_0059:
	{
		if (!G_B8_0)
		{
			goto IL_0076;
		}
	}
	{
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_8 = ___callbacks0;
		__this->set__showAdCallbacks_4(L_8);
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_9 = (EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 *)il2cpp_codegen_object_new(EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56(L_9, __this, (intptr_t)((intptr_t)IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mB11447452661FE514965DC6FDD640EE17C6EED56_RuntimeMethod_var);
		IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4(L_9, /*hidden argument*/NULL);
	}

IL_0076:
	{
		intptr_t L_10 = IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC_inline(__this, /*hidden argument*/NULL);
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_11 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		G_B11_0 = L_10;
		if (L_11)
		{
			G_B12_0 = L_10;
			goto IL_0094;
		}
	}
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_12 = (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)il2cpp_codegen_object_new(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var);
		ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6(L_12, NULL, (intptr_t)((intptr_t)IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_RuntimeMethod_var), /*hidden argument*/NULL);
		((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_5(L_12);
		G_B12_0 = G_B11_0;
	}

IL_0094:
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_13 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_5();
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_14 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_6();
		G_B13_0 = L_13;
		G_B13_1 = G_B12_0;
		if (L_14)
		{
			G_B14_0 = L_13;
			G_B14_1 = G_B12_0;
			goto IL_00b1;
		}
	}
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_15 = (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)il2cpp_codegen_object_new(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var);
		ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2(L_15, NULL, (intptr_t)((intptr_t)IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_RuntimeMethod_var), /*hidden argument*/NULL);
		((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_6(L_15);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_00b1:
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_16 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_6();
		IosShowAdOperations_UnityMonetizationPlacementContentShowAd_m0AB00FB9B6E5C589C04C36128EC43BE7A2114B3A((intptr_t)G_B14_1, G_B14_0, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdFinishedCallback(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2 (int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdFinished_1();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_001d;
	}

IL_000c:
	{
		EventHandler_1_t4585D79B8F1F50A331B887A38FE0D4EF852BB179 * L_1 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdFinished_1();
		int32_t L_2 = ___result0;
		AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * L_3 = (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 *)il2cpp_codegen_object_new(AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507_il2cpp_TypeInfo_var);
		AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m2FE8206E1952FA462F0EF4CD50548B38272FA9A6(L_1, NULL, L_3, /*hidden argument*/EventHandler_1_Invoke_m2FE8206E1952FA462F0EF4CD50548B38272FA9A6_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdStartedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdStarted_2();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_001c;
	}

IL_000c:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = ((IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_StaticFields*)il2cpp_codegen_static_fields_for(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var))->get_OnAdStarted_2();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *)il2cpp_codegen_object_new(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, NULL, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001c:
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
// System.Object UnityEngine.Monetization.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5 (String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.Monetization.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m7AEC14A2398EC183BCB6DF25ABA5D1E258E29AD3 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UnityEngine.Monetization.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, String_t* ___category0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(__this, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		String_t* L_0 = ___category0;
		__this->set_U3CcategoryU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.String UnityEngine.Monetization.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		RuntimeObject * L_1 = ___value1;
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(__this, L_0, L_1, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		return;
	}
}
// System.String UnityEngine.Monetization.MetaData::ToJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_ToJSON_m00E1A6255AC7E46ACDAD72FDF4983BA19D87998E (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Json_Serialize_m7AEC14A2398EC183BCB6DF25ABA5D1E258E29AD3(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Monetization.Monetization::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization__cctor_m15A8872B1A25BCC3DA66C66D006BFD73EB88F6F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization__cctor_m15A8872B1A25BCC3DA66C66D006BFD73EB88F6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8(/*hidden argument*/NULL);
		((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->set_s_Platform_0(L_0);
		return;
	}
}
// System.String UnityEngine.Monetization.Monetization::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String UnityEngine.Monetization.IMonetizationPlatform::get_version() */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.Monetization.Monetization::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		bool L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.Monetization::set_isInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->set_s_Initialized_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.Monetization::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Monetization_IsReady_m0BEBFFCEBDFAD89D854C3481D8C37265C2595093 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_IsReady_m0BEBFFCEBDFAD89D854C3481D8C37265C2595093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_1 = ___placementId0;
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		String_t* L_3 = ___placementId0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		bool L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean UnityEngine.Monetization.IMonetizationPlatform::IsReady(System.String) */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, G_B3_1, G_B3_0);
		return L_4;
	}
}
// System.Void UnityEngine.Monetization.Monetization::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization_Initialize_mDF1D1F08799564B8F300DB4C0507351261A8DFD5 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_Initialize_mDF1D1F08799564B8F300DB4C0507351261A8DFD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * V_0 = NULL;
	MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		bool L_0 = Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0_inline(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_00b5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7_inline((bool)1, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_1 = (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B *)il2cpp_codegen_object_new(MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B_il2cpp_TypeInfo_var);
		MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853(L_1, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, /*hidden argument*/NULL);
		V_0 = L_1;
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_2 = V_0;
		NullCheck(L_2);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_3 = V_0;
		String_t* L_4 = Application_get_unityVersion_m96DFC04C06A62DDF3EDC830C1F103D848AC0FDF1(/*hidden argument*/NULL);
		NullCheck(L_3);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_5 = V_0;
		Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67(L_5, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_6 = (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B *)il2cpp_codegen_object_new(MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B_il2cpp_TypeInfo_var);
		MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853(L_6, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, /*hidden argument*/NULL);
		V_1 = L_6;
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_7 = V_1;
		NullCheck(L_7);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_7, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteralAA9A28D66793160C504DD8F9507163593DBAF0CD, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_8 = V_1;
		String_t* L_9 = Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62(/*hidden argument*/NULL);
		NullCheck(L_8);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_8, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_9, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_10 = V_1;
		NullCheck(L_10);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_10, _stringLiteral2F635357E5FEC863042F5E6D0C8D1E573C4B2B52, _stringLiteralC781D5A1BA3A0018886B3596240708A950C073B3, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_11 = V_1;
		Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67(L_11, /*hidden argument*/NULL);
		RuntimeObject* L_12 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_13 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		G_B2_0 = L_12;
		if (L_13)
		{
			G_B3_0 = L_12;
			goto IL_009f;
		}
	}
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_14 = (EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)il2cpp_codegen_object_new(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mF6B0B4FA789A8B5BE08AC975938B6366DBC83951(L_14, NULL, (intptr_t)((intptr_t)Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mF6B0B4FA789A8B5BE08AC975938B6366DBC83951_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_2(L_14);
		G_B3_0 = G_B2_0;
	}

IL_009f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_15 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		NullCheck(G_B3_0);
		InterfaceActionInvoker1< EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * >::Invoke(0 /* System.Void UnityEngine.Monetization.IMonetizationPlatform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>) */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, G_B3_0, L_15);
		RuntimeObject* L_16 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_17 = ___gameId0;
		bool L_18 = ___testMode1;
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(3 /* System.Void UnityEngine.Monetization.IMonetizationPlatform::Initialize(System.String,System.Boolean) */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, L_16, L_17, L_18);
	}

IL_00b5:
	{
		return;
	}
}
// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Monetization::GetPlacementContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * Monetization_GetPlacementContent_mC9FB6BD2A2FEB6A742DF8DDB284C228AB9FFAE15 (String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_GetPlacementContent_mC9FB6BD2A2FEB6A742DF8DDB284C228AB9FFAE15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_2 = InterfaceFuncInvoker1< PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *, String_t* >::Invoke(5 /* UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.IMonetizationPlatform::GetPlacementContent(System.String) */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.Monetization.Monetization::SetMetaData(UnityEngine.Monetization.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67 (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Platform_0();
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * >::Invoke(6 /* System.Void UnityEngine.Monetization.IMonetizationPlatform::SetMetaData(UnityEngine.Monetization.MetaData) */, IMonetizationPlatform_tD08694DACF6819CE6E2D04C6BA42D62A343E47E6_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Monetization.Monetization::OnError(System.Object,UnityEngine.Monetization.UnityServicesErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD (RuntimeObject * ___sender0, UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * L_2 = ___e1;
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = _stringLiteralA150492C0B6DBDEF449EC1A258A399B9EFEF880B;
		if (L_2)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = _stringLiteralA150492C0B6DBDEF449EC1A258A399B9EFEF880B;
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F ));
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_3 = V_0;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0029;
	}

IL_001e:
	{
		UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * L_4 = ___e1;
		NullCheck(L_4);
		int64_t L_5 = UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A_inline(L_4, /*hidden argument*/NULL);
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0029:
	{
		Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_7 = G_B3_0;
		RuntimeObject * L_8 = Box(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F_il2cpp_TypeInfo_var, &L_7);
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, L_8);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = G_B3_3;
		UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * L_10 = ___e1;
		G_B4_0 = 1;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = G_B3_4;
		if (L_10)
		{
			G_B5_0 = 1;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = G_B3_4;
			goto IL_003a;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0040;
	}

IL_003a:
	{
		UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * L_11 = ___e1;
		NullCheck(L_11);
		String_t* L_12 = UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659_inline(L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0040:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(G_B6_4, G_B6_3, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Monetization.Placeholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder__ctor_m54DA36C5683E6814BFDF782FA769CFB74EFE899D (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, const RuntimeMethod* method)
{
	{
		__this->set_purchaseButtonIsClicked_9((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::add_onStart(UnityEngine.Monetization.ShowAdStartCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_add_onStart_m1424BE3F3C16C13099CDF7B981B70C30981B9E40 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_add_onStart_m1424BE3F3C16C13099CDF7B981B70C30981B9E40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * V_0 = NULL;
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * V_1 = NULL;
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_0 = __this->get_onStart_12();
		V_0 = L_0;
	}

IL_0007:
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_1 = V_0;
		V_1 = L_1;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A ** L_2 = __this->get_address_of_onStart_12();
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_3 = V_1;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_6 = V_0;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_7 = InterlockedCompareExchangeImpl<ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *>((ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A **)L_2, ((ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)CastclassSealed((RuntimeObject*)L_5, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_8 = V_0;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_9 = V_1;
		if ((!(((RuntimeObject*)(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)L_8) == ((RuntimeObject*)(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::remove_onStart(UnityEngine.Monetization.ShowAdStartCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_remove_onStart_m921D1406E2184705FA31128C74E26EE0F29B1165 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_remove_onStart_m921D1406E2184705FA31128C74E26EE0F29B1165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * V_0 = NULL;
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * V_1 = NULL;
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_0 = __this->get_onStart_12();
		V_0 = L_0;
	}

IL_0007:
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_1 = V_0;
		V_1 = L_1;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A ** L_2 = __this->get_address_of_onStart_12();
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_3 = V_1;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_6 = V_0;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_7 = InterlockedCompareExchangeImpl<ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *>((ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A **)L_2, ((ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)CastclassSealed((RuntimeObject*)L_5, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_8 = V_0;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_9 = V_1;
		if ((!(((RuntimeObject*)(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)L_8) == ((RuntimeObject*)(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::add_onFinish(UnityEngine.Monetization.ShowAdFinishCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_add_onFinish_m81A539110A0E54EE7CB6CE12BB300A031D529264 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_add_onFinish_m81A539110A0E54EE7CB6CE12BB300A031D529264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * V_0 = NULL;
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * V_1 = NULL;
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_0 = __this->get_onFinish_13();
		V_0 = L_0;
	}

IL_0007:
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_1 = V_0;
		V_1 = L_1;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 ** L_2 = __this->get_address_of_onFinish_13();
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_3 = V_1;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_6 = V_0;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_7 = InterlockedCompareExchangeImpl<ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *>((ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 **)L_2, ((ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)CastclassSealed((RuntimeObject*)L_5, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_8 = V_0;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)L_8) == ((RuntimeObject*)(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::remove_onFinish(UnityEngine.Monetization.ShowAdFinishCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_remove_onFinish_m467402379788590BAEF37D78401E71901185F06B (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_remove_onFinish_m467402379788590BAEF37D78401E71901185F06B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * V_0 = NULL;
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * V_1 = NULL;
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_0 = __this->get_onFinish_13();
		V_0 = L_0;
	}

IL_0007:
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_1 = V_0;
		V_1 = L_1;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 ** L_2 = __this->get_address_of_onFinish_13();
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_3 = V_1;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_6 = V_0;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_7 = InterlockedCompareExchangeImpl<ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *>((ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 **)L_2, ((ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)CastclassSealed((RuntimeObject*)L_5, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_8 = V_0;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)L_8) == ((RuntimeObject*)(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::TextureFromEmbeddedResource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505 (String_t* ___resourceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	MethodInfo_t * V_4 = NULL;
	Type_t * V_5 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Assembly_t * L_0 = il2cpp_codegen_get_executing_assembly(Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_RuntimeMethod_var);
			V_0 = L_0;
			Assembly_t * L_1 = V_0;
			String_t* L_2 = ___resourceName0;
			NullCheck(L_1);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = VirtFuncInvoker1< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, String_t* >::Invoke(13 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_1, L_2);
			V_1 = L_3;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = V_1;
			NullCheck(L_4);
			int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
			if ((int64_t)(L_5) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_RuntimeMethod_var);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_5)));
			V_2 = L_6;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_7 = V_1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_2;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = V_1;
			NullCheck(L_9);
			int64_t L_10 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_9);
			NullCheck(L_7);
			VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)L_10))));
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
			Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_11, 1, 1, /*hidden argument*/NULL);
			V_3 = L_11;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_14 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15 = L_14;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var) };
			Type_t * L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_17);
			NullCheck(L_13);
			MethodInfo_t * L_18 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_13, _stringLiteral9612547B7B21E8E91ECA6701AFAE9239B1461294, L_15, /*hidden argument*/NULL);
			V_4 = L_18;
			MethodInfo_t * L_19 = V_4;
			if (!L_19)
			{
				goto IL_007b;
			}
		}

IL_0063:
		{
			MethodInfo_t * L_20 = V_4;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_3;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_23 = L_22;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_2;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
			NullCheck(L_20);
			MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_20, L_21, L_23, /*hidden argument*/NULL);
			goto IL_00e2;
		}

IL_007b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_25 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, _stringLiteral5827561F28381559DB55AE5BECDB975B4C21C317, Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505_RuntimeMethod_var);
			V_5 = L_25;
			Type_t * L_26 = V_5;
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_27 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)3);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28 = L_27;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_0_0_0_var) };
			Type_t * L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, L_30);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_30);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_31 = L_28;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_32 = { reinterpret_cast<intptr_t> (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_0_0_0_var) };
			Type_t * L_33 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_32, /*hidden argument*/NULL);
			NullCheck(L_31);
			ArrayElementTypeCheck (L_31, L_33);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_33);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_34 = L_31;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
			Type_t * L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_36);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_36);
			NullCheck(L_26);
			MethodInfo_t * L_37 = Type_GetMethod_mDA3E2A83228C0493894D40D02963D7B07C7B058E(L_26, _stringLiteral9612547B7B21E8E91ECA6701AFAE9239B1461294, L_34, /*hidden argument*/NULL);
			V_4 = L_37;
			MethodInfo_t * L_38 = V_4;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_39 = V_3;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = L_40;
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_42 = V_3;
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, L_42);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_42);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_41;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_2;
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_44);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_44);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_45 = L_43;
			bool L_46 = ((bool)1);
			RuntimeObject * L_47 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_46);
			NullCheck(L_45);
			ArrayElementTypeCheck (L_45, L_47);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_47);
			NullCheck(L_38);
			MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_38, L_39, L_45, /*hidden argument*/NULL);
		}

IL_00e2:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_48 = V_3;
			V_6 = L_48;
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ea;
		throw e;
	}

CATCH_00ea:
	{ // begin catch(System.Exception)
		V_6 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00f3:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_49 = V_6;
		return L_49;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Awake_m09CEF99F85BB7AF04AE046C401E6435AC348C3E2 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_Awake_m09CEF99F85BB7AF04AE046C401E6435AC348C3E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralD109F8C18D98178489430D8CAC2B8B4A2575550D, /*hidden argument*/NULL);
		__this->set_m_LandscapeTexture_4(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral6A659F2B5C01542D3F9AC0ECBD286AC45CAAFBE6, /*hidden argument*/NULL);
		__this->set_m_PortraitTexture_5(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_1, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral97477674B4FAEABB7EF4572E35FA41BB43976360, /*hidden argument*/NULL);
		__this->set_m_LandscapeAdTexture_6(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_2, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral10590099A63B60578060E167E455B4E51D074470, /*hidden argument*/NULL);
		__this->set_m_PortraitAdTexture_7(((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_3, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::Show(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_Show_mA07625053AE95912C50543D284270F440F67BA0F (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, String_t* ___placementId0, bool ___allowSkip1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		__this->set_m_PlacementId_10(L_0);
		bool L_1 = ___allowSkip1;
		__this->set_m_AllowSkip_11(L_1);
		__this->set_m_Showing_8((bool)1);
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_2 = __this->get_onStart_12();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002d;
	}

IL_0022:
	{
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_3 = __this->get_onStart_12();
		NullCheck(L_3);
		ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD(L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_OnGUI_mB177A7010188F5942209969FA862F4D76F592027 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_OnGUI_mB177A7010188F5942209969FA862F4D76F592027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_Showing_8();
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
		int32_t L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_4 = (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D *)il2cpp_codegen_object_new(WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238(L_4, __this, (intptr_t)((intptr_t)Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_ModalWindow_mB12C4F791B1CEDB704047871E4180B5208C05B6D(0, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_OnApplicationQuit_m84E7C381792BF02574B4E1B966734FAB314D60E3 (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Showing_8((bool)0);
		return;
	}
}
// System.Void UnityEngine.Monetization.Placeholder::ModalWindowFunction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C (Placeholder_t388F859DD4536E470772567760268E218C2BE406 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_1 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_2 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_3 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_4 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B6_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B14_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	{
		String_t* L_0 = __this->get_m_PlacementId_10();
		bool L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral8D0F3D8C434A2A8C41F0FF6F8575715A9C3E47CF, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00c7;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_m_LandscapeAdTexture_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = __this->get_m_PortraitAdTexture_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_6 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_8), (0.0f), (0.0f), (((float)((float)L_6))), (((float)((float)L_7))), /*hidden argument*/NULL);
		int32_t L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_10 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		G_B4_0 = L_8;
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			G_B5_0 = L_8;
			goto IL_006c;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = __this->get_m_LandscapeAdTexture_6();
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		goto IL_0072;
	}

IL_006c:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_12 = __this->get_m_PortraitAdTexture_7();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(G_B6_1, G_B6_0, 1, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_13 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_13, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_15 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = V_0;
		NullCheck(L_16);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_16, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_17 = V_0;
		NullCheck(L_17);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_17, ((int32_t)32), /*hidden argument*/NULL);
		int32_t L_18 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_19 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), (((float)((float)L_18))), (((float)((float)L_19))), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_21 = V_0;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_20, _stringLiteral3E5A9053249DBE20AD4567649EF4747DDCAB8FCD, L_21, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		goto IL_031b;
	}

IL_00c7:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = __this->get_m_LandscapeTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_012f;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = __this->get_m_PortraitTexture_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_26 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_27 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_28), (0.0f), (0.0f), (((float)((float)L_26))), (((float)((float)L_27))), /*hidden argument*/NULL);
		int32_t L_29 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_30 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		G_B12_0 = L_28;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			G_B13_0 = L_28;
			goto IL_011e;
		}
	}
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = __this->get_m_LandscapeTexture_4();
		G_B14_0 = L_31;
		G_B14_1 = G_B12_0;
		goto IL_0124;
	}

IL_011e:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_32 = __this->get_m_PortraitTexture_5();
		G_B14_0 = L_32;
		G_B14_1 = G_B13_0;
	}

IL_0124:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m50AFF787DEFFC667E145D1848A9B9C0E84C1DE1E(G_B14_1, G_B14_0, 1, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_33 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_34 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_33, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_35, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_36 = V_1;
		NullCheck(L_36);
		GUIStyle_set_alignment_mCF8FDA9DA149F528DCDC19680AEED46F25161D89(L_36, 4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_37 = V_1;
		NullCheck(L_37);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_37, ((int32_t)32), /*hidden argument*/NULL);
		int32_t L_38 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_39 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_40), (0.0f), (0.0f), (((float)((float)L_38))), (((float)((float)L_39))), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_41 = V_1;
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(L_40, _stringLiteralC16A75A5226763D4A88C0B4C11588FFC574435F8, L_41, /*hidden argument*/NULL);
	}

IL_0174:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_42 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_42);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_43 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_42, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_44 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_44, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_45 = V_2;
		NullCheck(L_45);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_45, ((int32_t)40), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_46 = V_2;
		NullCheck(L_46);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_47 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_46, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_47);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_47, L_48, /*hidden argument*/NULL);
		bool L_49 = __this->get_purchaseButtonIsClicked_9();
		if (L_49)
		{
			goto IL_023b;
		}
	}
	{
		int32_t L_50 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_51 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_52 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_53 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_54), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_52, (int32_t)3))/(int32_t)4)), (int32_t)((int32_t)100)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)3))/(int32_t)4)), (int32_t)((int32_t)100)))))), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_55 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_56 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_54, _stringLiteral1317CF02F3F3926703DF869C594244C35D400F6A, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01f6;
		}
	}
	{
		__this->set_purchaseButtonIsClicked_9((bool)1);
	}

IL_01f6:
	{
		goto IL_0236;
	}

IL_01fb:
	{
		int32_t L_57 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_58 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_59), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_57/(int32_t)2)), (int32_t)((int32_t)100)))))), (((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_58, (int32_t)3))/(int32_t)4))))), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_60 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_61 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_59, _stringLiteral1317CF02F3F3926703DF869C594244C35D400F6A, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_0236;
		}
	}
	{
		__this->set_purchaseButtonIsClicked_9((bool)1);
	}

IL_0236:
	{
		goto IL_031b;
	}

IL_023b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_62 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_62);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_63 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_62, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_64 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_64, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_65 = V_3;
		NullCheck(L_65);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_65, ((int32_t)40), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_66 = V_3;
		NullCheck(L_66);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_67 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_66, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_67);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_67, L_68, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_69 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_69);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_70 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_69, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_71 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_71, L_70, /*hidden argument*/NULL);
		V_4 = L_71;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_72 = V_4;
		NullCheck(L_72);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_72, ((int32_t)40), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_73 = V_4;
		NullCheck(L_73);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_74 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_73, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_74);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_74, L_75, /*hidden argument*/NULL);
		int32_t L_76 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_77 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_78), (((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_76, (int32_t)3))/(int32_t)4))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)((int32_t)150)))))), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_79 = V_3;
		bool L_80 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_78, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, L_79, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_02d1;
		}
	}
	{
		__this->set_purchaseButtonIsClicked_9((bool)0);
		__this->set_m_Showing_8((bool)0);
	}

IL_02d1:
	{
		int32_t L_81 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_82 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_83;
		memset((&L_83), 0, sizeof(L_83));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_83), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_81, (int32_t)3))/(int32_t)4)), (int32_t)((int32_t)200)))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)((int32_t)150)))))), (200.0f), (100.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_84 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_85 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(L_83, _stringLiteral395C75DAFC96AE1C9B89E497397FF16296D6A49E, L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_031b;
		}
	}
	{
		__this->set_purchaseButtonIsClicked_9((bool)0);
		__this->set_m_Showing_8((bool)0);
	}

IL_031b:
	{
		bool L_86 = __this->get_m_AllowSkip_11();
		if (!L_86)
		{
			goto IL_036e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_87;
		memset((&L_87), 0, sizeof(L_87));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_87), (20.0f), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_88 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_87, _stringLiteral3CAD586069D825336BB926A6885F14CD8387E428, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_036e;
		}
	}
	{
		__this->set_m_Showing_8((bool)0);
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_89 = __this->get_onFinish_13();
		if (L_89)
		{
			goto IL_0362;
		}
	}
	{
		goto IL_036e;
	}

IL_0362:
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_90 = __this->get_onFinish_13();
		NullCheck(L_90);
		ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB(L_90, 1, /*hidden argument*/NULL);
	}

IL_036e:
	{
		int32_t L_91 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_92;
		memset((&L_92), 0, sizeof(L_92));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_92), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)((int32_t)170)))))), (20.0f), (150.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_93 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_92, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_03bd;
		}
	}
	{
		__this->set_m_Showing_8((bool)0);
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_94 = __this->get_onFinish_13();
		if (L_94)
		{
			goto IL_03b1;
		}
	}
	{
		goto IL_03bd;
	}

IL_03b1:
	{
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_95 = __this->get_onFinish_13();
		NullCheck(L_95);
		ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB(L_95, 2, /*hidden argument*/NULL);
	}

IL_03bd:
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
// System.Void UnityEngine.Monetization.PlacementContent::.ctor(System.String,UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136 (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___placementId0;
		PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5_inline(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___operations1;
		PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.PlacementContent::set_placementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5 (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Monetization.PlacementContent::set_extras(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7 (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CextrasU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Monetization.PlacementContent::set_placementContentOperations(UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CplacementContentOperationsU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Monetization.PlacementContentReadyEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F (PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D * __this, String_t* ___id0, PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		__this->set_placementId_1(L_0);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_1 = ___placementContent1;
		__this->set_placementContent_2(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Monetization.PlacementContentStateChangeEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent,UnityEngine.Monetization.PlacementContentState,UnityEngine.Monetization.PlacementContentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48 (PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 * __this, String_t* ___id0, PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * ___placementContent1, int32_t ___preState2, int32_t ___newState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		__this->set_placementId_1(L_0);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_1 = ___placementContent1;
		__this->set_placementContent_2(L_1);
		int32_t L_2 = ___preState2;
		__this->set_previousState_3(L_2);
		int32_t L_3 = ___newState3;
		__this->set_newState_4(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Monetization.Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32 * L_0 = (Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32 *)il2cpp_codegen_object_new(Dictionary_2_t8B1DEACF16A2D979988651DDD849C0E689EBBF32_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7544D4263000A3B262B0A8777199D57885F1F98E(L_0, /*hidden argument*/Dictionary_2__ctor_m7544D4263000A3B262B0A8777199D57885F1F98E_RuntimeMethod_var);
		__this->set__placementContents_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 * L_1 = (UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6 *)il2cpp_codegen_object_new(UnityLifecycleManager_tD1E0B1340FBB3188A7B674822E1AEFE47C324CB6_il2cpp_TypeInfo_var);
		UnityLifecycleManager__ctor_mA859476434221EEA92E637746E84D3FED8474913(L_1, /*hidden argument*/NULL);
		__this->set__callbackExecutor_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.Platform::UnityMonetizationIsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_UnityMonetizationIsReady_m02660D666B8E6CAEDABE6BAC07806E9777F3A0A0 (String_t* ___placementId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityMonetizationIsReady)(____placementId0_marshaled);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.Monetization.Platform::UnityMonetizationInitialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityMonetizationInitialize_m31765AA977BEC99DBE33E5FEC30EE74444690BB9 (String_t* ___gameId0, bool ___isTestMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___gameId0' to native representation
	char* ____gameId0_marshaled = NULL;
	____gameId0_marshaled = il2cpp_codegen_marshal_string(___gameId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMonetizationInitialize)(____gameId0_marshaled, static_cast<int32_t>(___isTestMode1));

	// Marshaling cleanup of parameter '___gameId0' native representation
	il2cpp_codegen_marshal_free(____gameId0_marshaled);
	____gameId0_marshaled = NULL;

}
// System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityMonetizationGetPlacementContentType_m28261F243410B5CC928620DC3928914FCEE44B52 (intptr_t ___pPlacementContent0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityMonetizationGetPlacementContentType)(___pPlacementContent0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentExtras(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityMonetizationGetPlacementContentExtras_m040B800828B20A554503B1E01F079A8174C69E53 (intptr_t ___pPlacementContent0, const RuntimeMethod* method)
{
	typedef Il2CppChar* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(UnityMonetizationGetPlacementContentExtras)(___pPlacementContent0);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_wstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.Monetization.Platform::UnityAdsSetMetaData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_UnityAdsSetMetaData_mA0A9D3383ABDB80F3FFEB03BA937A64C8DC9CE9D (String_t* ___category0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___category0' to native representation
	char* ____category0_marshaled = NULL;
	____category0_marshaled = il2cpp_codegen_marshal_string(___category0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityAdsSetMetaData)(____category0_marshaled, ____data1_marshaled);

	// Marshaling cleanup of parameter '___category0' native representation
	il2cpp_codegen_marshal_free(____category0_marshaled);
	____category0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

}
// System.String UnityEngine.Monetization.Platform::UnityAdsGetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_UnityAdsGetVersion_m97C4F189DF02CFC87C923E5612EC7A1BA74960FB (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(UnityAdsGetVersion)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void UnityEngine.Monetization.Platform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_add_onError_mDF22B9541BC65ABC702B17552399E33806E393B9 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_add_onError_mDF22B9541BC65ABC702B17552399E33806E393B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * V_0 = NULL;
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * V_1 = NULL;
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_0 = __this->get_onError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 ** L_2 = __this->get_address_of_onError_5();
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_3 = V_1;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_6 = V_0;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *>((EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 **)L_2, ((EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_8 = V_0;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)L_8) == ((RuntimeObject*)(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform::remove_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_remove_onError_mFDCCEA5BBDD433C26D9429AB2F499FB0C997EFD0 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_remove_onError_mFDCCEA5BBDD433C26D9429AB2F499FB0C997EFD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * V_0 = NULL;
	EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * V_1 = NULL;
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_0 = __this->get_onError_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 ** L_2 = __this->get_address_of_onError_5();
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_3 = V_1;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_6 = V_0;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *>((EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 **)L_2, ((EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_8 = V_0;
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)L_8) == ((RuntimeObject*)(EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_m6AE746F98A64A5F5105AF115B1889818563E24A9 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_Initialize_m6AE746F98A64A5F5105AF115B1889818563E24A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51_inline(__this, /*hidden argument*/NULL);
		IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * L_0 = (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A *)il2cpp_codegen_object_new(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var);
		IosAnalytics__ctor_m8C4342459031CF482AC883C29C8440AA7386F49C(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816(L_0, /*hidden argument*/NULL);
		PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 * L_1 = (PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43 *)il2cpp_codegen_object_new(PurchasingPlatform_t99CA16C3D5020C784B6577E9BB04742C4A44EC43_il2cpp_TypeInfo_var);
		PurchasingPlatform__ctor_m246019D33132E210E081FC0878B7E2BA0545434C(L_1, /*hidden argument*/NULL);
		NullCheck(L_1);
		PurchasingPlatform_Initialize_m261DEB27B76AE7F6CA2C71EDE7666E1368CD1951(L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___gameId0;
		bool L_3 = ___testMode1;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		Platform_UnityMonetizationInitialize_m31765AA977BEC99DBE33E5FEC30EE74444690BB9(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.Platform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_IsReady_m0481099A2684D49432CE2E711553A36078A81766 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_IsReady_m0481099A2684D49432CE2E711553A36078A81766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___placementId0;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		bool L_1 = Platform_UnityMonetizationIsReady_m02660D666B8E6CAEDABE6BAC07806E9777F3A0A0(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform::GetPlacementContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * Platform_GetPlacementContent_mEAF4E9BCC75E68266E91AA3A79F66CCB8A98BB68 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementContent_mEAF4E9BCC75E68266E91AA3A79F66CCB8A98BB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__placementContents_2();
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::ContainsKey(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_3 = __this->get__placementContents_2();
		String_t* L_4 = ___placementId0;
		NullCheck(L_3);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_5 = InterfaceFuncInvoker1< PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::get_Item(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}

IL_001e:
	{
		return (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *)NULL;
	}
}
// System.Void UnityEngine.Monetization.Platform::SetMetaData(UnityEngine.Monetization.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_m67CC76B190FB2E83018026CDD72B34F152ED95D8 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * ___metaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_SetMetaData_m67CC76B190FB2E83018026CDD72B34F152ED95D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_0 = ___metaData0;
		NullCheck(L_0);
		String_t* L_1 = MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416_inline(L_0, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_2 = ___metaData0;
		NullCheck(L_2);
		String_t* L_3 = MetaData_ToJSON_m00E1A6255AC7E46ACDAD72FDF4983BA19D87998E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		Platform_UnityAdsSetMetaData_mA0A9D3383ABDB80F3FFEB03BA937A64C8DC9CE9D(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Monetization.Platform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_version_mDABC3E98F5FE88026F5DA15D15CBA9847DD3292C (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_get_version_mDABC3E98F5FE88026F5DA15D15CBA9847DD3292C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		String_t* L_0 = Platform_UnityAdsGetVersion_m97C4F189DF02CFC87C923E5612EC7A1BA74960FB(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentReady(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, intptr_t ___pPlacementContent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_0 = (U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 *)il2cpp_codegen_object_new(U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247_il2cpp_TypeInfo_var);
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0__ctor_m97B2233A013BC6430BA3F7A486A91571E3438FA2(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_0(L_2);
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		intptr_t L_4 = ___pPlacementContent1;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		int32_t L_5 = Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213((intptr_t)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		intptr_t L_7 = ___pPlacementContent1;
		RuntimeObject* L_8 = Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7(__this, L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_9 = V_0;
		int32_t L_10 = V_1;
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_placementId_0();
		RuntimeObject* L_13 = V_2;
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_14 = Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D(__this, L_10, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_placementContent_1(L_14);
		intptr_t L_15 = ___pPlacementContent1;
		RuntimeObject* L_16 = Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651(__this, (intptr_t)L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_17 = V_0;
		NullCheck(L_17);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_18 = L_17->get_placementContent_1();
		RuntimeObject* L_19 = V_3;
		NullCheck(L_18);
		PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7_inline(L_18, L_19, /*hidden argument*/NULL);
		RuntimeObject* L_20 = __this->get__placementContents_2();
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_placementId_0();
		NullCheck(L_20);
		bool L_23 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::ContainsKey(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_20, L_22);
		if (!L_23)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject* L_24 = __this->get__placementContents_2();
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_placementId_0();
		NullCheck(L_24);
		InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::Remove(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_24, L_26);
	}

IL_0074:
	{
		RuntimeObject* L_27 = __this->get__placementContents_2();
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_placementId_0();
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_30 = V_0;
		NullCheck(L_30);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_31 = L_30->get_placementContent_1();
		NullCheck(L_27);
		InterfaceActionInvoker2< String_t*, PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * >::Invoke(2 /* System.Void System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::Add(!0,!1) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_27, L_29, L_31);
		RuntimeObject* L_32 = __this->get__callbackExecutor_1();
		U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * L_33 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_34 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_34, L_33, (intptr_t)((intptr_t)U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tDF6F8C92E8EEB332498A16D9A28E6E37AB8AFA07_il2cpp_TypeInfo_var, L_32, L_34);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.Platform::GetPlacementContentExtras(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, intptr_t ___pPlacementContent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		intptr_t L_0 = ___pPlacementContent0;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		String_t* L_1 = Platform_UnityMonetizationGetPlacementContentExtras_m040B800828B20A554503B1E01F079A8174C69E53((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_3, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		return L_3;
	}

IL_0013:
	{
		String_t* L_4 = V_0;
		RuntimeObject * L_5 = Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeObject * L_6 = V_1;
		RuntimeObject* L_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		G_B3_0 = L_7;
		if (!L_7)
		{
			G_B4_0 = L_7;
			goto IL_0025;
		}
	}
	{
		V_2 = G_B3_0;
		RuntimeObject* L_8 = V_2;
		G_B4_0 = L_8;
	}

IL_0025:
	{
		if (!G_B4_0)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}

IL_002c:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_10, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		return L_10;
	}
}
// UnityEngine.Monetization.PlacementContentType UnityEngine.Monetization.Platform::GetPlacementContentTypeForPlacementContentPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213 (intptr_t ___pPlacementContent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		intptr_t L_0 = ___pPlacementContent0;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var);
		String_t* L_1 = Platform_UnityMonetizationGetPlacementContentType_m28261F243410B5CC928620DC3928914FCEE44B52((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ((Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var))->get_PlacementContentTypesMap_0();
		String_t* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContentType>::get_Item(!0) */, IDictionary_2_t42CB8C2559D87F45DCC3D354B4FB964E4306F382_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// UnityEngine.Monetization.IPlacementContentOperations UnityEngine.Monetization.Platform::GetPlacementContentOperationsForType(UnityEngine.Monetization.PlacementContentType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int32_t ___type0, intptr_t ___pPlacementContent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_0012:
	{
		intptr_t L_2 = ___pPlacementContent1;
		RuntimeObject* L_3 = __this->get__callbackExecutor_1();
		IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * L_4 = (IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 *)il2cpp_codegen_object_new(IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84_il2cpp_TypeInfo_var);
		IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		intptr_t L_5 = ___pPlacementContent1;
		RuntimeObject* L_6 = __this->get__callbackExecutor_1();
		IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097 * L_7 = (IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097 *)il2cpp_codegen_object_new(IosPromoAdOperations_tBE47314527703D3E91DED8343EF4ECFDFDEB1097_il2cpp_TypeInfo_var);
		IosPromoAdOperations__ctor_m5CFBBB2E0E3386B831BC8D77EA1E668BEA37939B(L_7, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_002c:
	{
		intptr_t L_8 = ___pPlacementContent1;
		IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * L_9 = (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 *)il2cpp_codegen_object_new(IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234_il2cpp_TypeInfo_var);
		IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform::GetPlacementContentForType(UnityEngine.Monetization.PlacementContentType,System.String,UnityEngine.Monetization.IPlacementContentOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int32_t ___type0, String_t* ___placementId1, RuntimeObject* ___operations2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_0012:
	{
		String_t* L_2 = ___placementId1;
		RuntimeObject* L_3 = ___operations2;
		ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * L_4 = (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF *)il2cpp_codegen_object_new(ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF_il2cpp_TypeInfo_var);
		ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952(L_4, L_2, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IShowAdOperations_tF011A374A90BFBC07FD6A12CCF4B1C8C3ECAC97C_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		String_t* L_5 = ___placementId1;
		RuntimeObject* L_6 = ___operations2;
		PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * L_7 = (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 *)il2cpp_codegen_object_new(PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3_il2cpp_TypeInfo_var);
		PromoAdPlacementContent__ctor_m482DFF7BC2FEE1F7C20DA63535B2B2EAD338A2DD(L_7, L_5, ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IPromoAdOperations_t50C1774D25DD9DBE44033C96699F23BE70E68C75_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_002c:
	{
		String_t* L_8 = ___placementId1;
		RuntimeObject* L_9 = ___operations2;
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_10 = (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *)il2cpp_codegen_object_new(PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B_il2cpp_TypeInfo_var);
		PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136(L_10, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentStateChanged(System.String,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, String_t* ___placementId0, intptr_t ___pPlacementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * V_0 = NULL;
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * V_1 = NULL;
	{
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_0 = (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA *)il2cpp_codegen_object_new(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA_il2cpp_TypeInfo_var);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1__ctor_m5EF63C2FC89596DB5C9CDEBF53919ED4337810F4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_1 = V_0;
		String_t* L_2 = ___placementId0;
		NullCheck(L_1);
		L_1->set_placementId_0(L_2);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_3 = V_0;
		int32_t L_4 = ___previousState2;
		NullCheck(L_3);
		L_3->set_previousState_1(L_4);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_5 = V_0;
		int32_t L_6 = ___newState3;
		NullCheck(L_5);
		L_5->set_newState_2(L_6);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_7 = V_0;
		NullCheck(L_7);
		L_7->set_U24this_3(__this);
		RuntimeObject* L_8 = __this->get__placementContents_2();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_placementId_0();
		NullCheck(L_8);
		bool L_11 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::ContainsKey(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_8, L_10);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * L_12 = (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 *)il2cpp_codegen_object_new(U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78_il2cpp_TypeInfo_var);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2__ctor_mAA98EEB2209D25027B63B08B40DD13492DEC1D17(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * L_13 = V_1;
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_14 = V_0;
		NullCheck(L_13);
		L_13->set_U3CU3Ef__refU241_1(L_14);
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * L_15 = V_1;
		RuntimeObject* L_16 = __this->get__placementContents_2();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->get_placementId_0();
		NullCheck(L_16);
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_19 = InterfaceFuncInvoker1< PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,UnityEngine.Monetization.PlacementContent>::get_Item(!0) */, IDictionary_2_t0EEFB3CEC3DB3C74B824ED51B3414DD6FA90D5AD_il2cpp_TypeInfo_var, L_16, L_18);
		NullCheck(L_15);
		L_15->set_placementContent_0(L_19);
		RuntimeObject* L_20 = __this->get__callbackExecutor_1();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * L_21 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_22, L_21, (intptr_t)((intptr_t)U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tDF6F8C92E8EEB332498A16D9A28E6E37AB8AFA07_il2cpp_TypeInfo_var, L_20, L_22);
	}

IL_0074:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform::OnNativeError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_0 = __this->get_onError_5();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0020;
	}

IL_000d:
	{
		EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * L_1 = __this->get_onError_5();
		int64_t L_2 = ___error0;
		String_t* L_3 = ___message1;
		UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * L_4 = (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 *)il2cpp_codegen_object_new(UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377_il2cpp_TypeInfo_var);
		UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368(L_4, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F267EEA688520BCCCAB71283DED72317DD3DA9B(L_1, __this, L_4, /*hidden argument*/EventHandler_1_Invoke_m0F267EEA688520BCCCAB71283DED72317DD3DA9B_RuntimeMethod_var);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_m0314C5697872BAF6856977DE8EC9ABBC1D3677E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_m0314C5697872BAF6856977DE8EC9ABBC1D3677E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * V_0 = NULL;
	{
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_0 = (Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF *)il2cpp_codegen_object_new(Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2E7D8054C40A2CCBA4240698380C04F4A768E5A0(L_0, /*hidden argument*/Dictionary_2__ctor_m2E7D8054C40A2CCBA4240698380C04F4A768E5A0_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_1 = V_0;
		NullCheck(L_1);
		Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F(L_1, _stringLiteral2F9D6BE9ED0695031C1172B2312E305D1598421D, 0, /*hidden argument*/Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F_RuntimeMethod_var);
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_2 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F(L_2, _stringLiteral18679B43A06DA25B1A1D8CD6C08BB8A4C5E229DB, 1, /*hidden argument*/Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F_RuntimeMethod_var);
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F(L_3, _stringLiteral75C31F921190D23025E4798404BE5CF780FD77C3, 2, /*hidden argument*/Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F_RuntimeMethod_var);
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F(L_4, _stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB, 3, /*hidden argument*/Dictionary_2_Add_mD6446640CC7C84FAF157A27DB9871EA8C8518B9F_RuntimeMethod_var);
		Dictionary_2_t5657AD0316E9B96B73DEEB47C4641B8B1CC98BFF * L_5 = V_0;
		((Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t3CA6706D896B21AE91B279233D2964C16710E98B_il2cpp_TypeInfo_var))->set_PlacementContentTypesMap_0(L_5);
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
// Conversion methods for marshalling of: UnityEngine.Monetization.Product
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled)
{
	marshaled.___productId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_productId_0());
	marshaled.___localizedTitle_1 = il2cpp_codegen_marshal_string(unmarshaled.get_localizedTitle_1());
	marshaled.___localizedDescription_2 = il2cpp_codegen_marshal_string(unmarshaled.get_localizedDescription_2());
	marshaled.___localizedPriceString_3 = il2cpp_codegen_marshal_string(unmarshaled.get_localizedPriceString_3());
	marshaled.___isoCurrencyCode_4 = il2cpp_codegen_marshal_string(unmarshaled.get_isoCurrencyCode_4());
	marshaled.___productType_5 = il2cpp_codegen_marshal_string(unmarshaled.get_productType_5());
	marshaled.___localizedPrice_6 = unmarshaled.get_localizedPrice_6();
}
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke_back(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled)
{
	unmarshaled.set_productId_0(il2cpp_codegen_marshal_string_result(marshaled.___productId_0));
	unmarshaled.set_localizedTitle_1(il2cpp_codegen_marshal_string_result(marshaled.___localizedTitle_1));
	unmarshaled.set_localizedDescription_2(il2cpp_codegen_marshal_string_result(marshaled.___localizedDescription_2));
	unmarshaled.set_localizedPriceString_3(il2cpp_codegen_marshal_string_result(marshaled.___localizedPriceString_3));
	unmarshaled.set_isoCurrencyCode_4(il2cpp_codegen_marshal_string_result(marshaled.___isoCurrencyCode_4));
	unmarshaled.set_productType_5(il2cpp_codegen_marshal_string_result(marshaled.___productType_5));
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  unmarshaled_localizedPrice_temp_6;
	memset((&unmarshaled_localizedPrice_temp_6), 0, sizeof(unmarshaled_localizedPrice_temp_6));
	unmarshaled_localizedPrice_temp_6 = marshaled.___localizedPrice_6;
	unmarshaled.set_localizedPrice_6(unmarshaled_localizedPrice_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.Product
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_pinvoke_cleanup(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___productId_0);
	marshaled.___productId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___localizedTitle_1);
	marshaled.___localizedTitle_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___localizedDescription_2);
	marshaled.___localizedDescription_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___localizedPriceString_3);
	marshaled.___localizedPriceString_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___isoCurrencyCode_4);
	marshaled.___isoCurrencyCode_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___productType_5);
	marshaled.___productType_5 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Monetization.Product
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled)
{
	marshaled.___productId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_productId_0());
	marshaled.___localizedTitle_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_localizedTitle_1());
	marshaled.___localizedDescription_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_localizedDescription_2());
	marshaled.___localizedPriceString_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_localizedPriceString_3());
	marshaled.___isoCurrencyCode_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_isoCurrencyCode_4());
	marshaled.___productType_5 = il2cpp_codegen_marshal_bstring(unmarshaled.get_productType_5());
	marshaled.___localizedPrice_6 = unmarshaled.get_localizedPrice_6();
}
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com_back(const Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled, Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749& unmarshaled)
{
	unmarshaled.set_productId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___productId_0));
	unmarshaled.set_localizedTitle_1(il2cpp_codegen_marshal_bstring_result(marshaled.___localizedTitle_1));
	unmarshaled.set_localizedDescription_2(il2cpp_codegen_marshal_bstring_result(marshaled.___localizedDescription_2));
	unmarshaled.set_localizedPriceString_3(il2cpp_codegen_marshal_bstring_result(marshaled.___localizedPriceString_3));
	unmarshaled.set_isoCurrencyCode_4(il2cpp_codegen_marshal_bstring_result(marshaled.___isoCurrencyCode_4));
	unmarshaled.set_productType_5(il2cpp_codegen_marshal_bstring_result(marshaled.___productType_5));
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  unmarshaled_localizedPrice_temp_6;
	memset((&unmarshaled_localizedPrice_temp_6), 0, sizeof(unmarshaled_localizedPrice_temp_6));
	unmarshaled_localizedPrice_temp_6 = marshaled.___localizedPrice_6;
	unmarshaled.set_localizedPrice_6(unmarshaled_localizedPrice_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.Product
IL2CPP_EXTERN_C void Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshal_com_cleanup(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___productId_0);
	marshaled.___productId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___localizedTitle_1);
	marshaled.___localizedTitle_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___localizedDescription_2);
	marshaled.___localizedDescription_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___localizedPriceString_3);
	marshaled.___localizedPriceString_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___isoCurrencyCode_4);
	marshaled.___isoCurrencyCode_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___productType_5);
	marshaled.___productType_5 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Monetization.PromoAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IPromoAdOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromoAdPlacementContent__ctor_m482DFF7BC2FEE1F7C20DA63535B2B2EAD338A2DD (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___operations1;
		ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___operations1;
		PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.PromoAdPlacementContent::set_promoAdOperations(UnityEngine.Monetization.IPromoAdOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146 (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CpromoAdOperationsU3Ek__BackingField_8(L_0);
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
// Conversion methods for marshalling of: UnityEngine.Monetization.PromoItem
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled)
{
	marshaled.___productId_0 = il2cpp_codegen_marshal_string(unmarshaled.get_productId_0());
	marshaled.___quantity_1 = unmarshaled.get_quantity_1();
	marshaled.___itemType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_itemType_2());
}
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke_back(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled)
{
	unmarshaled.set_productId_0(il2cpp_codegen_marshal_string_result(marshaled.___productId_0));
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  unmarshaled_quantity_temp_1;
	memset((&unmarshaled_quantity_temp_1), 0, sizeof(unmarshaled_quantity_temp_1));
	unmarshaled_quantity_temp_1 = marshaled.___quantity_1;
	unmarshaled.set_quantity_1(unmarshaled_quantity_temp_1);
	unmarshaled.set_itemType_2(il2cpp_codegen_marshal_string_result(marshaled.___itemType_2));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.PromoItem
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_pinvoke_cleanup(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___productId_0);
	marshaled.___productId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___itemType_2);
	marshaled.___itemType_2 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Monetization.PromoItem
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled)
{
	marshaled.___productId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_productId_0());
	marshaled.___quantity_1 = unmarshaled.get_quantity_1();
	marshaled.___itemType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_itemType_2());
}
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com_back(const PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled, PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360& unmarshaled)
{
	unmarshaled.set_productId_0(il2cpp_codegen_marshal_bstring_result(marshaled.___productId_0));
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  unmarshaled_quantity_temp_1;
	memset((&unmarshaled_quantity_temp_1), 0, sizeof(unmarshaled_quantity_temp_1));
	unmarshaled_quantity_temp_1 = marshaled.___quantity_1;
	unmarshaled.set_quantity_1(unmarshaled_quantity_temp_1);
	unmarshaled.set_itemType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___itemType_2));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.PromoItem
IL2CPP_EXTERN_C void PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshal_com_cleanup(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___productId_0);
	marshaled.___productId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___itemType_2);
	marshaled.___itemType_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.Monetization.PromoMetadata
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_pinvoke(const PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224& unmarshaled, PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_pinvoke& marshaled)
{
	Exception_t* ___impressionDate_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'impressionDate' of type 'PromoMetadata'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___impressionDate_0Exception, NULL);
}
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_pinvoke_back(const PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_pinvoke& marshaled, PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224& unmarshaled)
{
	Exception_t* ___impressionDate_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'impressionDate' of type 'PromoMetadata'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___impressionDate_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.PromoMetadata
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_pinvoke_cleanup(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Monetization.PromoMetadata
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_com(const PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224& unmarshaled, PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_com& marshaled)
{
	Exception_t* ___impressionDate_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'impressionDate' of type 'PromoMetadata'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___impressionDate_0Exception, NULL);
}
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_com_back(const PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_com& marshaled, PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224& unmarshaled)
{
	Exception_t* ___impressionDate_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'impressionDate' of type 'PromoMetadata'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___impressionDate_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.PromoMetadata
IL2CPP_EXTERN_C void PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshal_com_cleanup(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.PromoMetadataJsonDeserializer::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___jsonString0;
		RuntimeObject * L_1 = Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)CastclassClass((RuntimeObject*)L_1, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		il2cpp_codegen_initobj((&V_1), sizeof(PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224 ));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_2, _stringLiteral2466D6C8BB3FC5F5AE8CC45F146CF52249B90642, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3(L_3, /*hidden argument*/NULL);
		(&V_1)->set_impressionDate_0(L_4);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_5, _stringLiteral1A41E3C18FFD98C6713CDD8CC14C2714DB7ACE5B, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A(L_6, /*hidden argument*/NULL);
		(&V_1)->set_offerDuration_1(L_7);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_8, _stringLiteral9DBBA9026B14633D4AEB9F9B3E79D9DAA5687F90, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_10 = PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8(L_9, /*hidden argument*/NULL);
		(&V_1)->set_costs_3(L_10);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject * L_12 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_11, _stringLiteral29873ED7BF4D9C2274D1255FDAC2BDB0568B3E80, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_13 = PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8(L_12, /*hidden argument*/NULL);
		(&V_1)->set_payouts_4(L_13);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_14, _stringLiteral77703AFDD859337C4E07BF3653719EAA41AE948E, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  L_16 = PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9(L_15, /*hidden argument*/NULL);
		(&V_1)->set_premiumProduct_2(L_16);
		PromoMetadata_t81E2C816BF1EFDE8AB625C6386935619E4E78224  L_17 = V_1;
		return L_17;
	}
}
// System.TimeSpan UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetOfferDuration(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A (RuntimeObject * ___rawOfferDuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		RuntimeObject * L_0 = ___rawOfferDuration0;
		RuntimeObject * L_1 = ((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
		G_B1_0 = ((int64_t)(L_1));
		if (!L_1)
		{
			G_B2_0 = ((int64_t)(L_1));
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_2 = ___rawOfferDuration0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))));
		G_B2_0 = G_B1_0;
	}

IL_0010:
	{
		if (!G_B2_0)
		{
			goto IL_001d;
		}
	}
	{
		int64_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4 = TimeSpan_FromSeconds_m4644EABECA69BC6C07AD649C5898A8E53F4FE7B0((((double)((double)L_3))), /*hidden argument*/NULL);
		return L_4;
	}

IL_001d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ));
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_5 = V_1;
		return L_5;
	}
}
// System.DateTime UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetImpressionDateTime(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3 (RuntimeObject * ___rawDateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		RuntimeObject * L_0 = ___rawDateTime0;
		RuntimeObject * L_1 = ((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var));
		G_B1_0 = ((int64_t)(L_1));
		if (!L_1)
		{
			G_B2_0 = ((int64_t)(L_1));
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_2 = ___rawDateTime0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox(L_2, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))));
		G_B2_0 = G_B1_0;
	}

IL_0010:
	{
		if (!G_B2_0)
		{
			goto IL_0031;
		}
	}
	{
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		int64_t L_3 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = DateTime_AddMilliseconds_m74B689CDAFB7ABEEF56827D8777B7C95C89C3154((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_1), (((double)((double)L_3))), /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 ));
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.Monetization.PromoItem[] UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemArray(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8 (RuntimeObject * ___rawArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * G_B2_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___rawArray0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)IsInstClass((RuntimeObject*)L_0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (!L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		V_0 = G_B1_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = V_0;
		G_B2_0 = L_2;
	}

IL_000b:
	{
		if (!G_B2_0)
		{
			goto IL_004d;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_3, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_5 = (PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55*)(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55*)SZArrayNew(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_003f;
	}

IL_0023:
	{
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject * L_10 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  L_11 = PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076(L_10, /*hidden argument*/NULL);
		*(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))) = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))))->___productId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 *)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))))->___itemType_2), (void*)NULL);
		#endif
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_13 = V_2;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_14, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0023;
		}
	}
	{
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_16 = V_1;
		return L_16;
	}

IL_004d:
	{
		PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55* L_17 = (PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55*)(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55*)SZArrayNew(PromoItemU5BU5D_t277ED06B2A0A755600702597A6E19364C4FF4F55_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_17;
	}
}
// UnityEngine.Monetization.PromoItem UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemFromDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076 (RuntimeObject * ___rawItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___rawItem0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (!L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		V_0 = G_B1_0;
		RuntimeObject* L_2 = V_0;
		G_B2_0 = L_2;
	}

IL_000b:
	{
		if (!G_B2_0)
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 ));
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_3, _stringLiteralE0228745E227EA8D7812EA85DF6FB01E66F3535A);
		(&V_1)->set_itemType_2(((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_5, _stringLiteral269B276065AA2FD25E2FC1E4ED6E8FBDFB83D44D);
		(&V_1)->set_productId_0(((String_t*)IsInstSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_7, _stringLiteralF51C0F9CE38D4A8832919DB2A9A19DC212BB790E);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_9 = PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1(L_8, /*hidden argument*/NULL);
		(&V_1)->set_quantity_1(L_9);
		PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  L_10 = V_1;
		return L_10;
	}

IL_005f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360 ));
		PromoItem_t56C91420C05F2A6546A1EDFB16685311298A2360  L_11 = V_2;
		return L_11;
	}
}
// System.Decimal UnityEngine.Monetization.PromoMetadataJsonDeserializer::ParseDecimal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1 (RuntimeObject * ___rawDecimal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___rawDecimal0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___rawDecimal0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Decimal__ctor_m145E08923E726750B62B4CB80C5A758ED3A4669C((&L_2), ((*(int64_t*)((int64_t*)UnBox(L_1, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		RuntimeObject * L_3 = ___rawDecimal0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject * L_4 = ___rawDecimal0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Decimal__ctor_m25A12AAF4018E9040B6D8BD32648E3A71959A71C((&L_5), ((*(double*)((double*)UnBox(L_4, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_002e:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC((&L_6), 0, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Monetization.Product UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetProductFromDictionary(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9 (RuntimeObject * ___rawProduct0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject * L_0 = ___rawProduct0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (!L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		V_0 = G_B1_0;
		RuntimeObject* L_2 = V_0;
		G_B2_0 = L_2;
	}

IL_000b:
	{
		if (!G_B2_0)
		{
			goto IL_00bb;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749 ));
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_3, _stringLiteral269B276065AA2FD25E2FC1E4ED6E8FBDFB83D44D);
		(&V_1)->set_productId_0(((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_5, _stringLiteralEEA06E7856F9193806A07E5D988E95B2981E1620);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_7 = PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1(L_6, /*hidden argument*/NULL);
		(&V_1)->set_localizedPrice_6(L_7);
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_8, _stringLiteralCAC18C640F78369BEAC229EC6D467F636AEAF7BD);
		(&V_1)->set_isoCurrencyCode_4(((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject * L_11 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_10, _stringLiteralF7B058782EE1BA819AFC565B4FBA3C90CC9A9F36);
		(&V_1)->set_localizedPriceString_3(((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_12, _stringLiteral8DE234BF7086CE6171766043BF45BA029090B703);
		(&V_1)->set_localizedTitle_1(((String_t*)IsInstSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject * L_15 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_14, _stringLiteral9BD14BD1AB98100D0A2E4F1746AF3C642D563A34);
		(&V_1)->set_localizedDescription_2(((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject * L_17 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(!0) */, IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_il2cpp_TypeInfo_var, L_16, _stringLiteral0A05F966C448D0FD18C918766B523D576C657BA9);
		(&V_1)->set_productType_5(((String_t*)IsInstSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)));
		Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  L_18 = V_1;
		return L_18;
	}

IL_00bb:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749 ));
		Product_t0B47DECAF1A83C4642404D5CF65CDA7D5608E749  L_19 = V_2;
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
// System.Void UnityEngine.Monetization.RewardablePlacementContent::.ctor(System.String,UnityEngine.Monetization.IRewardedOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardablePlacementContent__ctor_m0F9474629B40CAE3F1E228CE84AE89BC60426288 (RewardablePlacementContent_t951ABC7928B50179A98E385BEC5E711BEF3BD297 * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___operations1;
		PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___operations1;
		__this->set_U3CrewardedOperationsU3Ek__BackingField_3(L_2);
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
// Conversion methods for marshalling of: UnityEngine.Monetization.ShowAdCallbacks
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_pinvoke(const ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C& unmarshaled, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_pinvoke& marshaled)
{
	marshaled.___finishCallback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_finishCallback_0()));
	marshaled.___startCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_startCallback_1()));
}
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_pinvoke_back(const ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_pinvoke& marshaled, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_finishCallback_0(il2cpp_codegen_marshal_function_ptr_to_delegate<ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11>(marshaled.___finishCallback_0, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var));
	unmarshaled.set_startCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A>(marshaled.___startCallback_1, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.ShowAdCallbacks
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_pinvoke_cleanup(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Monetization.ShowAdCallbacks
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_com(const ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C& unmarshaled, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_com& marshaled)
{
	marshaled.___finishCallback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_finishCallback_0()));
	marshaled.___startCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_startCallback_1()));
}
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_com_back(const ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_com& marshaled, ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_finishCallback_0(il2cpp_codegen_marshal_function_ptr_to_delegate<ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11>(marshaled.___finishCallback_0, ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var));
	unmarshaled.set_startCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A>(marshaled.___startCallback_1, ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.ShowAdCallbacks
IL2CPP_EXTERN_C void ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshal_com_cleanup(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, int32_t ___finishState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___finishState0);

}
// System.Void UnityEngine.Monetization.ShowAdFinishCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2 (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.ShowAdFinishCallback::Invoke(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, int32_t ___finishState0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___finishState0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___finishState0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___finishState0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___finishState0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___finishState0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___finishState0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___finishState0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___finishState0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___finishState0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Monetization.ShowAdFinishCallback::BeginInvoke(UnityEngine.Monetization.ShowResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowAdFinishCallback_BeginInvoke_m2A6F9BE3C8CC66A863671A059EBC591C48117B66 (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, int32_t ___finishState0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowAdFinishCallback_BeginInvoke_m2A6F9BE3C8CC66A863671A059EBC591C48117B66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ShowResult_t92F096726EA586A94ABCE45E6F40F4A099D4E91D_il2cpp_TypeInfo_var, &___finishState0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Monetization.ShowAdFinishCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdFinishCallback_EndInvoke_m4F4B6400A9DF0AB97541975E85BAA2A81D008609 (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Monetization.ShowAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IShowAdOperations)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952 (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, String_t* ___placementId0, RuntimeObject* ___operations1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___operations1;
		RewardablePlacementContent__ctor_m0F9474629B40CAE3F1E228CE84AE89BC60426288(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___operations1;
		__this->set_U3CshowAdOperationsU3Ek__BackingField_6(L_2);
		return;
	}
}
// System.String UnityEngine.Monetization.ShowAdPlacementContent::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.ShowAdPlacementContent::set_showing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CshowingU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Monetization.IShowAdOperations UnityEngine.Monetization.ShowAdPlacementContent::get_showAdOperations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CshowAdOperationsU3Ek__BackingField_6();
		return L_0;
	}
}
// UnityEngine.Monetization.ShowAdYield UnityEngine.Monetization.ShowAdPlacementContent::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * ShowAdPlacementContent_Show_mC52CACC70A3FA7177A087F9ED12B3A20CA52287C (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  ___callbacks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowAdPlacementContent_Show_mC52CACC70A3FA7177A087F9ED12B3A20CA52287C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * V_0 = NULL;
	MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * V_1 = NULL;
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * L_0 = (U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 *)il2cpp_codegen_object_new(U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8_il2cpp_TypeInfo_var);
		U3CShowU3Ec__AnonStorey0__ctor_mAE624C059D9C43B942ECA5DA0BB1A72F0EB1204D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * L_1 = V_0;
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_2 = ___callbacks0;
		NullCheck(L_1);
		L_1->set_callbacks_0(L_2);
		U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		String_t* L_4 = ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD_inline(__this, /*hidden argument*/NULL);
		bool L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_6 = (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B *)il2cpp_codegen_object_new(MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B_il2cpp_TypeInfo_var);
		MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853(L_6, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		V_1 = L_6;
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_7 = V_1;
		String_t* L_8 = ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8(L_7, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_8, /*hidden argument*/NULL);
		MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67(L_9, /*hidden argument*/NULL);
	}

IL_0046:
	{
		ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * L_10 = (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA *)il2cpp_codegen_object_new(ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA_il2cpp_TypeInfo_var);
		ShowAdYield__ctor_m240765C70263B816520AC89DE2039F3986F382EB(L_10, /*hidden argument*/NULL);
		__this->set_adYield_7(L_10);
		ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * L_11 = __this->get_adYield_7();
		NullCheck(L_11);
		ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE_inline(L_11, (bool)1, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C ));
		U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * L_12 = V_0;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_13 = (ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 *)il2cpp_codegen_object_new(ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11_il2cpp_TypeInfo_var);
		ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2(L_13, L_12, (intptr_t)((intptr_t)U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856_RuntimeMethod_var), /*hidden argument*/NULL);
		(&V_3)->set_finishCallback_0(L_13);
		U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * L_14 = V_0;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_15 = (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A *)il2cpp_codegen_object_new(ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A_il2cpp_TypeInfo_var);
		ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6(L_15, L_14, (intptr_t)((intptr_t)U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F_RuntimeMethod_var), /*hidden argument*/NULL);
		(&V_3)->set_startCallback_1(L_15);
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_16 = V_3;
		V_2 = L_16;
		RuntimeObject* L_17 = ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F_inline(__this, /*hidden argument*/NULL);
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_18 = V_2;
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D((&L_19), L_18, /*hidden argument*/Nullable_1__ctor_m0CC33D3F549BB236F0FB534DE5299276169D881D_RuntimeMethod_var);
		NullCheck(L_17);
		InterfaceActionInvoker1< Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  >::Invoke(0 /* System.Void UnityEngine.Monetization.IShowAdOperations::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>) */, IShowAdOperations_tF011A374A90BFBC07FD6A12CCF4B1C8C3ECAC97C_il2cpp_TypeInfo_var, L_17, L_19);
		ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * L_20 = __this->get_adYield_7();
		return L_20;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Monetization.ShowAdStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6 (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.ShowAdStartCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, const RuntimeMethod* method)
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
// System.IAsyncResult UnityEngine.Monetization.ShowAdStartCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShowAdStartCallback_BeginInvoke_mE5B3543BB67A23226FB968290F8A1E29D647D06C (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Monetization.ShowAdStartCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdStartCallback_EndInvoke_m7F94F4D81D9C579A62336747A1A90D75A9C4787A (ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Monetization.ShowAdYield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdYield__ctor_m240765C70263B816520AC89DE2039F3986F382EB (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.ShowAdYield::set_result(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929 (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.ShowAdYield::get_showing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CshowingU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.ShowAdYield::set_showing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CshowingU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.ShowAdYield::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShowAdYield_get_keepWaiting_m55BCF39FFCA1D46E6611F9692516F62A38CB0CA1 (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F_inline(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::.ctor(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368 (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___error0;
		UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 UnityEngine.Monetization.UnityServicesErrorEventArgs::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CerrorU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_error(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Monetization.UnityServicesErrorEventArgs::get_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659 (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CmessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31 (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
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
// System.Void UnityEngine.Monetization.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mCFDBDAA0C48857D823D75E36B2B064ABD5AFF9FB (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, const RuntimeMethod* method)
{
	{
		__this->set_U3CversionU3Ek__BackingField_0((String_t*)NULL);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.UnsupportedPlatform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_add_onError_m38FEF05FB64F918802F2A729BE80CB1DECF0ED24 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.UnsupportedPlatform::remove_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_remove_onError_m570E81D1CF8B4AB5674AD8B44AD7D22F09972057 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, EventHandler_1_t19B08BEF9AFACFBB1AB4C8ACA9B596D96E859BA1 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String UnityEngine.Monetization.UnsupportedPlatform::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_get_version_m4F6214BEA30F0603E712C30F455305AAD3DE28D3 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CversionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.UnsupportedPlatform::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_mDFB595E9AE1E6824178DCC7C62B9C3812D16D8A3 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Monetization.UnsupportedPlatform::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsReady_m306C45B9EC7969E0268BB069DAB8EDE8140F31C7 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, String_t* ___placementId0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.UnsupportedPlatform::GetPlacementContent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * UnsupportedPlatform_GetPlacementContent_m0187F86C5D04A1DD5651CDF8A022365F66DE9D94 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, String_t* ___placementID0, const RuntimeMethod* method)
{
	{
		return (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B *)NULL;
	}
}
// System.Void UnityEngine.Monetization.UnsupportedPlatform::SetMetaData(UnityEngine.Monetization.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_mBE7D6DAEF494B853F93FF7128718B97FF0464AD1 (UnsupportedPlatform_tC7919A9DB430A60986EB8E3D1CFC0697909D46EB * __this, MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * ___metaData0, const RuntimeMethod* method)
{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, String_t* ___jsonExtras0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___jsonExtras0' to native representation
	char* ____jsonExtras0_marshaled = NULL;
	____jsonExtras0_marshaled = il2cpp_codegen_marshal_string(___jsonExtras0);

	// Native function invocation
	il2cppPInvokeFunc(____jsonExtras0_marshaled);

	// Marshaling cleanup of parameter '___jsonExtras0' native representation
	il2cpp_codegen_marshal_free(____jsonExtras0_marshaled);
	____jsonExtras0_marshaled = NULL;

}
// System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAnalyticsTriggerAddExtras__ctor_m781966E811E862FC94ED3D80C57ED1AD084F3601 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAnalyticsTriggerAddExtras_Invoke_m6766F79627D0707FEDD0B1DABFA43AFC0D330425 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, String_t* ___jsonExtras0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___jsonExtras0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jsonExtras0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jsonExtras0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___jsonExtras0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jsonExtras0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jsonExtras0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jsonExtras0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___jsonExtras0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___jsonExtras0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jsonExtras0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jsonExtras0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___jsonExtras0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jsonExtras0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jsonExtras0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unityAnalyticsTriggerAddExtras_BeginInvoke_m8247C4036BFBEB264634435E8CF0D630BEBE6774 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, String_t* ___jsonExtras0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jsonExtras0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unityAnalyticsTriggerAddExtras_EndInvoke_m8564F34B8FC3EE9ED52D3B36132595AC8EDD0386 (unityAnalyticsTriggerAddExtras_tACD711EE2DAB334422E269AC0571922D781376A8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishHandlerU3Ec__AnonStorey0__ctor_m5C5BFE0270B8FAC2CDF2189E261A0DA61C6B7952 (U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6 (U3CFinishHandlerU3Ec__AnonStorey0_tD4BEB1B6B38A0D8B3126405E9B32243626D6683F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IosShowAdOperations_t4A8F6E50F92BDA2A26DB324C7D327CEE7FDCED84 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145  L_1 = L_0->get__showAdCallbacks_4();
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0039;
	}

IL_001a:
	{
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_3 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_1 = L_3;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_4 = (&V_1)->get_finishCallback_0();
		AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * L_5 = __this->get_e_0();
		NullCheck(L_5);
		int32_t L_6 = AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0039:
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
// System.Void UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs::.ctor(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___result0;
		__this->set_U3CresultU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Monetization.ShowResult UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CresultU3Ek__BackingField_1();
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
// System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Monetization.MiniJSON.Json_Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___jsonString0;
		Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * L_1 = (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 *)il2cpp_codegen_object_new(Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8_il2cpp_TypeInfo_var);
		Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20, IL_0020)
	}

IL_0020:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m1082CF29EC957B98C83FC3EC620104635F2DBF60 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Monetization.MiniJSON.Json_Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}

IL_002b:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_005d:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_10 = V_0;
		String_t* L_11 = V_2;
		RuntimeObject * L_12 = Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Monetization.MiniJSON.Json_Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0061;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}

IL_0034:
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_004d;
	}

IL_003f:
	{
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_0041:
	{
		goto IL_0061;
	}

IL_0046:
	{
		V_1 = (bool)0;
		goto IL_0061;
	}

IL_004d:
	{
		int32_t L_5 = V_2;
		RuntimeObject * L_6 = Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = V_0;
		RuntimeObject * L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_7, L_8, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0061:
	{
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = V_0;
		return L_10;
	}
}
// System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseByToken(UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)7)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		int32_t L_1 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0035:
	{
		String_t* L_2 = Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		RuntimeObject * L_3 = Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0043:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0051:
	{
		bool L_6 = ((bool)1);
		RuntimeObject * L_7 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0058:
	{
		bool L_8 = ((bool)0);
		RuntimeObject * L_9 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_005f:
	{
		return NULL;
	}

IL_0061:
	{
		return NULL;
	}
}
// System.String UnityEngine.Monetization.MiniJSON.Json_Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0166;
	}

IL_0019:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0031:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0159;
	}

IL_004d:
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_0054:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_7 = __this->get_json_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_006c:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00f7;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_0105;
			}
			case 3:
			{
				goto IL_0113;
			}
		}
	}

IL_008c:
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_00ce;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)102))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_0154;
	}

IL_00c1:
	{
		StringBuilder_t * L_17 = V_0;
		Il2CppChar L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, L_18, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00ce:
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, 8, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00db:
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00e9:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00f7:
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0105:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0113:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_24 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_24;
		V_4 = 0;
		goto IL_0132;
	}

IL_0122:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppChar L_27 = Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_27);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0132:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0122;
		}
	}
	{
		StringBuilder_t * L_30 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_31 = V_3;
		String_t* L_32 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_30, (((int32_t)((uint16_t)L_33))), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0154:
	{
		goto IL_0166;
	}

IL_0159:
	{
		StringBuilder_t * L_34 = V_0;
		Il2CppChar L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0166:
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0019;
		}
	}

IL_016c:
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
// System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	double V_2 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_3, ((int32_t)511), L_4, (int64_t*)(&V_1), /*hidden argument*/NULL);
		int64_t L_5 = V_1;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_002f:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_9 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_8, ((int32_t)511), L_9, (double*)(&V_2), /*hidden argument*/NULL);
		double L_10 = V_2;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0027:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Char UnityEngine.Monetization.MiniJSON.Json_Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5 (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003e;
	}

IL_002e:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000b;
		}
	}

IL_003e:
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A (Parser_tD7B2E8E5B118FD69C63DBCA310B0DB42D8B868D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74(__this, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_00ce;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00ce;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_00ce;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00ce;
			}
			case 12:
			{
				goto IL_00ce;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00cc;
			}
		}
	}

IL_0065:
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00ae;
			}
		}
	}

IL_007a:
	{
		Il2CppChar L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009e;
			}
		}
	}

IL_008f:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00d0;
	}

IL_009c:
	{
		return (int32_t)(1);
	}

IL_009e:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_7 = __this->get_json_0();
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ac:
	{
		return (int32_t)(3);
	}

IL_00ae:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_8 = __this->get_json_0();
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00bc:
	{
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ca:
	{
		return (int32_t)(7);
	}

IL_00cc:
	{
		return (int32_t)(5);
	}

IL_00ce:
	{
		return (int32_t)(8);
	}

IL_00d0:
	{
		String_t* L_10 = Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_12 = V_1;
		bool L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_14 = V_1;
		bool L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_16 = V_1;
		bool L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011b;
	}

IL_0112:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0115:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0118:
	{
		return (int32_t)(((int32_t)11));
	}

IL_011b:
	{
		return (int32_t)(0);
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
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String UnityEngine.Monetization.MiniJSON.Json_Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * V_0 = NULL;
	{
		Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * L_0 = (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 *)il2cpp_codegen_object_new(Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2_il2cpp_TypeInfo_var);
		Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * L_1 = V_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox(L_7, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			RuntimeObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_1;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			RuntimeObject* L_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
	}

IL_0089:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			RuntimeObject * L_7 = V_1;
			Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0040:
		{
			RuntimeObject* L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_2;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_014f;
	}

IL_001e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Il2CppChar L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0083;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00af;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_0099;
			}
			case 5:
			{
				goto IL_00c5;
			}
		}
	}

IL_0042:
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0057;
		}
	}
	{
		Il2CppChar L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00f1;
	}

IL_0057:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_006d:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0083:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_0099:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00af:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00c5:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00db:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		NullCheck(L_17);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		goto IL_014b;
	}

IL_00f1:
	{
		Il2CppChar L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_011d;
		}
	}
	{
		StringBuilder_t * L_22 = __this->get_builder_0();
		Il2CppChar L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, L_23, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_011d:
	{
		StringBuilder_t * L_24 = __this->get_builder_0();
		NullCheck(L_24);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = __this->get_builder_0();
		String_t* L_26 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_4), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_25);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0146:
	{
		goto IL_014b;
	}

IL_014b:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_014f:
	{
		int32_t L_28 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t * L_30 = __this->get_builder_0();
		NullCheck(L_30);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_30, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325 (Serializer_t5C36F06B1A47CBD13ABCE2FE67D7C832CC3B27E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_4, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_0034:
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject * L_12 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_12, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}

IL_008c:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_009e:
	{
		RuntimeObject * L_15 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject * L_16 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_16, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00dd;
		}
	}

IL_00b4:
	{
		StringBuilder_t * L_17 = __this->get_builder_0();
		RuntimeObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_20 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_mFF1DAF2003FC7096C54C5A2685F85082220E330B((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_17, L_21, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00dd:
	{
		RuntimeObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62(__this, L_23, /*hidden argument*/NULL);
	}

IL_00e9:
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
// System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentReadyU3Ec__AnonStorey0__ctor_m97B2233A013BC6430BA3F7A486A91571E3438FA2 (U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58 (U3COnNativePlacementContentReadyU3Ec__AnonStorey0_tEA19A7A56A9F94DCBAC6D4A1CF2127AEC9A10247 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = __this->get_U24this_2();
		NullCheck(L_0);
		EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * L_1 = L_0->get_OnPlacementContentReady_3();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0039;
	}

IL_0012:
	{
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		EventHandler_1_t2C4AB927CF08B766EE2501AE18F9BFCEF1DFC785 * L_3 = L_2->get_OnPlacementContentReady_3();
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_4 = __this->get_U24this_2();
		String_t* L_5 = __this->get_placementId_0();
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_6 = __this->get_placementContent_1();
		PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D * L_7 = (PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D *)il2cpp_codegen_object_new(PlacementContentReadyEventArgs_t2ACCF7FEC32FAA88D58D7748E8370DBCC703C58D_il2cpp_TypeInfo_var);
		PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		EventHandler_1_Invoke_mBD48CAE7B84D441AB920E7D312D9207B46F8E814(L_3, L_4, L_7, /*hidden argument*/EventHandler_1_Invoke_mBD48CAE7B84D441AB920E7D312D9207B46F8E814_RuntimeMethod_var);
	}

IL_0039:
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
// System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1__ctor_m5EF63C2FC89596DB5C9CDEBF53919ED4337810F4 (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2__ctor_mAA98EEB2209D25027B63B08B40DD13492DEC1D17 (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_tD001C1E1D9D572BB426D37D4B22E87C0B3D60C78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_0 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_0);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_1 = L_0->get_U24this_3();
		NullCheck(L_1);
		EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * L_2 = L_1->get_OnPlacementContentStateChange_4();
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0063;
	}

IL_0017:
	{
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_3 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_3);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_4 = L_3->get_U24this_3();
		NullCheck(L_4);
		EventHandler_1_t1462331132E22BC723260AED59A116B6964553A8 * L_5 = L_4->get_OnPlacementContentStateChange_4();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_6 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_6);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_7 = L_6->get_U24this_3();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_8 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_placementId_0();
		PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * L_10 = __this->get_placementContent_0();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_11 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_previousState_1();
		U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1_t3456C78C45D8914BE48ABA97C60FA27CB86A8CFA * L_13 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_newState_2();
		PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 * L_15 = (PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2 *)il2cpp_codegen_object_new(PlacementContentStateChangeEventArgs_t9A601FA277FAC5373D8695D28B5D98757E04FCA2_il2cpp_TypeInfo_var);
		PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48(L_15, L_9, L_10, L_12, L_14, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_mCFF0376B743C5D708D0E4823F63447D014CAF894(L_5, L_7, L_15, /*hidden argument*/EventHandler_1_Invoke_mCFF0376B743C5D708D0E4823F63447D014CAF894_RuntimeMethod_var);
	}

IL_0063:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F(char* ___placementId0, intptr_t ___placementContent1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F(____placementId0_unmarshaled, ___placementContent1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC(char* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___placementId0' to managed representation
	String_t* ____placementId0_unmarshaled = NULL;
	____placementId0_unmarshaled = il2cpp_codegen_marshal_string_result(___placementId0);

	// Managed method invocation
	PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC(____placementId0_unmarshaled, ___placementContent1, ___previousState2, ___newState3, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10(int64_t ___error0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message1' to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10(___error0, ____message1_unmarshaled, NULL);

}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper__cctor_m1972E1BCD087BEDE15FF362358EFE6CF7B4E498D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper__cctor_m1972E1BCD087BEDE15FF362358EFE6CF7B4E498D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B2_0 = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B1_0 = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B4_0 = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B3_0 = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B6_0 = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * G_B5_0 = NULL;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 ));
		OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * L_0 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		G_B1_0 = (&V_1);
		if (L_0)
		{
			G_B2_0 = (&V_1);
			goto IL_0022;
		}
	}
	{
		OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * L_1 = (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C *)il2cpp_codegen_object_new(OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C_il2cpp_TypeInfo_var);
		OnPlacementContentReadyCallback__ctor_m72979DE2865B20A30FCD9A095404F5C691122214(L_1, NULL, (intptr_t)((intptr_t)PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_RuntimeMethod_var), /*hidden argument*/NULL);
		((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_1);
		G_B2_0 = G_B1_0;
	}

IL_0022:
	{
		OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * L_2 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		G_B2_0->set_onPlacementContentReadyCallback_0(L_2);
		OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * L_3 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_2();
		G_B3_0 = (&V_1);
		if (L_3)
		{
			G_B4_0 = (&V_1);
			goto IL_0046;
		}
	}
	{
		OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * L_4 = (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 *)il2cpp_codegen_object_new(OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74_il2cpp_TypeInfo_var);
		OnPlacementContentStateChangedCallback__ctor_m879A48543E431BF08DAD8950D3F82DBABF3029A5(L_4, NULL, (intptr_t)((intptr_t)PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_RuntimeMethod_var), /*hidden argument*/NULL);
		((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_2(L_4);
		G_B4_0 = G_B3_0;
	}

IL_0046:
	{
		OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * L_5 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_2();
		G_B4_0->set_onPlacementContentStateChangedCallback_1(L_5);
		OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * L_6 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_3();
		G_B5_0 = (&V_1);
		if (L_6)
		{
			G_B6_0 = (&V_1);
			goto IL_006a;
		}
	}
	{
		OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * L_7 = (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 *)il2cpp_codegen_object_new(OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30_il2cpp_TypeInfo_var);
		OnErrorCallback__ctor_m3B8F314C59F530BCBA2A26A66B2C681856F88819(L_7, NULL, (intptr_t)((intptr_t)PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_RuntimeMethod_var), /*hidden argument*/NULL);
		((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_3(L_7);
		G_B6_0 = G_B5_0;
	}

IL_006a:
	{
		OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * L_8 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_3();
		G_B6_0->set_onErrorCallback_2(L_8);
		UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202  L_9 = V_1;
		V_0 = L_9;
		PlatformCallbacksWrapper_UnityMonetizationSetMonetizationCallbacks_mEE2AEE69825D41327908C5F64375BA12E3F8B70E((UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CPlatformU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::set_Platform(UnityEngine.Monetization.Platform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51 (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->set_U3CPlatformU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::UnityMonetizationSetMonetizationCallbacks(UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_UnityMonetizationSetMonetizationCallbacks_mEE2AEE69825D41327908C5F64375BA12E3F8B70E (UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202 * ___callback0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc) (UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke*);

	// Marshaling of parameter '___callback0' to native representation
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke* ____callback0_marshaled = NULL;
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke ____callback0_marshaled_dereferenced = {};
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke(*___callback0, ____callback0_marshaled_dereferenced);
	____callback0_marshaled = &____callback0_marshaled_dereferenced;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMonetizationSetMonetizationCallbacks)(____callback0_marshaled);

	// Marshaling of parameter '___callback0' back from native representation
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202  _____callback0_marshaled_unmarshaled_dereferenced;
	memset((&_____callback0_marshaled_unmarshaled_dereferenced), 0, sizeof(_____callback0_marshaled_unmarshaled_dereferenced));
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_back(*____callback0_marshaled, _____callback0_marshaled_unmarshaled_dereferenced);
	UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_cleanup(*____callback0_marshaled);
	*___callback0 = _____callback0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)&((___callback0)->___onPlacementContentReadyCallback_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___callback0)->___onPlacementContentStateChangedCallback_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&((___callback0)->___onErrorCallback_2), (void*)NULL);
	#endif

}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnPlacementContentReady(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F (String_t* ___placementId0, intptr_t ___placementContent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B2_0 = NULL;
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_inline(/*hidden argument*/NULL);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		goto IL_0015;
	}

IL_000e:
	{
		String_t* L_2 = ___placementId0;
		intptr_t L_3 = ___placementContent1;
		NullCheck(G_B2_0);
		Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2(G_B2_0, L_2, (intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnPlacementContentChanged(System.String,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC (String_t* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B2_0 = NULL;
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_inline(/*hidden argument*/NULL);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		goto IL_0017;
	}

IL_000e:
	{
		String_t* L_2 = ___placementId0;
		intptr_t L_3 = ___placementContent1;
		int32_t L_4 = ___previousState2;
		int32_t L_5 = ___newState3;
		NullCheck(G_B2_0);
		Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA(G_B2_0, L_2, (intptr_t)L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10 (int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B2_0 = NULL;
	Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_inline(/*hidden argument*/NULL);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		goto IL_0015;
	}

IL_000e:
	{
		int64_t L_2 = ___error0;
		String_t* L_3 = ___message1;
		NullCheck(G_B2_0);
		Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5(G_B2_0, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0015:
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
// System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0__ctor_mAE624C059D9C43B942ECA5DA0BB1A72F0EB1204D (U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::<>m__0(UnityEngine.Monetization.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856 (U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * __this, int32_t ___finishState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * G_B4_0 = NULL;
	ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * G_B3_0 = NULL;
	{
		ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * L_1 = L_0->get_adYield_7();
		int32_t L_2 = ___finishState0;
		NullCheck(L_1);
		ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929_inline(L_1, L_2, /*hidden argument*/NULL);
		ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * L_3 = __this->get_U24this_1();
		NullCheck(L_3);
		ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * L_4 = L_3->get_adYield_7();
		V_0 = (bool)0;
		ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * L_5 = __this->get_U24this_1();
		bool L_6 = V_0;
		NullCheck(L_5);
		ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF_inline(L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = V_0;
		NullCheck(L_4);
		ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE_inline(L_4, L_7, /*hidden argument*/NULL);
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * L_8 = __this->get_address_of_callbacks_0();
		bool L_9 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)L_8, /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0064;
	}

IL_0042:
	{
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * L_10 = __this->get_address_of_callbacks_0();
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_11 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)L_10, /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_1 = L_11;
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_12 = (&V_1)->get_finishCallback_0();
		ShowAdFinishCallback_t655321E2A581E5CCFBC96072BE195C1B5F671D11 * L_13 = L_12;
		G_B3_0 = L_13;
		if (L_13)
		{
			G_B4_0 = L_13;
			goto IL_005e;
		}
	}
	{
		goto IL_0064;
	}

IL_005e:
	{
		int32_t L_14 = ___finishState0;
		NullCheck(G_B4_0);
		ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB(G_B4_0, L_14, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::<>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F (U3CShowU3Ec__AnonStorey0_tE30E5AE1D34CB9A31927EA6E56D21400392819D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * G_B4_0 = NULL;
	ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * G_B3_0 = NULL;
	{
		ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF_inline(L_0, (bool)1, /*hidden argument*/NULL);
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * L_1 = __this->get_address_of_callbacks_0();
		bool L_2 = Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)L_1, /*hidden argument*/Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		goto IL_003f;
	}

IL_001e:
	{
		Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * L_3 = __this->get_address_of_callbacks_0();
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_4 = Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_inline((Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 *)L_3, /*hidden argument*/Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_RuntimeMethod_var);
		V_0 = L_4;
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_5 = (&V_0)->get_startCallback_1();
		ShowAdStartCallback_tC53E4D60B9D67FAB49C9B0E6291ED8693939204A * L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_003a;
		}
	}
	{
		goto IL_003f;
	}

IL_003a:
	{
		NullCheck(G_B4_0);
		ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD(G_B4_0, /*hidden argument*/NULL);
	}

IL_003f:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(___error0, ____message1_marshaled);

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_m3B8F314C59F530BCBA2A26A66B2C681856F88819 (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::Invoke(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_m3A4C38829C3AA6A20C78B90B1232E2A3BA7AC0B0 (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, int64_t ___error0, String_t* ___message1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___message1, targetMethod);
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
						GenericInterfaceActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___error0, ___message1);
					else
						GenericVirtActionInvoker2< int64_t, String_t* >::Invoke(targetMethod, targetThis, ___error0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___message1);
					else
						VirtActionInvoker2< int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___error0) - 1), ___message1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_mB560035D4D3D6C570E4176578D469CED5883194B (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, int64_t ___error0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnErrorCallback_BeginInvoke_mB560035D4D3D6C570E4176578D469CED5883194B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___error0);
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_mBBFFFFCC2B5D4BD4F1FB8269E7DD9C7D7DBDF2FC (OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, String_t* ___placementId0, intptr_t ___placementContent1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___placementContent1);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentReadyCallback__ctor_m72979DE2865B20A30FCD9A095404F5C691122214 (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::Invoke(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentReadyCallback_Invoke_mBD1848E5DF2608BC695D8D76E577E17F521320D3 (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, String_t* ___placementId0, intptr_t ___placementContent1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___placementContent1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, ___placementId0, ___placementContent1);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, ___placementId0, ___placementContent1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___placementContent1);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___placementContent1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___placementContent1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___placementId0, ___placementContent1);
					else
						GenericVirtActionInvoker2< String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___placementId0, ___placementContent1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___placementContent1);
					else
						VirtActionInvoker2< String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___placementContent1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___placementId0) - 1), ___placementContent1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___placementContent1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::BeginInvoke(System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlacementContentReadyCallback_BeginInvoke_mFE4F390B1B9BC7A71C5F3225166652F8F993CE5C (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, String_t* ___placementId0, intptr_t ___placementContent1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPlacementContentReadyCallback_BeginInvoke_mFE4F390B1B9BC7A71C5F3225166652F8F993CE5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___placementContent1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentReadyCallback_EndInvoke_m3874B2C8AEE51A80050455BFC4E3D0896B323CFF (OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, String_t* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___placementId0' to native representation
	char* ____placementId0_marshaled = NULL;
	____placementId0_marshaled = il2cpp_codegen_marshal_string(___placementId0);

	// Native function invocation
	il2cppPInvokeFunc(____placementId0_marshaled, ___placementContent1, ___previousState2, ___newState3);

	// Marshaling cleanup of parameter '___placementId0' native representation
	il2cpp_codegen_marshal_free(____placementId0_marshaled);
	____placementId0_marshaled = NULL;

}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentStateChangedCallback__ctor_m879A48543E431BF08DAD8950D3F82DBABF3029A5 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::Invoke(System.String,System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentStateChangedCallback_Invoke_m4D58296B5EAC9F060DF22359D49E9BF49F8F62B5 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, String_t* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, ___previousState2, ___newState3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(targetMethod, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(targetMethod, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___placementId0, ___placementContent1, ___previousState2, ___newState3);
					else
						VirtActionInvoker3< intptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___placementId0, ___placementContent1, ___previousState2, ___newState3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___placementContent1) - 1), ___previousState2, ___newState3, targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, ___previousState2, ___newState3, targetMethod);
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
						GenericInterfaceActionInvoker4< String_t*, intptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
					else
						GenericVirtActionInvoker4< String_t*, intptr_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, intptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
					else
						VirtActionInvoker4< String_t*, intptr_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___placementId0) - 1), ___placementContent1, ___previousState2, ___newState3, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___placementId0, ___placementContent1, ___previousState2, ___newState3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___placementId0, ___placementContent1, ___previousState2, ___newState3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::BeginInvoke(System.String,System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlacementContentStateChangedCallback_BeginInvoke_m48817263A145FEF8EDF67C52ADB0AB56C878FA11 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, String_t* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPlacementContentStateChangedCallback_BeginInvoke_m48817263A145FEF8EDF67C52ADB0AB56C878FA11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___placementId0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___placementContent1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___previousState2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___newState3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlacementContentStateChangedCallback_EndInvoke_m7AF80364306AA8785CEAB6D1A9F707670FC4CAD3 (OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled)
{
	marshaled.___onPlacementContentReadyCallback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onPlacementContentReadyCallback_0()));
	marshaled.___onPlacementContentStateChangedCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onPlacementContentStateChangedCallback_1()));
	marshaled.___onErrorCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onErrorCallback_2()));
}
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_back(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_onPlacementContentReadyCallback_0(il2cpp_codegen_marshal_function_ptr_to_delegate<OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C>(marshaled.___onPlacementContentReadyCallback_0, OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C_il2cpp_TypeInfo_var));
	unmarshaled.set_onPlacementContentStateChangedCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74>(marshaled.___onPlacementContentStateChangedCallback_1, OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74_il2cpp_TypeInfo_var));
	unmarshaled.set_onErrorCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30>(marshaled.___onErrorCallback_2, OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_pinvoke_cleanup(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_com(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_com& marshaled)
{
	marshaled.___onPlacementContentReadyCallback_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onPlacementContentReadyCallback_0()));
	marshaled.___onPlacementContentStateChangedCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onPlacementContentStateChangedCallback_1()));
	marshaled.___onErrorCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_onErrorCallback_2()));
}
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_com_back(const UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_com& marshaled, UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_onPlacementContentReadyCallback_0(il2cpp_codegen_marshal_function_ptr_to_delegate<OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C>(marshaled.___onPlacementContentReadyCallback_0, OnPlacementContentReadyCallback_t1DD6E5E16CC6A16DC94A6F5A150C09C1646B5C0C_il2cpp_TypeInfo_var));
	unmarshaled.set_onPlacementContentStateChangedCallback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74>(marshaled.___onPlacementContentStateChangedCallback_1, OnPlacementContentStateChangedCallback_t464BB36F9E1040D6D7E59DE6EF3F2524F3300A74_il2cpp_TypeInfo_var));
	unmarshaled.set_onErrorCallback_2(il2cpp_codegen_marshal_function_ptr_to_delegate<OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30>(marshaled.___onErrorCallback_2, OnErrorCallback_t324A8649243853E99EC34BA516815106B9546C30_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.Monetization.Platform/PlatformCallbacksWrapper/UnityMonetiztionCallbacks
IL2CPP_EXTERN_C void UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshal_com_cleanup(UnityMonetiztionCallbacks_t42044234927BA345C802AF18069FA69F688B9202_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215_inline (IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215UnityEngine_Monetization_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A * L_0 = ___value0;
		((IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_StaticFields*)il2cpp_codegen_static_fields_for(IosAnalytics_t3DEF15B787BB3E45FB0AD641B990AE3027DBF21A_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC_inline (IosPlacementContentOperations_t09D74595E205970329ECE33C50CB551E8FB66234 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_U3CplacementContentPtrU3Ek__BackingField_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0UnityEngine_Monetization_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		bool L_0 = ((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->get_s_Initialized_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7UnityEngine_Monetization_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var);
		((Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_StaticFields*)il2cpp_codegen_static_fields_for(Monetization_t9395DC906ADE2883DC5AE180A63F048D480EDDB9_il2cpp_TypeInfo_var))->set_s_Initialized_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CerrorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CmessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplacementIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CplacementContentOperationsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51_inline (Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51UnityEngine_Monetization_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->set_U3CPlatformU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416_inline (MetaData_t97E4DA01D3DBD0C097C61A817EC9DA6D0FA2E28B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CcategoryU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7_inline (PlacementContent_t8C02A1442FD475B7151CCE2440018A5885FAD83B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CextrasU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146_inline (PromoAdPlacementContent_t11DE5AA6A596F27A79AC75F0F7AA8BDC00BB35C3 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CpromoAdOperationsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CgamerSidU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CshowingU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CshowAdOperationsU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CshowingU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31_inline (UnityServicesErrorEventArgs_tC389258F1964E5CE84FC8979FF1096E169EBA377 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC_inline (AdFinishedEventArgs_t34F791828662172A50263025DFF6FBAD0AA42507 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CresultU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480DUnityEngine_Monetization_iOS_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var);
		Platform_t3CA6706D896B21AE91B279233D2964C16710E98B * L_0 = ((PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_StaticFields*)il2cpp_codegen_static_fields_for(PlatformCallbacksWrapper_t2099E87E605530AF82B8D49805E9955464444D41_il2cpp_TypeInfo_var))->get_U3CPlatformU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929_inline (ShowAdYield_t4E27E764A550B5F47520DBDCA3EFCB854EFB5ABA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF_inline (ShowAdPlacementContent_t8A9DA5283A80867ED175A6CE6508C12A6A14F7CF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CshowingU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m35533F1252F6FAED783C99A7025CFEF1D16B621A_gshared_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  Nullable_1_GetValueOrDefault_m63EE87382F5708BD1BCA9F0247FA88970F923C0A_gshared_inline (Nullable_1_t20376D6546FB0F9DE97B8C6D3D787B04D2CDE145 * __this, const RuntimeMethod* method)
{
	{
		ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C  L_0 = (ShowAdCallbacks_tD4DF3A1C3B0251ED9363FBCEC04DBF9C4F32D90C )__this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
