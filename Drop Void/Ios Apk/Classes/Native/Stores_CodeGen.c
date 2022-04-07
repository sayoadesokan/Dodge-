#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A_RuntimeMethod_var;
extern const RuntimeMethod* FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 UnityEngine.RuntimePlatform Uniject.IUtil::get_platform()
// 0x00000002 System.String Uniject.IUtil::get_persistentDataPath()
// 0x00000003 System.String Uniject.IUtil::get_cloudProjectId()
// 0x00000004 System.String Uniject.IUtil::get_unityVersion()
// 0x00000005 System.String Uniject.IUtil::get_userId()
// 0x00000006 System.String Uniject.IUtil::get_gameVersion()
// 0x00000007 System.UInt64 Uniject.IUtil::get_sessionId()
// 0x00000008 System.String Uniject.IUtil::get_operatingSystem()
// 0x00000009 System.Int32 Uniject.IUtil::get_screenWidth()
// 0x0000000A System.Int32 Uniject.IUtil::get_screenHeight()
// 0x0000000B System.Single Uniject.IUtil::get_screenDpi()
// 0x0000000C System.String Uniject.IUtil::get_screenOrientation()
// 0x0000000D System.Object Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator)
// 0x0000000E System.Void Uniject.IUtil::InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
// 0x0000000F System.Void Uniject.IUtil::RunOnMainThread(System.Action)
// 0x00000010 System.Void Uniject.IUtil::AddPauseListener(System.Action`1<System.Boolean>)
// 0x00000011 System.Boolean Uniject.IUtil::IsClassOrSubclass(System.Type,System.Type)
// 0x00000012 System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaStore__ctor_mA9FEF814FB4493EF4004B9111DC5D52224C149BC (void);
// 0x00000013 System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern void AndroidJavaStore_RetrieveProducts_mF8FCA2AC4DB9C33CF6AB26B9CAFCA61A1ED8F804 (void);
// 0x00000014 System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern void AndroidJavaStore_Purchase_mAA50B3745456BA540B6783386EE3053E7D179B92 (void);
// 0x00000015 System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern void AndroidJavaStore_FinishTransaction_m8F609A9EDE741804233F7AF484C7E8742628FB9C (void);
// 0x00000016 System.Void UnityEngine.Purchasing.JavaBridge::.ctor(UnityEngine.Purchasing.IUnityCallback)
extern void JavaBridge__ctor_mCC08418BD048B10479CE2EC6CFFAF2495C58FA05 (void);
// 0x00000017 System.String UnityEngine.Purchasing.SerializationExtensions::TryGetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern void SerializationExtensions_TryGetString_m5CA2904DBDAAECB2A395290767D64FE265A8EF15 (void);
// 0x00000018 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_SerializeProductDef_m71046562F7DC342D1DB8EB38109AFB8CB4B42ACF (void);
// 0x00000019 System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDefs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONSerializer_SerializeProductDefs_m4B7CF7CB2756EBB2E6DD9DF575273A1F5F7BC563 (void);
// 0x0000001A System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDescs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void JSONSerializer_SerializeProductDescs_m4C65F1F394285418D7DE5A59C13A02B0AE39BDDE (void);
// 0x0000001B System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.JSONSerializer::DeserializeProductDescriptions(System.String)
extern void JSONSerializer_DeserializeProductDescriptions_m420819A61055511B534881599076A0731813F657 (void);
// 0x0000001C UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONSerializer::DeserializeFailureReason(System.String)
extern void JSONSerializer_DeserializeFailureReason_m6959D9C6E33C08EE4D7A163B6ED4B1FB0A17ECFA (void);
// 0x0000001D UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.JSONSerializer::DeserializeMetadata(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void JSONSerializer_DeserializeMetadata_mBB8112648BB410330C07E9BB2E671112556928B0 (void);
// 0x0000001E System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern void JSONSerializer_EncodeProductDef_m1DFC6BD3375E05AC1E98806F442B80B2FA797FBE (void);
// 0x0000001F System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDesc(UnityEngine.Purchasing.Extension.ProductDescription)
extern void JSONSerializer_EncodeProductDesc_m92C6D393B0E05A310E294E27D71772A3A2AF20E8 (void);
// 0x00000020 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductMeta(UnityEngine.Purchasing.ProductMetadata)
extern void JSONSerializer_EncodeProductMeta_mC65F9EF27D29701AB65B90FD1861F6239F318CE5 (void);
// 0x00000021 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::.ctor(UnityEngine.Purchasing.Extension.IStoreCallback,Uniject.IUtil)
extern void ScriptingStoreCallback__ctor_mE2678061B0A2FBDFE72FDDCD0EF3827795E3DDCA (void);
// 0x00000022 UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.ScriptingStoreCallback::get_products()
extern void ScriptingStoreCallback_get_products_m544B879305E2C780E6FA739978DBA87244795CA6 (void);
// 0x00000023 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern void ScriptingStoreCallback_OnSetupFailed_mB45D3056C63E0B7B20FA1CB2B6E4B746CF0BB2C1 (void);
// 0x00000024 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void ScriptingStoreCallback_OnProductsRetrieved_m3DDC6CC9F488A1297BB58011B5C4360CC102FA9D (void);
// 0x00000025 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void ScriptingStoreCallback_OnPurchaseSucceeded_m704406DE7250361BFF1C925C1D2AA6974851E5AF (void);
// 0x00000026 System.Void UnityEngine.Purchasing.ScriptingStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void ScriptingStoreCallback_OnPurchaseFailed_m791A43134EEB9B750DD9ABADF97FCB01E55A3915 (void);
// 0x00000027 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m9EE99273D449BE066A7E568269EBD0C24EA40594 (void);
// 0x00000028 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass5_0::<OnSetupFailed>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mEDE77DE6453D38DA33C2AD2CC740CD8A8429D75C (void);
// 0x00000029 System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m19890802010AA2B90C09090248A63DF2310917AD (void);
// 0x0000002A System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass6_0::<OnProductsRetrieved>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m04F9A4194DCF56C862B7B548AE2A9BF5A25FB5F6 (void);
// 0x0000002B System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m356EBBE7EFE7344D97B70B7504994FF85BC59D47 (void);
// 0x0000002C System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass7_0::<OnPurchaseSucceeded>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDF865399A8960EAA8ECB12D0075F6D9CAA92578D (void);
// 0x0000002D System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m77D4BA13EA77582CCA5E28F0CD83D3DA74DE178E (void);
// 0x0000002E System.Void UnityEngine.Purchasing.ScriptingStoreCallback_<>c__DisplayClass9_0::<OnPurchaseFailed>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m09DD6625AC981F0B5336D903B3CB6713CDED2E9C (void);
// 0x0000002F System.Void UnityEngine.Purchasing.ScriptingUnityCallback::.ctor(UnityEngine.Purchasing.IUnityCallback,Uniject.IUtil)
extern void ScriptingUnityCallback__ctor_m5613EB055AA7851C1FEC18AC93DCA8AB90AB7942 (void);
// 0x00000030 System.Void UnityEngine.Purchasing.AmazonAppStoreStoreExtensions::.ctor(UnityEngine.AndroidJavaObject)
extern void AmazonAppStoreStoreExtensions__ctor_m54C6DCCA323A4B7BB0B15B61B759EDDFFEC2A12B (void);
// 0x00000031 System.Void UnityEngine.Purchasing.FakeAmazonExtensions::.ctor()
extern void FakeAmazonExtensions__ctor_mA1F4863F43A514996A7082521D64CC0FA3260725 (void);
// 0x00000032 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJava(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJava_m0027AB244108B1571D7A3A5DF99064948D9313DC (void);
// 0x00000033 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.ListExtension::ToJavaArray(System.Collections.Generic.List`1<System.String>)
extern void ListExtension_ToJavaArray_m119F4DDF93A4AC46729BF52F28CE3BD596368113 (void);
// 0x00000034 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.UnityActivity::GetUnityPlayerClass()
extern void UnityActivity_GetUnityPlayerClass_m25E5AB4EF7A3384610D6C34DC709A693A95B2BEA (void);
// 0x00000035 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.UnityActivity::GetCurrentActivity()
extern void UnityActivity_GetCurrentActivity_m166AE81C1037DFC24E97B53701C2B1296681B4AD (void);
// 0x00000036 System.Boolean UnityEngine.Purchasing.ReflectionUtils::HasMethodInInterface(System.Object,System.String)
extern void ReflectionUtils_HasMethodInInterface_m3A7BF61F16652F11803FD2A8083E8863BE1527E4 (void);
// 0x00000037 System.Reflection.MethodInfo UnityEngine.Purchasing.ReflectionUtils::GetMethod(System.Object,System.String)
extern void ReflectionUtils_GetMethod_m77CEB7F2D992D01D2FAD8932904C3BFE1FC1170C (void);
// 0x00000038 System.Void UnityEngine.Purchasing.ReflectionUtils::InvokeMethod(System.Object,System.String,System.Object[])
extern void ReflectionUtils_InvokeMethod_mB9789B3F736DD39A075BA777ED3F539F3D028097 (void);
// 0x00000039 System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeGooglePlayStoreExtensions_RestoreTransactions_m9AA8866D5C4B8AA5B64BD2100EAB0D0C8790A531 (void);
// 0x0000003A System.Void UnityEngine.Purchasing.FakeGooglePlayStoreExtensions::.ctor()
extern void FakeGooglePlayStoreExtensions__ctor_mD31D8799C4D58168652DA0558ABD03AFC8F9C765 (void);
// 0x0000003B System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayPurchaseCallback_SetStoreCallback_m079CA52D65AB71223D29747867ACE7CBAC8BE01F (void);
// 0x0000003C System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
extern void GooglePlayPurchaseCallback_SetStoreExtension_mC61383ABE9AF4ABD1AA1D11AD3F7D66F3D511B4C (void);
// 0x0000003D System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void GooglePlayPurchaseCallback_OnPurchaseFailed_m41AACF16A3692BD76263B869E8FAD7A06E2B2FF7 (void);
// 0x0000003E System.Void UnityEngine.Purchasing.GooglePlayPurchaseCallback::.ctor()
extern void GooglePlayPurchaseCallback__ctor_m14B1FC46146E55E0867D03129BD3892BB7728E5F (void);
// 0x0000003F System.Void UnityEngine.Purchasing.GooglePlayStore::.ctor(UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService,UnityEngine.Purchasing.IGooglePlayStorePurchaseService,UnityEngine.Purchasing.IGoogleFetchPurchases,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal,Uniject.IUtil)
extern void GooglePlayStore__ctor_m25B99D7ECA72C37064CE7BBC8DEC7411F3D526AD (void);
// 0x00000040 System.Void UnityEngine.Purchasing.GooglePlayStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStore_Initialize_mD66FDC9F953C0E26E81B5FE077AA8B1AB8CDF851 (void);
// 0x00000041 System.Void UnityEngine.Purchasing.GooglePlayStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStore_RetrieveProducts_m63B0CEDCF7B730ABD47B43D896AD15C890FA5876 (void);
// 0x00000042 System.Void UnityEngine.Purchasing.GooglePlayStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_Purchase_mC90B6BA54CA7A8B0A8D435904D0414AC5121DBD7 (void);
// 0x00000043 System.Void UnityEngine.Purchasing.GooglePlayStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStore_FinishTransaction_m06DE3EAD2648FDB42B658AEB3EFD5FB0E8322125 (void);
// 0x00000044 System.Void UnityEngine.Purchasing.GooglePlayStore::OnPause(System.Boolean)
extern void GooglePlayStore_OnPause_m6FB5EFFB209867246356E8E203149653AF938216 (void);
// 0x00000045 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GooglePlayStoreExtensions__ctor_m0868D6BD59F79A7823B9C984CE50E0E88FB80AB8 (void);
// 0x00000046 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void GooglePlayStoreExtensions_RestoreTransactions_m0C089722429C884C3BDC82ABBB337044A412217E (void);
// 0x00000047 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreExtensions_SetStoreCallback_m19EA468FBFF4BC70435DBD5478E2E32DC35BAB14 (void);
// 0x00000048 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m1A566BF7235EEFF7F6FD3F4B445E6BD87F2C7435 (void);
// 0x00000049 System.Void UnityEngine.Purchasing.GooglePlayStoreExtensions_<>c__DisplayClass8_0::<RestoreTransactions>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_m359482FE8217E4F1CC02B7ABEF0315C6E08EDC2D (void);
// 0x0000004A UnityEngine.Purchasing.Product UnityEngine.Purchasing.StoreCallbackExtensionMethods::FindProductById(UnityEngine.Purchasing.Extension.IStoreCallback,System.String)
extern void StoreCallbackExtensionMethods_FindProductById_m5666FDD7D3263115187FF95DC14C9449B0DD79B8 (void);
// 0x0000004B System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
extern void GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_mE900D2CF7C8D20D15D4FB15097D17EB3EF20B959 (void);
// 0x0000004C System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::ContainsSku(System.String)
extern void GoogleCachedQuerySkuDetailsService_ContainsSku_m22A495F360CE7DEB1AB525F69CF01039ECD26A9D (void);
// 0x0000004D System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_m6BBB10A2D68191D54A719075BD2CAB8321A299AC (void);
// 0x0000004E System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::UpdateCachedQueriedSku(System.String,UnityEngine.AndroidJavaObject)
extern void GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_m87226F316941FB85F4734D39B3A48544A6A11A36 (void);
// 0x0000004F System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService::.ctor()
extern void GoogleCachedQuerySkuDetailsService__ctor_mA40A42361E5D42E6781B7232111C381BF9F37DAD (void);
// 0x00000050 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m93E8000FC190E0C4AF1AB8E65982D370994EEEB3 (void);
// 0x00000051 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass2_0::<ContainsSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_mCBE65E49EDE14F7190BA776BE7704B0FABAC3AC5 (void);
// 0x00000052 System.Void UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mF9D903ADEC8883A05EED60D6D6E029EA08FD488B (void);
// 0x00000053 System.Boolean UnityEngine.Purchasing.GoogleCachedQuerySkuDetailsService_<>c__DisplayClass4_0::<UpdateCachedQueriedSku>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m8801ECAFB0BAA050B6116E7D0CF209187FA88B7D (void);
// 0x00000054 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService)
extern void GoogleFinishTransactionService__ctor_mB20F3B4EABC46E1B24BF7644087EABA96B74C662 (void);
// 0x00000055 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleFinishTransactionService_FinishTransaction_m325C2D411EF24A9272BAF05D130B014DE33274AE (void);
// 0x00000056 System.Func`2<UnityEngine.Purchasing.Models.GooglePurchase,System.Boolean> UnityEngine.Purchasing.GoogleFinishTransactionService::PurchaseNeedsAcknowledgement(UnityEngine.Purchasing.ProductDefinition)
extern void GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_m1345E51D0078A81FE016CCEBAADF95B2990DB2BF (void);
// 0x00000057 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m27D39915233513199C9F09276769BD73D7848D82 (void);
// 0x00000058 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass3_0::<FinishTransaction>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_m999274100553FC0323B72C16C4300B2F5A8D70D3 (void);
// 0x00000059 System.Void UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m95F2B548794D3AC451E8D04C026345442A8F5711 (void);
// 0x0000005A System.Boolean UnityEngine.Purchasing.GoogleFinishTransactionService_<>c__DisplayClass4_0::<PurchaseNeedsAcknowledgement>b__0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_m5FCA960D92A4788DF1380634FDBBC3E4597D67AD (void);
// 0x0000005B System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::SetLastKnownProductId(System.String)
extern void GoogleLastKnownProductService_SetLastKnownProductId_m2987CBCC240ED0BA857B651114861A47A7C61827 (void);
// 0x0000005C System.Void UnityEngine.Purchasing.GoogleLastKnownProductService::.ctor()
extern void GoogleLastKnownProductService__ctor_mD68778767693894106DBBBF9D1DA26B7C8F4E635 (void);
// 0x0000005D System.Void UnityEngine.Purchasing.GooglePlayStoreService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseService,UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService,UnityEngine.Purchasing.Interfaces.IBillingClientStateListener,UnityEngine.Purchasing.IGooglePriceChangeService,UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService)
extern void GooglePlayStoreService__ctor_mBF14B52D75B62ACAF27AA46FE5333E0CA0595F8B (void);
// 0x0000005E System.Void UnityEngine.Purchasing.GooglePlayStoreService::InitConnectionWithGooglePlay(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GooglePlayStoreService_InitConnectionWithGooglePlay_m88D6A59B51BFC098CB2A6DC3D451D39FFE2E5C8F (void);
// 0x0000005F System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnConnected()
extern void GooglePlayStoreService_OnConnected_mEDE095EBB7B677959B870C7B38394E63D3728F2E (void);
// 0x00000060 System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueQueryProducts()
extern void GooglePlayStoreService_DequeueQueryProducts_mB7AAED4AE936539DF041C87847BF403981198DB8 (void);
// 0x00000061 System.Void UnityEngine.Purchasing.GooglePlayStoreService::DequeueFetchPurchases()
extern void GooglePlayStoreService_DequeueFetchPurchases_mB31429F60D61DECCECC76681E4DEF5E457AE1D67 (void);
// 0x00000062 System.Void UnityEngine.Purchasing.GooglePlayStoreService::OnDisconnected()
extern void GooglePlayStoreService_OnDisconnected_m975675EE89D81BAD26B34CDFE8E3688F184D7AD8 (void);
// 0x00000063 System.Void UnityEngine.Purchasing.GooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void GooglePlayStoreService_RetrieveProducts_mE40747D2A215C1AD017FEF36AEE33A0F49565F05 (void);
// 0x00000064 System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStoreService_Purchase_m1CDDEB7609405FECB2C61C05D6A11C4DEA73D153 (void);
// 0x00000065 System.Void UnityEngine.Purchasing.GooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePlayStoreService_Purchase_m3992936CFBA61C6DA459150722957AC8B9AD2720 (void);
// 0x00000066 System.Void UnityEngine.Purchasing.GooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GooglePlayStoreService_FinishTransaction_m3ED13072B3D766C5C430970A3BCCD22B8F39D16C (void);
// 0x00000067 System.Void UnityEngine.Purchasing.GooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GooglePlayStoreService_FetchPurchases_m5B51A3E0AB9A0A33C183AFDF42C06004C8752D2C (void);
// 0x00000068 System.Void UnityEngine.Purchasing.GooglePriceChangeService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePriceChangeService__ctor_m183D821C1A1F8BAA933F5E3ECEE1117A78643A78 (void);
// 0x00000069 System.Void UnityEngine.Purchasing.GooglePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService)
extern void GooglePurchaseService__ctor_mB2E9788B81F0A60BF5DD912310C77A57B82CC972 (void);
// 0x0000006A System.Void UnityEngine.Purchasing.GooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_Purchase_m61296DC7FA3493FB4680598DCD5A34A02783B437 (void);
// 0x0000006B System.Void UnityEngine.Purchasing.GooglePurchaseService::OnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.Purchasing.Product,System.Int32)
extern void GooglePurchaseService_OnQuerySkuDetailsResponse_m810826EEF88E0F7F245DA430DA720DCF19C78D00 (void);
// 0x0000006C System.Void UnityEngine.Purchasing.GooglePurchaseService::VerifyAndWarnIfMoreThanOneSku(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_m48F4C8E9EA0F8F46AC0C377DA0FC4C0908D8E831 (void);
// 0x0000006D System.Void UnityEngine.Purchasing.GooglePurchaseService::HandleBillingFlowResult(UnityEngine.Purchasing.Models.GoogleBillingResult,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseService_HandleBillingFlowResult_mC4D20D6630B3B98B15C6634B45806ADB6C5C3C50 (void);
// 0x0000006E System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m6373D3CA9633752BEFB6C933C5FD39530F3E00EA (void);
// 0x0000006F System.Void UnityEngine.Purchasing.GooglePurchaseService_<>c__DisplayClass4_0::<Purchase>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_m73C36EE65476044CC679488FE9F4CB601A1A08DA (void);
// 0x00000070 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GoogleQueryPurchasesService__ctor_m0A12A531471A4735D9E4BE8517B48D9BF5EC027B (void);
// 0x00000071 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_QueryPurchases_m7DBB29ECC4CEB33CB68B575B4AB59D1BCA2F2F74 (void);
// 0x00000072 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleOnQueryPurchaseReceived(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m8430E9FE0CA402D04B0CD70C94E93BD6F12D5FCF (void);
// 0x00000073 UnityEngine.Purchasing.Models.GooglePurchaseResult UnityEngine.Purchasing.GoogleQueryPurchasesService::QueryPurchasesWithSkuType(System.String)
extern void GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mE6A40B38CFEA44855D865B5C24CB7193CF47A04A (void);
// 0x00000074 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService::HandleGooglePurchaseResult(UnityEngine.Purchasing.Models.GooglePurchaseResult,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
extern void GoogleQueryPurchasesService_HandleGooglePurchaseResult_m41C6BD3BEB0B1AEBF5318C161CB6F1DFA90F2B16 (void);
// 0x00000075 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m038AD46E69961B2063BAEBB5645E926581AA3A41 (void);
// 0x00000076 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_0::<QueryPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m40D601487FD87A4603B9A36BE4ED5329A90060E1 (void);
// 0x00000077 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::.ctor()
extern void U3CU3Ec__DisplayClass3_1__ctor_m22B1316CF94913A7C40FA17D8A2976A6F44B7887 (void);
// 0x00000078 System.Void UnityEngine.Purchasing.GoogleQueryPurchasesService_<>c__DisplayClass3_1::<QueryPurchases>b__1(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mB75FC33F14CDA1DCAF2D39B08513CFEF75987D56 (void);
// 0x00000079 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.QuerySkuDetailsService::GetSkuDetailsParamClass()
extern void QuerySkuDetailsService_GetSkuDetailsParamClass_m3B0BD7ED220E0E128B81BA944E366AAB4D3EE5B9 (void);
// 0x0000007A System.Void UnityEngine.Purchasing.QuerySkuDetailsService::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleBillingClient,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void QuerySkuDetailsService__ctor_m9856E76FF63685B60C56E8855B16E68CD41D3E4D (void);
// 0x0000007B System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_m077432815CCA6DDD6F2F5254D56BE41251CDCE05 (void);
// 0x0000007C System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void QuerySkuDetailsService_QueryAsyncSku_m23741E90F16737B0B69CC23EBAAADC12E311B36F (void);
// 0x0000007D System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryAsyncSku_mDF539BD0A6C8D7E373FAC27D63B6FFB816560AC0 (void);
// 0x0000007E System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QueryInAppsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QueryInAppsAsync_mB93745D17F4A31499CC9A4CA4E6936B40BAB9FA9 (void);
// 0x0000007F System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySubsAsync(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySubsAsync_m43A04DE46E3F26DF3CFE2D547ACA88BC72F43713 (void);
// 0x00000080 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::QuerySkuDetails(System.Collections.Generic.List`1<System.String>,System.String,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_QuerySkuDetails_mDE629779D9CCD3EC9FDB93DE5567E809B6FE397C (void);
// 0x00000081 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::ConsolidateOnSkuDetailsReceived(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
extern void QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mFEB4F142DE9B9E7451C2C670D862DB6D48F37778 (void);
// 0x00000082 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::AddToQueriedSkuDetails(UnityEngine.AndroidJavaObject)
extern void QuerySkuDetailsService_AddToQueriedSkuDetails_m8D30F01D6A0762B4AB8D59D4E53E797A4E92BBF0 (void);
// 0x00000083 System.Void UnityEngine.Purchasing.QuerySkuDetailsService::Clear()
extern void QuerySkuDetailsService_Clear_mA336060DCB2401C558D2BC29878C89C4748D42E3 (void);
// 0x00000084 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m7C6B9FE8FCC85FF9FB4A530E0D9D8673893770D6 (void);
// 0x00000085 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass12_0::<QueryAsyncSku>b__0(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m736868E315634DA7F7F19BD4D79BF95E3F8BD182 (void);
// 0x00000086 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.cctor()
extern void U3CU3Ec__cctor_mEB486676CE0F24AF5FC142970EFFD2D755FE9AF2 (void);
// 0x00000087 System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c::.ctor()
extern void U3CU3Ec__ctor_m304D3A86D1F8C0E4C2D461F205E9241409098163 (void);
// 0x00000088 System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m3C2AF7D4F722AB2A5031B3176002B6961CDF43A8 (void);
// 0x00000089 System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QueryInAppsAsync>b__14_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m7B25F07F9B555C53C4EAC887B1AB0B241A2ABF78 (void);
// 0x0000008A System.Boolean UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_mC1F25C6B046D4CFD3A9D974B8CEAFA9059422ED4 (void);
// 0x0000008B System.String UnityEngine.Purchasing.QuerySkuDetailsService_<>c::<QuerySubsAsync>b__15_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_m75815EA70EAD53B9F0695EE7925E24BC163BA2DE (void);
// 0x0000008C System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_m8D87F279FB93A3AB937E8CD7A4B16629C24A4FEF (void);
// 0x0000008D System.Void UnityEngine.Purchasing.QuerySkuDetailsService_<>c__DisplayClass16_0::<QuerySkuDetails>b__0(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_mD7775DB07A8CBE65F9C8F437F0689ED4CA07F87F (void);
// 0x0000008E System.Collections.Generic.HashSet`1<UnityEngine.AndroidJavaObject> UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::GetCachedQueriedSkus()
// 0x0000008F System.Void UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService::AddCachedQueriedSkus(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
// 0x00000090 System.Void UnityEngine.Purchasing.BillingClientStateListener::.ctor()
extern void BillingClientStateListener__ctor_m8932722D70E3C997A7E2D550658EA38984B64693 (void);
// 0x00000091 System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnConnected(System.Action)
extern void BillingClientStateListener_RegisterOnConnected_m7CDB0F0DA553849B315139C2E777992C62F52067 (void);
// 0x00000092 System.Void UnityEngine.Purchasing.BillingClientStateListener::RegisterOnDisconnected(System.Action)
extern void BillingClientStateListener_RegisterOnDisconnected_m25BC92A8D389EF3E6C368A28833172EB1402E802 (void);
// 0x00000093 System.Void UnityEngine.Purchasing.GoogleAcknowledgePurchaseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleAcknowledgePurchaseListener__ctor_m47ABB6392E911826A66838B19BEA35351EA03D97 (void);
// 0x00000094 System.Void UnityEngine.Purchasing.GoogleConsumeResponseListener::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleConsumeResponseListener__ctor_m72E6ADCE95AA8DC116A94D0951043DE592761788 (void);
// 0x00000095 System.Void UnityEngine.Purchasing.GooglePurchaseUpdatedListener::.ctor(UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseUpdatedListener__ctor_m52983B152DF000053AAFF2DC0FA77223BD9D9795 (void);
// 0x00000096 System.Void UnityEngine.Purchasing.SkuDetailsResponseListener::.ctor(System.Action`2<UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject>)
extern void SkuDetailsResponseListener__ctor_m037E5CC9CCBC61F9F88E2ECEDB08279AACA34681 (void);
// 0x00000097 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x00000098 System.Void UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x00000099 System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x0000009A System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases(System.Boolean)
// 0x0000009B System.Void UnityEngine.Purchasing.IGoogleFetchPurchases::FetchPurchases(System.Action,System.Boolean)
// 0x0000009C System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x0000009D System.Void UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x0000009E System.Void UnityEngine.Purchasing.IGooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x0000009F System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000000A0 System.Void UnityEngine.Purchasing.IGooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
// 0x000000A1 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_originalJson(System.String)
extern void GoogleProductMetadata_set_originalJson_m43489ED0063262384137B5FEF3E4244947251903 (void);
// 0x000000A2 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_subscriptionPeriod(System.String)
extern void GoogleProductMetadata_set_subscriptionPeriod_mCBE39B66A88B8407C98A85C4A030C8A82FEC5180 (void);
// 0x000000A3 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_freeTrialPeriod(System.String)
extern void GoogleProductMetadata_set_freeTrialPeriod_m5A167E0239D5EEF3E9AD7DE216D1EB64C599BD7C (void);
// 0x000000A4 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPrice(System.String)
extern void GoogleProductMetadata_set_introductoryPrice_m5D5D3648A54FDF5AE28FE7C23D012C23F48E9D0B (void);
// 0x000000A5 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPricePeriod(System.String)
extern void GoogleProductMetadata_set_introductoryPricePeriod_m0FF8DEDE3654A057E518F40ACDF942E3B3622697 (void);
// 0x000000A6 System.Void UnityEngine.Purchasing.GoogleProductMetadata::set_introductoryPriceCycles(System.Int32)
extern void GoogleProductMetadata_set_introductoryPriceCycles_mB63EEAD30B0F875EC5D1E2F6636EF795999964E6 (void);
// 0x000000A7 System.Void UnityEngine.Purchasing.GoogleProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern void GoogleProductMetadata__ctor_m1F0A4F452A0FF66C25E96768D58AC8C0C6291289 (void);
// 0x000000A8 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService)
extern void GoogleFetchPurchases__ctor_m2D9FA3A1CC817D78D571AE0EA1754E7F87FFAD8E (void);
// 0x000000A9 System.Void UnityEngine.Purchasing.GoogleFetchPurchases::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GoogleFetchPurchases_SetStoreCallback_m9B9AABB5F76246376F241BA1F8EADB56C052A727 (void);
// 0x000000AA System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases(System.Boolean)
extern void GoogleFetchPurchases_FetchPurchases_mB69218999071F728533F0F82871F0B94D4C090F6 (void);
// 0x000000AB System.Void UnityEngine.Purchasing.GoogleFetchPurchases::FetchPurchases(System.Action,System.Boolean)
extern void GoogleFetchPurchases_FetchPurchases_m82CC89DB782B31594888CAC7716E50E06C0E9AD4 (void);
// 0x000000AC System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnFetchedPurchaseSuccessful(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Boolean)
extern void GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m4590839CC0B633947DC30E891894B7B47808DFF5 (void);
// 0x000000AD System.Void UnityEngine.Purchasing.GoogleFetchPurchases::OnPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>,System.Boolean)
extern void GoogleFetchPurchases_OnPurchasesRetrieved_m1299D0E1BB32E8DA1C45D89DF6C7976AC06717E5 (void);
// 0x000000AE System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_mF11D0586C526F3ED6C7199AC9715E9F2E1BA40C3 (void);
// 0x000000AF System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c__DisplayClass6_0::<FetchPurchases>b__0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>)
extern void U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_mFF3A07F7DCB1E512A43A99B2BDBD8564491CAA30 (void);
// 0x000000B0 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.cctor()
extern void U3CU3Ec__cctor_m395BE7E13777C15446FEF001A7A3DA6D33DDB7A9 (void);
// 0x000000B1 System.Void UnityEngine.Purchasing.GoogleFetchPurchases_<>c::.ctor()
extern void U3CU3Ec__ctor_mB6FD401B581D766D27E663FCF0C58B42836D5C10 (void);
// 0x000000B2 System.Boolean UnityEngine.Purchasing.GoogleFetchPurchases_<>c::<OnPurchasesRetrieved>b__8_0(UnityEngine.Purchasing.Models.GooglePurchase)
extern void U3CU3Ec_U3COnPurchasesRetrievedU3Eb__8_0_m58C05625B5DB72A56BD3543EA8523485D16A7BE3 (void);
// 0x000000B3 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStoreFinishTransactionService__ctor_mDE6AF91E42569AD0F079BF697C2C03CB98AA7E44 (void);
// 0x000000B4 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreFinishTransactionService_SetStoreCallback_m26C0CF560C88CF0F58D8ACAF912456E2DA9D3271 (void);
// 0x000000B5 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void GooglePlayStoreFinishTransactionService_FinishTransaction_mD29CA40B5BD07DA5E8C5C590396A14F5DC77BFC0 (void);
// 0x000000B6 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnConsume(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_OnConsume_mD74CC687DD5D1842964B366185CE38967EE5BB4F (void);
// 0x000000B7 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::OnAcknowledge(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_OnAcknowledge_m62B7B56EA17B5E7E72F4627CF41D402768B2C488 (void);
// 0x000000B8 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::HandleFinishTransaction(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String)
extern void GooglePlayStoreFinishTransactionService_HandleFinishTransaction_m62A98BC2A52FC3BC4002514CF12B92F0BEE929B8 (void);
// 0x000000B9 System.Void UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::CallPurchaseSucceededUpdateReceipt(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.String)
extern void GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m5D68ED093F16EB5E4CD7B508EDB216C790DC2759 (void);
// 0x000000BA System.Boolean UnityEngine.Purchasing.GooglePlayStoreFinishTransactionService::IsResponseCodeInRecoverableState(UnityEngine.Purchasing.Models.GoogleBillingResult)
extern void GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_m88E312C7218AF61B6459821EEB42DBEF44D6D2D9 (void);
// 0x000000BB System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService)
extern void GooglePlayStorePurchaseService__ctor_mD50BB3F70AFAA9142266B0EFF77E1287FF2525EC (void);
// 0x000000BC System.Void UnityEngine.Purchasing.GooglePlayStorePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition)
extern void GooglePlayStorePurchaseService_Purchase_m15A72DADBA04675835E5C9ED7C6DCB6D98631184 (void);
// 0x000000BD System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGoogleFetchPurchases)
extern void GooglePlayStoreRetrieveProductsService__ctor_m8C6E7488F8332FC757B888AC673F22656CA7D718 (void);
// 0x000000BE System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void GooglePlayStoreRetrieveProductsService_SetStoreCallback_mF40EC459EE9FCFB538CDFCFB4F88D500DFA881BA (void);
// 0x000000BF System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void GooglePlayStoreRetrieveProductsService_RetrieveProducts_mF3EA1EE1BC91472019F74CF6D25943F8517B3CEA (void);
// 0x000000C0 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService::<RetrieveProducts>b__5_0(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_mC5E21CCD51CC5302ACEAA4BBF87B1E51AD72F4A4 (void);
// 0x000000C1 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mB2E41A66477FAB50E1252F69A580505B6380C6A4 (void);
// 0x000000C2 System.Void UnityEngine.Purchasing.GooglePlayStoreRetrieveProductsService_<>c__DisplayClass5_0::<RetrieveProducts>b__1()
extern void U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_m3FA5E2215234A3FC1488F18FEBA9FBD0CB271ADD (void);
// 0x000000C3 System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void FakeSamsungAppsExtensions_SetMode_m491C5A2D2D1005D27586616143DB48D4C44E3C06 (void);
// 0x000000C4 System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeSamsungAppsExtensions_RestoreTransactions_mD47187A8FCC665E9D7666397313E4911129B430B (void);
// 0x000000C5 System.Void UnityEngine.Purchasing.FakeSamsungAppsExtensions::.ctor()
extern void FakeSamsungAppsExtensions__ctor_m31635B5A6A3BAECE74C15341C9ABA6E7BAD1793B (void);
// 0x000000C6 System.Void UnityEngine.Purchasing.ISamsungAppsConfiguration::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
// 0x000000C7 System.Void UnityEngine.Purchasing.ISamsungAppsExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x000000C8 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::.ctor()
extern void SamsungAppsStoreExtensions__ctor_m0DB1B36658CF7FC94E9C0C6908F7BD5EA33FD46F (void);
// 0x000000C9 System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetAndroidJavaObject(UnityEngine.AndroidJavaObject)
extern void SamsungAppsStoreExtensions_SetAndroidJavaObject_mEC18A1E9F2E2A5F77982EAE05DABC785E5B2810D (void);
// 0x000000CA System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::SetMode(UnityEngine.Purchasing.SamsungAppsMode)
extern void SamsungAppsStoreExtensions_SetMode_m67A28155EDADB7E0352231A59FCC6F03BB89C889 (void);
// 0x000000CB System.Void UnityEngine.Purchasing.SamsungAppsStoreExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void SamsungAppsStoreExtensions_RestoreTransactions_m484E136AA871924754A6F0F81E42A2BCFEE86310 (void);
// 0x000000CC System.Void UnityEngine.Purchasing.FakeUDPExtension::.ctor()
extern void FakeUDPExtension__ctor_m919B5C8E3EF71080C35F4172DCFC0BD41DF2D054 (void);
// 0x000000CD System.Void UnityEngine.Purchasing.INativeUDPStore::Initialize(System.Action`2<System.Boolean,System.String>)
// 0x000000CE System.Void UnityEngine.Purchasing.INativeUDPStore::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
// 0x000000CF System.Void UnityEngine.Purchasing.INativeUDPStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
// 0x000000D0 System.Void UnityEngine.Purchasing.INativeUDPStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x000000D1 System.String UnityEngine.Purchasing.UDP::get_Name()
extern void UDP_get_Name_m55E6344928C674F32E028DFDF0B9EF33DFA0E39E (void);
// 0x000000D2 System.Void UnityEngine.Purchasing.UDPBindings::.ctor()
extern void UDPBindings__ctor_m5E1A67D35639B72BDB7439B0B64DF4F890472F91 (void);
// 0x000000D3 System.Void UnityEngine.Purchasing.UDPBindings::Initialize(System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_Initialize_mDA64E17D1D163D3BDBCFD97D9915733DFC950DFA (void);
// 0x000000D4 System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.Action`2<System.Boolean,System.String>,System.String)
extern void UDPBindings_Purchase_m49F311E3F1A0E53D5B8F9E8E71EAA7AAAA6C664E (void);
// 0x000000D5 System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`2<System.Boolean,System.String>)
extern void UDPBindings_RetrieveProducts_m728D017D677B288C41E5F9BD919A6C76B7FAB78C (void);
// 0x000000D6 System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPBindings_FinishTransaction_mFF6F312F4CC65DE804328095058AAE5199CACF1D (void);
// 0x000000D7 System.Void UnityEngine.Purchasing.UDPBindings::OnInventoryQueried(System.Boolean,System.Object)
extern void UDPBindings_OnInventoryQueried_m9006B54B303EC440A977B9914222DF30E076A8B8 (void);
// 0x000000D8 System.Void UnityEngine.Purchasing.UDPBindings::RetrieveProducts(System.String)
extern void UDPBindings_RetrieveProducts_m51DA585C6019642AC2C08AB023F21F6E66951003 (void);
// 0x000000D9 System.Void UnityEngine.Purchasing.UDPBindings::Purchase(System.String,System.String)
extern void UDPBindings_Purchase_m3BF64CFF17469F850EE91A1A90E5871C2FE05A0A (void);
// 0x000000DA System.Void UnityEngine.Purchasing.UDPBindings::FinishTransaction(System.String,System.String)
extern void UDPBindings_FinishTransaction_mAF4BFC879BF9A5B835205E24FFF23D29BBAB756B (void);
// 0x000000DB System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.UDPBindings::StringPropertyToDictionary(System.Object)
extern void UDPBindings_StringPropertyToDictionary_mC2F82A1664AD8FC416C310CAB86EAAC7D7B913B7 (void);
// 0x000000DC System.Void UnityEngine.Purchasing.UDPImpl::SetNativeStore(UnityEngine.Purchasing.INativeUDPStore)
extern void UDPImpl_SetNativeStore_mB0A232D5E37BF1547D48CFF9EC0A1A8C28F6D917 (void);
// 0x000000DD System.Void UnityEngine.Purchasing.UDPImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void UDPImpl_Initialize_mBF9D472EB4058EC2C54CAEF8A21DC2F7D042AEED (void);
// 0x000000DE System.Void UnityEngine.Purchasing.UDPImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UDPImpl_RetrieveProducts_m1386F32277E32CEAE66488671FEBA5E5818E30A9 (void);
// 0x000000DF System.Void UnityEngine.Purchasing.UDPImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_Purchase_mDC5354182C143C073738661B3E509D25AFC3BD14 (void);
// 0x000000E0 System.Void UnityEngine.Purchasing.UDPImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void UDPImpl_FinishTransaction_mC99CA3AF25417F317BAAE8597CA35BC83DAEEC93 (void);
// 0x000000E1 System.Void UnityEngine.Purchasing.UDPImpl::DictionaryToStringProperty(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object)
extern void UDPImpl_DictionaryToStringProperty_m7EF908CF8DD04530856C1736FA41F73D710D92B4 (void);
// 0x000000E2 System.Void UnityEngine.Purchasing.UDPImpl::.ctor()
extern void UDPImpl__ctor_m97E1C6DF7474C1FFFE9536AEE0D737E97C93D00A (void);
// 0x000000E3 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mEB3E760EF0F2CBDFC5FAA83A716DC18B50561F13 (void);
// 0x000000E4 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_mB2128325E2F7F7F207974CE4730B5FF05C6902AF (void);
// 0x000000E5 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass7_0::<RetrieveProducts>b__1(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mF64376114C045F37B3194C4AA99CAC04AD31A0C6 (void);
// 0x000000E6 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m81A6FE325872FACFDC4B7722B7F826071F918C0A (void);
// 0x000000E7 System.Void UnityEngine.Purchasing.UDPImpl_<>c__DisplayClass8_0::<Purchase>b__0(System.Boolean,System.String)
extern void U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mE2C67BA9273A9645643114A142C051D52A504DA6 (void);
// 0x000000E8 System.Type UnityEngine.Purchasing.UDPReflectionUtils::GetTypeByName(System.String)
extern void UDPReflectionUtils_GetTypeByName_mC696A1D9C99417384D48A71591828F77BCF85CA9 (void);
// 0x000000E9 System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> UnityEngine.Purchasing.UDPReflectionUtils::GetAllAssemblies()
extern void UDPReflectionUtils_GetAllAssemblies_m50DF01977F799CC332A846987EEC16C53D827A62 (void);
// 0x000000EA System.Collections.Generic.IEnumerable`1<System.Type> UnityEngine.Purchasing.UDPReflectionUtils::GetTypes(System.Reflection.Assembly)
extern void UDPReflectionUtils_GetTypes_m293C89E5AADCD2F61DD969F810FE605900779B4A (void);
// 0x000000EB System.Void UnityEngine.Purchasing.UDPReflectionUtils::.cctor()
extern void UDPReflectionUtils__cctor_mA0E013661283611E1B9136D61C505E65542E27A2 (void);
// 0x000000EC System.Void UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m7FD8CF71F8D7FBDE6DBBFD1DF8AE91CD6285419A (void);
// 0x000000ED System.Boolean UnityEngine.Purchasing.UDPReflectionUtils_<>c__DisplayClass6_0::<GetTypeByName>b__0(System.String)
extern void U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m7269AFB321D9F8B9394AEB9C89900E8B857867BD (void);
// 0x000000EE System.Type UnityEngine.Purchasing.InventoryInterface::GetClassType()
extern void InventoryInterface_GetClassType_m6705B75F55E34CE08872DC08C510AA1E4D14BE5F (void);
// 0x000000EF System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetProductListMethod()
extern void InventoryInterface_GetProductListMethod_m722CFEF6443F95A66B7CA93CD18549BA1D9058C9 (void);
// 0x000000F0 System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::GetPurchaseInfoMethod()
extern void InventoryInterface_GetPurchaseInfoMethod_m5D07125178AD88F1D0768F7F6A9487205145D3DF (void);
// 0x000000F1 System.Reflection.MethodInfo UnityEngine.Purchasing.InventoryInterface::HasPurchaseMethod()
extern void InventoryInterface_HasPurchaseMethod_mD2ACD2FD42D812D8750C35C1165D715A68E5AB40 (void);
// 0x000000F2 System.Type UnityEngine.Purchasing.ProductInfoInterface::GetClassType()
extern void ProductInfoInterface_GetClassType_mBA5EB3369E9E21CCA8EC1D1D6A0BBA7AE905A85F (void);
// 0x000000F3 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetCurrencyProp()
extern void ProductInfoInterface_GetCurrencyProp_mB0BE6A16805C7ABCBF19751711BDD3098739EEA4 (void);
// 0x000000F4 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetDescriptionProp()
extern void ProductInfoInterface_GetDescriptionProp_m3F1A2FF31E0DFD4E8B23DC6CF125A8B55E7C331B (void);
// 0x000000F5 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceProp()
extern void ProductInfoInterface_GetPriceProp_m578877A5934EA9BCE4362F18BA96B4E777387CA3 (void);
// 0x000000F6 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetPriceAmountMicrosProp()
extern void ProductInfoInterface_GetPriceAmountMicrosProp_mF81692D8BA4921DBA03CE8C6A6A656099F4D1902 (void);
// 0x000000F7 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetProductIdProp()
extern void ProductInfoInterface_GetProductIdProp_m0F26E4A3E010A2BFE0BDCA88980EAFAFF2D0C502 (void);
// 0x000000F8 System.Reflection.PropertyInfo UnityEngine.Purchasing.ProductInfoInterface::GetTitleProp()
extern void ProductInfoInterface_GetTitleProp_mF9CDC5744C62C4ED54BBDB563704958301F8188A (void);
// 0x000000F9 System.Type UnityEngine.Purchasing.StoreServiceInterface::GetClassType()
extern void StoreServiceInterface_GetClassType_mB831B5638AB01B1D7E31E54215660789BFF696DA (void);
// 0x000000FA System.Reflection.PropertyInfo UnityEngine.Purchasing.StoreServiceInterface::GetNameProp()
extern void StoreServiceInterface_GetNameProp_mC9844C3D784768A9E8D2F0D913E6EF3A6E29922C (void);
// 0x000000FB System.String UnityEngine.Purchasing.StoreServiceInterface::GetName()
extern void StoreServiceInterface_GetName_m27EC9492518273934079ECAB3B5EA69BAE158FC9 (void);
// 0x000000FC System.Type UnityEngine.Purchasing.UdpIapBridgeInterface::GetClassType()
extern void UdpIapBridgeInterface_GetClassType_mCA0A0565157EA6CEF1D48ADBA7AFFC2759E64461 (void);
// 0x000000FD System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetInitMethod()
extern void UdpIapBridgeInterface_GetInitMethod_mB1ACE82161A1379DE80EB1102276010D415F5801 (void);
// 0x000000FE System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetPurchaseMethod()
extern void UdpIapBridgeInterface_GetPurchaseMethod_m73E7DE5D045CD4069AF78EB3C72F0C7B99926111 (void);
// 0x000000FF System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetRetrieveProductsMethod()
extern void UdpIapBridgeInterface_GetRetrieveProductsMethod_m417C5BCE1B9F84795640DD5685D59F65058D7C5E (void);
// 0x00000100 System.Reflection.MethodInfo UnityEngine.Purchasing.UdpIapBridgeInterface::GetFinishTransactionMethod()
extern void UdpIapBridgeInterface_GetFinishTransactionMethod_m5E0E9BF6BCC72DB1E5CB3900C6BFB8C75E8D6971 (void);
// 0x00000101 System.Type UnityEngine.Purchasing.UserInfoInterface::GetClassType()
extern void UserInfoInterface_GetClassType_mA0B5C812D753C5130C0AD3BB283D94EDCA9582A1 (void);
// 0x00000102 System.Void UnityEngine.Purchasing.AppleStoreImpl::.ctor(Uniject.IUtil)
extern void AppleStoreImpl__ctor_m3A5046CE5BE72A48CCD9688198896DCC9ECFBEEA (void);
// 0x00000103 System.Void UnityEngine.Purchasing.AppleStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeAppleStore)
extern void AppleStoreImpl_SetNativeStore_m5B471C951650348F63FE2EF6F1954F87E1F33295 (void);
// 0x00000104 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnProductsRetrieved(System.String)
extern void AppleStoreImpl_OnProductsRetrieved_m5196D11E0C4DB92F2E8348F5F4F1E0B03EC79634 (void);
// 0x00000105 System.Void UnityEngine.Purchasing.AppleStoreImpl::RestoreTransactions(System.Action`1<System.Boolean>)
extern void AppleStoreImpl_RestoreTransactions_m42CE9F7A3548A6D86913C3D95A1D0CFB32A0CA5D (void);
// 0x00000106 System.Void UnityEngine.Purchasing.AppleStoreImpl::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void AppleStoreImpl_RegisterPurchaseDeferredListener_mB3C2FDACCD18969C4818A508CA634FBDA360AC4C (void);
// 0x00000107 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseDeferred(System.String)
extern void AppleStoreImpl_OnPurchaseDeferred_mA74BB33F86655D44EF3F92DFFAFA4C557C282B35 (void);
// 0x00000108 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPromotionalPurchaseAttempted(System.String)
extern void AppleStoreImpl_OnPromotionalPurchaseAttempted_mDF60DC0A3650BE28578F961B906789CA362E46A6 (void);
// 0x00000109 System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredSuccess()
extern void AppleStoreImpl_OnTransactionsRestoredSuccess_m55FD768F30326B3A596281EB18989D39AE987CC4 (void);
// 0x0000010A System.Void UnityEngine.Purchasing.AppleStoreImpl::OnTransactionsRestoredFail(System.String)
extern void AppleStoreImpl_OnTransactionsRestoredFail_mAF6858AD52BBACAAD49A6F4DBAD20F8940D45CEB (void);
// 0x0000010B System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRetrieved(System.String)
extern void AppleStoreImpl_OnAppReceiptRetrieved_mCD339C6575C63C9B1DD9EC60DAAE237430150BC7 (void);
// 0x0000010C System.Void UnityEngine.Purchasing.AppleStoreImpl::OnAppReceiptRefreshedFailed()
extern void AppleStoreImpl_OnAppReceiptRefreshedFailed_mC4931DE303A5217CE1F88157B3B9E8B48A52AB5A (void);
// 0x0000010D System.Void UnityEngine.Purchasing.AppleStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A (void);
// 0x0000010E System.Void UnityEngine.Purchasing.AppleStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void AppleStoreImpl_ProcessMessage_m12A69E4F6E96013F8EFD780AC573B00B73C594C0 (void);
// 0x0000010F System.Void UnityEngine.Purchasing.AppleStoreImpl::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void AppleStoreImpl_OnPurchaseSucceeded_m4D2A74DAAABC28931BA518156CC85D29C559E07A (void);
// 0x00000110 UnityEngine.Purchasing.Security.AppleReceipt UnityEngine.Purchasing.AppleStoreImpl::getAppleReceiptFromBase64String(System.String)
extern void AppleStoreImpl_getAppleReceiptFromBase64String_m4055599D3E9FF70D7F40BD1D0F3FAADE748EC0C6 (void);
// 0x00000111 System.Boolean UnityEngine.Purchasing.AppleStoreImpl::isValidPurchaseState(UnityEngine.Purchasing.Security.AppleReceipt,System.String)
extern void AppleStoreImpl_isValidPurchaseState_mC1426EE06E24AD4F53C243E0CBB353058E53A9F9 (void);
// 0x00000112 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m91B65ABE3A4BDA77A8DD3D5E2A97475C2C5F4DE5 (void);
// 0x00000113 System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass24_0::<OnProductsRetrieved>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_m059A5AD31F50C2304D38053C1789F3161450722C (void);
// 0x00000114 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_mE32C831D85B5B80ED17E8E7E5AAA685BF171ACDC (void);
// 0x00000115 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_mF4123EB8A6BB5743491990537DE196907ED51415 (void);
// 0x00000116 System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<OnProductsRetrieved>b__24_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m71BF0C2111E51B1AB1B3C514C8A39DE97DC58CEA (void);
// 0x00000117 System.Int32 UnityEngine.Purchasing.AppleStoreImpl_<>c::<isValidPurchaseState>b__41_1(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_mB58C96E9D2778CF0E7E74E84FF940CD491BB6A6F (void);
// 0x00000118 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_mBA5BFBDB3066AC53478C7CA83C6062E17AC5FA59 (void);
// 0x00000119 System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass37_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mFFE2BE5B1F3FAF01E2B6400964F77AF84BC2EF0E (void);
// 0x0000011A System.Void UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_mC7EE64DC3F3330EA4D15AFC2D03AB405B1D9E200 (void);
// 0x0000011B System.Boolean UnityEngine.Purchasing.AppleStoreImpl_<>c__DisplayClass41_0::<isValidPurchaseState>b__0(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt)
extern void U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m3EF70FB1742ADC405FF1E67A217C51161055CACC (void);
// 0x0000011C System.Void UnityEngine.Purchasing.FakeAppleConfiguation::.ctor()
extern void FakeAppleConfiguation__ctor_m0D9B17A384761404AF47C4FED8E27366CB6A018B (void);
// 0x0000011D System.Void UnityEngine.Purchasing.FakeAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
extern void FakeAppleExtensions_RestoreTransactions_m762B74D0148B6BC5E9D315A934066949D8A8A7FA (void);
// 0x0000011E System.Void UnityEngine.Purchasing.FakeAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
extern void FakeAppleExtensions_RegisterPurchaseDeferredListener_m752983580BF81AB327D50A1C9B05C252EC9ED0D5 (void);
// 0x0000011F System.Void UnityEngine.Purchasing.FakeAppleExtensions::.ctor()
extern void FakeAppleExtensions__ctor_mB2D1FA713182BAE72E5B2E14E654A5CF5A0139C9 (void);
// 0x00000120 System.Void UnityEngine.Purchasing.IAppleExtensions::RestoreTransactions(System.Action`1<System.Boolean>)
// 0x00000121 System.Void UnityEngine.Purchasing.IAppleExtensions::RegisterPurchaseDeferredListener(System.Action`1<UnityEngine.Purchasing.Product>)
// 0x00000122 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.INativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
// 0x00000123 UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.INativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
// 0x00000124 UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.INativeStoreProvider::GetFacebookStore()
// 0x00000125 System.Void UnityEngine.Purchasing.IStoreInternal::SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
// 0x00000126 System.Boolean UnityEngine.Purchasing.JSONStore::get_disableStoreCatalog()
extern void JSONStore_get_disableStoreCatalog_mB2AACA8E1BD2F623D1FD624795A6EC2D63BE4CAF (void);
// 0x00000127 System.Void UnityEngine.Purchasing.JSONStore::.ctor()
extern void JSONStore__ctor_mC199CE530A1FB003EF7D200D00119D814950F02E (void);
// 0x00000128 System.Void UnityEngine.Purchasing.JSONStore::.ctor(System.String)
extern void JSONStore__ctor_m5A359857F3A31A3032CF90B933FC0BF0904510BC (void);
// 0x00000129 System.Void UnityEngine.Purchasing.JSONStore::SetNativeStore(UnityEngine.Purchasing.INativeStore)
extern void JSONStore_SetNativeStore_m9081E0D222C7D19ECFB7D22FE4FBD6B5A64DA019 (void);
// 0x0000012A System.Void UnityEngine.Purchasing.JSONStore::UnityEngine.Purchasing.IStoreInternal.SetModule(UnityEngine.Purchasing.StandardPurchasingModule)
extern void JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_m8AD071D5E95AC1A99028DB5127BD48563D26049A (void);
// 0x0000012B System.Void UnityEngine.Purchasing.JSONStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void JSONStore_Initialize_mDC59DC7290C7C6D89A2FCCDD233C67E6A5298CAB (void);
// 0x0000012C System.Void UnityEngine.Purchasing.JSONStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void JSONStore_RetrieveProducts_m34FAD01E08B77B560FD93D10A6DE7E0950E311B7 (void);
// 0x0000012D System.Void UnityEngine.Purchasing.JSONStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_Purchase_m8D573478E0B8301F9F26EB3FEBB0146646F2129D (void);
// 0x0000012E System.Void UnityEngine.Purchasing.JSONStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void JSONStore_FinishTransaction_m7A8761C8CA31ABBEBA3CDC8F7664DF375879138D (void);
// 0x0000012F System.Void UnityEngine.Purchasing.JSONStore::OnSetupFailed(System.String)
extern void JSONStore_OnSetupFailed_m21366F78BF04A9085A76CA7B25441D534A352606 (void);
// 0x00000130 System.Void UnityEngine.Purchasing.JSONStore::OnProductsRetrieved(System.String)
extern void JSONStore_OnProductsRetrieved_m8236414C12FEADFF86ECD21CB2A9DAE675CB0F54 (void);
// 0x00000131 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void JSONStore_OnPurchaseSucceeded_m3F67887DB888F040538D235B47B7F618B59A91DB (void);
// 0x00000132 System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseSucceededEvent(System.String,System.String,System.String)
extern void JSONStore_SendPurchaseSucceededEvent_mA9F6F8B592ECFF17F215742A8AFA6A4143CB1E58 (void);
// 0x00000133 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(System.String)
extern void JSONStore_OnPurchaseFailed_m065B10EC98B56D49EB8CA861118455F2F8BA5A2D (void);
// 0x00000134 System.Void UnityEngine.Purchasing.JSONStore::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_OnPurchaseFailed_m464B273A747BD5319A9EF40E371AED21686ADE7E (void);
// 0x00000135 System.Void UnityEngine.Purchasing.JSONStore::SendPurchaseFailedEvent(UnityEngine.Purchasing.Extension.PurchaseFailureDescription,System.String)
extern void JSONStore_SendPurchaseFailedEvent_m3C647FBEEAAAAB6C4CD92D15D9758AD3A8A93EC4 (void);
// 0x00000136 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONStore::GetLastPurchaseFailureDescription()
extern void JSONStore_GetLastPurchaseFailureDescription_m5B6449E5DAA6266CEAF368B90076B324BA177C7A (void);
// 0x00000137 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::GetLastStoreSpecificPurchaseErrorCode()
extern void JSONStore_GetLastStoreSpecificPurchaseErrorCode_m5A84BEC77474E7005A6D9D25C484B50D6CC2DF0B (void);
// 0x00000138 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.JSONStore::ParseStoreSpecificPurchaseErrorCode(System.String)
extern void JSONStore_ParseStoreSpecificPurchaseErrorCode_mEF1FCD2BB2F3B47FD87A2F643F77A733BDF52A06 (void);
// 0x00000139 UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStore_mCC6D9234C524F38934399C6CAE517B34DABAA1D4 (void);
// 0x0000013A UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.NativeStoreProvider::GetAndroidStoreHelper(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AppStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern void NativeStoreProvider_GetAndroidStoreHelper_m8099249CB386EC70D4EF065006587D5E6D423788 (void);
// 0x0000013B UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.NativeStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern void NativeStoreProvider_GetStorekit_m6D7D45D2DE8A7012C59735794709666DF3A4F132 (void);
// 0x0000013C UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.NativeStoreProvider::GetFacebookStore()
extern void NativeStoreProvider_GetFacebookStore_mEDE30C7A85E5BDE70F1DC7DF91567B0EF079C5C6 (void);
// 0x0000013D System.Void UnityEngine.Purchasing.NativeStoreProvider::.ctor()
extern void NativeStoreProvider__ctor_mF5F3C3731E006506868855DBA9F7B18A97EB7650 (void);
// 0x0000013E UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.CloudCatalogImpl::CreateInstance(System.String)
extern void CloudCatalogImpl_CreateInstance_m99750D80E83D7CD4DE3E088F9DAB4DC3387E1120 (void);
// 0x0000013F System.Void UnityEngine.Purchasing.CloudCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,System.String,UnityEngine.ILogger,System.String,System.String)
extern void CloudCatalogImpl__ctor_m8A85E0DCFAACA541767291ADB852AE9835D31ADC (void);
// 0x00000140 System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void CloudCatalogImpl_FetchProducts_mCD197BD2721C1639A187DF421D8A75087F3AAD0C (void);
// 0x00000141 System.Void UnityEngine.Purchasing.CloudCatalogImpl::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>,System.Int32)
extern void CloudCatalogImpl_FetchProducts_mF3B1F4D370DA47B4AC515706842B5BB0D8A4C55A (void);
// 0x00000142 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::ParseProductsFromJSON(System.String,System.String)
extern void CloudCatalogImpl_ParseProductsFromJSON_mAC4A91D60BCEA793621A41834FC2A044331D5A16 (void);
// 0x00000143 System.String UnityEngine.Purchasing.CloudCatalogImpl::CamelCaseToSnakeCase(System.String)
extern void CloudCatalogImpl_CamelCaseToSnakeCase_mF57A26800C2F0152468E85709C54F7F91974FDB0 (void);
// 0x00000144 System.Void UnityEngine.Purchasing.CloudCatalogImpl::TryPersistCatalog(System.String)
extern void CloudCatalogImpl_TryPersistCatalog_m16AB8AD1F5487A8C8A03D8C26D03DA8479C72353 (void);
// 0x00000145 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.CloudCatalogImpl::TryLoadCachedCatalog()
extern void CloudCatalogImpl_TryLoadCachedCatalog_mC557848CA3F0190D96D77EBBE92A9E4779D46068 (void);
// 0x00000146 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m300C389838117F01E6F6AFD1F840BCB177373924 (void);
// 0x00000147 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__0(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_m33C5F6D95AE35D0985B97D2B090FB9E499C5F2C3 (void);
// 0x00000148 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__1(System.String)
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m3D9ABFA0371B4F90A0C3B674D46F7FC45B860716 (void);
// 0x00000149 System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c__DisplayClass10_0::<FetchProducts>b__2()
extern void U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m672FDE18F9ED1BECA9D824FFFC6B6A6397837538 (void);
// 0x0000014A System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.cctor()
extern void U3CU3Ec__cctor_m2A0968C3F24945666F5C6DEDCB3CAA4CBB63752F (void);
// 0x0000014B System.Void UnityEngine.Purchasing.CloudCatalogImpl_<>c::.ctor()
extern void U3CU3Ec__ctor_mA44D4FABD510BFD85F32A4077389160C63C7343A (void);
// 0x0000014C System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_0(System.Char,System.Int32)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mDEB025EE913425EBF04F2B5FF8CBB5CB8E7EB802 (void);
// 0x0000014D System.String UnityEngine.Purchasing.CloudCatalogImpl_<>c::<CamelCaseToSnakeCase>b__12_1(System.String,System.String)
extern void U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mAE1CA7ECD0003DCDF9E88DC4525B180ED823D9B4 (void);
// 0x0000014E System.Void UnityEngine.Purchasing.FakeManagedStoreConfig::.ctor()
extern void FakeManagedStoreConfig__ctor_m9CD13892D71E0F09259DFCD04021859C9CD788B3 (void);
// 0x0000014F System.Void UnityEngine.Purchasing.FakeManagedStoreExtensions::.ctor()
extern void FakeManagedStoreExtensions__ctor_m6970EA44511B65131F35F9705D2CB3FD7762F510 (void);
// 0x00000150 UnityEngine.Purchasing.StoreCatalogImpl UnityEngine.Purchasing.StoreCatalogImpl::CreateInstance(System.String,System.String,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.JSONStore)
extern void StoreCatalogImpl_CreateInstance_m49470088C202EB38712F0BF5CE5DB2A3AF503BCB (void);
// 0x00000151 System.Void UnityEngine.Purchasing.StoreCatalogImpl::.ctor(UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,System.String,System.String,UnityEngine.Purchasing.FileReference)
extern void StoreCatalogImpl__ctor_m6E7135D88AC482917E09D1C5F375A62DC363B5B9 (void);
// 0x00000152 System.Boolean UnityEngine.Purchasing.AdsIPC::InitAdsIPC(Uniject.IUtil)
extern void AdsIPC_InitAdsIPC_mC4E1B32A422990961C35BCD9BE03F33FA856A0F1 (void);
// 0x00000153 System.Boolean UnityEngine.Purchasing.AdsIPC::VerifyMethodExists()
extern void AdsIPC_VerifyMethodExists_mC6A2F32D96E434F287046FCB6580BFC0CAB19560 (void);
// 0x00000154 System.Void UnityEngine.Purchasing.AdsIPC::.cctor()
extern void AdsIPC__cctor_mF010DDC71B58DD76509374B4FA71A2E1C1E4E633 (void);
// 0x00000155 System.Void UnityEngine.Purchasing.EventQueue::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue__ctor_m30F9793F953833518ABABBD3F168CF47DB53E018 (void);
// 0x00000156 UnityEngine.Purchasing.EventQueue UnityEngine.Purchasing.EventQueue::Instance(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void EventQueue_Instance_m34D8EA50A9C778EE57157EAA1F8A162FF8CDBDDF (void);
// 0x00000157 System.Void UnityEngine.Purchasing.EventQueue::SetAdsUrl(System.String)
extern void EventQueue_SetAdsUrl_mE8D5EF963C367D9D5EFB0BFBF225B6685F8A70F2 (void);
// 0x00000158 System.Void UnityEngine.Purchasing.EventQueue::SetIapUrl(System.String)
extern void EventQueue_SetIapUrl_m880374A9140FE273E590478C9466BA3B611D63B6 (void);
// 0x00000159 System.Void UnityEngine.Purchasing.AsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Get_m4BA75DE116821D713BB90639AFB4EEFCF3C879C0 (void);
// 0x0000015A System.Void UnityEngine.Purchasing.AsyncWebUtil::Post(System.String,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Post_m861756C487790237E425A07A5CE759B560D735A7 (void);
// 0x0000015B System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::Process(UnityEngine.WWW,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
extern void AsyncWebUtil_Process_mA53B9F3BF291F21EA2940464E50EF0A0C01D7194 (void);
// 0x0000015C System.Void UnityEngine.Purchasing.AsyncWebUtil::Schedule(System.Action,System.Int32)
extern void AsyncWebUtil_Schedule_mAFE2808E06870F32FD5B7F34BECCE72AD010CEED (void);
// 0x0000015D System.Collections.IEnumerator UnityEngine.Purchasing.AsyncWebUtil::DoInvoke(System.Action,System.Int32)
extern void AsyncWebUtil_DoInvoke_m0AEC70D0D73D0AC4369D6E0E446287B70AA1C4A8 (void);
// 0x0000015E System.Void UnityEngine.Purchasing.AsyncWebUtil::.ctor()
extern void AsyncWebUtil__ctor_mE669EEDFCAB525B935D7183475066451207367CC (void);
// 0x0000015F System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::.ctor(System.Int32)
extern void U3CProcessU3Ed__2__ctor_m564EBC8F2B2D43DA3C2CDD2088C663C6AC31C2A8 (void);
// 0x00000160 System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.IDisposable.Dispose()
extern void U3CProcessU3Ed__2_System_IDisposable_Dispose_mD53C50A38E070FD49A3567DCB032570083F491D1 (void);
// 0x00000161 System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::MoveNext()
extern void U3CProcessU3Ed__2_MoveNext_m7EC60749E4D18EAE8E9A4D7EA74332503B26F737 (void);
// 0x00000162 System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC6692D3E6532D8475485B9F2BCDC6E691B7DCDD (void);
// 0x00000163 System.Void UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.Reset()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_mC69CBEDC923EAE8F2BEA6F5C025FB93EA557352E (void);
// 0x00000164 System.Object UnityEngine.Purchasing.AsyncWebUtil_<Process>d__2::System.Collections.IEnumerator.get_Current()
extern void U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mDAF6EF471CEA5EDAEF9DCE1C79EEB5FE51579C29 (void);
// 0x00000165 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::.ctor(System.Int32)
extern void U3CDoInvokeU3Ed__4__ctor_m54FB63DB448C6438505460AE58C3162681F38965 (void);
// 0x00000166 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.IDisposable.Dispose()
extern void U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_m7D4FA4747CDBD342FC427C9DAD85783EBEB71DE8 (void);
// 0x00000167 System.Boolean UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::MoveNext()
extern void U3CDoInvokeU3Ed__4_MoveNext_m54C08EA5AEC6D4E2E3BC56675B52117ACA05C86F (void);
// 0x00000168 System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m50AA10DD81D9CCC9C623147146A59A6C3B5E8528 (void);
// 0x00000169 System.Void UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.Reset()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m3BA5228C3191FA9F49B38ED2EDB1B44A28B4DEB1 (void);
// 0x0000016A System.Object UnityEngine.Purchasing.AsyncWebUtil_<DoInvoke>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_m16C30BB46E85D428EF5CCF1EEB5F54DCD4A61F09 (void);
// 0x0000016B System.Void UnityEngine.Purchasing.IAsyncWebUtil::Get(System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Int32)
// 0x0000016C System.Void UnityEngine.Purchasing.IAsyncWebUtil::Schedule(System.Action,System.Int32)
// 0x0000016D System.String UnityEngine.Purchasing.QueryHelper::ToQueryString(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void QueryHelper_ToQueryString_mF94AA264908FF68CC8CA4A80CB773F2BB8DDDA6B (void);
// 0x0000016E System.Void UnityEngine.Purchasing.Price::OnBeforeSerialize()
extern void Price_OnBeforeSerialize_m39911358A75F32F852127DD9E71986FC688E3017 (void);
// 0x0000016F System.Void UnityEngine.Purchasing.Price::OnAfterDeserialize()
extern void Price_OnAfterDeserialize_m860F96DA0394E3D7630BC44D86660ABDFDF2F6BD (void);
// 0x00000170 System.Void UnityEngine.Purchasing.Price::.ctor()
extern void Price__ctor_m48977B0AE3CBA8C7159D7DD1F0038B6EE33E5F12 (void);
// 0x00000171 System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Title()
extern void LocalizedProductDescription_get_Title_m0687B9D01F74D988FB2601DEE32992FDA11FC0DB (void);
// 0x00000172 System.String UnityEngine.Purchasing.LocalizedProductDescription::get_Description()
extern void LocalizedProductDescription_get_Description_mCEEF2E0F990F81DFFB6A8C3F15779F9EEAC0702E (void);
// 0x00000173 System.String UnityEngine.Purchasing.LocalizedProductDescription::DecodeNonLatinCharacters(System.String)
extern void LocalizedProductDescription_DecodeNonLatinCharacters_m61E2D1021A28AEDABDD1A242448339C1E0650ED1 (void);
// 0x00000174 System.Void UnityEngine.Purchasing.LocalizedProductDescription::.ctor()
extern void LocalizedProductDescription__ctor_mCBB285C3D4C867E55BA4DCA260E118BBAE9C78C7 (void);
// 0x00000175 System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.cctor()
extern void U3CU3Ec__cctor_mCA751725EC80488584BB33361D485577329F5A45 (void);
// 0x00000176 System.Void UnityEngine.Purchasing.LocalizedProductDescription_<>c::.ctor()
extern void U3CU3Ec__ctor_mF54F8EC0018F0DD039D7BE5613B3D3859C566545 (void);
// 0x00000177 System.String UnityEngine.Purchasing.LocalizedProductDescription_<>c::<DecodeNonLatinCharacters>b__11_0(System.Text.RegularExpressions.Match)
extern void U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mD5AC33BBB6B93628EEC5A2C0E2411E3A74B3FA9D (void);
// 0x00000178 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_typeString()
extern void ProductCatalogPayout_get_typeString_mE475BBBEA1CC1C3F898361B32A24F6E961835136 (void);
// 0x00000179 System.String UnityEngine.Purchasing.ProductCatalogPayout::get_subtype()
extern void ProductCatalogPayout_get_subtype_m0B8836A886D50BA6D0B02EE254B0DDA5D2D0A301 (void);
// 0x0000017A System.Double UnityEngine.Purchasing.ProductCatalogPayout::get_quantity()
extern void ProductCatalogPayout_get_quantity_mD48C90712D3D1338F2EB7B9332388AF35E609B61 (void);
// 0x0000017B System.String UnityEngine.Purchasing.ProductCatalogPayout::get_data()
extern void ProductCatalogPayout_get_data_m93ABEF0866DB58E0128899FD21AB4322948A2B60 (void);
// 0x0000017C System.Void UnityEngine.Purchasing.ProductCatalogPayout::.ctor()
extern void ProductCatalogPayout__ctor_m1CA19AE7DF778001A93683A4F9FCD7AFA3EF8A6F (void);
// 0x0000017D System.Collections.Generic.IList`1<UnityEngine.Purchasing.ProductCatalogPayout> UnityEngine.Purchasing.ProductCatalogItem::get_Payouts()
extern void ProductCatalogItem_get_Payouts_mFF682C63184EBB0F6F01D1A6589A34D631D6CE05 (void);
// 0x0000017E System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::get_allStoreIDs()
extern void ProductCatalogItem_get_allStoreIDs_m5600DE8050971C4AC4CA4DE4FEAEA3166F10BF27 (void);
// 0x0000017F System.Void UnityEngine.Purchasing.ProductCatalogItem::.ctor()
extern void ProductCatalogItem__ctor_m12606A82F310B03FC1A2C9CDF95E40D4CBB2F08C (void);
// 0x00000180 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern void ProductCatalog_get_allProducts_m7448D2984F0CDAD1EA82CDD036E9CE4C6C9FDDDB (void);
// 0x00000181 System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allValidProducts()
extern void ProductCatalog_get_allValidProducts_m3BE8C40F900203506BBC94F69623FE905C38A09A (void);
// 0x00000182 System.Void UnityEngine.Purchasing.ProductCatalog::Initialize()
extern void ProductCatalog_Initialize_mCC8A13441D56BD8FB78FACF750EA51787D45489D (void);
// 0x00000183 System.Void UnityEngine.Purchasing.ProductCatalog::Initialize(UnityEngine.Purchasing.IProductCatalogImpl)
extern void ProductCatalog_Initialize_m1E1717E1B56BDBE527F1D89710D6543A92187D14 (void);
// 0x00000184 System.Boolean UnityEngine.Purchasing.ProductCatalog::IsEmpty()
extern void ProductCatalog_IsEmpty_mCC40303E56E2C5E8D66E35EB73FD03E444C19248 (void);
// 0x00000185 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::Deserialize(System.String)
extern void ProductCatalog_Deserialize_m55E0E5033309F3871A00598E962521F01127B1ED (void);
// 0x00000186 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::FromTextAsset(UnityEngine.TextAsset)
extern void ProductCatalog_FromTextAsset_mA038DD77CBFF234A483C02F67D6717D050A479ED (void);
// 0x00000187 UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern void ProductCatalog_LoadDefaultCatalog_mD8ED158BE8FC17FF7506BEAB2FD5ABF36A655D0E (void);
// 0x00000188 System.Void UnityEngine.Purchasing.ProductCatalog::.ctor()
extern void ProductCatalog__ctor_m54F148D4F9CAD0B06E383C827B5F3CCAE9210961 (void);
// 0x00000189 System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.cctor()
extern void U3CU3Ec__cctor_mD66A47A41C8E0E6EBE60955D92AEB441623B28D1 (void);
// 0x0000018A System.Void UnityEngine.Purchasing.ProductCatalog_<>c::.ctor()
extern void U3CU3Ec__ctor_mD817AF38AD009ED99CD38743F97DEF459AAF9D29 (void);
// 0x0000018B System.Boolean UnityEngine.Purchasing.ProductCatalog_<>c::<get_allValidProducts>b__8_0(UnityEngine.Purchasing.ProductCatalogItem)
extern void U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m488ED545C1E1E74F1B778D761003543FDE729CB7 (void);
// 0x0000018C UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.IProductCatalogImpl::LoadDefaultCatalog()
// 0x0000018D UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalogImpl::LoadDefaultCatalog()
extern void ProductCatalogImpl_LoadDefaultCatalog_m6B8B5E5DBFCB2CA575E7FEAE24B220366AB13996 (void);
// 0x0000018E System.Void UnityEngine.Purchasing.ProductCatalogImpl::.ctor()
extern void ProductCatalogImpl__ctor_m032275AAB12DE58BA1475B4E2EBC47A319E5E92C (void);
// 0x0000018F System.String UnityEngine.Purchasing.ProfileData::get_AppId()
extern void ProfileData_get_AppId_mAF31EF26F8B65445C0D2D04D9494B01FEEFEA767 (void);
// 0x00000190 System.Void UnityEngine.Purchasing.ProfileData::set_AppId(System.String)
extern void ProfileData_set_AppId_m88A2F5EE41988F36EC29A897AAECA421C529EBF5 (void);
// 0x00000191 System.String UnityEngine.Purchasing.ProfileData::get_UserId()
extern void ProfileData_get_UserId_m2577A7C3BD2F8E11A7AA3182CD9B3D3527616736 (void);
// 0x00000192 System.Void UnityEngine.Purchasing.ProfileData::set_UserId(System.String)
extern void ProfileData_set_UserId_mFA99AB7C19AC7AF9472467F95B7E0E27FF5E0145 (void);
// 0x00000193 System.UInt64 UnityEngine.Purchasing.ProfileData::get_SessionId()
extern void ProfileData_get_SessionId_m95659A35310B0F2190D056170F45C7179E67D103 (void);
// 0x00000194 System.Void UnityEngine.Purchasing.ProfileData::set_SessionId(System.UInt64)
extern void ProfileData_set_SessionId_mC0CF0A6AEDE2AA7C463CB3DB28504FEE8F5DF1DB (void);
// 0x00000195 System.String UnityEngine.Purchasing.ProfileData::get_Platform()
extern void ProfileData_get_Platform_m061038AFE6F202284F5E12C3FD5F42CCDA087908 (void);
// 0x00000196 System.Void UnityEngine.Purchasing.ProfileData::set_Platform(System.String)
extern void ProfileData_set_Platform_m1631C12B52575FABC050A33C7FDBDA6133FE64CE (void);
// 0x00000197 System.Int32 UnityEngine.Purchasing.ProfileData::get_PlatformId()
extern void ProfileData_get_PlatformId_m691CD41BAB3E2F6AFE6FD19EB5E8284A9B90362F (void);
// 0x00000198 System.Void UnityEngine.Purchasing.ProfileData::set_PlatformId(System.Int32)
extern void ProfileData_set_PlatformId_m34EC3637E93A6DA0A5A71EFBB5D1F581A3734141 (void);
// 0x00000199 System.String UnityEngine.Purchasing.ProfileData::get_SdkVer()
extern void ProfileData_get_SdkVer_m39031BC9B7557BAA44567595F972AC12060D7DA9 (void);
// 0x0000019A System.Void UnityEngine.Purchasing.ProfileData::set_SdkVer(System.String)
extern void ProfileData_set_SdkVer_mBFC6C520487E1322000F2D4E1322C1CA8C63A435 (void);
// 0x0000019B System.String UnityEngine.Purchasing.ProfileData::get_OsVer()
extern void ProfileData_get_OsVer_mA8943B494127937B67C5CD0C50BA22B94206CDE0 (void);
// 0x0000019C System.Void UnityEngine.Purchasing.ProfileData::set_OsVer(System.String)
extern void ProfileData_set_OsVer_mB8050EEBCB588626DB0E19F40013DD3A34572187 (void);
// 0x0000019D System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenWidth()
extern void ProfileData_get_ScreenWidth_mEB78A5A683FF21CF18E32DC78A7A61D45D148B26 (void);
// 0x0000019E System.Void UnityEngine.Purchasing.ProfileData::set_ScreenWidth(System.Int32)
extern void ProfileData_set_ScreenWidth_m568AA5088361122F00644B67CDE7B2B545A030B4 (void);
// 0x0000019F System.Int32 UnityEngine.Purchasing.ProfileData::get_ScreenHeight()
extern void ProfileData_get_ScreenHeight_m64E09131660BD2B39A8370C22277EAC986D52371 (void);
// 0x000001A0 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenHeight(System.Int32)
extern void ProfileData_set_ScreenHeight_m2131968D06E95CE34DD3B4017FEA14CFE8A7682C (void);
// 0x000001A1 System.Single UnityEngine.Purchasing.ProfileData::get_ScreenDpi()
extern void ProfileData_get_ScreenDpi_m41769018053A23E99A208979DDB86CA186E08787 (void);
// 0x000001A2 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenDpi(System.Single)
extern void ProfileData_set_ScreenDpi_m78F3F67F6343C63866C915C7EC2828A65B07BCC4 (void);
// 0x000001A3 System.String UnityEngine.Purchasing.ProfileData::get_ScreenOrientation()
extern void ProfileData_get_ScreenOrientation_mA1E674FEA8701C6459E2410424C27993DAC8C2CF (void);
// 0x000001A4 System.Void UnityEngine.Purchasing.ProfileData::set_ScreenOrientation(System.String)
extern void ProfileData_set_ScreenOrientation_m89350DBB83498F486836BEEA07F02833003EAF0E (void);
// 0x000001A5 System.String UnityEngine.Purchasing.ProfileData::get_DeviceId()
extern void ProfileData_get_DeviceId_m659EA54AA146128D1B104A715C40E84FEA191B10 (void);
// 0x000001A6 System.Void UnityEngine.Purchasing.ProfileData::set_DeviceId(System.String)
extern void ProfileData_set_DeviceId_m9BEB7ED8D4A31765D61E15EC96A055BE1C74F1CA (void);
// 0x000001A7 System.String UnityEngine.Purchasing.ProfileData::get_BuildGUID()
extern void ProfileData_get_BuildGUID_m5858B20F0ECFF6313E9227B07D63F9A7877074E5 (void);
// 0x000001A8 System.String UnityEngine.Purchasing.ProfileData::get_IapVer()
extern void ProfileData_get_IapVer_m45F4EF3B721FA42E80A1F951E650733BC874A5FE (void);
// 0x000001A9 System.Void UnityEngine.Purchasing.ProfileData::set_IapVer(System.String)
extern void ProfileData_set_IapVer_mD2D9D80FB688E61DF5EAF16A60C63E8A45B50D1C (void);
// 0x000001AA System.String UnityEngine.Purchasing.ProfileData::get_AdsGamerToken()
extern void ProfileData_get_AdsGamerToken_mC9FC9E1553B64C8B56D5EADB12ECCAFE9EE077CA (void);
// 0x000001AB System.Void UnityEngine.Purchasing.ProfileData::set_AdsGamerToken(System.String)
extern void ProfileData_set_AdsGamerToken_mD3DBF98EF79644DE043D03FE293E6815050EAF16 (void);
// 0x000001AC System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_TrackingOptOut()
extern void ProfileData_get_TrackingOptOut_m02A56F01F75A52EEE29A1251560247D77AE7D018 (void);
// 0x000001AD System.Void UnityEngine.Purchasing.ProfileData::set_TrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_set_TrackingOptOut_mFD96A24373588B34F4DFD9579F5D01242612CFD9 (void);
// 0x000001AE System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_AdsABGroup()
extern void ProfileData_get_AdsABGroup_m4BC078AC69D44605534ECFAEBF74D3ECDEB14343 (void);
// 0x000001AF System.Void UnityEngine.Purchasing.ProfileData::set_AdsABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_set_AdsABGroup_m5AC69BE616018B5E6096BBC6A3BE8BACD3DCBE5B (void);
// 0x000001B0 System.String UnityEngine.Purchasing.ProfileData::get_AdsGameId()
extern void ProfileData_get_AdsGameId_m66A26FBBFC099394350F672982AC62435F4FA08D (void);
// 0x000001B1 System.Void UnityEngine.Purchasing.ProfileData::set_AdsGameId(System.String)
extern void ProfileData_set_AdsGameId_m8336232AEA4E3608B40B14AA5FCF97351E927298 (void);
// 0x000001B2 System.Nullable`1<System.Int32> UnityEngine.Purchasing.ProfileData::get_StoreABGroup()
extern void ProfileData_get_StoreABGroup_m7A2CABEC74786393D49F2388F1D59E37B1F2952D (void);
// 0x000001B3 System.String UnityEngine.Purchasing.ProfileData::get_CatalogId()
extern void ProfileData_get_CatalogId_m67FC35A1663390A0BE9B7DCB8E001B945E44C550 (void);
// 0x000001B4 System.String UnityEngine.Purchasing.ProfileData::get_StoreName()
extern void ProfileData_get_StoreName_m8CDBE4D52A5698F09D8F448E60A72405FDBDDE4B (void);
// 0x000001B5 System.Void UnityEngine.Purchasing.ProfileData::set_StoreName(System.String)
extern void ProfileData_set_StoreName_m7561251D3FE05F5DBF3640D22A3806554D0D9BFA (void);
// 0x000001B6 System.String UnityEngine.Purchasing.ProfileData::get_GameVersion()
extern void ProfileData_get_GameVersion_m28F1CDD6850B9569993E8DD5E38525BD6A1B88F4 (void);
// 0x000001B7 System.Void UnityEngine.Purchasing.ProfileData::set_GameVersion(System.String)
extern void ProfileData_set_GameVersion_mCCAD48E5E2CC369C2A1F7ECDCECC33AE9DA607FC (void);
// 0x000001B8 System.Nullable`1<System.Boolean> UnityEngine.Purchasing.ProfileData::get_StoreTestEnabled()
extern void ProfileData_get_StoreTestEnabled_mBB9A40B09548D33311EA34B84A7780909AC58454 (void);
// 0x000001B9 System.Void UnityEngine.Purchasing.ProfileData::.ctor(Uniject.IUtil)
extern void ProfileData__ctor_mDF28B0F7FE1E3AAB9CB0EEAF961358C8824CD52C (void);
// 0x000001BA System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileDict()
extern void ProfileData_GetProfileDict_m2B7047DA99A6EA4DDE08E1ECB7EA962DFC95B76A (void);
// 0x000001BB System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.ProfileData::GetProfileIds()
extern void ProfileData_GetProfileIds_mDFCCE689C51F90F1EAD5875E6412A763682B1DD6 (void);
// 0x000001BC UnityEngine.Purchasing.ProfileData UnityEngine.Purchasing.ProfileData::Instance(Uniject.IUtil)
extern void ProfileData_Instance_m859013D8FA2A7DC9652A86E861E01AF1F11104C0 (void);
// 0x000001BD System.Void UnityEngine.Purchasing.ProfileData::SetGamerToken(System.String)
extern void ProfileData_SetGamerToken_m7737C19E09916DDFC8DC741626A82B7B57D8BF8B (void);
// 0x000001BE System.Void UnityEngine.Purchasing.ProfileData::SetTrackingOptOut(System.Nullable`1<System.Boolean>)
extern void ProfileData_SetTrackingOptOut_m7B3FF687D89A59EEF278092BE3DB99DB31C58EC3 (void);
// 0x000001BF System.Void UnityEngine.Purchasing.ProfileData::SetGameId(System.String)
extern void ProfileData_SetGameId_m571F968258E51F1C675614BEED25377515DB808D (void);
// 0x000001C0 System.Void UnityEngine.Purchasing.ProfileData::SetABGroup(System.Nullable`1<System.Int32>)
extern void ProfileData_SetABGroup_m9715CD2D09AE2B295F93BFFAAA9DA353852B00E7 (void);
// 0x000001C1 System.Void UnityEngine.Purchasing.ProfileData::SetStoreName(System.String)
extern void ProfileData_SetStoreName_m650DFF182105FA69608CAEB36F36A943274F554C (void);
// 0x000001C2 System.Boolean UnityEngine.Purchasing.Promo::IsReady()
extern void Promo_IsReady_m0CFC23D172D5F66F921B7FF7338BA9F5593FD0B9 (void);
// 0x000001C3 System.String UnityEngine.Purchasing.Promo::Version()
extern void Promo_Version_mEC94F02A7F171206E1D4161CD181A5D55A74495F (void);
// 0x000001C4 System.Void UnityEngine.Purchasing.Promo::.ctor()
extern void Promo__ctor_m4B1EC1A59511A41549C043AB0C43474D49968B21 (void);
// 0x000001C5 System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_mB0D660DCB8971C5F6ECD6F52E9B9C4021A63851F (void);
// 0x000001C6 System.Void UnityEngine.Purchasing.Promo::InitPromo(UnityEngine.RuntimePlatform,UnityEngine.ILogger,System.String,Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil)
extern void Promo_InitPromo_mF3E9E173EAAFA5579381AA1AECCC79EB2CE16B32 (void);
// 0x000001C7 System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.Promo::UpdatePromoProductList()
extern void Promo_UpdatePromoProductList_mCD9C63139C7646F3EC52E345DA3005FD0A3D75DD (void);
// 0x000001C8 System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(UnityEngine.Purchasing.JSONStore,UnityEngine.Purchasing.Extension.IStoreCallback,System.Boolean)
extern void Promo_ProvideProductsToAds_m7B8458890D45489731DCF9DB6F2A9DBFB058C2F2 (void);
// 0x000001C9 System.Void UnityEngine.Purchasing.Promo::ProvideProductsToAds(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>,System.Boolean)
extern void Promo_ProvideProductsToAds_m9CDDFD1879A51AE2ADEFCDA9D57E1AFA83ED3781 (void);
// 0x000001CA System.String UnityEngine.Purchasing.Promo::QueryPromoProducts()
extern void Promo_QueryPromoProducts_mE6365EED70C194A95E2D23666AE6B0E24CCF090C (void);
// 0x000001CB System.Boolean UnityEngine.Purchasing.Promo::InitiatePromoPurchase(System.String)
extern void Promo_InitiatePromoPurchase_m8F6EC89D9A7B65BFC216E12D89D4D02BC8015459 (void);
// 0x000001CC System.Boolean UnityEngine.Purchasing.Promo::InitiatePurchasingCommand(System.String)
extern void Promo_InitiatePurchasingCommand_m7C40863A64FAE4E2130BD2341B68092A1117F2BC (void);
// 0x000001CD System.Boolean UnityEngine.Purchasing.Promo::ExecPromoPurchase(System.String)
extern void Promo_ExecPromoPurchase_m26F1121DD1D3E969EC6FD9CDF67B52F422B9514F (void);
// 0x000001CE System.Void UnityEngine.Purchasing.Promo::.cctor()
extern void Promo__cctor_mA7ED05F20A07D2A605F422C0FE2A9BA1E1012411 (void);
// 0x000001CF System.String UnityEngine.Purchasing.StandardPurchasingModule::get_m_persistentDataPath()
extern void StandardPurchasingModule_get_m_persistentDataPath_m86FD8BCB9D1AF77C3FABFAD5AEE9D8C12C8B01A6 (void);
// 0x000001D0 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_m_persistentDataPath(System.String)
extern void StandardPurchasingModule_set_m_persistentDataPath_m41AE8CC32C16F02C5B763583399FCE0A7CB867BC (void);
// 0x000001D1 Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::get_util()
extern void StandardPurchasingModule_get_util_m7BDB12A6CA13EFCD41619CA9BBD5F8F583F95AB5 (void);
// 0x000001D2 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_util(Uniject.IUtil)
extern void StandardPurchasingModule_set_util_m2A83A916159909D5A765DBE2868CBF8CAE1A4752 (void);
// 0x000001D3 UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::get_logger()
extern void StandardPurchasingModule_get_logger_m8E4BF67AB362C003883B8F1E75E28194B843529C (void);
// 0x000001D4 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_logger(UnityEngine.ILogger)
extern void StandardPurchasingModule_set_logger_mE4843CF513648A63BF4B923E0141F79B5F4AD43C (void);
// 0x000001D5 UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::get_webUtil()
extern void StandardPurchasingModule_get_webUtil_mE7DD331E1F3FBCA74E37DAFB3007906D039EA500 (void);
// 0x000001D6 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_webUtil(UnityEngine.Purchasing.IAsyncWebUtil)
extern void StandardPurchasingModule_set_webUtil_mC1A5C2EF56063635CA84413CF19AEC6A9F23D78C (void);
// 0x000001D7 UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::get_storeInstance()
extern void StandardPurchasingModule_get_storeInstance_m2A391EA4B4EDEB5A77E0B0CF2651C1E04B041CE0 (void);
// 0x000001D8 System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_storeInstance(UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance)
extern void StandardPurchasingModule_set_storeInstance_m242EF88FB75F46771C1329E122114AD32D93D834 (void);
// 0x000001D9 System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.Purchasing.IAsyncWebUtil,UnityEngine.ILogger,UnityEngine.Purchasing.INativeStoreProvider,UnityEngine.RuntimePlatform,UnityEngine.Purchasing.AppStore,System.Boolean,System.String)
extern void StandardPurchasingModule__ctor_m151636F70A05018B9DAFEC2278DAC9741816F494 (void);
// 0x000001DA UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::get_appStore()
extern void StandardPurchasingModule_get_appStore_mF3D8F16D91F28723A89BDBF3784D323091CE9300 (void);
// 0x000001DB UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern void StandardPurchasingModule_get_useFakeStoreUIMode_m34C92B56B70AE357C830338A06193F5E27D3EEA7 (void);
// 0x000001DC System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern void StandardPurchasingModule_set_useFakeStoreUIMode_m948A4B864ADA9A60171F42F0033093B6E80612CA (void);
// 0x000001DD System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreAlways()
extern void StandardPurchasingModule_get_useFakeStoreAlways_m123C90AA9537BE344CEA1C7AD7EA61BA0ED23CBD (void);
// 0x000001DE System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreAlways(System.Boolean)
extern void StandardPurchasingModule_set_useFakeStoreAlways_m30979E377279B4613FAFE892AD57204AAF2DA16C (void);
// 0x000001DF UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern void StandardPurchasingModule_Instance_m3FE47064BC475CCB0881708925D8E13EE96CADF0 (void);
// 0x000001E0 UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance(UnityEngine.Purchasing.AppStore)
extern void StandardPurchasingModule_Instance_mE0DFC9051C78F86ECF3D749ABED26BA4F1DAA0E9 (void);
// 0x000001E1 System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern void StandardPurchasingModule_Configure_m8F3BD70AA25B125D49C8321F834E2587A9208D9F (void);
// 0x000001E2 UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::InstantiateStore()
extern void StandardPurchasingModule_InstantiateStore_m7B27BA268A3D6AABC1D0E2150AC9271DC2EC521F (void);
// 0x000001E3 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroid()
extern void StandardPurchasingModule_InstantiateAndroid_mD782F4819488B8C0D398DA53D9A653527C70F3B5 (void);
// 0x000001E4 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateGoogleStore()
extern void StandardPurchasingModule_InstantiateGoogleStore_mDCA348B541A39859CE35F545A49205746DB54E36 (void);
// 0x000001E5 System.Void UnityEngine.Purchasing.StandardPurchasingModule::BindGoogleExtension(UnityEngine.Purchasing.GooglePlayStoreExtensions)
extern void StandardPurchasingModule_BindGoogleExtension_m5D84954BB5F6CF3341B87F4721535D068ADF3AB2 (void);
// 0x000001E6 UnityEngine.Purchasing.GooglePlayStoreExtensions UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreExtensions(UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService,UnityEngine.Purchasing.IGooglePlayStoreFinishTransactionService,UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreExtensions_m170359992FE252FE0DA548CE3FE52AAE3629D5D1 (void);
// 0x000001E7 UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService UnityEngine.Purchasing.StandardPurchasingModule::BuildGooglePlayStoreServiceAar(UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback)
extern void StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m154A4C6C6A9873B39C2BD9ECC630353FB79D0C54 (void);
// 0x000001E8 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateUDP()
extern void StandardPurchasingModule_InstantiateUDP_mADD3D47BC238FB3199375C415DDBCEF7AE8452C8 (void);
// 0x000001E9 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroidHelper(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_InstantiateAndroidHelper_m1E740D666CC0796B763BD14FC0F230B6F51F43EC (void);
// 0x000001EA UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.StandardPurchasingModule::GetAndroidNativeStore(UnityEngine.Purchasing.JSONStore)
extern void StandardPurchasingModule_GetAndroidNativeStore_mD42C34BD9337150F9B1A17CAA3038C7411FDE72A (void);
// 0x000001EB UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern void StandardPurchasingModule_InstantiateApple_mAE7E57ACE7D081CEF226050F9ECB9EC5377AFFC3 (void);
// 0x000001EC System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
extern void StandardPurchasingModule_UseMockWindowsStore_mA03011DA84C6675D27D86604A7D95FA89E950952 (void);
// 0x000001ED UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWindowsStore()
extern void StandardPurchasingModule_instantiateWindowsStore_mA67949ECA911DEA7CD4998FBF12C8164D1DB0F01 (void);
// 0x000001EE UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFacebook()
extern void StandardPurchasingModule_InstantiateFacebook_m84364AD97498F2B8BE10D7FADE45FDB1768C9AA3 (void);
// 0x000001EF UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern void StandardPurchasingModule_InstantiateFakeStore_m895F5A435BC01F3615D94B9DC8CD0D8E5452D6D1 (void);
// 0x000001F0 System.Void UnityEngine.Purchasing.StandardPurchasingModule::.cctor()
extern void StandardPurchasingModule__cctor_m5552771284055BEEC6E5F3D7BE2F7CB640938C7E (void);
// 0x000001F1 System.Void UnityEngine.Purchasing.StandardPurchasingModule::<Configure>b__49_0(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void StandardPurchasingModule_U3CConfigureU3Eb__49_0_m31DD21A554A95B5C9652E7AB0AF133D0101C718B (void);
// 0x000001F2 System.String UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_storeName()
extern void StoreInstance_get_storeName_m69F9BB8D61CDFE4F08336E73D9B60D0A6B8B9DE8 (void);
// 0x000001F3 UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::get_instance()
extern void StoreInstance_get_instance_mB43BADEC3017D8C71D5B3719F8737014CF525BED (void);
// 0x000001F4 System.Void UnityEngine.Purchasing.StandardPurchasingModule_StoreInstance::.ctor(System.String,UnityEngine.Purchasing.Extension.IStore)
extern void StoreInstance__ctor_m95ECD1BFFB6B1B2471D22A840D0BD892E8D10EB1 (void);
// 0x000001F5 System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::.ctor(UnityEngine.Purchasing.StandardPurchasingModule)
extern void MicrosoftConfiguration__ctor_mDCDC9F2C9B804CD912EA7C4B4DCA458E105ED241 (void);
// 0x000001F6 System.Void UnityEngine.Purchasing.StandardPurchasingModule_MicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
extern void MicrosoftConfiguration_set_useMockBillingSystem_m586024ED671F88EFA8CA1BAE40E29E5061250411 (void);
// 0x000001F7 UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StoreConfiguration::get_androidStore()
extern void StoreConfiguration_get_androidStore_mE6D635B8B0A865C4E6461D938E128CC32522DADE (void);
// 0x000001F8 System.Void UnityEngine.Purchasing.StoreConfiguration::set_androidStore(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration_set_androidStore_mDA7510FE36F1360FB70B894201C028850372639F (void);
// 0x000001F9 System.Void UnityEngine.Purchasing.StoreConfiguration::.ctor(UnityEngine.Purchasing.AppStore)
extern void StoreConfiguration__ctor_m760D9EA48282C4BD19455EA3BED50314A31A4307 (void);
// 0x000001FA UnityEngine.Purchasing.StoreConfiguration UnityEngine.Purchasing.StoreConfiguration::Deserialize(System.String)
extern void StoreConfiguration_Deserialize_m28C1E8C67FD8AFE602618105B5AA31F925F8749B (void);
// 0x000001FB System.Void UnityEngine.Purchasing.SubscriptionInfo::.ctor(UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt,System.String)
extern void SubscriptionInfo__ctor_m5A9144BF6192AAE0DD9227B6332508653AFED53E (void);
// 0x000001FC UnityEngine.Purchasing.Result UnityEngine.Purchasing.SubscriptionInfo::isExpired()
extern void SubscriptionInfo_isExpired_m2AF439D5E9FCFA3A7D08C5509EB350494D489E18 (void);
// 0x000001FD System.Void UnityEngine.Purchasing.ReceiptParserException::.ctor()
extern void ReceiptParserException__ctor_m9B2098B6D4D37A9958E02D68F844228AF2B1E126 (void);
// 0x000001FE System.Void UnityEngine.Purchasing.InvalidProductTypeException::.ctor()
extern void InvalidProductTypeException__ctor_m36E207B09D2C70FE434539F6052DF16A35D68062 (void);
// 0x000001FF UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastPurchaseFailureDescription()
extern void FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_m35CCAC6ED765302A78DA10580A9C1F8CA3F046DF (void);
// 0x00000200 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.FakeTransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
extern void FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m5A03D684F77FBC17EF377D0D21A1E0B0769933DA (void);
// 0x00000201 System.Void UnityEngine.Purchasing.FakeTransactionHistoryExtensions::.ctor()
extern void FakeTransactionHistoryExtensions__ctor_mDD8219FFBC0F155BC3416771CD7A8EB213C62425 (void);
// 0x00000202 UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastPurchaseFailureDescription()
// 0x00000203 UnityEngine.Purchasing.StoreSpecificPurchaseErrorCode UnityEngine.Purchasing.ITransactionHistoryExtensions::GetLastStoreSpecificPurchaseErrorCode()
// 0x00000204 System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::RestoreTransactions()
extern void FakeMicrosoftExtensions_RestoreTransactions_mD6D6DF196EC65E2805FD491E433F54A17F0F0FF4 (void);
// 0x00000205 System.Void UnityEngine.Purchasing.FakeMicrosoftExtensions::.ctor()
extern void FakeMicrosoftExtensions__ctor_mF19E1FEE17857DE944DA95530EF82D593606376F (void);
// 0x00000206 System.Void UnityEngine.Purchasing.IMicrosoftConfiguration::set_useMockBillingSystem(System.Boolean)
// 0x00000207 System.Void UnityEngine.Purchasing.IMicrosoftExtensions::RestoreTransactions()
// 0x00000208 System.Void UnityEngine.Purchasing.WinRTStore::.ctor(UnityEngine.Purchasing.Default.IWindowsIAP,Uniject.IUtil,UnityEngine.ILogger)
extern void WinRTStore__ctor_m85AA38E5C13E6981D3AFE87BAA51F58B0600BE2C (void);
// 0x00000209 System.Void UnityEngine.Purchasing.WinRTStore::SetWindowsIAP(UnityEngine.Purchasing.Default.IWindowsIAP)
extern void WinRTStore_SetWindowsIAP_mA8DCCE72C60658C3F43AEC8169F52B33BE3FAD59 (void);
// 0x0000020A System.Void UnityEngine.Purchasing.WinRTStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void WinRTStore_Initialize_mE0D1090B959C8E136413A66281B8BCC2B61DB4B5 (void);
// 0x0000020B System.Void UnityEngine.Purchasing.WinRTStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void WinRTStore_RetrieveProducts_m755B6E8726AB9ECB7BE31081A13C4BF746EC9D24 (void);
// 0x0000020C System.Void UnityEngine.Purchasing.WinRTStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_FinishTransaction_m91ED6E2130EA06DF5B1FCE056E577ACCE2ADE1EA (void);
// 0x0000020D System.Void UnityEngine.Purchasing.WinRTStore::init(System.Int32)
extern void WinRTStore_init_mE80E8CD3FA7061378083A5B87345D83B6A67E21A (void);
// 0x0000020E System.Void UnityEngine.Purchasing.WinRTStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void WinRTStore_Purchase_m4B3FE34B13265909A8523D2DF823B80C82081233 (void);
// 0x0000020F System.Void UnityEngine.Purchasing.WinRTStore::restoreTransactions(System.Boolean)
extern void WinRTStore_restoreTransactions_mDB35F3BDA2E6C13457E0B4AC27D870E0A7B8C5E1 (void);
// 0x00000210 System.Void UnityEngine.Purchasing.WinRTStore::RestoreTransactions()
extern void WinRTStore_RestoreTransactions_mC24CBCCF99F7415DF334D08271AEB9E68AB046D8 (void);
// 0x00000211 System.Void UnityEngine.Purchasing.WinRTStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m0E82EFB8C0FE2A5FD395E7E38CF47B0E860BD033 (void);
// 0x00000212 System.Void UnityEngine.Purchasing.WinRTStore_<>c::.ctor()
extern void U3CU3Ec__ctor_m351652D6F44D8163A932BF330D4DE9A0BB4DC82D (void);
// 0x00000213 System.Boolean UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m534693A3A65C43806176EDFA8142CFCCCE1682FF (void);
// 0x00000214 UnityEngine.Purchasing.Default.WinProductDescription UnityEngine.Purchasing.WinRTStore_<>c::<RetrieveProducts>b__8_1(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m2FD6E2FC457929A053B631967320A81C31E43732 (void);
// 0x00000215 System.Void UnityEngine.Purchasing.FacebookStoreImpl::.ctor(Uniject.IUtil)
extern void FacebookStoreImpl__ctor_mF7B55082FD5A57F9282CD6E171CBD873378BBE12 (void);
// 0x00000216 System.Void UnityEngine.Purchasing.FacebookStoreImpl::SetNativeStore(UnityEngine.Purchasing.INativeFacebookStore)
extern void FacebookStoreImpl_SetNativeStore_m22CD27B3251891D08A14A39AB61058BD80CADFE1 (void);
// 0x00000217 System.Void UnityEngine.Purchasing.FacebookStoreImpl::MessageCallback(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5 (void);
// 0x00000218 System.Void UnityEngine.Purchasing.FacebookStoreImpl::ProcessMessage(System.String,System.String,System.String,System.String)
extern void FacebookStoreImpl_ProcessMessage_mEFC8086180D2A496560DD250E313AAE32485B747 (void);
// 0x00000219 System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m7F6E9E026712D033A78BEC590B480DB25F38C691 (void);
// 0x0000021A System.Void UnityEngine.Purchasing.FacebookStoreImpl_<>c__DisplayClass6_0::<MessageCallback>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_mA55CBBDA1525665CE028516A5B85CAC9A255A362 (void);
// 0x0000021B System.String UnityEngine.Purchasing.FakeStore::get_unavailableProductId()
extern void FakeStore_get_unavailableProductId_mED4D73EDC3E4991480E355C82B09EA472504C0E5 (void);
// 0x0000021C System.Void UnityEngine.Purchasing.FakeStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern void FakeStore_Initialize_m6F73A3892C0315027A97EF8AB342E52EEF79B2C2 (void);
// 0x0000021D System.Void UnityEngine.Purchasing.FakeStore::RetrieveProducts(System.String)
extern void FakeStore_RetrieveProducts_m9915AE639E06BC21802D7EBA6E392D5767598C30 (void);
// 0x0000021E System.Void UnityEngine.Purchasing.FakeStore::StoreRetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void FakeStore_StoreRetrieveProducts_m228765B5C2BC72460CF8F0180AC6827A3CDC090C (void);
// 0x0000021F System.Void UnityEngine.Purchasing.FakeStore::Purchase(System.String,System.String)
extern void FakeStore_Purchase_m8E66EC5E9BE6E07335840DFF7AA8F8EB9AE86BEA (void);
// 0x00000220 System.Void UnityEngine.Purchasing.FakeStore::FakePurchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FakePurchase_m067A82AAECE547F7E85D3A8A8D0DBEC8986F63CC (void);
// 0x00000221 System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(System.String,System.String)
extern void FakeStore_FinishTransaction_m92E6D0BB338D0A256AFEED9C158257C829EBF988 (void);
// 0x00000222 System.Void UnityEngine.Purchasing.FakeStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern void FakeStore_FinishTransaction_m091E1BF96B07D12D24AB24B505FB1DD567C0D577 (void);
// 0x00000223 System.Boolean UnityEngine.Purchasing.FakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x00000224 System.Void UnityEngine.Purchasing.FakeStore::.ctor()
extern void FakeStore__ctor_mEC535F5A9DE18547AD7A817DE71D774CF5E6949F (void);
// 0x00000225 System.Void UnityEngine.Purchasing.FakeStore::<>n__0(System.String,System.String,System.String)
extern void FakeStore_U3CU3En__0_mA3BA0CCA3001F6BCD6B39DB33D1F4D843C2C478A (void);
// 0x00000226 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mA87BFA4A17728569F30E946919668FD2353ADDD7 (void);
// 0x00000227 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass13_0::<StoreRetrieveProducts>b__0(System.Boolean,UnityEngine.Purchasing.InitializationFailureReason)
extern void U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m6A65EE18DD216EB6A80A1392ED4D63F84B78F9BF (void);
// 0x00000228 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m6044A541D6194CC23B937801B35D3C891C92605C (void);
// 0x00000229 System.Void UnityEngine.Purchasing.FakeStore_<>c__DisplayClass15_0::<FakePurchase>b__0(System.Boolean,UnityEngine.Purchasing.PurchaseFailureReason)
extern void U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m766B7235BEB5163C018F6415550E01903E99A3DF (void);
// 0x0000022A System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
extern void UIFakeStore__ctor_mE057F9839E9CB0C4FDECB3A143805C6A2E710546 (void);
// 0x0000022B System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.Object,UnityEngine.Purchasing.FakeStore_DialogType,System.Action`2<System.Boolean,T>)
// 0x0000022C System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
extern void UIFakeStore_StartUI_m3FCF29493861621986577567402F4CF33DBBA289 (void);
// 0x0000022D System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
extern void UIFakeStore_InstantiateDialog_m1B359BDC437E7A4EE93B44559ABB41BC577AAFBD (void);
// 0x0000022E System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
extern void UIFakeStore_CreatePurchaseQuestion_m9A088C92BAC1EC81CC95C6DCBCC045FA8BEF6642 (void);
// 0x0000022F System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern void UIFakeStore_CreateRetrieveProductsQuestion_mEE0E6B457E100C0BFDD4BA039B72EA7B439E6AE1 (void);
// 0x00000230 UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
extern void UIFakeStore_GetOkayButton_mC754BEEED3BA436DFFA4619757EBE251EB0688BB (void);
// 0x00000231 UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
extern void UIFakeStore_GetCancelButton_m0086B5B235EB1C3231A7E315919AF223CE57B62F (void);
// 0x00000232 UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
extern void UIFakeStore_GetCancelButtonGameObject_m902292B6BD2EC406142712704B8D72555C6E1DBC (void);
// 0x00000233 UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
extern void UIFakeStore_GetOkayButtonText_m3D6F1215647C4CC0C6DDD0CB28A27014151592C2 (void);
// 0x00000234 UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
extern void UIFakeStore_GetCancelButtonText_m1EE694B2DA5DB81A8006EFFB972D83C940DC40BD (void);
// 0x00000235 UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
extern void UIFakeStore_GetDropdown_m0F6519CBBC7DDB04815EAA3B2CCD8764EB3932F6 (void);
// 0x00000236 UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
extern void UIFakeStore_GetDropdownContainerGameObject_mBCC1B9C535509D303D2E15FDFAA3F3F7CCFEC525 (void);
// 0x00000237 System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
extern void UIFakeStore_OkayButtonClicked_mCA065846DEF8CAF769B7F9567D69F74267AF6C50 (void);
// 0x00000238 System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
extern void UIFakeStore_CancelButtonClicked_mE0332C1DEEA359569C92C77BEBA30ED180C29D51 (void);
// 0x00000239 System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
extern void UIFakeStore_DropdownValueChanged_m7C879BD9AE55770FDC4A250C1599EBD1DC2BAB61 (void);
// 0x0000023A System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
extern void UIFakeStore_CloseDialog_mF8E4655FCCB007000A5031ECA72EA588F57D6582 (void);
// 0x0000023B System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
extern void UIFakeStore_IsShowingDialog_m4A81F6A8B6318E129283E4259038B589009EF895 (void);
// 0x0000023C System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_0()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m1F3B89EEEF70C2B6D627538A634C6FDF566C9B74 (void);
// 0x0000023D System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_1()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m9E77BF842569DB9DFB61BECF163673AF35B813AD (void);
// 0x0000023E System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_2()
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m29A134923B02275FF718CFA071957E8ED6F31120 (void);
// 0x0000023F System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>b__16_3(System.Int32)
extern void UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mD3C747802E1FE43435740B94C23028F11E8CB503 (void);
// 0x00000240 System.Void UnityEngine.Purchasing.UIFakeStore_DialogRequest::.ctor()
extern void DialogRequest__ctor_m9F538F8A22D0CD5CE9A19DCD2ADBE89546EC44D8 (void);
// 0x00000241 System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::OnDestroy()
extern void LifecycleNotifier_OnDestroy_m1AEC1FB10294B32A6B4F542A57DFFE8B36666B3C (void);
// 0x00000242 System.Void UnityEngine.Purchasing.UIFakeStore_LifecycleNotifier::.ctor()
extern void LifecycleNotifier__ctor_mAF1B8EE03832E8696C273A5B6373813DF1B67A4B (void);
// 0x00000243 System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::.ctor()
// 0x00000244 System.Void UnityEngine.Purchasing.UIFakeStore_<>c__DisplayClass14_0`1::<StartUI>b__0(System.Boolean,System.Int32)
// 0x00000245 System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.cctor()
extern void U3CU3Ec__cctor_m35BC2FA1521CE8D422880F47E7BB0778D74E46EF (void);
// 0x00000246 System.Void UnityEngine.Purchasing.UIFakeStore_<>c::.ctor()
extern void U3CU3Ec__ctor_mE878EC88E66B5F8A1FD83C5F552E9C10A31BC21E (void);
// 0x00000247 System.String UnityEngine.Purchasing.UIFakeStore_<>c::<CreateRetrieveProductsQuestion>b__18_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m7A1A643790DACBB34B2DDB82457E5A704F5B3505 (void);
// 0x00000248 UnityEngine.Purchasing.FileReference UnityEngine.Purchasing.FileReference::CreateInstance(System.String,UnityEngine.ILogger,Uniject.IUtil)
extern void FileReference_CreateInstance_mD4E66A64AAD3623CDE3B296700377F902FB64834 (void);
// 0x00000249 System.Void UnityEngine.Purchasing.FileReference::.ctor(System.String,UnityEngine.ILogger)
extern void FileReference__ctor_m220B75307347B44B5220A89F72548997FDAC5816 (void);
// 0x0000024A System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ProductDefinitionExtensions::DecodeJSON(System.Collections.Generic.List`1<System.Object>,System.String)
extern void ProductDefinitionExtensions_DecodeJSON_m10258725CD1F9873F77E4B9F4920E9678CEFBA5B (void);
// 0x0000024B T[] UnityEngine.Purchasing.Extension.UnityUtil::GetAnyComponentsOfType()
// 0x0000024C System.DateTime UnityEngine.Purchasing.Extension.UnityUtil::get_currentTime()
extern void UnityUtil_get_currentTime_m87C375C42236B7A343959465A59529DBEC9D4E7B (void);
// 0x0000024D System.String UnityEngine.Purchasing.Extension.UnityUtil::get_persistentDataPath()
extern void UnityUtil_get_persistentDataPath_mAF7E27B8D02B1ED2472061D8BD5424349B3B42BC (void);
// 0x0000024E System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceUniqueIdentifier()
extern void UnityUtil_get_deviceUniqueIdentifier_m3CCADCF11169C40B3DCC3B0D61BBE21D86EBB30E (void);
// 0x0000024F System.String UnityEngine.Purchasing.Extension.UnityUtil::get_unityVersion()
extern void UnityUtil_get_unityVersion_m24756E167C85A2DBFBBE73ECBA25D7689B29AC45 (void);
// 0x00000250 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_cloudProjectId()
extern void UnityUtil_get_cloudProjectId_m98A8E5F31AEF950E2BD779ABB2A1786ADDF831C9 (void);
// 0x00000251 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_userId()
extern void UnityUtil_get_userId_mF93E3F58EC309ECA1FE7E8263377BB6E1FA7DC8E (void);
// 0x00000252 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_gameVersion()
extern void UnityUtil_get_gameVersion_m51AE9FB74C3D165E656B2B84705E910EFC66B335 (void);
// 0x00000253 System.UInt64 UnityEngine.Purchasing.Extension.UnityUtil::get_sessionId()
extern void UnityUtil_get_sessionId_m409DFCBDC195C879A9C3AB6033321FAFE2CD4E28 (void);
// 0x00000254 UnityEngine.RuntimePlatform UnityEngine.Purchasing.Extension.UnityUtil::get_platform()
extern void UnityUtil_get_platform_m5037C091690E744721009B6D4FD7D582B9BE9047 (void);
// 0x00000255 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::get_isEditor()
extern void UnityUtil_get_isEditor_m64610D4E32E27650522ED00A8ACE7E0FC9533DF6 (void);
// 0x00000256 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceModel()
extern void UnityUtil_get_deviceModel_m6C08BF9910BB84B25A9A3BBD05CCFEB651E16440 (void);
// 0x00000257 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_deviceName()
extern void UnityUtil_get_deviceName_mEA38A546254A59CC31626ED56B925F8DF4FD87FA (void);
// 0x00000258 UnityEngine.DeviceType UnityEngine.Purchasing.Extension.UnityUtil::get_deviceType()
extern void UnityUtil_get_deviceType_m181C5274A548099EBA526CF725883B10DC83C658 (void);
// 0x00000259 System.String UnityEngine.Purchasing.Extension.UnityUtil::get_operatingSystem()
extern void UnityUtil_get_operatingSystem_m1966645E26FDFD9B8AFD1320FDBE88B4D33EF082 (void);
// 0x0000025A System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenWidth()
extern void UnityUtil_get_screenWidth_m533F3CE0FDF2017EE8E71CDEB2DFC222602A2A5B (void);
// 0x0000025B System.Int32 UnityEngine.Purchasing.Extension.UnityUtil::get_screenHeight()
extern void UnityUtil_get_screenHeight_mCD22CFB305D11330AD2EB06D9A451FFABFA07F0D (void);
// 0x0000025C System.Single UnityEngine.Purchasing.Extension.UnityUtil::get_screenDpi()
extern void UnityUtil_get_screenDpi_m2424E5349922750FC446A35BEF616721F3F4DCF5 (void);
// 0x0000025D System.String UnityEngine.Purchasing.Extension.UnityUtil::get_screenOrientation()
extern void UnityUtil_get_screenOrientation_mAB91AF87B8A7BCACDED1C31E11EF30A468BC051B (void);
// 0x0000025E System.Object UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_m420597FCE9DD378F086DDA20BF995559398AD01B (void);
// 0x0000025F System.Void UnityEngine.Purchasing.Extension.UnityUtil::Uniject.IUtil.InitiateCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_Uniject_IUtil_InitiateCoroutine_m1F133B6EE8DC47F818A80BBD96C429EC462385E6 (void);
// 0x00000260 System.Void UnityEngine.Purchasing.Extension.UnityUtil::RunOnMainThread(System.Action)
extern void UnityUtil_RunOnMainThread_mEC0567C23C8A78E2B840D55FEE046B775841E571 (void);
// 0x00000261 System.Object UnityEngine.Purchasing.Extension.UnityUtil::GetWaitForSeconds(System.Int32)
extern void UnityUtil_GetWaitForSeconds_m105183FA99EC4205B3E7925E9B5E7C51DDE2A1B7 (void);
// 0x00000262 System.Void UnityEngine.Purchasing.Extension.UnityUtil::Start()
extern void UnityUtil_Start_mEF38364C53863D3A227A1FE5C90346F2F26B31F3 (void);
// 0x00000263 T UnityEngine.Purchasing.Extension.UnityUtil::FindInstanceOfType()
// 0x00000264 T UnityEngine.Purchasing.Extension.UnityUtil::LoadResourceInstanceOfType()
// 0x00000265 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::PcPlatform()
extern void UnityUtil_PcPlatform_mCF6958CF7CD6B97C2108A94DA0E2513E3935DAA9 (void);
// 0x00000266 System.Void UnityEngine.Purchasing.Extension.UnityUtil::DebugLog(System.String,System.Object[])
extern void UnityUtil_DebugLog_mD044256BF9BD13245CFF1AC8BF4A5EB286964CA8 (void);
// 0x00000267 System.Collections.IEnumerator UnityEngine.Purchasing.Extension.UnityUtil::DelayedCoroutine(System.Collections.IEnumerator,System.Int32)
extern void UnityUtil_DelayedCoroutine_mD94C209BFA6B188EEDAA0011824166F1A824B83D (void);
// 0x00000268 System.Void UnityEngine.Purchasing.Extension.UnityUtil::Update()
extern void UnityUtil_Update_m161CCF115C65EC6C5588F1288BD17863C129556A (void);
// 0x00000269 System.Void UnityEngine.Purchasing.Extension.UnityUtil::AddPauseListener(System.Action`1<System.Boolean>)
extern void UnityUtil_AddPauseListener_m3869ED61F66136376FC29E2E0EEB959EF4BF482A (void);
// 0x0000026A System.Void UnityEngine.Purchasing.Extension.UnityUtil::OnApplicationPause(System.Boolean)
extern void UnityUtil_OnApplicationPause_mF331457F54B55E3ECF6C54508C82C1D825BCF92D (void);
// 0x0000026B System.Boolean UnityEngine.Purchasing.Extension.UnityUtil::IsClassOrSubclass(System.Type,System.Type)
extern void UnityUtil_IsClassOrSubclass_m1178F06530D604F6F97C989C1F45FB03D7EB42B2 (void);
// 0x0000026C System.Void UnityEngine.Purchasing.Extension.UnityUtil::.ctor()
extern void UnityUtil__ctor_mAB90FE5FFC1ABA91CA62D189EA8F3D9854E84535 (void);
// 0x0000026D System.Void UnityEngine.Purchasing.Extension.UnityUtil::.cctor()
extern void UnityUtil__cctor_m304D195947F2D8198D6B6A4BD92FBF5210E4434B (void);
// 0x0000026E System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::.ctor(System.Int32)
extern void U3CDelayedCoroutineU3Ed__49__ctor_mD207BFF447AF13598F28B51075862A626CF6212D (void);
// 0x0000026F System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.IDisposable.Dispose()
extern void U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m93247306AF9C52FA037C981F7DE7C5E8A4FDAA3A (void);
// 0x00000270 System.Boolean UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::MoveNext()
extern void U3CDelayedCoroutineU3Ed__49_MoveNext_m39FA39939A77EBD0AE7620018F18AA2165487CCD (void);
// 0x00000271 System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC595F0D351C53AF8D522FF5653A40593D888B20A (void);
// 0x00000272 System.Void UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.Reset()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_mF2FFAE7066438519F0F20D9A4E20130F6B754425 (void);
// 0x00000273 System.Object UnityEngine.Purchasing.Extension.UnityUtil_<DelayedCoroutine>d__49::System.Collections.IEnumerator.get_Current()
extern void U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m5EC6AFFA1A44D153C2E8979A502E514C29CFBF0D (void);
// 0x00000274 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.BillingClientResponseEnum::GetBillingResponseCodeJavaObject()
extern void BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m50E4883839037DD4353372BAA43F6F01429241EA (void);
// 0x00000275 System.Int32 UnityEngine.Purchasing.Models.BillingClientResponseEnum::OK()
extern void BillingClientResponseEnum_OK_m1E405578286243A6156E9D070FAE99769D010ABD (void);
// 0x00000276 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingFlowParamClass()
extern void GoogleBillingClient_GetBillingFlowParamClass_m311FD5AA0894EB74A4E71D4624FEDE09E64FB3EE (void);
// 0x00000277 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetConsumeParamsClass()
extern void GoogleBillingClient_GetConsumeParamsClass_m2DAF5DD916B60C13A7304691D77C3599625A557C (void);
// 0x00000278 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetAcknowledgePurchaseParamsClass()
extern void GoogleBillingClient_GetAcknowledgePurchaseParamsClass_m7FFAF28CC9EF8CA49DAD5E456BDA3781041FB3F0 (void);
// 0x00000279 UnityEngine.AndroidJavaClass UnityEngine.Purchasing.Models.GoogleBillingClient::GetBillingClientClass()
extern void GoogleBillingClient_GetBillingClientClass_m21C159790F5ADB865EA552400AAA79431327EC35 (void);
// 0x0000027A System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::.ctor(UnityEngine.Purchasing.Interfaces.IGooglePurchaseUpdatedListener)
extern void GoogleBillingClient__ctor_m2CBAED0C5254980A95AE536D812F87E8A6D8B454 (void);
// 0x0000027B System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
extern void GoogleBillingClient_StartConnection_mB5726C3CD9B544C10194258808752CAEF63C05E5 (void);
// 0x0000027C UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::QueryPurchase(System.String)
extern void GoogleBillingClient_QueryPurchase_m9C307292395DA180DFBDF555573DF96CD9A80873 (void);
// 0x0000027D System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
extern void GoogleBillingClient_QuerySkuDetailsAsync_m893B99379826581A3F41F879326008FF7B25BE84 (void);
// 0x0000027E UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_LaunchBillingFlow_m6876F527E2046649F1AB1CE1782E60EA116A47B1 (void);
// 0x0000027F UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::MakeBillingFlowParams(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
extern void GoogleBillingClient_MakeBillingFlowParams_m01AF0695DBDE50A90239B399ADF0E46655A753CB (void);
// 0x00000280 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedProfileIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_m8A3B727FFE01F33E44DA4536ADC40CA88B239310 (void);
// 0x00000281 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleBillingClient::SetObfuscatedAccountIdIfNeeded(UnityEngine.AndroidJavaObject)
extern void GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_m6273BC396047A26F1B783DC131072D974687327E (void);
// 0x00000282 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
extern void GoogleBillingClient_ConsumeAsync_m84B2F3EF887BA6066AE5410E27E524B75DB09544 (void);
// 0x00000283 System.Void UnityEngine.Purchasing.Models.GoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
extern void GoogleBillingClient_AcknowledgePurchase_m0124EE881AB30F9E6D063AF11B83537D294B9BB1 (void);
// 0x00000284 System.Void UnityEngine.Purchasing.Models.GoogleBillingResult::.ctor(UnityEngine.AndroidJavaObject)
extern void GoogleBillingResult__ctor_mE90AAC6450DF9B79B2A0CA4C006C1E8A4AC8A660 (void);
// 0x00000285 System.String UnityEngine.Purchasing.Models.GoogleBillingStrings::getWarningMessageMoreThanOneSkuFound(System.String)
extern void GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_m9851A44498890446974B650A0467E7357E08E690 (void);
// 0x00000286 System.Void UnityEngine.Purchasing.Models.GooglePurchase::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
extern void GooglePurchase__ctor_m751412DF2D279482CA70A5F9575DA73C5036B7C6 (void);
// 0x00000287 System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsAcknowledged()
extern void GooglePurchase_IsAcknowledged_m52AC8D59AD03FE0564DEFF95162FDCD09BF629E1 (void);
// 0x00000288 System.Boolean UnityEngine.Purchasing.Models.GooglePurchase::IsPurchased()
extern void GooglePurchase_IsPurchased_m412977D99D8328E0DF630E0FBB0848B8CAA95F06 (void);
// 0x00000289 System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::.ctor(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult__ctor_m8F0D30CA425899E4F75C9C32E90B4168D583865C (void);
// 0x0000028A System.Void UnityEngine.Purchasing.Models.GooglePurchaseResult::FillPurchases(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.IGoogleCachedQuerySkuDetailsService)
extern void GooglePurchaseResult_FillPurchases_mB02296265AC1FEC628F373EB8DEDF65A97A1C885 (void);
// 0x0000028B UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::GetPurchaseStateJavaObject()
extern void GooglePurchaseStateEnum_GetPurchaseStateJavaObject_m9F7EE32E998F52F416EDF4B834769215E448844F (void);
// 0x0000028C System.Int32 UnityEngine.Purchasing.Models.GooglePurchaseStateEnum::Purchased()
extern void GooglePurchaseStateEnum_Purchased_mD754EE8FB46F439D86FC774A8AA18D54888F8CE9 (void);
// 0x0000028D UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::GetSkuTypeJavaObject()
extern void GoogleSkuTypeEnum_GetSkuTypeJavaObject_m390E7284C16790A4099E8086AC2B729916B65031 (void);
// 0x0000028E System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::InApp()
extern void GoogleSkuTypeEnum_InApp_m7E503D01DED3FB02BB6DAC68B31C44600842DCB5 (void);
// 0x0000028F System.String UnityEngine.Purchasing.Models.GoogleSkuTypeEnum::Sub()
extern void GoogleSkuTypeEnum_Sub_m9CFEB82FF62622FC5C307E081068916F83FB0353 (void);
// 0x00000290 System.Void UnityEngine.Purchasing.Models.ProductDescriptionQuery::.ctor(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void ProductDescriptionQuery__ctor_m5FE216809AE43F6F9D3D03DF2365808302C18C75 (void);
// 0x00000291 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnConnected(System.Action)
// 0x00000292 System.Void UnityEngine.Purchasing.Interfaces.IBillingClientStateListener::RegisterOnDisconnected(System.Action)
// 0x00000293 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::StartConnection(UnityEngine.Purchasing.Interfaces.IBillingClientStateListener)
// 0x00000294 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QueryPurchase(System.String)
// 0x00000295 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::QuerySkuDetailsAsync(UnityEngine.AndroidJavaObject,UnityEngine.Purchasing.SkuDetailsResponseListener)
// 0x00000296 UnityEngine.AndroidJavaObject UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::LaunchBillingFlow(UnityEngine.AndroidJavaObject,System.String,System.String,System.Int32)
// 0x00000297 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::ConsumeAsync(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>)
// 0x00000298 System.Void UnityEngine.Purchasing.Interfaces.IGoogleBillingClient::AcknowledgePurchase(System.String,UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x00000299 System.Void UnityEngine.Purchasing.Interfaces.IGoogleFinishTransactionService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x0000029A System.Void UnityEngine.Purchasing.Interfaces.IGoogleLastKnownProductService::SetLastKnownProductId(System.String)
// 0x0000029B System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
// 0x0000029C System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::Purchase(UnityEngine.Purchasing.ProductDefinition)
// 0x0000029D System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String,System.Action`4<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult,System.String>,System.Action`3<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Models.GooglePurchase,UnityEngine.Purchasing.Models.GoogleBillingResult>)
// 0x0000029E System.Void UnityEngine.Purchasing.Interfaces.IGooglePlayStoreService::FetchPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x0000029F System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreCallback(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x000002A0 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::SetStoreExtension(UnityEngine.Purchasing.IGooglePlayStoreExtensionsInternal)
// 0x000002A1 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
// 0x000002A2 System.Void UnityEngine.Purchasing.Interfaces.IGooglePurchaseService::Purchase(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product,System.Int32)
// 0x000002A3 System.Void UnityEngine.Purchasing.Interfaces.IGoogleQueryPurchasesService::QueryPurchases(System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Models.GooglePurchase>>)
// 0x000002A4 System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(UnityEngine.Purchasing.ProductDefinition,System.Action`1<System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>>)
// 0x000002A5 System.Void UnityEngine.Purchasing.Interfaces.IQuerySkuDetailsService::QueryAsyncSku(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
// 0x000002A6 ReturnType UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002A7 System.IDisposable UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::get_androidJavaObject()
extern void AndroidJavaObjectWrapper_get_androidJavaObject_m75EFD7B549890117D176D7157BA93CC77FDF890C (void);
// 0x000002A8 System.Void UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::.ctor(UnityEngine.AndroidJavaObject)
extern void AndroidJavaObjectWrapper__ctor_m88EE28837A47ABCF89DE82941C09CA4603869FFE (void);
// 0x000002A9 ReturnType UnityEngine.Purchasing.Utils.AndroidJavaObjectWrapper::Call(System.String,System.Object[])
// 0x000002AA UnityEngine.Purchasing.Models.GooglePurchase UnityEngine.Purchasing.Utils.GooglePurchaseHelper::MakeGooglePurchase(System.Collections.Generic.IEnumerable`1<UnityEngine.AndroidJavaObject>,UnityEngine.AndroidJavaObject)
extern void GooglePurchaseHelper_MakeGooglePurchase_mB1D03BE16894468FAD37CA3B765042FD7DFFBFC0 (void);
// 0x000002AB System.Void UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mA8DA94D212F83CE6FBB8736D6818BE7E8DB4BE53 (void);
// 0x000002AC System.Boolean UnityEngine.Purchasing.Utils.GooglePurchaseHelper_<>c__DisplayClass0_0::<MakeGooglePurchase>b__0(UnityEngine.AndroidJavaObject)
extern void U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m64FD29895DBB5F356BDA17D445E361A4A22C8000 (void);
// 0x000002AD System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::EncodeReceipt(System.String,System.String,System.String,System.String)
extern void GoogleReceiptEncoder_EncodeReceipt_m3D071194A7B95D9943AF238821A37D4E3D573ED9 (void);
// 0x000002AE System.String UnityEngine.Purchasing.Utils.GoogleReceiptEncoder::FormatPayload(System.String,System.String,System.String)
extern void GoogleReceiptEncoder_FormatPayload_mF4A88E96740904809B460F90EF9F5B4AF8553BF7 (void);
// 0x000002AF System.Void UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertOnQuerySkuDetailsResponse(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>,System.Action`1<System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>>)
extern void SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m8A2592F7979335D1B3E8E8BE7FF6E036BF8D6201 (void);
// 0x000002B0 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ConvertSkusDetailsToProducts(System.Collections.Generic.List`1<UnityEngine.AndroidJavaObject>)
extern void SkuDetailsConverter_ConvertSkusDetailsToProducts_mCEBB8FCD32C796D5EA0DE9147E5B5DE90F22CA11 (void);
// 0x000002B1 System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.Utils.SkuDetailsConverter::ToListProducts(UnityEngine.AndroidJavaObject)
extern void SkuDetailsConverter_ToListProducts_m32FE68712D4ABADF86635C812FD29D32C1BB0024 (void);
// 0x000002B2 UnityEngine.Purchasing.Extension.ProductDescription UnityEngine.Purchasing.Utils.SkuDetailsConverter::BuildProductDescription(UnityEngine.Purchasing.Utils.IAndroidJavaObjectWrapper)
extern void SkuDetailsConverter_BuildProductDescription_m259B53FE14C02A092A6FC08AA83A0EDB7D7B4CD1 (void);
// 0x000002B3 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_m64CC0E5F4C0D6830A5A5260F4485A52A07778445 (void);
static Il2CppMethodPointer s_methodPointers[691] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaStore__ctor_mA9FEF814FB4493EF4004B9111DC5D52224C149BC,
	AndroidJavaStore_RetrieveProducts_mF8FCA2AC4DB9C33CF6AB26B9CAFCA61A1ED8F804,
	AndroidJavaStore_Purchase_mAA50B3745456BA540B6783386EE3053E7D179B92,
	AndroidJavaStore_FinishTransaction_m8F609A9EDE741804233F7AF484C7E8742628FB9C,
	JavaBridge__ctor_mCC08418BD048B10479CE2EC6CFFAF2495C58FA05,
	SerializationExtensions_TryGetString_m5CA2904DBDAAECB2A395290767D64FE265A8EF15,
	JSONSerializer_SerializeProductDef_m71046562F7DC342D1DB8EB38109AFB8CB4B42ACF,
	JSONSerializer_SerializeProductDefs_m4B7CF7CB2756EBB2E6DD9DF575273A1F5F7BC563,
	JSONSerializer_SerializeProductDescs_m4C65F1F394285418D7DE5A59C13A02B0AE39BDDE,
	JSONSerializer_DeserializeProductDescriptions_m420819A61055511B534881599076A0731813F657,
	JSONSerializer_DeserializeFailureReason_m6959D9C6E33C08EE4D7A163B6ED4B1FB0A17ECFA,
	JSONSerializer_DeserializeMetadata_mBB8112648BB410330C07E9BB2E671112556928B0,
	JSONSerializer_EncodeProductDef_m1DFC6BD3375E05AC1E98806F442B80B2FA797FBE,
	JSONSerializer_EncodeProductDesc_m92C6D393B0E05A310E294E27D71772A3A2AF20E8,
	JSONSerializer_EncodeProductMeta_mC65F9EF27D29701AB65B90FD1861F6239F318CE5,
	ScriptingStoreCallback__ctor_mE2678061B0A2FBDFE72FDDCD0EF3827795E3DDCA,
	ScriptingStoreCallback_get_products_m544B879305E2C780E6FA739978DBA87244795CA6,
	ScriptingStoreCallback_OnSetupFailed_mB45D3056C63E0B7B20FA1CB2B6E4B746CF0BB2C1,
	ScriptingStoreCallback_OnProductsRetrieved_m3DDC6CC9F488A1297BB58011B5C4360CC102FA9D,
	ScriptingStoreCallback_OnPurchaseSucceeded_m704406DE7250361BFF1C925C1D2AA6974851E5AF,
	ScriptingStoreCallback_OnPurchaseFailed_m791A43134EEB9B750DD9ABADF97FCB01E55A3915,
	U3CU3Ec__DisplayClass5_0__ctor_m9EE99273D449BE066A7E568269EBD0C24EA40594,
	U3CU3Ec__DisplayClass5_0_U3COnSetupFailedU3Eb__0_mEDE77DE6453D38DA33C2AD2CC740CD8A8429D75C,
	U3CU3Ec__DisplayClass6_0__ctor_m19890802010AA2B90C09090248A63DF2310917AD,
	U3CU3Ec__DisplayClass6_0_U3COnProductsRetrievedU3Eb__0_m04F9A4194DCF56C862B7B548AE2A9BF5A25FB5F6,
	U3CU3Ec__DisplayClass7_0__ctor_m356EBBE7EFE7344D97B70B7504994FF85BC59D47,
	U3CU3Ec__DisplayClass7_0_U3COnPurchaseSucceededU3Eb__0_mDF865399A8960EAA8ECB12D0075F6D9CAA92578D,
	U3CU3Ec__DisplayClass9_0__ctor_m77D4BA13EA77582CCA5E28F0CD83D3DA74DE178E,
	U3CU3Ec__DisplayClass9_0_U3COnPurchaseFailedU3Eb__0_m09DD6625AC981F0B5336D903B3CB6713CDED2E9C,
	ScriptingUnityCallback__ctor_m5613EB055AA7851C1FEC18AC93DCA8AB90AB7942,
	AmazonAppStoreStoreExtensions__ctor_m54C6DCCA323A4B7BB0B15B61B759EDDFFEC2A12B,
	FakeAmazonExtensions__ctor_mA1F4863F43A514996A7082521D64CC0FA3260725,
	ListExtension_ToJava_m0027AB244108B1571D7A3A5DF99064948D9313DC,
	ListExtension_ToJavaArray_m119F4DDF93A4AC46729BF52F28CE3BD596368113,
	UnityActivity_GetUnityPlayerClass_m25E5AB4EF7A3384610D6C34DC709A693A95B2BEA,
	UnityActivity_GetCurrentActivity_m166AE81C1037DFC24E97B53701C2B1296681B4AD,
	ReflectionUtils_HasMethodInInterface_m3A7BF61F16652F11803FD2A8083E8863BE1527E4,
	ReflectionUtils_GetMethod_m77CEB7F2D992D01D2FAD8932904C3BFE1FC1170C,
	ReflectionUtils_InvokeMethod_mB9789B3F736DD39A075BA777ED3F539F3D028097,
	FakeGooglePlayStoreExtensions_RestoreTransactions_m9AA8866D5C4B8AA5B64BD2100EAB0D0C8790A531,
	FakeGooglePlayStoreExtensions__ctor_mD31D8799C4D58168652DA0558ABD03AFC8F9C765,
	GooglePlayPurchaseCallback_SetStoreCallback_m079CA52D65AB71223D29747867ACE7CBAC8BE01F,
	GooglePlayPurchaseCallback_SetStoreExtension_mC61383ABE9AF4ABD1AA1D11AD3F7D66F3D511B4C,
	GooglePlayPurchaseCallback_OnPurchaseFailed_m41AACF16A3692BD76263B869E8FAD7A06E2B2FF7,
	GooglePlayPurchaseCallback__ctor_m14B1FC46146E55E0867D03129BD3892BB7728E5F,
	GooglePlayStore__ctor_m25B99D7ECA72C37064CE7BBC8DEC7411F3D526AD,
	GooglePlayStore_Initialize_mD66FDC9F953C0E26E81B5FE077AA8B1AB8CDF851,
	GooglePlayStore_RetrieveProducts_m63B0CEDCF7B730ABD47B43D896AD15C890FA5876,
	GooglePlayStore_Purchase_mC90B6BA54CA7A8B0A8D435904D0414AC5121DBD7,
	GooglePlayStore_FinishTransaction_m06DE3EAD2648FDB42B658AEB3EFD5FB0E8322125,
	GooglePlayStore_OnPause_m6FB5EFFB209867246356E8E203149653AF938216,
	GooglePlayStoreExtensions__ctor_m0868D6BD59F79A7823B9C984CE50E0E88FB80AB8,
	GooglePlayStoreExtensions_RestoreTransactions_m0C089722429C884C3BDC82ABBB337044A412217E,
	GooglePlayStoreExtensions_SetStoreCallback_m19EA468FBFF4BC70435DBD5478E2E32DC35BAB14,
	U3CU3Ec__DisplayClass8_0__ctor_m1A566BF7235EEFF7F6FD3F4B445E6BD87F2C7435,
	U3CU3Ec__DisplayClass8_0_U3CRestoreTransactionsU3Eb__0_m359482FE8217E4F1CC02B7ABEF0315C6E08EDC2D,
	StoreCallbackExtensionMethods_FindProductById_m5666FDD7D3263115187FF95DC14C9449B0DD79B8,
	GoogleCachedQuerySkuDetailsService_GetCachedQueriedSkus_mE900D2CF7C8D20D15D4FB15097D17EB3EF20B959,
	GoogleCachedQuerySkuDetailsService_ContainsSku_m22A495F360CE7DEB1AB525F69CF01039ECD26A9D,
	GoogleCachedQuerySkuDetailsService_AddCachedQueriedSkus_m6BBB10A2D68191D54A719075BD2CAB8321A299AC,
	GoogleCachedQuerySkuDetailsService_UpdateCachedQueriedSku_m87226F316941FB85F4734D39B3A48544A6A11A36,
	GoogleCachedQuerySkuDetailsService__ctor_mA40A42361E5D42E6781B7232111C381BF9F37DAD,
	U3CU3Ec__DisplayClass2_0__ctor_m93E8000FC190E0C4AF1AB8E65982D370994EEEB3,
	U3CU3Ec__DisplayClass2_0_U3CContainsSkuU3Eb__0_mCBE65E49EDE14F7190BA776BE7704B0FABAC3AC5,
	U3CU3Ec__DisplayClass4_0__ctor_mF9D903ADEC8883A05EED60D6D6E029EA08FD488B,
	U3CU3Ec__DisplayClass4_0_U3CUpdateCachedQueriedSkuU3Eb__0_m8801ECAFB0BAA050B6116E7D0CF209187FA88B7D,
	GoogleFinishTransactionService__ctor_mB20F3B4EABC46E1B24BF7644087EABA96B74C662,
	GoogleFinishTransactionService_FinishTransaction_m325C2D411EF24A9272BAF05D130B014DE33274AE,
	GoogleFinishTransactionService_PurchaseNeedsAcknowledgement_m1345E51D0078A81FE016CCEBAADF95B2990DB2BF,
	U3CU3Ec__DisplayClass3_0__ctor_m27D39915233513199C9F09276769BD73D7848D82,
	U3CU3Ec__DisplayClass3_0_U3CFinishTransactionU3Eb__0_m999274100553FC0323B72C16C4300B2F5A8D70D3,
	U3CU3Ec__DisplayClass4_0__ctor_m95F2B548794D3AC451E8D04C026345442A8F5711,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseNeedsAcknowledgementU3Eb__0_m5FCA960D92A4788DF1380634FDBBC3E4597D67AD,
	GoogleLastKnownProductService_SetLastKnownProductId_m2987CBCC240ED0BA857B651114861A47A7C61827,
	GoogleLastKnownProductService__ctor_mD68778767693894106DBBBF9D1DA26B7C8F4E635,
	GooglePlayStoreService__ctor_mBF14B52D75B62ACAF27AA46FE5333E0CA0595F8B,
	GooglePlayStoreService_InitConnectionWithGooglePlay_m88D6A59B51BFC098CB2A6DC3D451D39FFE2E5C8F,
	GooglePlayStoreService_OnConnected_mEDE095EBB7B677959B870C7B38394E63D3728F2E,
	GooglePlayStoreService_DequeueQueryProducts_mB7AAED4AE936539DF041C87847BF403981198DB8,
	GooglePlayStoreService_DequeueFetchPurchases_mB31429F60D61DECCECC76681E4DEF5E457AE1D67,
	GooglePlayStoreService_OnDisconnected_m975675EE89D81BAD26B34CDFE8E3688F184D7AD8,
	GooglePlayStoreService_RetrieveProducts_mE40747D2A215C1AD017FEF36AEE33A0F49565F05,
	GooglePlayStoreService_Purchase_m1CDDEB7609405FECB2C61C05D6A11C4DEA73D153,
	GooglePlayStoreService_Purchase_m3992936CFBA61C6DA459150722957AC8B9AD2720,
	GooglePlayStoreService_FinishTransaction_m3ED13072B3D766C5C430970A3BCCD22B8F39D16C,
	GooglePlayStoreService_FetchPurchases_m5B51A3E0AB9A0A33C183AFDF42C06004C8752D2C,
	GooglePriceChangeService__ctor_m183D821C1A1F8BAA933F5E3ECEE1117A78643A78,
	GooglePurchaseService__ctor_mB2E9788B81F0A60BF5DD912310C77A57B82CC972,
	GooglePurchaseService_Purchase_m61296DC7FA3493FB4680598DCD5A34A02783B437,
	GooglePurchaseService_OnQuerySkuDetailsResponse_m810826EEF88E0F7F245DA430DA720DCF19C78D00,
	GooglePurchaseService_VerifyAndWarnIfMoreThanOneSku_m48F4C8E9EA0F8F46AC0C377DA0FC4C0908D8E831,
	GooglePurchaseService_HandleBillingFlowResult_mC4D20D6630B3B98B15C6634B45806ADB6C5C3C50,
	U3CU3Ec__DisplayClass4_0__ctor_m6373D3CA9633752BEFB6C933C5FD39530F3E00EA,
	U3CU3Ec__DisplayClass4_0_U3CPurchaseU3Eb__0_m73C36EE65476044CC679488FE9F4CB601A1A08DA,
	GoogleQueryPurchasesService__ctor_m0A12A531471A4735D9E4BE8517B48D9BF5EC027B,
	GoogleQueryPurchasesService_QueryPurchases_m7DBB29ECC4CEB33CB68B575B4AB59D1BCA2F2F74,
	GoogleQueryPurchasesService_HandleOnQueryPurchaseReceived_m8430E9FE0CA402D04B0CD70C94E93BD6F12D5FCF,
	GoogleQueryPurchasesService_QueryPurchasesWithSkuType_mE6A40B38CFEA44855D865B5C24CB7193CF47A04A,
	GoogleQueryPurchasesService_HandleGooglePurchaseResult_m41C6BD3BEB0B1AEBF5318C161CB6F1DFA90F2B16,
	U3CU3Ec__DisplayClass3_0__ctor_m038AD46E69961B2063BAEBB5645E926581AA3A41,
	U3CU3Ec__DisplayClass3_0_U3CQueryPurchasesU3Eb__0_m40D601487FD87A4603B9A36BE4ED5329A90060E1,
	U3CU3Ec__DisplayClass3_1__ctor_m22B1316CF94913A7C40FA17D8A2976A6F44B7887,
	U3CU3Ec__DisplayClass3_1_U3CQueryPurchasesU3Eb__1_mB75FC33F14CDA1DCAF2D39B08513CFEF75987D56,
	QuerySkuDetailsService_GetSkuDetailsParamClass_m3B0BD7ED220E0E128B81BA944E366AAB4D3EE5B9,
	QuerySkuDetailsService__ctor_m9856E76FF63685B60C56E8855B16E68CD41D3E4D,
	QuerySkuDetailsService_QueryAsyncSku_m077432815CCA6DDD6F2F5254D56BE41251CDCE05,
	QuerySkuDetailsService_QueryAsyncSku_m23741E90F16737B0B69CC23EBAAADC12E311B36F,
	QuerySkuDetailsService_QueryAsyncSku_mDF539BD0A6C8D7E373FAC27D63B6FFB816560AC0,
	QuerySkuDetailsService_QueryInAppsAsync_mB93745D17F4A31499CC9A4CA4E6936B40BAB9FA9,
	QuerySkuDetailsService_QuerySubsAsync_m43A04DE46E3F26DF3CFE2D547ACA88BC72F43713,
	QuerySkuDetailsService_QuerySkuDetails_mDE629779D9CCD3EC9FDB93DE5567E809B6FE397C,
	QuerySkuDetailsService_ConsolidateOnSkuDetailsReceived_mFEB4F142DE9B9E7451C2C670D862DB6D48F37778,
	QuerySkuDetailsService_AddToQueriedSkuDetails_m8D30F01D6A0762B4AB8D59D4E53E797A4E92BBF0,
	QuerySkuDetailsService_Clear_mA336060DCB2401C558D2BC29878C89C4748D42E3,
	U3CU3Ec__DisplayClass12_0__ctor_m7C6B9FE8FCC85FF9FB4A530E0D9D8673893770D6,
	U3CU3Ec__DisplayClass12_0_U3CQueryAsyncSkuU3Eb__0_m736868E315634DA7F7F19BD4D79BF95E3F8BD182,
	U3CU3Ec__cctor_mEB486676CE0F24AF5FC142970EFFD2D755FE9AF2,
	U3CU3Ec__ctor_m304D3A86D1F8C0E4C2D461F205E9241409098163,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_0_m3C2AF7D4F722AB2A5031B3176002B6961CDF43A8,
	U3CU3Ec_U3CQueryInAppsAsyncU3Eb__14_1_m7B25F07F9B555C53C4EAC887B1AB0B241A2ABF78,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_0_mC1F25C6B046D4CFD3A9D974B8CEAFA9059422ED4,
	U3CU3Ec_U3CQuerySubsAsyncU3Eb__15_1_m75815EA70EAD53B9F0695EE7925E24BC163BA2DE,
	U3CU3Ec__DisplayClass16_0__ctor_m8D87F279FB93A3AB937E8CD7A4B16629C24A4FEF,
	U3CU3Ec__DisplayClass16_0_U3CQuerySkuDetailsU3Eb__0_mD7775DB07A8CBE65F9C8F437F0689ED4CA07F87F,
	NULL,
	NULL,
	BillingClientStateListener__ctor_m8932722D70E3C997A7E2D550658EA38984B64693,
	BillingClientStateListener_RegisterOnConnected_m7CDB0F0DA553849B315139C2E777992C62F52067,
	BillingClientStateListener_RegisterOnDisconnected_m25BC92A8D389EF3E6C368A28833172EB1402E802,
	GoogleAcknowledgePurchaseListener__ctor_m47ABB6392E911826A66838B19BEA35351EA03D97,
	GoogleConsumeResponseListener__ctor_m72E6ADCE95AA8DC116A94D0951043DE592761788,
	GooglePurchaseUpdatedListener__ctor_m52983B152DF000053AAFF2DC0FA77223BD9D9795,
	SkuDetailsResponseListener__ctor_m037E5CC9CCBC61F9F88E2ECEDB08279AACA34681,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GoogleProductMetadata_set_originalJson_m43489ED0063262384137B5FEF3E4244947251903,
	GoogleProductMetadata_set_subscriptionPeriod_mCBE39B66A88B8407C98A85C4A030C8A82FEC5180,
	GoogleProductMetadata_set_freeTrialPeriod_m5A167E0239D5EEF3E9AD7DE216D1EB64C599BD7C,
	GoogleProductMetadata_set_introductoryPrice_m5D5D3648A54FDF5AE28FE7C23D012C23F48E9D0B,
	GoogleProductMetadata_set_introductoryPricePeriod_m0FF8DEDE3654A057E518F40ACDF942E3B3622697,
	GoogleProductMetadata_set_introductoryPriceCycles_mB63EEAD30B0F875EC5D1E2F6636EF795999964E6,
	GoogleProductMetadata__ctor_m1F0A4F452A0FF66C25E96768D58AC8C0C6291289,
	GoogleFetchPurchases__ctor_m2D9FA3A1CC817D78D571AE0EA1754E7F87FFAD8E,
	GoogleFetchPurchases_SetStoreCallback_m9B9AABB5F76246376F241BA1F8EADB56C052A727,
	GoogleFetchPurchases_FetchPurchases_mB69218999071F728533F0F82871F0B94D4C090F6,
	GoogleFetchPurchases_FetchPurchases_m82CC89DB782B31594888CAC7716E50E06C0E9AD4,
	GoogleFetchPurchases_OnFetchedPurchaseSuccessful_m4590839CC0B633947DC30E891894B7B47808DFF5,
	GoogleFetchPurchases_OnPurchasesRetrieved_m1299D0E1BB32E8DA1C45D89DF6C7976AC06717E5,
	U3CU3Ec__DisplayClass6_0__ctor_mF11D0586C526F3ED6C7199AC9715E9F2E1BA40C3,
	U3CU3Ec__DisplayClass6_0_U3CFetchPurchasesU3Eb__0_mFF3A07F7DCB1E512A43A99B2BDBD8564491CAA30,
	U3CU3Ec__cctor_m395BE7E13777C15446FEF001A7A3DA6D33DDB7A9,
	U3CU3Ec__ctor_mB6FD401B581D766D27E663FCF0C58B42836D5C10,
	U3CU3Ec_U3COnPurchasesRetrievedU3Eb__8_0_m58C05625B5DB72A56BD3543EA8523485D16A7BE3,
	GooglePlayStoreFinishTransactionService__ctor_mDE6AF91E42569AD0F079BF697C2C03CB98AA7E44,
	GooglePlayStoreFinishTransactionService_SetStoreCallback_m26C0CF560C88CF0F58D8ACAF912456E2DA9D3271,
	GooglePlayStoreFinishTransactionService_FinishTransaction_mD29CA40B5BD07DA5E8C5C590396A14F5DC77BFC0,
	GooglePlayStoreFinishTransactionService_OnConsume_mD74CC687DD5D1842964B366185CE38967EE5BB4F,
	GooglePlayStoreFinishTransactionService_OnAcknowledge_m62B7B56EA17B5E7E72F4627CF41D402768B2C488,
	GooglePlayStoreFinishTransactionService_HandleFinishTransaction_m62A98BC2A52FC3BC4002514CF12B92F0BEE929B8,
	GooglePlayStoreFinishTransactionService_CallPurchaseSucceededUpdateReceipt_m5D68ED093F16EB5E4CD7B508EDB216C790DC2759,
	GooglePlayStoreFinishTransactionService_IsResponseCodeInRecoverableState_m88E312C7218AF61B6459821EEB42DBEF44D6D2D9,
	GooglePlayStorePurchaseService__ctor_mD50BB3F70AFAA9142266B0EFF77E1287FF2525EC,
	GooglePlayStorePurchaseService_Purchase_m15A72DADBA04675835E5C9ED7C6DCB6D98631184,
	GooglePlayStoreRetrieveProductsService__ctor_m8C6E7488F8332FC757B888AC673F22656CA7D718,
	GooglePlayStoreRetrieveProductsService_SetStoreCallback_mF40EC459EE9FCFB538CDFCFB4F88D500DFA881BA,
	GooglePlayStoreRetrieveProductsService_RetrieveProducts_mF3EA1EE1BC91472019F74CF6D25943F8517B3CEA,
	GooglePlayStoreRetrieveProductsService_U3CRetrieveProductsU3Eb__5_0_mC5E21CCD51CC5302ACEAA4BBF87B1E51AD72F4A4,
	U3CU3Ec__DisplayClass5_0__ctor_mB2E41A66477FAB50E1252F69A580505B6380C6A4,
	U3CU3Ec__DisplayClass5_0_U3CRetrieveProductsU3Eb__1_m3FA5E2215234A3FC1488F18FEBA9FBD0CB271ADD,
	FakeSamsungAppsExtensions_SetMode_m491C5A2D2D1005D27586616143DB48D4C44E3C06,
	FakeSamsungAppsExtensions_RestoreTransactions_mD47187A8FCC665E9D7666397313E4911129B430B,
	FakeSamsungAppsExtensions__ctor_m31635B5A6A3BAECE74C15341C9ABA6E7BAD1793B,
	NULL,
	NULL,
	SamsungAppsStoreExtensions__ctor_m0DB1B36658CF7FC94E9C0C6908F7BD5EA33FD46F,
	SamsungAppsStoreExtensions_SetAndroidJavaObject_mEC18A1E9F2E2A5F77982EAE05DABC785E5B2810D,
	SamsungAppsStoreExtensions_SetMode_m67A28155EDADB7E0352231A59FCC6F03BB89C889,
	SamsungAppsStoreExtensions_RestoreTransactions_m484E136AA871924754A6F0F81E42A2BCFEE86310,
	FakeUDPExtension__ctor_m919B5C8E3EF71080C35F4172DCFC0BD41DF2D054,
	NULL,
	NULL,
	NULL,
	NULL,
	UDP_get_Name_m55E6344928C674F32E028DFDF0B9EF33DFA0E39E,
	UDPBindings__ctor_m5E1A67D35639B72BDB7439B0B64DF4F890472F91,
	UDPBindings_Initialize_mDA64E17D1D163D3BDBCFD97D9915733DFC950DFA,
	UDPBindings_Purchase_m49F311E3F1A0E53D5B8F9E8E71EAA7AAAA6C664E,
	UDPBindings_RetrieveProducts_m728D017D677B288C41E5F9BD919A6C76B7FAB78C,
	UDPBindings_FinishTransaction_mFF6F312F4CC65DE804328095058AAE5199CACF1D,
	UDPBindings_OnInventoryQueried_m9006B54B303EC440A977B9914222DF30E076A8B8,
	UDPBindings_RetrieveProducts_m51DA585C6019642AC2C08AB023F21F6E66951003,
	UDPBindings_Purchase_m3BF64CFF17469F850EE91A1A90E5871C2FE05A0A,
	UDPBindings_FinishTransaction_mAF4BFC879BF9A5B835205E24FFF23D29BBAB756B,
	UDPBindings_StringPropertyToDictionary_mC2F82A1664AD8FC416C310CAB86EAAC7D7B913B7,
	UDPImpl_SetNativeStore_mB0A232D5E37BF1547D48CFF9EC0A1A8C28F6D917,
	UDPImpl_Initialize_mBF9D472EB4058EC2C54CAEF8A21DC2F7D042AEED,
	UDPImpl_RetrieveProducts_m1386F32277E32CEAE66488671FEBA5E5818E30A9,
	UDPImpl_Purchase_mDC5354182C143C073738661B3E509D25AFC3BD14,
	UDPImpl_FinishTransaction_mC99CA3AF25417F317BAAE8597CA35BC83DAEEC93,
	UDPImpl_DictionaryToStringProperty_m7EF908CF8DD04530856C1736FA41F73D710D92B4,
	UDPImpl__ctor_m97E1C6DF7474C1FFFE9536AEE0D737E97C93D00A,
	U3CU3Ec__DisplayClass7_0__ctor_mEB3E760EF0F2CBDFC5FAA83A716DC18B50561F13,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__0_mB2128325E2F7F7F207974CE4730B5FF05C6902AF,
	U3CU3Ec__DisplayClass7_0_U3CRetrieveProductsU3Eb__1_mF64376114C045F37B3194C4AA99CAC04AD31A0C6,
	U3CU3Ec__DisplayClass8_0__ctor_m81A6FE325872FACFDC4B7722B7F826071F918C0A,
	U3CU3Ec__DisplayClass8_0_U3CPurchaseU3Eb__0_mE2C67BA9273A9645643114A142C051D52A504DA6,
	UDPReflectionUtils_GetTypeByName_mC696A1D9C99417384D48A71591828F77BCF85CA9,
	UDPReflectionUtils_GetAllAssemblies_m50DF01977F799CC332A846987EEC16C53D827A62,
	UDPReflectionUtils_GetTypes_m293C89E5AADCD2F61DD969F810FE605900779B4A,
	UDPReflectionUtils__cctor_mA0E013661283611E1B9136D61C505E65542E27A2,
	U3CU3Ec__DisplayClass6_0__ctor_m7FD8CF71F8D7FBDE6DBBFD1DF8AE91CD6285419A,
	U3CU3Ec__DisplayClass6_0_U3CGetTypeByNameU3Eb__0_m7269AFB321D9F8B9394AEB9C89900E8B857867BD,
	InventoryInterface_GetClassType_m6705B75F55E34CE08872DC08C510AA1E4D14BE5F,
	InventoryInterface_GetProductListMethod_m722CFEF6443F95A66B7CA93CD18549BA1D9058C9,
	InventoryInterface_GetPurchaseInfoMethod_m5D07125178AD88F1D0768F7F6A9487205145D3DF,
	InventoryInterface_HasPurchaseMethod_mD2ACD2FD42D812D8750C35C1165D715A68E5AB40,
	ProductInfoInterface_GetClassType_mBA5EB3369E9E21CCA8EC1D1D6A0BBA7AE905A85F,
	ProductInfoInterface_GetCurrencyProp_mB0BE6A16805C7ABCBF19751711BDD3098739EEA4,
	ProductInfoInterface_GetDescriptionProp_m3F1A2FF31E0DFD4E8B23DC6CF125A8B55E7C331B,
	ProductInfoInterface_GetPriceProp_m578877A5934EA9BCE4362F18BA96B4E777387CA3,
	ProductInfoInterface_GetPriceAmountMicrosProp_mF81692D8BA4921DBA03CE8C6A6A656099F4D1902,
	ProductInfoInterface_GetProductIdProp_m0F26E4A3E010A2BFE0BDCA88980EAFAFF2D0C502,
	ProductInfoInterface_GetTitleProp_mF9CDC5744C62C4ED54BBDB563704958301F8188A,
	StoreServiceInterface_GetClassType_mB831B5638AB01B1D7E31E54215660789BFF696DA,
	StoreServiceInterface_GetNameProp_mC9844C3D784768A9E8D2F0D913E6EF3A6E29922C,
	StoreServiceInterface_GetName_m27EC9492518273934079ECAB3B5EA69BAE158FC9,
	UdpIapBridgeInterface_GetClassType_mCA0A0565157EA6CEF1D48ADBA7AFFC2759E64461,
	UdpIapBridgeInterface_GetInitMethod_mB1ACE82161A1379DE80EB1102276010D415F5801,
	UdpIapBridgeInterface_GetPurchaseMethod_m73E7DE5D045CD4069AF78EB3C72F0C7B99926111,
	UdpIapBridgeInterface_GetRetrieveProductsMethod_m417C5BCE1B9F84795640DD5685D59F65058D7C5E,
	UdpIapBridgeInterface_GetFinishTransactionMethod_m5E0E9BF6BCC72DB1E5CB3900C6BFB8C75E8D6971,
	UserInfoInterface_GetClassType_mA0B5C812D753C5130C0AD3BB283D94EDCA9582A1,
	AppleStoreImpl__ctor_m3A5046CE5BE72A48CCD9688198896DCC9ECFBEEA,
	AppleStoreImpl_SetNativeStore_m5B471C951650348F63FE2EF6F1954F87E1F33295,
	AppleStoreImpl_OnProductsRetrieved_m5196D11E0C4DB92F2E8348F5F4F1E0B03EC79634,
	AppleStoreImpl_RestoreTransactions_m42CE9F7A3548A6D86913C3D95A1D0CFB32A0CA5D,
	AppleStoreImpl_RegisterPurchaseDeferredListener_mB3C2FDACCD18969C4818A508CA634FBDA360AC4C,
	AppleStoreImpl_OnPurchaseDeferred_mA74BB33F86655D44EF3F92DFFAFA4C557C282B35,
	AppleStoreImpl_OnPromotionalPurchaseAttempted_mDF60DC0A3650BE28578F961B906789CA362E46A6,
	AppleStoreImpl_OnTransactionsRestoredSuccess_m55FD768F30326B3A596281EB18989D39AE987CC4,
	AppleStoreImpl_OnTransactionsRestoredFail_mAF6858AD52BBACAAD49A6F4DBAD20F8940D45CEB,
	AppleStoreImpl_OnAppReceiptRetrieved_mCD339C6575C63C9B1DD9EC60DAAE237430150BC7,
	AppleStoreImpl_OnAppReceiptRefreshedFailed_mC4931DE303A5217CE1F88157B3B9E8B48A52AB5A,
	AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A,
	AppleStoreImpl_ProcessMessage_m12A69E4F6E96013F8EFD780AC573B00B73C594C0,
	AppleStoreImpl_OnPurchaseSucceeded_m4D2A74DAAABC28931BA518156CC85D29C559E07A,
	AppleStoreImpl_getAppleReceiptFromBase64String_m4055599D3E9FF70D7F40BD1D0F3FAADE748EC0C6,
	AppleStoreImpl_isValidPurchaseState_mC1426EE06E24AD4F53C243E0CBB353058E53A9F9,
	U3CU3Ec__DisplayClass24_0__ctor_m91B65ABE3A4BDA77A8DD3D5E2A97475C2C5F4DE5,
	U3CU3Ec__DisplayClass24_0_U3COnProductsRetrievedU3Eb__0_m059A5AD31F50C2304D38053C1789F3161450722C,
	U3CU3Ec__cctor_mE32C831D85B5B80ED17E8E7E5AAA685BF171ACDC,
	U3CU3Ec__ctor_mF4123EB8A6BB5743491990537DE196907ED51415,
	U3CU3Ec_U3COnProductsRetrievedU3Eb__24_1_m71BF0C2111E51B1AB1B3C514C8A39DE97DC58CEA,
	U3CU3Ec_U3CisValidPurchaseStateU3Eb__41_1_mB58C96E9D2778CF0E7E74E84FF940CD491BB6A6F,
	U3CU3Ec__DisplayClass37_0__ctor_mBA5BFBDB3066AC53478C7CA83C6062E17AC5FA59,
	U3CU3Ec__DisplayClass37_0_U3CMessageCallbackU3Eb__0_mFFE2BE5B1F3FAF01E2B6400964F77AF84BC2EF0E,
	U3CU3Ec__DisplayClass41_0__ctor_mC7EE64DC3F3330EA4D15AFC2D03AB405B1D9E200,
	U3CU3Ec__DisplayClass41_0_U3CisValidPurchaseStateU3Eb__0_m3EF70FB1742ADC405FF1E67A217C51161055CACC,
	FakeAppleConfiguation__ctor_m0D9B17A384761404AF47C4FED8E27366CB6A018B,
	FakeAppleExtensions_RestoreTransactions_m762B74D0148B6BC5E9D315A934066949D8A8A7FA,
	FakeAppleExtensions_RegisterPurchaseDeferredListener_m752983580BF81AB327D50A1C9B05C252EC9ED0D5,
	FakeAppleExtensions__ctor_mB2D1FA713182BAE72E5B2E14E654A5CF5A0139C9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JSONStore_get_disableStoreCatalog_mB2AACA8E1BD2F623D1FD624795A6EC2D63BE4CAF,
	JSONStore__ctor_mC199CE530A1FB003EF7D200D00119D814950F02E,
	JSONStore__ctor_m5A359857F3A31A3032CF90B933FC0BF0904510BC,
	JSONStore_SetNativeStore_m9081E0D222C7D19ECFB7D22FE4FBD6B5A64DA019,
	JSONStore_UnityEngine_Purchasing_IStoreInternal_SetModule_m8AD071D5E95AC1A99028DB5127BD48563D26049A,
	JSONStore_Initialize_mDC59DC7290C7C6D89A2FCCDD233C67E6A5298CAB,
	JSONStore_RetrieveProducts_m34FAD01E08B77B560FD93D10A6DE7E0950E311B7,
	JSONStore_Purchase_m8D573478E0B8301F9F26EB3FEBB0146646F2129D,
	JSONStore_FinishTransaction_m7A8761C8CA31ABBEBA3CDC8F7664DF375879138D,
	JSONStore_OnSetupFailed_m21366F78BF04A9085A76CA7B25441D534A352606,
	JSONStore_OnProductsRetrieved_m8236414C12FEADFF86ECD21CB2A9DAE675CB0F54,
	JSONStore_OnPurchaseSucceeded_m3F67887DB888F040538D235B47B7F618B59A91DB,
	JSONStore_SendPurchaseSucceededEvent_mA9F6F8B592ECFF17F215742A8AFA6A4143CB1E58,
	JSONStore_OnPurchaseFailed_m065B10EC98B56D49EB8CA861118455F2F8BA5A2D,
	JSONStore_OnPurchaseFailed_m464B273A747BD5319A9EF40E371AED21686ADE7E,
	JSONStore_SendPurchaseFailedEvent_m3C647FBEEAAAAB6C4CD92D15D9758AD3A8A93EC4,
	JSONStore_GetLastPurchaseFailureDescription_m5B6449E5DAA6266CEAF368B90076B324BA177C7A,
	JSONStore_GetLastStoreSpecificPurchaseErrorCode_m5A84BEC77474E7005A6D9D25C484B50D6CC2DF0B,
	JSONStore_ParseStoreSpecificPurchaseErrorCode_mEF1FCD2BB2F3B47FD87A2F643F77A733BDF52A06,
	NativeStoreProvider_GetAndroidStore_mCC6D9234C524F38934399C6CAE517B34DABAA1D4,
	NativeStoreProvider_GetAndroidStoreHelper_m8099249CB386EC70D4EF065006587D5E6D423788,
	NativeStoreProvider_GetStorekit_m6D7D45D2DE8A7012C59735794709666DF3A4F132,
	NativeStoreProvider_GetFacebookStore_mEDE30C7A85E5BDE70F1DC7DF91567B0EF079C5C6,
	NativeStoreProvider__ctor_mF5F3C3731E006506868855DBA9F7B18A97EB7650,
	CloudCatalogImpl_CreateInstance_m99750D80E83D7CD4DE3E088F9DAB4DC3387E1120,
	CloudCatalogImpl__ctor_m8A85E0DCFAACA541767291ADB852AE9835D31ADC,
	CloudCatalogImpl_FetchProducts_mCD197BD2721C1639A187DF421D8A75087F3AAD0C,
	CloudCatalogImpl_FetchProducts_mF3B1F4D370DA47B4AC515706842B5BB0D8A4C55A,
	CloudCatalogImpl_ParseProductsFromJSON_mAC4A91D60BCEA793621A41834FC2A044331D5A16,
	CloudCatalogImpl_CamelCaseToSnakeCase_mF57A26800C2F0152468E85709C54F7F91974FDB0,
	CloudCatalogImpl_TryPersistCatalog_m16AB8AD1F5487A8C8A03D8C26D03DA8479C72353,
	CloudCatalogImpl_TryLoadCachedCatalog_mC557848CA3F0190D96D77EBBE92A9E4779D46068,
	U3CU3Ec__DisplayClass10_0__ctor_m300C389838117F01E6F6AFD1F840BCB177373924,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__0_m33C5F6D95AE35D0985B97D2B090FB9E499C5F2C3,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__1_m3D9ABFA0371B4F90A0C3B674D46F7FC45B860716,
	U3CU3Ec__DisplayClass10_0_U3CFetchProductsU3Eb__2_m672FDE18F9ED1BECA9D824FFFC6B6A6397837538,
	U3CU3Ec__cctor_m2A0968C3F24945666F5C6DEDCB3CAA4CBB63752F,
	U3CU3Ec__ctor_mA44D4FABD510BFD85F32A4077389160C63C7343A,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_0_mDEB025EE913425EBF04F2B5FF8CBB5CB8E7EB802,
	U3CU3Ec_U3CCamelCaseToSnakeCaseU3Eb__12_1_mAE1CA7ECD0003DCDF9E88DC4525B180ED823D9B4,
	FakeManagedStoreConfig__ctor_m9CD13892D71E0F09259DFCD04021859C9CD788B3,
	FakeManagedStoreExtensions__ctor_m6970EA44511B65131F35F9705D2CB3FD7762F510,
	StoreCatalogImpl_CreateInstance_m49470088C202EB38712F0BF5CE5DB2A3AF503BCB,
	StoreCatalogImpl__ctor_m6E7135D88AC482917E09D1C5F375A62DC363B5B9,
	AdsIPC_InitAdsIPC_mC4E1B32A422990961C35BCD9BE03F33FA856A0F1,
	AdsIPC_VerifyMethodExists_mC6A2F32D96E434F287046FCB6580BFC0CAB19560,
	AdsIPC__cctor_mF010DDC71B58DD76509374B4FA71A2E1C1E4E633,
	EventQueue__ctor_m30F9793F953833518ABABBD3F168CF47DB53E018,
	EventQueue_Instance_m34D8EA50A9C778EE57157EAA1F8A162FF8CDBDDF,
	EventQueue_SetAdsUrl_mE8D5EF963C367D9D5EFB0BFBF225B6685F8A70F2,
	EventQueue_SetIapUrl_m880374A9140FE273E590478C9466BA3B611D63B6,
	AsyncWebUtil_Get_m4BA75DE116821D713BB90639AFB4EEFCF3C879C0,
	AsyncWebUtil_Post_m861756C487790237E425A07A5CE759B560D735A7,
	AsyncWebUtil_Process_mA53B9F3BF291F21EA2940464E50EF0A0C01D7194,
	AsyncWebUtil_Schedule_mAFE2808E06870F32FD5B7F34BECCE72AD010CEED,
	AsyncWebUtil_DoInvoke_m0AEC70D0D73D0AC4369D6E0E446287B70AA1C4A8,
	AsyncWebUtil__ctor_mE669EEDFCAB525B935D7183475066451207367CC,
	U3CProcessU3Ed__2__ctor_m564EBC8F2B2D43DA3C2CDD2088C663C6AC31C2A8,
	U3CProcessU3Ed__2_System_IDisposable_Dispose_mD53C50A38E070FD49A3567DCB032570083F491D1,
	U3CProcessU3Ed__2_MoveNext_m7EC60749E4D18EAE8E9A4D7EA74332503B26F737,
	U3CProcessU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC6692D3E6532D8475485B9F2BCDC6E691B7DCDD,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_Reset_mC69CBEDC923EAE8F2BEA6F5C025FB93EA557352E,
	U3CProcessU3Ed__2_System_Collections_IEnumerator_get_Current_mDAF6EF471CEA5EDAEF9DCE1C79EEB5FE51579C29,
	U3CDoInvokeU3Ed__4__ctor_m54FB63DB448C6438505460AE58C3162681F38965,
	U3CDoInvokeU3Ed__4_System_IDisposable_Dispose_m7D4FA4747CDBD342FC427C9DAD85783EBEB71DE8,
	U3CDoInvokeU3Ed__4_MoveNext_m54C08EA5AEC6D4E2E3BC56675B52117ACA05C86F,
	U3CDoInvokeU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m50AA10DD81D9CCC9C623147146A59A6C3B5E8528,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_Reset_m3BA5228C3191FA9F49B38ED2EDB1B44A28B4DEB1,
	U3CDoInvokeU3Ed__4_System_Collections_IEnumerator_get_Current_m16C30BB46E85D428EF5CCF1EEB5F54DCD4A61F09,
	NULL,
	NULL,
	QueryHelper_ToQueryString_mF94AA264908FF68CC8CA4A80CB773F2BB8DDDA6B,
	Price_OnBeforeSerialize_m39911358A75F32F852127DD9E71986FC688E3017,
	Price_OnAfterDeserialize_m860F96DA0394E3D7630BC44D86660ABDFDF2F6BD,
	Price__ctor_m48977B0AE3CBA8C7159D7DD1F0038B6EE33E5F12,
	LocalizedProductDescription_get_Title_m0687B9D01F74D988FB2601DEE32992FDA11FC0DB,
	LocalizedProductDescription_get_Description_mCEEF2E0F990F81DFFB6A8C3F15779F9EEAC0702E,
	LocalizedProductDescription_DecodeNonLatinCharacters_m61E2D1021A28AEDABDD1A242448339C1E0650ED1,
	LocalizedProductDescription__ctor_mCBB285C3D4C867E55BA4DCA260E118BBAE9C78C7,
	U3CU3Ec__cctor_mCA751725EC80488584BB33361D485577329F5A45,
	U3CU3Ec__ctor_mF54F8EC0018F0DD039D7BE5613B3D3859C566545,
	U3CU3Ec_U3CDecodeNonLatinCharactersU3Eb__11_0_mD5AC33BBB6B93628EEC5A2C0E2411E3A74B3FA9D,
	ProductCatalogPayout_get_typeString_mE475BBBEA1CC1C3F898361B32A24F6E961835136,
	ProductCatalogPayout_get_subtype_m0B8836A886D50BA6D0B02EE254B0DDA5D2D0A301,
	ProductCatalogPayout_get_quantity_mD48C90712D3D1338F2EB7B9332388AF35E609B61,
	ProductCatalogPayout_get_data_m93ABEF0866DB58E0128899FD21AB4322948A2B60,
	ProductCatalogPayout__ctor_m1CA19AE7DF778001A93683A4F9FCD7AFA3EF8A6F,
	ProductCatalogItem_get_Payouts_mFF682C63184EBB0F6F01D1A6589A34D631D6CE05,
	ProductCatalogItem_get_allStoreIDs_m5600DE8050971C4AC4CA4DE4FEAEA3166F10BF27,
	ProductCatalogItem__ctor_m12606A82F310B03FC1A2C9CDF95E40D4CBB2F08C,
	ProductCatalog_get_allProducts_m7448D2984F0CDAD1EA82CDD036E9CE4C6C9FDDDB,
	ProductCatalog_get_allValidProducts_m3BE8C40F900203506BBC94F69623FE905C38A09A,
	ProductCatalog_Initialize_mCC8A13441D56BD8FB78FACF750EA51787D45489D,
	ProductCatalog_Initialize_m1E1717E1B56BDBE527F1D89710D6543A92187D14,
	ProductCatalog_IsEmpty_mCC40303E56E2C5E8D66E35EB73FD03E444C19248,
	ProductCatalog_Deserialize_m55E0E5033309F3871A00598E962521F01127B1ED,
	ProductCatalog_FromTextAsset_mA038DD77CBFF234A483C02F67D6717D050A479ED,
	ProductCatalog_LoadDefaultCatalog_mD8ED158BE8FC17FF7506BEAB2FD5ABF36A655D0E,
	ProductCatalog__ctor_m54F148D4F9CAD0B06E383C827B5F3CCAE9210961,
	U3CU3Ec__cctor_mD66A47A41C8E0E6EBE60955D92AEB441623B28D1,
	U3CU3Ec__ctor_mD817AF38AD009ED99CD38743F97DEF459AAF9D29,
	U3CU3Ec_U3Cget_allValidProductsU3Eb__8_0_m488ED545C1E1E74F1B778D761003543FDE729CB7,
	NULL,
	ProductCatalogImpl_LoadDefaultCatalog_m6B8B5E5DBFCB2CA575E7FEAE24B220366AB13996,
	ProductCatalogImpl__ctor_m032275AAB12DE58BA1475B4E2EBC47A319E5E92C,
	ProfileData_get_AppId_mAF31EF26F8B65445C0D2D04D9494B01FEEFEA767,
	ProfileData_set_AppId_m88A2F5EE41988F36EC29A897AAECA421C529EBF5,
	ProfileData_get_UserId_m2577A7C3BD2F8E11A7AA3182CD9B3D3527616736,
	ProfileData_set_UserId_mFA99AB7C19AC7AF9472467F95B7E0E27FF5E0145,
	ProfileData_get_SessionId_m95659A35310B0F2190D056170F45C7179E67D103,
	ProfileData_set_SessionId_mC0CF0A6AEDE2AA7C463CB3DB28504FEE8F5DF1DB,
	ProfileData_get_Platform_m061038AFE6F202284F5E12C3FD5F42CCDA087908,
	ProfileData_set_Platform_m1631C12B52575FABC050A33C7FDBDA6133FE64CE,
	ProfileData_get_PlatformId_m691CD41BAB3E2F6AFE6FD19EB5E8284A9B90362F,
	ProfileData_set_PlatformId_m34EC3637E93A6DA0A5A71EFBB5D1F581A3734141,
	ProfileData_get_SdkVer_m39031BC9B7557BAA44567595F972AC12060D7DA9,
	ProfileData_set_SdkVer_mBFC6C520487E1322000F2D4E1322C1CA8C63A435,
	ProfileData_get_OsVer_mA8943B494127937B67C5CD0C50BA22B94206CDE0,
	ProfileData_set_OsVer_mB8050EEBCB588626DB0E19F40013DD3A34572187,
	ProfileData_get_ScreenWidth_mEB78A5A683FF21CF18E32DC78A7A61D45D148B26,
	ProfileData_set_ScreenWidth_m568AA5088361122F00644B67CDE7B2B545A030B4,
	ProfileData_get_ScreenHeight_m64E09131660BD2B39A8370C22277EAC986D52371,
	ProfileData_set_ScreenHeight_m2131968D06E95CE34DD3B4017FEA14CFE8A7682C,
	ProfileData_get_ScreenDpi_m41769018053A23E99A208979DDB86CA186E08787,
	ProfileData_set_ScreenDpi_m78F3F67F6343C63866C915C7EC2828A65B07BCC4,
	ProfileData_get_ScreenOrientation_mA1E674FEA8701C6459E2410424C27993DAC8C2CF,
	ProfileData_set_ScreenOrientation_m89350DBB83498F486836BEEA07F02833003EAF0E,
	ProfileData_get_DeviceId_m659EA54AA146128D1B104A715C40E84FEA191B10,
	ProfileData_set_DeviceId_m9BEB7ED8D4A31765D61E15EC96A055BE1C74F1CA,
	ProfileData_get_BuildGUID_m5858B20F0ECFF6313E9227B07D63F9A7877074E5,
	ProfileData_get_IapVer_m45F4EF3B721FA42E80A1F951E650733BC874A5FE,
	ProfileData_set_IapVer_mD2D9D80FB688E61DF5EAF16A60C63E8A45B50D1C,
	ProfileData_get_AdsGamerToken_mC9FC9E1553B64C8B56D5EADB12ECCAFE9EE077CA,
	ProfileData_set_AdsGamerToken_mD3DBF98EF79644DE043D03FE293E6815050EAF16,
	ProfileData_get_TrackingOptOut_m02A56F01F75A52EEE29A1251560247D77AE7D018,
	ProfileData_set_TrackingOptOut_mFD96A24373588B34F4DFD9579F5D01242612CFD9,
	ProfileData_get_AdsABGroup_m4BC078AC69D44605534ECFAEBF74D3ECDEB14343,
	ProfileData_set_AdsABGroup_m5AC69BE616018B5E6096BBC6A3BE8BACD3DCBE5B,
	ProfileData_get_AdsGameId_m66A26FBBFC099394350F672982AC62435F4FA08D,
	ProfileData_set_AdsGameId_m8336232AEA4E3608B40B14AA5FCF97351E927298,
	ProfileData_get_StoreABGroup_m7A2CABEC74786393D49F2388F1D59E37B1F2952D,
	ProfileData_get_CatalogId_m67FC35A1663390A0BE9B7DCB8E001B945E44C550,
	ProfileData_get_StoreName_m8CDBE4D52A5698F09D8F448E60A72405FDBDDE4B,
	ProfileData_set_StoreName_m7561251D3FE05F5DBF3640D22A3806554D0D9BFA,
	ProfileData_get_GameVersion_m28F1CDD6850B9569993E8DD5E38525BD6A1B88F4,
	ProfileData_set_GameVersion_mCCAD48E5E2CC369C2A1F7ECDCECC33AE9DA607FC,
	ProfileData_get_StoreTestEnabled_mBB9A40B09548D33311EA34B84A7780909AC58454,
	ProfileData__ctor_mDF28B0F7FE1E3AAB9CB0EEAF961358C8824CD52C,
	ProfileData_GetProfileDict_m2B7047DA99A6EA4DDE08E1ECB7EA962DFC95B76A,
	ProfileData_GetProfileIds_mDFCCE689C51F90F1EAD5875E6412A763682B1DD6,
	ProfileData_Instance_m859013D8FA2A7DC9652A86E861E01AF1F11104C0,
	ProfileData_SetGamerToken_m7737C19E09916DDFC8DC741626A82B7B57D8BF8B,
	ProfileData_SetTrackingOptOut_m7B3FF687D89A59EEF278092BE3DB99DB31C58EC3,
	ProfileData_SetGameId_m571F968258E51F1C675614BEED25377515DB808D,
	ProfileData_SetABGroup_m9715CD2D09AE2B295F93BFFAAA9DA353852B00E7,
	ProfileData_SetStoreName_m650DFF182105FA69608CAEB36F36A943274F554C,
	Promo_IsReady_m0CFC23D172D5F66F921B7FF7338BA9F5593FD0B9,
	Promo_Version_mEC94F02A7F171206E1D4161CD181A5D55A74495F,
	Promo__ctor_m4B1EC1A59511A41549C043AB0C43474D49968B21,
	Promo_InitPromo_mB0D660DCB8971C5F6ECD6F52E9B9C4021A63851F,
	Promo_InitPromo_mF3E9E173EAAFA5579381AA1AECCC79EB2CE16B32,
	Promo_UpdatePromoProductList_mCD9C63139C7646F3EC52E345DA3005FD0A3D75DD,
	Promo_ProvideProductsToAds_m7B8458890D45489731DCF9DB6F2A9DBFB058C2F2,
	Promo_ProvideProductsToAds_m9CDDFD1879A51AE2ADEFCDA9D57E1AFA83ED3781,
	Promo_QueryPromoProducts_mE6365EED70C194A95E2D23666AE6B0E24CCF090C,
	Promo_InitiatePromoPurchase_m8F6EC89D9A7B65BFC216E12D89D4D02BC8015459,
	Promo_InitiatePurchasingCommand_m7C40863A64FAE4E2130BD2341B68092A1117F2BC,
	Promo_ExecPromoPurchase_m26F1121DD1D3E969EC6FD9CDF67B52F422B9514F,
	Promo__cctor_mA7ED05F20A07D2A605F422C0FE2A9BA1E1012411,
	StandardPurchasingModule_get_m_persistentDataPath_m86FD8BCB9D1AF77C3FABFAD5AEE9D8C12C8B01A6,
	StandardPurchasingModule_set_m_persistentDataPath_m41AE8CC32C16F02C5B763583399FCE0A7CB867BC,
	StandardPurchasingModule_get_util_m7BDB12A6CA13EFCD41619CA9BBD5F8F583F95AB5,
	StandardPurchasingModule_set_util_m2A83A916159909D5A765DBE2868CBF8CAE1A4752,
	StandardPurchasingModule_get_logger_m8E4BF67AB362C003883B8F1E75E28194B843529C,
	StandardPurchasingModule_set_logger_mE4843CF513648A63BF4B923E0141F79B5F4AD43C,
	StandardPurchasingModule_get_webUtil_mE7DD331E1F3FBCA74E37DAFB3007906D039EA500,
	StandardPurchasingModule_set_webUtil_mC1A5C2EF56063635CA84413CF19AEC6A9F23D78C,
	StandardPurchasingModule_get_storeInstance_m2A391EA4B4EDEB5A77E0B0CF2651C1E04B041CE0,
	StandardPurchasingModule_set_storeInstance_m242EF88FB75F46771C1329E122114AD32D93D834,
	StandardPurchasingModule__ctor_m151636F70A05018B9DAFEC2278DAC9741816F494,
	StandardPurchasingModule_get_appStore_mF3D8F16D91F28723A89BDBF3784D323091CE9300,
	StandardPurchasingModule_get_useFakeStoreUIMode_m34C92B56B70AE357C830338A06193F5E27D3EEA7,
	StandardPurchasingModule_set_useFakeStoreUIMode_m948A4B864ADA9A60171F42F0033093B6E80612CA,
	StandardPurchasingModule_get_useFakeStoreAlways_m123C90AA9537BE344CEA1C7AD7EA61BA0ED23CBD,
	StandardPurchasingModule_set_useFakeStoreAlways_m30979E377279B4613FAFE892AD57204AAF2DA16C,
	StandardPurchasingModule_Instance_m3FE47064BC475CCB0881708925D8E13EE96CADF0,
	StandardPurchasingModule_Instance_mE0DFC9051C78F86ECF3D749ABED26BA4F1DAA0E9,
	StandardPurchasingModule_Configure_m8F3BD70AA25B125D49C8321F834E2587A9208D9F,
	StandardPurchasingModule_InstantiateStore_m7B27BA268A3D6AABC1D0E2150AC9271DC2EC521F,
	StandardPurchasingModule_InstantiateAndroid_mD782F4819488B8C0D398DA53D9A653527C70F3B5,
	StandardPurchasingModule_InstantiateGoogleStore_mDCA348B541A39859CE35F545A49205746DB54E36,
	StandardPurchasingModule_BindGoogleExtension_m5D84954BB5F6CF3341B87F4721535D068ADF3AB2,
	StandardPurchasingModule_BuildGooglePlayStoreExtensions_m170359992FE252FE0DA548CE3FE52AAE3629D5D1,
	StandardPurchasingModule_BuildGooglePlayStoreServiceAar_m154A4C6C6A9873B39C2BD9ECC630353FB79D0C54,
	StandardPurchasingModule_InstantiateUDP_mADD3D47BC238FB3199375C415DDBCEF7AE8452C8,
	StandardPurchasingModule_InstantiateAndroidHelper_m1E740D666CC0796B763BD14FC0F230B6F51F43EC,
	StandardPurchasingModule_GetAndroidNativeStore_mD42C34BD9337150F9B1A17CAA3038C7411FDE72A,
	StandardPurchasingModule_InstantiateApple_mAE7E57ACE7D081CEF226050F9ECB9EC5377AFFC3,
	StandardPurchasingModule_UseMockWindowsStore_mA03011DA84C6675D27D86604A7D95FA89E950952,
	StandardPurchasingModule_instantiateWindowsStore_mA67949ECA911DEA7CD4998FBF12C8164D1DB0F01,
	StandardPurchasingModule_InstantiateFacebook_m84364AD97498F2B8BE10D7FADE45FDB1768C9AA3,
	StandardPurchasingModule_InstantiateFakeStore_m895F5A435BC01F3615D94B9DC8CD0D8E5452D6D1,
	StandardPurchasingModule__cctor_m5552771284055BEEC6E5F3D7BE2F7CB640938C7E,
	StandardPurchasingModule_U3CConfigureU3Eb__49_0_m31DD21A554A95B5C9652E7AB0AF133D0101C718B,
	StoreInstance_get_storeName_m69F9BB8D61CDFE4F08336E73D9B60D0A6B8B9DE8,
	StoreInstance_get_instance_mB43BADEC3017D8C71D5B3719F8737014CF525BED,
	StoreInstance__ctor_m95ECD1BFFB6B1B2471D22A840D0BD892E8D10EB1,
	MicrosoftConfiguration__ctor_mDCDC9F2C9B804CD912EA7C4B4DCA458E105ED241,
	MicrosoftConfiguration_set_useMockBillingSystem_m586024ED671F88EFA8CA1BAE40E29E5061250411,
	StoreConfiguration_get_androidStore_mE6D635B8B0A865C4E6461D938E128CC32522DADE,
	StoreConfiguration_set_androidStore_mDA7510FE36F1360FB70B894201C028850372639F,
	StoreConfiguration__ctor_m760D9EA48282C4BD19455EA3BED50314A31A4307,
	StoreConfiguration_Deserialize_m28C1E8C67FD8AFE602618105B5AA31F925F8749B,
	SubscriptionInfo__ctor_m5A9144BF6192AAE0DD9227B6332508653AFED53E,
	SubscriptionInfo_isExpired_m2AF439D5E9FCFA3A7D08C5509EB350494D489E18,
	ReceiptParserException__ctor_m9B2098B6D4D37A9958E02D68F844228AF2B1E126,
	InvalidProductTypeException__ctor_m36E207B09D2C70FE434539F6052DF16A35D68062,
	FakeTransactionHistoryExtensions_GetLastPurchaseFailureDescription_m35CCAC6ED765302A78DA10580A9C1F8CA3F046DF,
	FakeTransactionHistoryExtensions_GetLastStoreSpecificPurchaseErrorCode_m5A03D684F77FBC17EF377D0D21A1E0B0769933DA,
	FakeTransactionHistoryExtensions__ctor_mDD8219FFBC0F155BC3416771CD7A8EB213C62425,
	NULL,
	NULL,
	FakeMicrosoftExtensions_RestoreTransactions_mD6D6DF196EC65E2805FD491E433F54A17F0F0FF4,
	FakeMicrosoftExtensions__ctor_mF19E1FEE17857DE944DA95530EF82D593606376F,
	NULL,
	NULL,
	WinRTStore__ctor_m85AA38E5C13E6981D3AFE87BAA51F58B0600BE2C,
	WinRTStore_SetWindowsIAP_mA8DCCE72C60658C3F43AEC8169F52B33BE3FAD59,
	WinRTStore_Initialize_mE0D1090B959C8E136413A66281B8BCC2B61DB4B5,
	WinRTStore_RetrieveProducts_m755B6E8726AB9ECB7BE31081A13C4BF746EC9D24,
	WinRTStore_FinishTransaction_m91ED6E2130EA06DF5B1FCE056E577ACCE2ADE1EA,
	WinRTStore_init_mE80E8CD3FA7061378083A5B87345D83B6A67E21A,
	WinRTStore_Purchase_m4B3FE34B13265909A8523D2DF823B80C82081233,
	WinRTStore_restoreTransactions_mDB35F3BDA2E6C13457E0B4AC27D870E0A7B8C5E1,
	WinRTStore_RestoreTransactions_mC24CBCCF99F7415DF334D08271AEB9E68AB046D8,
	U3CU3Ec__cctor_m0E82EFB8C0FE2A5FD395E7E38CF47B0E860BD033,
	U3CU3Ec__ctor_m351652D6F44D8163A932BF330D4DE9A0BB4DC82D,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_0_m534693A3A65C43806176EDFA8142CFCCCE1682FF,
	U3CU3Ec_U3CRetrieveProductsU3Eb__8_1_m2FD6E2FC457929A053B631967320A81C31E43732,
	FacebookStoreImpl__ctor_mF7B55082FD5A57F9282CD6E171CBD873378BBE12,
	FacebookStoreImpl_SetNativeStore_m22CD27B3251891D08A14A39AB61058BD80CADFE1,
	FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5,
	FacebookStoreImpl_ProcessMessage_mEFC8086180D2A496560DD250E313AAE32485B747,
	U3CU3Ec__DisplayClass6_0__ctor_m7F6E9E026712D033A78BEC590B480DB25F38C691,
	U3CU3Ec__DisplayClass6_0_U3CMessageCallbackU3Eb__0_mA55CBBDA1525665CE028516A5B85CAC9A255A362,
	FakeStore_get_unavailableProductId_mED4D73EDC3E4991480E355C82B09EA472504C0E5,
	FakeStore_Initialize_m6F73A3892C0315027A97EF8AB342E52EEF79B2C2,
	FakeStore_RetrieveProducts_m9915AE639E06BC21802D7EBA6E392D5767598C30,
	FakeStore_StoreRetrieveProducts_m228765B5C2BC72460CF8F0180AC6827A3CDC090C,
	FakeStore_Purchase_m8E66EC5E9BE6E07335840DFF7AA8F8EB9AE86BEA,
	FakeStore_FakePurchase_m067A82AAECE547F7E85D3A8A8D0DBEC8986F63CC,
	FakeStore_FinishTransaction_m92E6D0BB338D0A256AFEED9C158257C829EBF988,
	FakeStore_FinishTransaction_m091E1BF96B07D12D24AB24B505FB1DD567C0D577,
	NULL,
	FakeStore__ctor_mEC535F5A9DE18547AD7A817DE71D774CF5E6949F,
	FakeStore_U3CU3En__0_mA3BA0CCA3001F6BCD6B39DB33D1F4D843C2C478A,
	U3CU3Ec__DisplayClass13_0__ctor_mA87BFA4A17728569F30E946919668FD2353ADDD7,
	U3CU3Ec__DisplayClass13_0_U3CStoreRetrieveProductsU3Eb__0_m6A65EE18DD216EB6A80A1392ED4D63F84B78F9BF,
	U3CU3Ec__DisplayClass15_0__ctor_m6044A541D6194CC23B937801B35D3C891C92605C,
	U3CU3Ec__DisplayClass15_0_U3CFakePurchaseU3Eb__0_m766B7235BEB5163C018F6415550E01903E99A3DF,
	UIFakeStore__ctor_mE057F9839E9CB0C4FDECB3A143805C6A2E710546,
	NULL,
	UIFakeStore_StartUI_m3FCF29493861621986577567402F4CF33DBBA289,
	UIFakeStore_InstantiateDialog_m1B359BDC437E7A4EE93B44559ABB41BC577AAFBD,
	UIFakeStore_CreatePurchaseQuestion_m9A088C92BAC1EC81CC95C6DCBCC045FA8BEF6642,
	UIFakeStore_CreateRetrieveProductsQuestion_mEE0E6B457E100C0BFDD4BA039B72EA7B439E6AE1,
	UIFakeStore_GetOkayButton_mC754BEEED3BA436DFFA4619757EBE251EB0688BB,
	UIFakeStore_GetCancelButton_m0086B5B235EB1C3231A7E315919AF223CE57B62F,
	UIFakeStore_GetCancelButtonGameObject_m902292B6BD2EC406142712704B8D72555C6E1DBC,
	UIFakeStore_GetOkayButtonText_m3D6F1215647C4CC0C6DDD0CB28A27014151592C2,
	UIFakeStore_GetCancelButtonText_m1EE694B2DA5DB81A8006EFFB972D83C940DC40BD,
	UIFakeStore_GetDropdown_m0F6519CBBC7DDB04815EAA3B2CCD8764EB3932F6,
	UIFakeStore_GetDropdownContainerGameObject_mBCC1B9C535509D303D2E15FDFAA3F3F7CCFEC525,
	UIFakeStore_OkayButtonClicked_mCA065846DEF8CAF769B7F9567D69F74267AF6C50,
	UIFakeStore_CancelButtonClicked_mE0332C1DEEA359569C92C77BEBA30ED180C29D51,
	UIFakeStore_DropdownValueChanged_m7C879BD9AE55770FDC4A250C1599EBD1DC2BAB61,
	UIFakeStore_CloseDialog_mF8E4655FCCB007000A5031ECA72EA588F57D6582,
	UIFakeStore_IsShowingDialog_m4A81F6A8B6318E129283E4259038B589009EF895,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_0_m1F3B89EEEF70C2B6D627538A634C6FDF566C9B74,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_1_m9E77BF842569DB9DFB61BECF163673AF35B813AD,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_2_m29A134923B02275FF718CFA071957E8ED6F31120,
	UIFakeStore_U3CInstantiateDialogU3Eb__16_3_mD3C747802E1FE43435740B94C23028F11E8CB503,
	DialogRequest__ctor_m9F538F8A22D0CD5CE9A19DCD2ADBE89546EC44D8,
	LifecycleNotifier_OnDestroy_m1AEC1FB10294B32A6B4F542A57DFFE8B36666B3C,
	LifecycleNotifier__ctor_mAF1B8EE03832E8696C273A5B6373813DF1B67A4B,
	NULL,
	NULL,
	U3CU3Ec__cctor_m35BC2FA1521CE8D422880F47E7BB0778D74E46EF,
	U3CU3Ec__ctor_mE878EC88E66B5F8A1FD83C5F552E9C10A31BC21E,
	U3CU3Ec_U3CCreateRetrieveProductsQuestionU3Eb__18_0_m7A1A643790DACBB34B2DDB82457E5A704F5B3505,
	FileReference_CreateInstance_mD4E66A64AAD3623CDE3B296700377F902FB64834,
	FileReference__ctor_m220B75307347B44B5220A89F72548997FDAC5816,
	ProductDefinitionExtensions_DecodeJSON_m10258725CD1F9873F77E4B9F4920E9678CEFBA5B,
	NULL,
	UnityUtil_get_currentTime_m87C375C42236B7A343959465A59529DBEC9D4E7B,
	UnityUtil_get_persistentDataPath_mAF7E27B8D02B1ED2472061D8BD5424349B3B42BC,
	UnityUtil_get_deviceUniqueIdentifier_m3CCADCF11169C40B3DCC3B0D61BBE21D86EBB30E,
	UnityUtil_get_unityVersion_m24756E167C85A2DBFBBE73ECBA25D7689B29AC45,
	UnityUtil_get_cloudProjectId_m98A8E5F31AEF950E2BD779ABB2A1786ADDF831C9,
	UnityUtil_get_userId_mF93E3F58EC309ECA1FE7E8263377BB6E1FA7DC8E,
	UnityUtil_get_gameVersion_m51AE9FB74C3D165E656B2B84705E910EFC66B335,
	UnityUtil_get_sessionId_m409DFCBDC195C879A9C3AB6033321FAFE2CD4E28,
	UnityUtil_get_platform_m5037C091690E744721009B6D4FD7D582B9BE9047,
	UnityUtil_get_isEditor_m64610D4E32E27650522ED00A8ACE7E0FC9533DF6,
	UnityUtil_get_deviceModel_m6C08BF9910BB84B25A9A3BBD05CCFEB651E16440,
	UnityUtil_get_deviceName_mEA38A546254A59CC31626ED56B925F8DF4FD87FA,
	UnityUtil_get_deviceType_m181C5274A548099EBA526CF725883B10DC83C658,
	UnityUtil_get_operatingSystem_m1966645E26FDFD9B8AFD1320FDBE88B4D33EF082,
	UnityUtil_get_screenWidth_m533F3CE0FDF2017EE8E71CDEB2DFC222602A2A5B,
	UnityUtil_get_screenHeight_mCD22CFB305D11330AD2EB06D9A451FFABFA07F0D,
	UnityUtil_get_screenDpi_m2424E5349922750FC446A35BEF616721F3F4DCF5,
	UnityUtil_get_screenOrientation_mAB91AF87B8A7BCACDED1C31E11EF30A468BC051B,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_m420597FCE9DD378F086DDA20BF995559398AD01B,
	UnityUtil_Uniject_IUtil_InitiateCoroutine_m1F133B6EE8DC47F818A80BBD96C429EC462385E6,
	UnityUtil_RunOnMainThread_mEC0567C23C8A78E2B840D55FEE046B775841E571,
	UnityUtil_GetWaitForSeconds_m105183FA99EC4205B3E7925E9B5E7C51DDE2A1B7,
	UnityUtil_Start_mEF38364C53863D3A227A1FE5C90346F2F26B31F3,
	NULL,
	NULL,
	UnityUtil_PcPlatform_mCF6958CF7CD6B97C2108A94DA0E2513E3935DAA9,
	UnityUtil_DebugLog_mD044256BF9BD13245CFF1AC8BF4A5EB286964CA8,
	UnityUtil_DelayedCoroutine_mD94C209BFA6B188EEDAA0011824166F1A824B83D,
	UnityUtil_Update_m161CCF115C65EC6C5588F1288BD17863C129556A,
	UnityUtil_AddPauseListener_m3869ED61F66136376FC29E2E0EEB959EF4BF482A,
	UnityUtil_OnApplicationPause_mF331457F54B55E3ECF6C54508C82C1D825BCF92D,
	UnityUtil_IsClassOrSubclass_m1178F06530D604F6F97C989C1F45FB03D7EB42B2,
	UnityUtil__ctor_mAB90FE5FFC1ABA91CA62D189EA8F3D9854E84535,
	UnityUtil__cctor_m304D195947F2D8198D6B6A4BD92FBF5210E4434B,
	U3CDelayedCoroutineU3Ed__49__ctor_mD207BFF447AF13598F28B51075862A626CF6212D,
	U3CDelayedCoroutineU3Ed__49_System_IDisposable_Dispose_m93247306AF9C52FA037C981F7DE7C5E8A4FDAA3A,
	U3CDelayedCoroutineU3Ed__49_MoveNext_m39FA39939A77EBD0AE7620018F18AA2165487CCD,
	U3CDelayedCoroutineU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC595F0D351C53AF8D522FF5653A40593D888B20A,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_Reset_mF2FFAE7066438519F0F20D9A4E20130F6B754425,
	U3CDelayedCoroutineU3Ed__49_System_Collections_IEnumerator_get_Current_m5EC6AFFA1A44D153C2E8979A502E514C29CFBF0D,
	BillingClientResponseEnum_GetBillingResponseCodeJavaObject_m50E4883839037DD4353372BAA43F6F01429241EA,
	BillingClientResponseEnum_OK_m1E405578286243A6156E9D070FAE99769D010ABD,
	GoogleBillingClient_GetBillingFlowParamClass_m311FD5AA0894EB74A4E71D4624FEDE09E64FB3EE,
	GoogleBillingClient_GetConsumeParamsClass_m2DAF5DD916B60C13A7304691D77C3599625A557C,
	GoogleBillingClient_GetAcknowledgePurchaseParamsClass_m7FFAF28CC9EF8CA49DAD5E456BDA3781041FB3F0,
	GoogleBillingClient_GetBillingClientClass_m21C159790F5ADB865EA552400AAA79431327EC35,
	GoogleBillingClient__ctor_m2CBAED0C5254980A95AE536D812F87E8A6D8B454,
	GoogleBillingClient_StartConnection_mB5726C3CD9B544C10194258808752CAEF63C05E5,
	GoogleBillingClient_QueryPurchase_m9C307292395DA180DFBDF555573DF96CD9A80873,
	GoogleBillingClient_QuerySkuDetailsAsync_m893B99379826581A3F41F879326008FF7B25BE84,
	GoogleBillingClient_LaunchBillingFlow_m6876F527E2046649F1AB1CE1782E60EA116A47B1,
	GoogleBillingClient_MakeBillingFlowParams_m01AF0695DBDE50A90239B399ADF0E46655A753CB,
	GoogleBillingClient_SetObfuscatedProfileIdIfNeeded_m8A3B727FFE01F33E44DA4536ADC40CA88B239310,
	GoogleBillingClient_SetObfuscatedAccountIdIfNeeded_m6273BC396047A26F1B783DC131072D974687327E,
	GoogleBillingClient_ConsumeAsync_m84B2F3EF887BA6066AE5410E27E524B75DB09544,
	GoogleBillingClient_AcknowledgePurchase_m0124EE881AB30F9E6D063AF11B83537D294B9BB1,
	GoogleBillingResult__ctor_mE90AAC6450DF9B79B2A0CA4C006C1E8A4AC8A660,
	GoogleBillingStrings_getWarningMessageMoreThanOneSkuFound_m9851A44498890446974B650A0467E7357E08E690,
	GooglePurchase__ctor_m751412DF2D279482CA70A5F9575DA73C5036B7C6,
	GooglePurchase_IsAcknowledged_m52AC8D59AD03FE0564DEFF95162FDCD09BF629E1,
	GooglePurchase_IsPurchased_m412977D99D8328E0DF630E0FBB0848B8CAA95F06,
	GooglePurchaseResult__ctor_m8F0D30CA425899E4F75C9C32E90B4168D583865C,
	GooglePurchaseResult_FillPurchases_mB02296265AC1FEC628F373EB8DEDF65A97A1C885,
	GooglePurchaseStateEnum_GetPurchaseStateJavaObject_m9F7EE32E998F52F416EDF4B834769215E448844F,
	GooglePurchaseStateEnum_Purchased_mD754EE8FB46F439D86FC774A8AA18D54888F8CE9,
	GoogleSkuTypeEnum_GetSkuTypeJavaObject_m390E7284C16790A4099E8086AC2B729916B65031,
	GoogleSkuTypeEnum_InApp_m7E503D01DED3FB02BB6DAC68B31C44600842DCB5,
	GoogleSkuTypeEnum_Sub_m9CFEB82FF62622FC5C307E081068916F83FB0353,
	ProductDescriptionQuery__ctor_m5FE216809AE43F6F9D3D03DF2365808302C18C75,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AndroidJavaObjectWrapper_get_androidJavaObject_m75EFD7B549890117D176D7157BA93CC77FDF890C,
	AndroidJavaObjectWrapper__ctor_m88EE28837A47ABCF89DE82941C09CA4603869FFE,
	NULL,
	GooglePurchaseHelper_MakeGooglePurchase_mB1D03BE16894468FAD37CA3B765042FD7DFFBFC0,
	U3CU3Ec__DisplayClass0_0__ctor_mA8DA94D212F83CE6FBB8736D6818BE7E8DB4BE53,
	U3CU3Ec__DisplayClass0_0_U3CMakeGooglePurchaseU3Eb__0_m64FD29895DBB5F356BDA17D445E361A4A22C8000,
	GoogleReceiptEncoder_EncodeReceipt_m3D071194A7B95D9943AF238821A37D4E3D573ED9,
	GoogleReceiptEncoder_FormatPayload_mF4A88E96740904809B460F90EF9F5B4AF8553BF7,
	SkuDetailsConverter_ConvertOnQuerySkuDetailsResponse_m8A2592F7979335D1B3E8E8BE7FF6E036BF8D6201,
	SkuDetailsConverter_ConvertSkusDetailsToProducts_mCEBB8FCD32C796D5EA0DE9147E5B5DE90F22CA11,
	SkuDetailsConverter_ToListProducts_m32FE68712D4ABADF86635C812FD29D32C1BB0024,
	SkuDetailsConverter_BuildProductDescription_m259B53FE14C02A092A6FC08AA83A0EDB7D7B4CD1,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_m64CC0E5F4C0D6830A5A5260F4485A52A07778445,
};
static const int32_t s_InvokerIndices[691] = 
{
	10,
	14,
	14,
	14,
	14,
	14,
	181,
	14,
	10,
	10,
	695,
	14,
	28,
	144,
	26,
	26,
	90,
	26,
	26,
	27,
	27,
	26,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	27,
	14,
	32,
	26,
	206,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	27,
	26,
	23,
	0,
	0,
	4,
	4,
	126,
	1,
	195,
	26,
	23,
	26,
	26,
	26,
	23,
	948,
	26,
	26,
	27,
	27,
	31,
	27,
	26,
	26,
	23,
	26,
	1,
	14,
	9,
	26,
	27,
	23,
	23,
	9,
	23,
	9,
	27,
	425,
	0,
	23,
	26,
	23,
	9,
	26,
	23,
	1689,
	26,
	23,
	23,
	23,
	23,
	27,
	26,
	125,
	425,
	26,
	27,
	206,
	125,
	125,
	149,
	27,
	23,
	26,
	27,
	26,
	195,
	28,
	27,
	23,
	26,
	23,
	26,
	4,
	27,
	27,
	27,
	27,
	27,
	27,
	206,
	206,
	26,
	23,
	23,
	26,
	3,
	23,
	9,
	28,
	9,
	28,
	23,
	27,
	14,
	26,
	23,
	26,
	26,
	206,
	206,
	206,
	26,
	26,
	26,
	26,
	31,
	118,
	26,
	27,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	32,
	1589,
	27,
	26,
	31,
	118,
	118,
	118,
	23,
	26,
	3,
	23,
	9,
	26,
	26,
	27,
	425,
	206,
	425,
	206,
	121,
	26,
	26,
	27,
	26,
	26,
	26,
	23,
	23,
	32,
	26,
	23,
	32,
	26,
	23,
	26,
	32,
	26,
	23,
	26,
	206,
	27,
	27,
	4,
	23,
	26,
	206,
	27,
	27,
	88,
	26,
	27,
	27,
	0,
	26,
	26,
	26,
	27,
	27,
	149,
	23,
	23,
	88,
	88,
	23,
	88,
	0,
	4,
	0,
	3,
	23,
	9,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	26,
	26,
	23,
	1690,
	425,
	206,
	28,
	90,
	23,
	9,
	3,
	23,
	41,
	41,
	23,
	23,
	23,
	9,
	23,
	26,
	26,
	23,
	26,
	26,
	154,
	28,
	14,
	26,
	89,
	23,
	26,
	26,
	26,
	26,
	26,
	27,
	27,
	26,
	26,
	206,
	206,
	26,
	27,
	27,
	14,
	10,
	115,
	154,
	154,
	28,
	14,
	23,
	0,
	782,
	26,
	144,
	1,
	0,
	26,
	14,
	23,
	26,
	26,
	23,
	3,
	23,
	495,
	107,
	23,
	23,
	1691,
	782,
	121,
	49,
	3,
	27,
	1,
	26,
	26,
	122,
	1592,
	156,
	144,
	58,
	23,
	32,
	23,
	89,
	14,
	23,
	14,
	32,
	23,
	89,
	14,
	23,
	14,
	122,
	144,
	0,
	23,
	23,
	23,
	14,
	14,
	0,
	23,
	3,
	23,
	28,
	14,
	14,
	441,
	14,
	23,
	14,
	14,
	23,
	14,
	14,
	3,
	165,
	89,
	0,
	0,
	4,
	23,
	3,
	23,
	9,
	14,
	14,
	23,
	14,
	26,
	14,
	26,
	181,
	208,
	14,
	26,
	10,
	32,
	14,
	26,
	14,
	26,
	10,
	32,
	10,
	32,
	695,
	323,
	14,
	26,
	14,
	26,
	14,
	14,
	26,
	14,
	26,
	1692,
	1693,
	743,
	1694,
	14,
	26,
	743,
	14,
	14,
	26,
	14,
	26,
	1692,
	26,
	14,
	14,
	0,
	26,
	1693,
	26,
	1694,
	26,
	49,
	4,
	23,
	1695,
	1696,
	4,
	111,
	589,
	4,
	121,
	121,
	121,
	3,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	14,
	26,
	1697,
	10,
	10,
	32,
	89,
	31,
	4,
	43,
	23,
	14,
	14,
	14,
	26,
	2,
	0,
	14,
	28,
	28,
	14,
	31,
	14,
	14,
	14,
	3,
	26,
	14,
	14,
	27,
	26,
	31,
	10,
	32,
	32,
	0,
	27,
	10,
	23,
	23,
	14,
	10,
	23,
	14,
	10,
	23,
	23,
	31,
	23,
	206,
	26,
	26,
	26,
	27,
	32,
	27,
	31,
	23,
	3,
	23,
	9,
	28,
	26,
	26,
	1690,
	425,
	23,
	23,
	14,
	26,
	26,
	26,
	27,
	27,
	27,
	27,
	-1,
	23,
	206,
	23,
	783,
	23,
	783,
	23,
	-1,
	1698,
	23,
	28,
	28,
	14,
	14,
	14,
	14,
	14,
	14,
	14,
	23,
	23,
	32,
	23,
	89,
	23,
	23,
	23,
	32,
	23,
	23,
	23,
	-1,
	-1,
	3,
	23,
	28,
	2,
	27,
	1,
	-1,
	112,
	14,
	14,
	14,
	14,
	14,
	14,
	181,
	10,
	89,
	14,
	14,
	10,
	14,
	10,
	10,
	695,
	14,
	28,
	144,
	26,
	34,
	23,
	-1,
	-1,
	49,
	149,
	58,
	23,
	26,
	31,
	90,
	23,
	3,
	32,
	23,
	89,
	14,
	23,
	14,
	4,
	108,
	4,
	4,
	4,
	4,
	26,
	26,
	28,
	27,
	156,
	156,
	28,
	28,
	425,
	425,
	26,
	0,
	27,
	89,
	89,
	27,
	27,
	4,
	108,
	4,
	4,
	4,
	27,
	26,
	26,
	26,
	28,
	27,
	156,
	425,
	425,
	425,
	26,
	27,
	26,
	425,
	26,
	26,
	26,
	26,
	125,
	26,
	27,
	27,
	-1,
	14,
	26,
	-1,
	1,
	23,
	9,
	128,
	2,
	149,
	0,
	0,
	0,
	94,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x0600010D, 5,  (void**)&AppleStoreImpl_MessageCallback_m908F963CFFEE198373DFA830A7E1F1EF9B8D998A_RuntimeMethod_var, 0 },
	{ 0x06000217, 6,  (void**)&FacebookStoreImpl_MessageCallback_m423510A98A7BAAB593083C1502FAA796B48ECBF5_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x0200009E, { 5, 2 } },
	{ 0x0600022B, { 0, 5 } },
	{ 0x0600024B, { 7, 5 } },
	{ 0x06000263, { 12, 2 } },
	{ 0x06000264, { 14, 2 } },
	{ 0x060002A9, { 16, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[17] = 
{
	{ (Il2CppRGCTXDataType)2, 12048 },
	{ (Il2CppRGCTXDataType)3, 11424 },
	{ (Il2CppRGCTXDataType)1, 9968 },
	{ (Il2CppRGCTXDataType)2, 9968 },
	{ (Il2CppRGCTXDataType)3, 11425 },
	{ (Il2CppRGCTXDataType)2, 9979 },
	{ (Il2CppRGCTXDataType)3, 11426 },
	{ (Il2CppRGCTXDataType)2, 12049 },
	{ (Il2CppRGCTXDataType)3, 11427 },
	{ (Il2CppRGCTXDataType)2, 9989 },
	{ (Il2CppRGCTXDataType)3, 11428 },
	{ (Il2CppRGCTXDataType)3, 11429 },
	{ (Il2CppRGCTXDataType)1, 9990 },
	{ (Il2CppRGCTXDataType)2, 9990 },
	{ (Il2CppRGCTXDataType)1, 9991 },
	{ (Il2CppRGCTXDataType)3, 11430 },
	{ (Il2CppRGCTXDataType)3, 11431 },
};
extern const Il2CppCodeGenModule g_StoresCodeGenModule;
const Il2CppCodeGenModule g_StoresCodeGenModule = 
{
	"Stores.dll",
	691,
	s_methodPointers,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	6,
	s_rgctxIndices,
	17,
	s_rgctxValues,
	NULL,
};
