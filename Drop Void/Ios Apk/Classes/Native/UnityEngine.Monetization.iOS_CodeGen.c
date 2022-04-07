#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_RuntimeMethod_var;
extern const RuntimeMethod* IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_RuntimeMethod_var;
extern const RuntimeMethod* IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_RuntimeMethod_var;
extern const RuntimeMethod* PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_RuntimeMethod_var;
extern const RuntimeMethod* PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_RuntimeMethod_var;
extern const RuntimeMethod* PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.Boolean UnityEngine.Monetization.Analytics::InitializeStandardEvents()
extern void Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9 (void);
// 0x00000002 System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String)
extern void Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19 (void);
// 0x00000003 System.Boolean UnityEngine.Monetization.Analytics::SetAnalyticsEventExtra(System.String,System.Object)
extern void Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592 (void);
// 0x00000004 System.Void UnityEngine.Monetization.Analytics::.cctor()
extern void Analytics__cctor_m5AA23D8A43EFA1C6FA0252FE36B4006274EF8638 (void);
// 0x00000005 System.Void UnityEngine.Monetization.Analytics::<s_StandardEventsAction>m__0(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61 (void);
// 0x00000006 UnityEngine.Monetization.IMonetizationPlatform UnityEngine.Monetization.Creator::CreatePlatform()
extern void Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8 (void);
// 0x00000007 System.Void UnityEngine.Monetization.IMonetizationPlatform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
// 0x00000008 System.Void UnityEngine.Monetization.IMonetizationPlatform::remove_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
// 0x00000009 System.String UnityEngine.Monetization.IMonetizationPlatform::get_version()
// 0x0000000A System.Void UnityEngine.Monetization.IMonetizationPlatform::Initialize(System.String,System.Boolean)
// 0x0000000B System.Boolean UnityEngine.Monetization.IMonetizationPlatform::IsReady(System.String)
// 0x0000000C UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.IMonetizationPlatform::GetPlacementContent(System.String)
// 0x0000000D System.Void UnityEngine.Monetization.IMonetizationPlatform::SetMetaData(UnityEngine.Monetization.MetaData)
// 0x0000000E System.Void UnityEngine.Monetization.ShowAdFinishCallback::.ctor(System.Object,System.IntPtr)
extern void ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2 (void);
// 0x0000000F System.Void UnityEngine.Monetization.ShowAdFinishCallback::Invoke(UnityEngine.Monetization.ShowResult)
extern void ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB (void);
// 0x00000010 System.IAsyncResult UnityEngine.Monetization.ShowAdFinishCallback::BeginInvoke(UnityEngine.Monetization.ShowResult,System.AsyncCallback,System.Object)
extern void ShowAdFinishCallback_BeginInvoke_m2A6F9BE3C8CC66A863671A059EBC591C48117B66 (void);
// 0x00000011 System.Void UnityEngine.Monetization.ShowAdFinishCallback::EndInvoke(System.IAsyncResult)
extern void ShowAdFinishCallback_EndInvoke_m4F4B6400A9DF0AB97541975E85BAA2A81D008609 (void);
// 0x00000012 System.Void UnityEngine.Monetization.ShowAdStartCallback::.ctor(System.Object,System.IntPtr)
extern void ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6 (void);
// 0x00000013 System.Void UnityEngine.Monetization.ShowAdStartCallback::Invoke()
extern void ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD (void);
// 0x00000014 System.IAsyncResult UnityEngine.Monetization.ShowAdStartCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern void ShowAdStartCallback_BeginInvoke_mE5B3543BB67A23226FB968290F8A1E29D647D06C (void);
// 0x00000015 System.Void UnityEngine.Monetization.ShowAdStartCallback::EndInvoke(System.IAsyncResult)
extern void ShowAdStartCallback_EndInvoke_m7F94F4D81D9C579A62336747A1A90D75A9C4787A (void);
// 0x00000016 System.Void UnityEngine.Monetization.IShowAdOperations::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>)
// 0x00000017 System.Void UnityEngine.Monetization.IosAnalytics::.ctor()
extern void IosAnalytics__ctor_m8C4342459031CF482AC883C29C8440AA7386F49C (void);
// 0x00000018 System.Void UnityEngine.Monetization.IosAnalytics::set_Instance(UnityEngine.Monetization.IosAnalytics)
extern void IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215 (void);
// 0x00000019 System.Void UnityEngine.Monetization.IosAnalytics::UANAEngineDelegateSetTriggerAddExtras(UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras)
extern void IosAnalytics_UANAEngineDelegateSetTriggerAddExtras_mDA06D57D342D7F4B72AEDCDB0CDC5F3D109A00EE (void);
// 0x0000001A System.Void UnityEngine.Monetization.IosAnalytics::InitializeUANAEngineWrapper()
extern void IosAnalytics_InitializeUANAEngineWrapper_mBD978D4B04ED2DC8B0B43CF5BA0D4ABD568AFD7D (void);
// 0x0000001B System.Void UnityEngine.Monetization.IosAnalytics::TriggerAddExtras(System.String)
extern void IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A (void);
// 0x0000001C System.Void UnityEngine.Monetization.IosAnalytics::Initialize()
extern void IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816 (void);
// 0x0000001D System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::.ctor(System.Object,System.IntPtr)
extern void unityAnalyticsTriggerAddExtras__ctor_m781966E811E862FC94ED3D80C57ED1AD084F3601 (void);
// 0x0000001E System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::Invoke(System.String)
extern void unityAnalyticsTriggerAddExtras_Invoke_m6766F79627D0707FEDD0B1DABFA43AFC0D330425 (void);
// 0x0000001F System.IAsyncResult UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void unityAnalyticsTriggerAddExtras_BeginInvoke_m8247C4036BFBEB264634435E8CF0D630BEBE6774 (void);
// 0x00000020 System.Void UnityEngine.Monetization.IosAnalytics_unityAnalyticsTriggerAddExtras::EndInvoke(System.IAsyncResult)
extern void unityAnalyticsTriggerAddExtras_EndInvoke_m8564F34B8FC3EE9ED52D3B36132595AC8EDD0386 (void);
// 0x00000021 System.Void UnityEngine.Monetization.IosPlacementContentOperations::.ctor(System.IntPtr)
extern void IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4 (void);
// 0x00000022 System.Void UnityEngine.Monetization.IosPlacementContentOperations::UnityMonetizationPlacementContentReleaseReference(System.IntPtr)
extern void IosPlacementContentOperations_UnityMonetizationPlacementContentReleaseReference_m62ECB5920BFC87A7EFB344D417E82A2425BADCC7 (void);
// 0x00000023 System.IntPtr UnityEngine.Monetization.IosPlacementContentOperations::get_placementContentPtr()
extern void IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC (void);
// 0x00000024 System.Void UnityEngine.Monetization.IosPlacementContentOperations::Finalize()
extern void IosPlacementContentOperations_Finalize_m2791BE3666A0FDEE5FBDD7307F9DF4AAF80B3E47 (void);
// 0x00000025 System.Void UnityEngine.Monetization.IosRewardedOperations::.ctor(System.IntPtr)
extern void IosRewardedOperations__ctor_m3EA9766F9296562477BA2EA752C567E839B017C9 (void);
// 0x00000026 System.Void UnityEngine.Monetization.IosShowAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
extern void IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F (void);
// 0x00000027 System.Void UnityEngine.Monetization.IosShowAdOperations::UnityMonetizationPlacementContentShowAd(System.IntPtr,UnityEngine.Monetization.ShowAdStartCallback,UnityEngine.Monetization.ShowAdFinishCallback)
extern void IosShowAdOperations_UnityMonetizationPlacementContentShowAd_m0AB00FB9B6E5C589C04C36128EC43BE7A2114B3A (void);
// 0x00000028 System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs>)
extern void IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4 (void);
// 0x00000029 System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdFinished(System.EventHandler`1<UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs>)
extern void IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7 (void);
// 0x0000002A System.Void UnityEngine.Monetization.IosShowAdOperations::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern void IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343 (void);
// 0x0000002B System.Void UnityEngine.Monetization.IosShowAdOperations::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern void IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975 (void);
// 0x0000002C System.Void UnityEngine.Monetization.IosShowAdOperations::StartHandler(System.Object,System.EventArgs)
extern void IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22 (void);
// 0x0000002D System.Void UnityEngine.Monetization.IosShowAdOperations::FinishHandler(System.Object,UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs)
extern void IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7 (void);
// 0x0000002E System.Void UnityEngine.Monetization.IosShowAdOperations::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>)
extern void IosShowAdOperations_Show_m478B3D02F1EA7777B15B2A74E075E49F4C5767F2 (void);
// 0x0000002F System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdFinishedCallback(UnityEngine.Monetization.ShowResult)
extern void IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2 (void);
// 0x00000030 System.Void UnityEngine.Monetization.IosShowAdOperations::OnAdStartedCallback()
extern void IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F (void);
// 0x00000031 System.Void UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs::.ctor(UnityEngine.Monetization.ShowResult)
extern void AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A (void);
// 0x00000032 UnityEngine.Monetization.ShowResult UnityEngine.Monetization.IosShowAdOperations_AdFinishedEventArgs::get_result()
extern void AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC (void);
// 0x00000033 System.Void UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::.ctor()
extern void U3CFinishHandlerU3Ec__AnonStorey0__ctor_m5C5BFE0270B8FAC2CDF2189E261A0DA61C6B7952 (void);
// 0x00000034 System.Void UnityEngine.Monetization.IosShowAdOperations_<FinishHandler>c__AnonStorey0::<>m__0()
extern void U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6 (void);
// 0x00000035 System.Void UnityEngine.Monetization.IosPromoAdOperations::.ctor(System.IntPtr,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
extern void IosPromoAdOperations__ctor_m5CFBBB2E0E3386B831BC8D77EA1E668BEA37939B (void);
// 0x00000036 System.String UnityEngine.Monetization.IosPromoAdOperations::UnityMonetizationGetPromoAdMetadata(System.IntPtr)
extern void IosPromoAdOperations_UnityMonetizationGetPromoAdMetadata_mF089924830D7ABEADF93D027EEFDDDAF6557AA53 (void);
// 0x00000037 UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.IosPromoAdOperations::GetMetadataForObjCObject(System.IntPtr)
extern void IosPromoAdOperations_GetMetadataForObjCObject_m0D4748AE4376EF29ACFED2DEE4F5688272F6D61F (void);
// 0x00000038 UnityEngine.Monetization.PromoMetadata UnityEngine.Monetization.PromoMetadataJsonDeserializer::Deserialize(System.String)
extern void PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70 (void);
// 0x00000039 System.TimeSpan UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetOfferDuration(System.Object)
extern void PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A (void);
// 0x0000003A System.DateTime UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetImpressionDateTime(System.Object)
extern void PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3 (void);
// 0x0000003B UnityEngine.Monetization.PromoItem[] UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemArray(System.Object)
extern void PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8 (void);
// 0x0000003C UnityEngine.Monetization.PromoItem UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetItemFromDictionary(System.Object)
extern void PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076 (void);
// 0x0000003D System.Decimal UnityEngine.Monetization.PromoMetadataJsonDeserializer::ParseDecimal(System.Object)
extern void PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1 (void);
// 0x0000003E UnityEngine.Monetization.Product UnityEngine.Monetization.PromoMetadataJsonDeserializer::GetProductFromDictionary(System.Object)
extern void PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9 (void);
// 0x0000003F System.Void UnityEngine.Monetization.MetaData::.ctor(System.String)
extern void MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853 (void);
// 0x00000040 System.String UnityEngine.Monetization.MetaData::get_category()
extern void MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416 (void);
// 0x00000041 System.Void UnityEngine.Monetization.MetaData::Set(System.String,System.Object)
extern void MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8 (void);
// 0x00000042 System.String UnityEngine.Monetization.MetaData::ToJSON()
extern void MetaData_ToJSON_m00E1A6255AC7E46ACDAD72FDF4983BA19D87998E (void);
// 0x00000043 System.Object UnityEngine.Monetization.MiniJSON.Json::Deserialize(System.String)
extern void Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5 (void);
// 0x00000044 System.String UnityEngine.Monetization.MiniJSON.Json::Serialize(System.Object)
extern void Json_Serialize_m7AEC14A2398EC183BCB6DF25ABA5D1E258E29AD3 (void);
// 0x00000045 System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::.ctor(System.String)
extern void Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F (void);
// 0x00000046 System.Boolean UnityEngine.Monetization.MiniJSON.Json_Parser::IsWordBreak(System.Char)
extern void Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B (void);
// 0x00000047 System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::Parse(System.String)
extern void Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B (void);
// 0x00000048 System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::Dispose()
extern void Parser_Dispose_m1082CF29EC957B98C83FC3EC620104635F2DBF60 (void);
// 0x00000049 System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Monetization.MiniJSON.Json_Parser::ParseObject()
extern void Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45 (void);
// 0x0000004A System.Collections.Generic.List`1<System.Object> UnityEngine.Monetization.MiniJSON.Json_Parser::ParseArray()
extern void Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9 (void);
// 0x0000004B System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseValue()
extern void Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270 (void);
// 0x0000004C System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseByToken(UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN)
extern void Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C (void);
// 0x0000004D System.String UnityEngine.Monetization.MiniJSON.Json_Parser::ParseString()
extern void Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8 (void);
// 0x0000004E System.Object UnityEngine.Monetization.MiniJSON.Json_Parser::ParseNumber()
extern void Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D (void);
// 0x0000004F System.Void UnityEngine.Monetization.MiniJSON.Json_Parser::EatWhitespace()
extern void Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74 (void);
// 0x00000050 System.Char UnityEngine.Monetization.MiniJSON.Json_Parser::get_PeekChar()
extern void Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F (void);
// 0x00000051 System.Char UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextChar()
extern void Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8 (void);
// 0x00000052 System.String UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextWord()
extern void Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5 (void);
// 0x00000053 UnityEngine.Monetization.MiniJSON.Json_Parser_TOKEN UnityEngine.Monetization.MiniJSON.Json_Parser::get_NextToken()
extern void Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A (void);
// 0x00000054 System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::.ctor()
extern void Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683 (void);
// 0x00000055 System.String UnityEngine.Monetization.MiniJSON.Json_Serializer::Serialize(System.Object)
extern void Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907 (void);
// 0x00000056 System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeValue(System.Object)
extern void Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B (void);
// 0x00000057 System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeObject(System.Collections.IDictionary)
extern void Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67 (void);
// 0x00000058 System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeArray(System.Collections.IList)
extern void Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1 (void);
// 0x00000059 System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeString(System.String)
extern void Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62 (void);
// 0x0000005A System.Void UnityEngine.Monetization.MiniJSON.Json_Serializer::SerializeOther(System.Object)
extern void Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325 (void);
// 0x0000005B System.Void UnityEngine.Monetization.Monetization::.cctor()
extern void Monetization__cctor_m15A8872B1A25BCC3DA66C66D006BFD73EB88F6F3 (void);
// 0x0000005C System.String UnityEngine.Monetization.Monetization::get_version()
extern void Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62 (void);
// 0x0000005D System.Boolean UnityEngine.Monetization.Monetization::get_isInitialized()
extern void Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0 (void);
// 0x0000005E System.Void UnityEngine.Monetization.Monetization::set_isInitialized(System.Boolean)
extern void Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7 (void);
// 0x0000005F System.Boolean UnityEngine.Monetization.Monetization::IsReady(System.String)
extern void Monetization_IsReady_m0BEBFFCEBDFAD89D854C3481D8C37265C2595093 (void);
// 0x00000060 System.Void UnityEngine.Monetization.Monetization::Initialize(System.String,System.Boolean)
extern void Monetization_Initialize_mDF1D1F08799564B8F300DB4C0507351261A8DFD5 (void);
// 0x00000061 UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Monetization::GetPlacementContent(System.String)
extern void Monetization_GetPlacementContent_mC9FB6BD2A2FEB6A742DF8DDB284C228AB9FFAE15 (void);
// 0x00000062 System.Void UnityEngine.Monetization.Monetization::SetMetaData(UnityEngine.Monetization.MetaData)
extern void Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67 (void);
// 0x00000063 System.Void UnityEngine.Monetization.Monetization::OnError(System.Object,UnityEngine.Monetization.UnityServicesErrorEventArgs)
extern void Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD (void);
// 0x00000064 System.Void UnityEngine.Monetization.Platform::.ctor()
extern void Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D (void);
// 0x00000065 System.Boolean UnityEngine.Monetization.Platform::UnityMonetizationIsReady(System.String)
extern void Platform_UnityMonetizationIsReady_m02660D666B8E6CAEDABE6BAC07806E9777F3A0A0 (void);
// 0x00000066 System.Void UnityEngine.Monetization.Platform::UnityMonetizationInitialize(System.String,System.Boolean)
extern void Platform_UnityMonetizationInitialize_m31765AA977BEC99DBE33E5FEC30EE74444690BB9 (void);
// 0x00000067 System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentType(System.IntPtr)
extern void Platform_UnityMonetizationGetPlacementContentType_m28261F243410B5CC928620DC3928914FCEE44B52 (void);
// 0x00000068 System.String UnityEngine.Monetization.Platform::UnityMonetizationGetPlacementContentExtras(System.IntPtr)
extern void Platform_UnityMonetizationGetPlacementContentExtras_m040B800828B20A554503B1E01F079A8174C69E53 (void);
// 0x00000069 System.Void UnityEngine.Monetization.Platform::UnityAdsSetMetaData(System.String,System.String)
extern void Platform_UnityAdsSetMetaData_mA0A9D3383ABDB80F3FFEB03BA937A64C8DC9CE9D (void);
// 0x0000006A System.String UnityEngine.Monetization.Platform::UnityAdsGetVersion()
extern void Platform_UnityAdsGetVersion_m97C4F189DF02CFC87C923E5612EC7A1BA74960FB (void);
// 0x0000006B System.Void UnityEngine.Monetization.Platform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
extern void Platform_add_onError_mDF22B9541BC65ABC702B17552399E33806E393B9 (void);
// 0x0000006C System.Void UnityEngine.Monetization.Platform::remove_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
extern void Platform_remove_onError_mFDCCEA5BBDD433C26D9429AB2F499FB0C997EFD0 (void);
// 0x0000006D System.Void UnityEngine.Monetization.Platform::Initialize(System.String,System.Boolean)
extern void Platform_Initialize_m6AE746F98A64A5F5105AF115B1889818563E24A9 (void);
// 0x0000006E System.Boolean UnityEngine.Monetization.Platform::IsReady(System.String)
extern void Platform_IsReady_m0481099A2684D49432CE2E711553A36078A81766 (void);
// 0x0000006F UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform::GetPlacementContent(System.String)
extern void Platform_GetPlacementContent_mEAF4E9BCC75E68266E91AA3A79F66CCB8A98BB68 (void);
// 0x00000070 System.Void UnityEngine.Monetization.Platform::SetMetaData(UnityEngine.Monetization.MetaData)
extern void Platform_SetMetaData_m67CC76B190FB2E83018026CDD72B34F152ED95D8 (void);
// 0x00000071 System.String UnityEngine.Monetization.Platform::get_version()
extern void Platform_get_version_mDABC3E98F5FE88026F5DA15D15CBA9847DD3292C (void);
// 0x00000072 System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentReady(System.String,System.IntPtr)
extern void Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2 (void);
// 0x00000073 System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Monetization.Platform::GetPlacementContentExtras(System.IntPtr)
extern void Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651 (void);
// 0x00000074 UnityEngine.Monetization.PlacementContentType UnityEngine.Monetization.Platform::GetPlacementContentTypeForPlacementContentPtr(System.IntPtr)
extern void Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213 (void);
// 0x00000075 UnityEngine.Monetization.IPlacementContentOperations UnityEngine.Monetization.Platform::GetPlacementContentOperationsForType(UnityEngine.Monetization.PlacementContentType,System.IntPtr)
extern void Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7 (void);
// 0x00000076 UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.Platform::GetPlacementContentForType(UnityEngine.Monetization.PlacementContentType,System.String,UnityEngine.Monetization.IPlacementContentOperations)
extern void Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D (void);
// 0x00000077 System.Void UnityEngine.Monetization.Platform::OnNativePlacementContentStateChanged(System.String,System.IntPtr,System.Int32,System.Int32)
extern void Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA (void);
// 0x00000078 System.Void UnityEngine.Monetization.Platform::OnNativeError(System.Int64,System.String)
extern void Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5 (void);
// 0x00000079 System.Void UnityEngine.Monetization.Platform::.cctor()
extern void Platform__cctor_m0314C5697872BAF6856977DE8EC9ABBC1D3677E6 (void);
// 0x0000007A System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::.cctor()
extern void PlatformCallbacksWrapper__cctor_m1972E1BCD087BEDE15FF362358EFE6CF7B4E498D (void);
// 0x0000007B UnityEngine.Monetization.Platform UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::get_Platform()
extern void PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D (void);
// 0x0000007C System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::set_Platform(UnityEngine.Monetization.Platform)
extern void PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51 (void);
// 0x0000007D System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::UnityMonetizationSetMonetizationCallbacks(UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_UnityMonetiztionCallbacks&)
extern void PlatformCallbacksWrapper_UnityMonetizationSetMonetizationCallbacks_mEE2AEE69825D41327908C5F64375BA12E3F8B70E (void);
// 0x0000007E System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnPlacementContentReady(System.String,System.IntPtr)
extern void PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F (void);
// 0x0000007F System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnPlacementContentChanged(System.String,System.IntPtr,System.Int32,System.Int32)
extern void PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC (void);
// 0x00000080 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper::OnError(System.Int64,System.String)
extern void PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10 (void);
// 0x00000081 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::.ctor(System.Object,System.IntPtr)
extern void OnPlacementContentReadyCallback__ctor_m72979DE2865B20A30FCD9A095404F5C691122214 (void);
// 0x00000082 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::Invoke(System.String,System.IntPtr)
extern void OnPlacementContentReadyCallback_Invoke_mBD1848E5DF2608BC695D8D76E577E17F521320D3 (void);
// 0x00000083 System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::BeginInvoke(System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void OnPlacementContentReadyCallback_BeginInvoke_mFE4F390B1B9BC7A71C5F3225166652F8F993CE5C (void);
// 0x00000084 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentReadyCallback::EndInvoke(System.IAsyncResult)
extern void OnPlacementContentReadyCallback_EndInvoke_m3874B2C8AEE51A80050455BFC4E3D0896B323CFF (void);
// 0x00000085 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::.ctor(System.Object,System.IntPtr)
extern void OnPlacementContentStateChangedCallback__ctor_m879A48543E431BF08DAD8950D3F82DBABF3029A5 (void);
// 0x00000086 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::Invoke(System.String,System.IntPtr,System.Int32,System.Int32)
extern void OnPlacementContentStateChangedCallback_Invoke_m4D58296B5EAC9F060DF22359D49E9BF49F8F62B5 (void);
// 0x00000087 System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::BeginInvoke(System.String,System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void OnPlacementContentStateChangedCallback_BeginInvoke_m48817263A145FEF8EDF67C52ADB0AB56C878FA11 (void);
// 0x00000088 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnPlacementContentStateChangedCallback::EndInvoke(System.IAsyncResult)
extern void OnPlacementContentStateChangedCallback_EndInvoke_m7AF80364306AA8785CEAB6D1A9F707670FC4CAD3 (void);
// 0x00000089 System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::.ctor(System.Object,System.IntPtr)
extern void OnErrorCallback__ctor_m3B8F314C59F530BCBA2A26A66B2C681856F88819 (void);
// 0x0000008A System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::Invoke(System.Int64,System.String)
extern void OnErrorCallback_Invoke_m3A4C38829C3AA6A20C78B90B1232E2A3BA7AC0B0 (void);
// 0x0000008B System.IAsyncResult UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::BeginInvoke(System.Int64,System.String,System.AsyncCallback,System.Object)
extern void OnErrorCallback_BeginInvoke_mB560035D4D3D6C570E4176578D469CED5883194B (void);
// 0x0000008C System.Void UnityEngine.Monetization.Platform_PlatformCallbacksWrapper_OnErrorCallback::EndInvoke(System.IAsyncResult)
extern void OnErrorCallback_EndInvoke_mBBFFFFCC2B5D4BD4F1FB8269E7DD9C7D7DBDF2FC (void);
// 0x0000008D System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::.ctor()
extern void U3COnNativePlacementContentReadyU3Ec__AnonStorey0__ctor_m97B2233A013BC6430BA3F7A486A91571E3438FA2 (void);
// 0x0000008E System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentReady>c__AnonStorey0::<>m__0()
extern void U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58 (void);
// 0x0000008F System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey1::.ctor()
extern void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1__ctor_m5EF63C2FC89596DB5C9CDEBF53919ED4337810F4 (void);
// 0x00000090 System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::.ctor()
extern void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2__ctor_mAA98EEB2209D25027B63B08B40DD13492DEC1D17 (void);
// 0x00000091 System.Void UnityEngine.Monetization.Platform_<OnNativePlacementContentStateChanged>c__AnonStorey2::<>m__0()
extern void U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE (void);
// 0x00000092 System.Void UnityEngine.Monetization.Placeholder::.ctor()
extern void Placeholder__ctor_m54DA36C5683E6814BFDF782FA769CFB74EFE899D (void);
// 0x00000093 System.Void UnityEngine.Monetization.Placeholder::add_onStart(UnityEngine.Monetization.ShowAdStartCallback)
extern void Placeholder_add_onStart_m1424BE3F3C16C13099CDF7B981B70C30981B9E40 (void);
// 0x00000094 System.Void UnityEngine.Monetization.Placeholder::remove_onStart(UnityEngine.Monetization.ShowAdStartCallback)
extern void Placeholder_remove_onStart_m921D1406E2184705FA31128C74E26EE0F29B1165 (void);
// 0x00000095 System.Void UnityEngine.Monetization.Placeholder::add_onFinish(UnityEngine.Monetization.ShowAdFinishCallback)
extern void Placeholder_add_onFinish_m81A539110A0E54EE7CB6CE12BB300A031D529264 (void);
// 0x00000096 System.Void UnityEngine.Monetization.Placeholder::remove_onFinish(UnityEngine.Monetization.ShowAdFinishCallback)
extern void Placeholder_remove_onFinish_m467402379788590BAEF37D78401E71901185F06B (void);
// 0x00000097 UnityEngine.Texture2D UnityEngine.Monetization.Placeholder::TextureFromEmbeddedResource(System.String)
extern void Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505 (void);
// 0x00000098 System.Void UnityEngine.Monetization.Placeholder::Awake()
extern void Placeholder_Awake_m09CEF99F85BB7AF04AE046C401E6435AC348C3E2 (void);
// 0x00000099 System.Void UnityEngine.Monetization.Placeholder::Show(System.String,System.Boolean)
extern void Placeholder_Show_mA07625053AE95912C50543D284270F440F67BA0F (void);
// 0x0000009A System.Void UnityEngine.Monetization.Placeholder::OnGUI()
extern void Placeholder_OnGUI_mB177A7010188F5942209969FA862F4D76F592027 (void);
// 0x0000009B System.Void UnityEngine.Monetization.Placeholder::OnApplicationQuit()
extern void Placeholder_OnApplicationQuit_m84E7C381792BF02574B4E1B966734FAB314D60E3 (void);
// 0x0000009C System.Void UnityEngine.Monetization.Placeholder::ModalWindowFunction(System.Int32)
extern void Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C (void);
// 0x0000009D System.Void UnityEngine.Monetization.PlacementContent::.ctor(System.String,UnityEngine.Monetization.IPlacementContentOperations)
extern void PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136 (void);
// 0x0000009E System.Void UnityEngine.Monetization.PlacementContent::set_placementId(System.String)
extern void PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5 (void);
// 0x0000009F System.Void UnityEngine.Monetization.PlacementContent::set_extras(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern void PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7 (void);
// 0x000000A0 System.Void UnityEngine.Monetization.PlacementContent::set_placementContentOperations(UnityEngine.Monetization.IPlacementContentOperations)
extern void PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D (void);
// 0x000000A1 System.Void UnityEngine.Monetization.RewardablePlacementContent::.ctor(System.String,UnityEngine.Monetization.IRewardedOperations)
extern void RewardablePlacementContent__ctor_m0F9474629B40CAE3F1E228CE84AE89BC60426288 (void);
// 0x000000A2 System.Void UnityEngine.Monetization.ShowAdYield::.ctor()
extern void ShowAdYield__ctor_m240765C70263B816520AC89DE2039F3986F382EB (void);
// 0x000000A3 System.Void UnityEngine.Monetization.ShowAdYield::set_result(UnityEngine.Monetization.ShowResult)
extern void ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929 (void);
// 0x000000A4 System.Boolean UnityEngine.Monetization.ShowAdYield::get_showing()
extern void ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F (void);
// 0x000000A5 System.Void UnityEngine.Monetization.ShowAdYield::set_showing(System.Boolean)
extern void ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE (void);
// 0x000000A6 System.Boolean UnityEngine.Monetization.ShowAdYield::get_keepWaiting()
extern void ShowAdYield_get_keepWaiting_m55BCF39FFCA1D46E6611F9692516F62A38CB0CA1 (void);
// 0x000000A7 System.Void UnityEngine.Monetization.ShowAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IShowAdOperations)
extern void ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952 (void);
// 0x000000A8 System.String UnityEngine.Monetization.ShowAdPlacementContent::get_gamerSid()
extern void ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD (void);
// 0x000000A9 System.Void UnityEngine.Monetization.ShowAdPlacementContent::set_showing(System.Boolean)
extern void ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF (void);
// 0x000000AA UnityEngine.Monetization.IShowAdOperations UnityEngine.Monetization.ShowAdPlacementContent::get_showAdOperations()
extern void ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F (void);
// 0x000000AB UnityEngine.Monetization.ShowAdYield UnityEngine.Monetization.ShowAdPlacementContent::Show(System.Nullable`1<UnityEngine.Monetization.ShowAdCallbacks>)
extern void ShowAdPlacementContent_Show_mC52CACC70A3FA7177A087F9ED12B3A20CA52287C (void);
// 0x000000AC System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::.ctor()
extern void U3CShowU3Ec__AnonStorey0__ctor_mAE624C059D9C43B942ECA5DA0BB1A72F0EB1204D (void);
// 0x000000AD System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::<>m__0(UnityEngine.Monetization.ShowResult)
extern void U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856 (void);
// 0x000000AE System.Void UnityEngine.Monetization.ShowAdPlacementContent_<Show>c__AnonStorey0::<>m__1()
extern void U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F (void);
// 0x000000AF System.Void UnityEngine.Monetization.PromoAdPlacementContent::.ctor(System.String,UnityEngine.Monetization.IPromoAdOperations)
extern void PromoAdPlacementContent__ctor_m482DFF7BC2FEE1F7C20DA63535B2B2EAD338A2DD (void);
// 0x000000B0 System.Void UnityEngine.Monetization.PromoAdPlacementContent::set_promoAdOperations(UnityEngine.Monetization.IPromoAdOperations)
extern void PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146 (void);
// 0x000000B1 System.Void UnityEngine.Monetization.PlacementContentReadyEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent)
extern void PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F (void);
// 0x000000B2 System.Void UnityEngine.Monetization.PlacementContentStateChangeEventArgs::.ctor(System.String,UnityEngine.Monetization.PlacementContent,UnityEngine.Monetization.PlacementContentState,UnityEngine.Monetization.PlacementContentState)
extern void PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48 (void);
// 0x000000B3 System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::.ctor(System.Int64,System.String)
extern void UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368 (void);
// 0x000000B4 System.Int64 UnityEngine.Monetization.UnityServicesErrorEventArgs::get_error()
extern void UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A (void);
// 0x000000B5 System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_error(System.Int64)
extern void UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A (void);
// 0x000000B6 System.String UnityEngine.Monetization.UnityServicesErrorEventArgs::get_message()
extern void UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659 (void);
// 0x000000B7 System.Void UnityEngine.Monetization.UnityServicesErrorEventArgs::set_message(System.String)
extern void UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31 (void);
// 0x000000B8 System.Void UnityEngine.Monetization.UnsupportedPlatform::.ctor()
extern void UnsupportedPlatform__ctor_mCFDBDAA0C48857D823D75E36B2B064ABD5AFF9FB (void);
// 0x000000B9 System.Void UnityEngine.Monetization.UnsupportedPlatform::add_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
extern void UnsupportedPlatform_add_onError_m38FEF05FB64F918802F2A729BE80CB1DECF0ED24 (void);
// 0x000000BA System.Void UnityEngine.Monetization.UnsupportedPlatform::remove_onError(System.EventHandler`1<UnityEngine.Monetization.UnityServicesErrorEventArgs>)
extern void UnsupportedPlatform_remove_onError_m570E81D1CF8B4AB5674AD8B44AD7D22F09972057 (void);
// 0x000000BB System.String UnityEngine.Monetization.UnsupportedPlatform::get_version()
extern void UnsupportedPlatform_get_version_m4F6214BEA30F0603E712C30F455305AAD3DE28D3 (void);
// 0x000000BC System.Void UnityEngine.Monetization.UnsupportedPlatform::Initialize(System.String,System.Boolean)
extern void UnsupportedPlatform_Initialize_mDFB595E9AE1E6824178DCC7C62B9C3812D16D8A3 (void);
// 0x000000BD System.Boolean UnityEngine.Monetization.UnsupportedPlatform::IsReady(System.String)
extern void UnsupportedPlatform_IsReady_m306C45B9EC7969E0268BB069DAB8EDE8140F31C7 (void);
// 0x000000BE UnityEngine.Monetization.PlacementContent UnityEngine.Monetization.UnsupportedPlatform::GetPlacementContent(System.String)
extern void UnsupportedPlatform_GetPlacementContent_m0187F86C5D04A1DD5651CDF8A022365F66DE9D94 (void);
// 0x000000BF System.Void UnityEngine.Monetization.UnsupportedPlatform::SetMetaData(UnityEngine.Monetization.MetaData)
extern void UnsupportedPlatform_SetMetaData_mBE7D6DAEF494B853F93FF7128718B97FF0464AD1 (void);
static Il2CppMethodPointer s_methodPointers[191] = 
{
	Analytics_InitializeStandardEvents_m5061B54E3E56D52A7B6C659F4B62077F319F12B9,
	Analytics_SetAnalyticsEventExtra_m54ADA6E4E680A8C196ECB19CAF40C8FD064B6B19,
	Analytics_SetAnalyticsEventExtra_m5CF854FBB4484C87A249A9E425B6464778805592,
	Analytics__cctor_m5AA23D8A43EFA1C6FA0252FE36B4006274EF8638,
	Analytics_U3Cs_StandardEventsActionU3Em__0_m4A377783C23DDC469112491CB1C9CA43CCF7CD61,
	Creator_CreatePlatform_m152C312A5D9DC38B64F680054B7F6D992F565CF8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ShowAdFinishCallback__ctor_m132B51C04BBF7AE71A7C68C4F0C4EA4A012B3AE2,
	ShowAdFinishCallback_Invoke_m3AEF83E83101DF695A50436E0E9937661F2584CB,
	ShowAdFinishCallback_BeginInvoke_m2A6F9BE3C8CC66A863671A059EBC591C48117B66,
	ShowAdFinishCallback_EndInvoke_m4F4B6400A9DF0AB97541975E85BAA2A81D008609,
	ShowAdStartCallback__ctor_m86540CB10426678163809FDC659CD1E0A38E3DF6,
	ShowAdStartCallback_Invoke_m0CAAA3B89FD31C9A4D13AA163D05D39F9B60E7AD,
	ShowAdStartCallback_BeginInvoke_mE5B3543BB67A23226FB968290F8A1E29D647D06C,
	ShowAdStartCallback_EndInvoke_m7F94F4D81D9C579A62336747A1A90D75A9C4787A,
	NULL,
	IosAnalytics__ctor_m8C4342459031CF482AC883C29C8440AA7386F49C,
	IosAnalytics_set_Instance_m9CA986134F1C628CAF5C47E1D3F409E584962215,
	IosAnalytics_UANAEngineDelegateSetTriggerAddExtras_mDA06D57D342D7F4B72AEDCDB0CDC5F3D109A00EE,
	IosAnalytics_InitializeUANAEngineWrapper_mBD978D4B04ED2DC8B0B43CF5BA0D4ABD568AFD7D,
	IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A,
	IosAnalytics_Initialize_m8927F8A62503868DCA0395760EC9E8513E9B1816,
	unityAnalyticsTriggerAddExtras__ctor_m781966E811E862FC94ED3D80C57ED1AD084F3601,
	unityAnalyticsTriggerAddExtras_Invoke_m6766F79627D0707FEDD0B1DABFA43AFC0D330425,
	unityAnalyticsTriggerAddExtras_BeginInvoke_m8247C4036BFBEB264634435E8CF0D630BEBE6774,
	unityAnalyticsTriggerAddExtras_EndInvoke_m8564F34B8FC3EE9ED52D3B36132595AC8EDD0386,
	IosPlacementContentOperations__ctor_m89C5B831667FAE68C034A6B743197B405623CBA4,
	IosPlacementContentOperations_UnityMonetizationPlacementContentReleaseReference_m62ECB5920BFC87A7EFB344D417E82A2425BADCC7,
	IosPlacementContentOperations_get_placementContentPtr_m61D2767D3483590F3C6AFCA221799047ACDB8BAC,
	IosPlacementContentOperations_Finalize_m2791BE3666A0FDEE5FBDD7307F9DF4AAF80B3E47,
	IosRewardedOperations__ctor_m3EA9766F9296562477BA2EA752C567E839B017C9,
	IosShowAdOperations__ctor_mAA0C994F1BF24ACC0CBCEC7D3D23D7AFFFC0CD8F,
	IosShowAdOperations_UnityMonetizationPlacementContentShowAd_m0AB00FB9B6E5C589C04C36128EC43BE7A2114B3A,
	IosShowAdOperations_add_OnAdFinished_mD21B1E17A25677EB3AE2D43266AC32B8A9B8DBF4,
	IosShowAdOperations_remove_OnAdFinished_mA00CE94CE0035DB85875B9307F0AC8538151BEF7,
	IosShowAdOperations_add_OnAdStarted_mFD4EF57029C9FFD314B1B28ECFABFA4B24518343,
	IosShowAdOperations_remove_OnAdStarted_mC843802EAFC84EE1EEFD253377E02A08C0517975,
	IosShowAdOperations_StartHandler_mC6F81DF25E5FE918A92EF4304D273238AA4D3C22,
	IosShowAdOperations_FinishHandler_m85A54FC4F4E2E78ECDDB7142176B7E350AEB01F7,
	IosShowAdOperations_Show_m478B3D02F1EA7777B15B2A74E075E49F4C5767F2,
	IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2,
	IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F,
	AdFinishedEventArgs__ctor_m0D6826BD31E622C74326E690105FD14BCD26601A,
	AdFinishedEventArgs_get_result_m46084637CAE8D018A565B696CFEDF590C00801FC,
	U3CFinishHandlerU3Ec__AnonStorey0__ctor_m5C5BFE0270B8FAC2CDF2189E261A0DA61C6B7952,
	U3CFinishHandlerU3Ec__AnonStorey0_U3CU3Em__0_m90DF58E5153230E0DE09DD4776F7172D37C4ADD6,
	IosPromoAdOperations__ctor_m5CFBBB2E0E3386B831BC8D77EA1E668BEA37939B,
	IosPromoAdOperations_UnityMonetizationGetPromoAdMetadata_mF089924830D7ABEADF93D027EEFDDDAF6557AA53,
	IosPromoAdOperations_GetMetadataForObjCObject_m0D4748AE4376EF29ACFED2DEE4F5688272F6D61F,
	PromoMetadataJsonDeserializer_Deserialize_m9328551E456454FB13DA6DCA70C08DE24C85AD70,
	PromoMetadataJsonDeserializer_GetOfferDuration_m6BEE3AA42C35DBA05BFF90400E71ABD6E5974C1A,
	PromoMetadataJsonDeserializer_GetImpressionDateTime_m73FDC27B8EFB30630ED3DDE90F4130CCD2AC9CF3,
	PromoMetadataJsonDeserializer_GetItemArray_m89C99B11B5267E6895B578CB6EB5C7B5FEBE92E8,
	PromoMetadataJsonDeserializer_GetItemFromDictionary_m2B78C12B5CB74339D0229F2A53451FA13AA24076,
	PromoMetadataJsonDeserializer_ParseDecimal_m354325A58F6914B261158FC5B6D3A544C4344DE1,
	PromoMetadataJsonDeserializer_GetProductFromDictionary_mEE30BEB8F33737FAAC78CF62B2E4B48AB6032AD9,
	MetaData__ctor_mD2AF645F45FBD0802807D3259A1E5F7851F14853,
	MetaData_get_category_mB9C16497DBABE762E37B7038DBB260D39446A416,
	MetaData_Set_m172CB9C97A4B7005D2DA6A61DF9B5AFCAB8A6CB8,
	MetaData_ToJSON_m00E1A6255AC7E46ACDAD72FDF4983BA19D87998E,
	Json_Deserialize_mD6C09617EF1E8F9EAF634BE5A0B14EF2F3637FA5,
	Json_Serialize_m7AEC14A2398EC183BCB6DF25ABA5D1E258E29AD3,
	Parser__ctor_mD633CF274C680F32811753D123623A2155C2732F,
	Parser_IsWordBreak_mEE26011AFB5E28B7578B600233733BAE73C3C54B,
	Parser_Parse_m8545A9F835861B74BFD8913B64CFB8E4D4D3493B,
	Parser_Dispose_m1082CF29EC957B98C83FC3EC620104635F2DBF60,
	Parser_ParseObject_mBD3ECF1FDCCD5DEFB275E8ADEDF2FBC8147CDD45,
	Parser_ParseArray_m48B1D79D6521F7531B932B7544F71A6D8E79C0A9,
	Parser_ParseValue_m18844328434C71D3C859BF98816135CE4D09C270,
	Parser_ParseByToken_m75ACC33C41D6D920204D5B540DEE2A4D22E5548C,
	Parser_ParseString_mFBC98386EEDB9BD79543C6BA42E134238DC68FC8,
	Parser_ParseNumber_mB8BE8C176172F371CA2C67E0E50B219F233D934D,
	Parser_EatWhitespace_mDB8B4D0C235AEF2690C28B666661AA8272DB6C74,
	Parser_get_PeekChar_m51B5519D0D07F1E5012F3E11EC0822A26E54542F,
	Parser_get_NextChar_m40814A5E3D9A24349026A8DCA7E21DFA74C1B7E8,
	Parser_get_NextWord_m9C7D7DB9C380B1F91A5D039756E2EDF091C766F5,
	Parser_get_NextToken_m44765F2160B564A5D050D41F2357A337DF1D186A,
	Serializer__ctor_mC916DDCC8EFA5149975E08C54C1556515BC9D683,
	Serializer_Serialize_m3E60FC7640E9A846C55396D4A0DEC33E16F84907,
	Serializer_SerializeValue_m290FD8F814A3A1D782EAFCBADA9E9654A3FC773B,
	Serializer_SerializeObject_m88FCF2EDEFDA1600874BC5E60DBFE36A657C4D67,
	Serializer_SerializeArray_m92F53EB45D9B57F4AED0183AAC99AF53DBBA94F1,
	Serializer_SerializeString_m10DD1F666916CF39028B006AFDDFE7ECC0F52F62,
	Serializer_SerializeOther_m14424A98BFCA7B145490B2A22AAD41030833E325,
	Monetization__cctor_m15A8872B1A25BCC3DA66C66D006BFD73EB88F6F3,
	Monetization_get_version_m8464C7832FE30F308DE2BD88707DE10B9F763B62,
	Monetization_get_isInitialized_m4DF12498B066872EE619D8DD62B18A90A1248CE0,
	Monetization_set_isInitialized_m2992E6A664797D14475546F4C8FE97D59F4E9CE7,
	Monetization_IsReady_m0BEBFFCEBDFAD89D854C3481D8C37265C2595093,
	Monetization_Initialize_mDF1D1F08799564B8F300DB4C0507351261A8DFD5,
	Monetization_GetPlacementContent_mC9FB6BD2A2FEB6A742DF8DDB284C228AB9FFAE15,
	Monetization_SetMetaData_m1FC5724EC12AE2B49562F76CFDD445ADA9AC1B67,
	Monetization_OnError_mFD10F995E3086DDA006ADBCA44BD219ACFA000CD,
	Platform__ctor_mCCB43FD99693610E2EF69D0F2260F842CE80B24D,
	Platform_UnityMonetizationIsReady_m02660D666B8E6CAEDABE6BAC07806E9777F3A0A0,
	Platform_UnityMonetizationInitialize_m31765AA977BEC99DBE33E5FEC30EE74444690BB9,
	Platform_UnityMonetizationGetPlacementContentType_m28261F243410B5CC928620DC3928914FCEE44B52,
	Platform_UnityMonetizationGetPlacementContentExtras_m040B800828B20A554503B1E01F079A8174C69E53,
	Platform_UnityAdsSetMetaData_mA0A9D3383ABDB80F3FFEB03BA937A64C8DC9CE9D,
	Platform_UnityAdsGetVersion_m97C4F189DF02CFC87C923E5612EC7A1BA74960FB,
	Platform_add_onError_mDF22B9541BC65ABC702B17552399E33806E393B9,
	Platform_remove_onError_mFDCCEA5BBDD433C26D9429AB2F499FB0C997EFD0,
	Platform_Initialize_m6AE746F98A64A5F5105AF115B1889818563E24A9,
	Platform_IsReady_m0481099A2684D49432CE2E711553A36078A81766,
	Platform_GetPlacementContent_mEAF4E9BCC75E68266E91AA3A79F66CCB8A98BB68,
	Platform_SetMetaData_m67CC76B190FB2E83018026CDD72B34F152ED95D8,
	Platform_get_version_mDABC3E98F5FE88026F5DA15D15CBA9847DD3292C,
	Platform_OnNativePlacementContentReady_m81ACAB3ACD9178B81897AA32834FC46D2CABE3A2,
	Platform_GetPlacementContentExtras_m9C23A95DD2454F34774B59BD9BA88AD6C69B3651,
	Platform_GetPlacementContentTypeForPlacementContentPtr_m22320B329C75C25CDA16E463B8361049D2071213,
	Platform_GetPlacementContentOperationsForType_m67D1D0BD26D2767825E450E4C66C2F8F913A70A7,
	Platform_GetPlacementContentForType_m0D744EE15FEE57D4866A2D659CAF5C51203CF84D,
	Platform_OnNativePlacementContentStateChanged_m411B886185518D229507D8D38FA3E4958880B0FA,
	Platform_OnNativeError_m76156475B1291FCE1855D11FA04BF672FF3BB3E5,
	Platform__cctor_m0314C5697872BAF6856977DE8EC9ABBC1D3677E6,
	PlatformCallbacksWrapper__cctor_m1972E1BCD087BEDE15FF362358EFE6CF7B4E498D,
	PlatformCallbacksWrapper_get_Platform_mC3B69710B30A9532127827718CFE5C9FBF90480D,
	PlatformCallbacksWrapper_set_Platform_mADB092A19F26F3BBB6B5183DA30FBAF77300DD51,
	PlatformCallbacksWrapper_UnityMonetizationSetMonetizationCallbacks_mEE2AEE69825D41327908C5F64375BA12E3F8B70E,
	PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F,
	PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC,
	PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10,
	OnPlacementContentReadyCallback__ctor_m72979DE2865B20A30FCD9A095404F5C691122214,
	OnPlacementContentReadyCallback_Invoke_mBD1848E5DF2608BC695D8D76E577E17F521320D3,
	OnPlacementContentReadyCallback_BeginInvoke_mFE4F390B1B9BC7A71C5F3225166652F8F993CE5C,
	OnPlacementContentReadyCallback_EndInvoke_m3874B2C8AEE51A80050455BFC4E3D0896B323CFF,
	OnPlacementContentStateChangedCallback__ctor_m879A48543E431BF08DAD8950D3F82DBABF3029A5,
	OnPlacementContentStateChangedCallback_Invoke_m4D58296B5EAC9F060DF22359D49E9BF49F8F62B5,
	OnPlacementContentStateChangedCallback_BeginInvoke_m48817263A145FEF8EDF67C52ADB0AB56C878FA11,
	OnPlacementContentStateChangedCallback_EndInvoke_m7AF80364306AA8785CEAB6D1A9F707670FC4CAD3,
	OnErrorCallback__ctor_m3B8F314C59F530BCBA2A26A66B2C681856F88819,
	OnErrorCallback_Invoke_m3A4C38829C3AA6A20C78B90B1232E2A3BA7AC0B0,
	OnErrorCallback_BeginInvoke_mB560035D4D3D6C570E4176578D469CED5883194B,
	OnErrorCallback_EndInvoke_mBBFFFFCC2B5D4BD4F1FB8269E7DD9C7D7DBDF2FC,
	U3COnNativePlacementContentReadyU3Ec__AnonStorey0__ctor_m97B2233A013BC6430BA3F7A486A91571E3438FA2,
	U3COnNativePlacementContentReadyU3Ec__AnonStorey0_U3CU3Em__0_mCA8C327B9AA35B3CDFFF37928CCDBF579F2DAC58,
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey1__ctor_m5EF63C2FC89596DB5C9CDEBF53919ED4337810F4,
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2__ctor_mAA98EEB2209D25027B63B08B40DD13492DEC1D17,
	U3COnNativePlacementContentStateChangedU3Ec__AnonStorey2_U3CU3Em__0_m99F1CFF0E4F1D410F1C321BDFE95606F2780E8EE,
	Placeholder__ctor_m54DA36C5683E6814BFDF782FA769CFB74EFE899D,
	Placeholder_add_onStart_m1424BE3F3C16C13099CDF7B981B70C30981B9E40,
	Placeholder_remove_onStart_m921D1406E2184705FA31128C74E26EE0F29B1165,
	Placeholder_add_onFinish_m81A539110A0E54EE7CB6CE12BB300A031D529264,
	Placeholder_remove_onFinish_m467402379788590BAEF37D78401E71901185F06B,
	Placeholder_TextureFromEmbeddedResource_m8BCAF6468EDA3DFE53C3C8A1F36004D04C5BA505,
	Placeholder_Awake_m09CEF99F85BB7AF04AE046C401E6435AC348C3E2,
	Placeholder_Show_mA07625053AE95912C50543D284270F440F67BA0F,
	Placeholder_OnGUI_mB177A7010188F5942209969FA862F4D76F592027,
	Placeholder_OnApplicationQuit_m84E7C381792BF02574B4E1B966734FAB314D60E3,
	Placeholder_ModalWindowFunction_m5CBE68526747780DCF007727D812ADD4776C1C4C,
	PlacementContent__ctor_mA0C551865B939B07D48242EC82BE4B6BD6DF0136,
	PlacementContent_set_placementId_mB75745DE59FD69AC51D6AAFBAA38D32D04C2E4C5,
	PlacementContent_set_extras_m1390D1C43D6FD867323C9B1A2E8292473D9C51D7,
	PlacementContent_set_placementContentOperations_m6E1A6585F843A1008675D4BC56566931CAA5318D,
	RewardablePlacementContent__ctor_m0F9474629B40CAE3F1E228CE84AE89BC60426288,
	ShowAdYield__ctor_m240765C70263B816520AC89DE2039F3986F382EB,
	ShowAdYield_set_result_m05A4F65E12E6D0A1020DA7AF32DB90D18C4E8929,
	ShowAdYield_get_showing_mFEB82E6E80A208303E60D75C19EEE6C2CE1AD62F,
	ShowAdYield_set_showing_m4605485CFB8DAC9AB3A1152DECF2C3196820B0DE,
	ShowAdYield_get_keepWaiting_m55BCF39FFCA1D46E6611F9692516F62A38CB0CA1,
	ShowAdPlacementContent__ctor_mE6A80073DB3D061E6A0B53BEF685CBC654EA1952,
	ShowAdPlacementContent_get_gamerSid_mE592012343703DC4F9491F302509B904384622DD,
	ShowAdPlacementContent_set_showing_mE0AE1550BC7C317E3CE33665F98D9771F9C8C6DF,
	ShowAdPlacementContent_get_showAdOperations_m419AE53E6E198F48645DBB0C39AFC1E243E4261F,
	ShowAdPlacementContent_Show_mC52CACC70A3FA7177A087F9ED12B3A20CA52287C,
	U3CShowU3Ec__AnonStorey0__ctor_mAE624C059D9C43B942ECA5DA0BB1A72F0EB1204D,
	U3CShowU3Ec__AnonStorey0_U3CU3Em__0_m599A80184CCADD58E6B58BF0A6E7C419DD4EE856,
	U3CShowU3Ec__AnonStorey0_U3CU3Em__1_m1E1B7FAB359404345B866BEB66A8285B6A9BC95F,
	PromoAdPlacementContent__ctor_m482DFF7BC2FEE1F7C20DA63535B2B2EAD338A2DD,
	PromoAdPlacementContent_set_promoAdOperations_m1E3F505EDA8C3A388BEEFC60C46735DEA92FE146,
	PlacementContentReadyEventArgs__ctor_m25FF2E678E99D5B1B275DE2A16E80247867EDE7F,
	PlacementContentStateChangeEventArgs__ctor_m0FB380BC258017BAF351C3807CF6BAEBF6258C48,
	UnityServicesErrorEventArgs__ctor_m1F5B66B28C8C24E05B4A67466E0E86FCAFB56368,
	UnityServicesErrorEventArgs_get_error_mE537B0F2F010850A3052E89C58961E67854D4D1A,
	UnityServicesErrorEventArgs_set_error_mDA3CB1A611B5AC80FBE7E21BFD5FC370A8DA065A,
	UnityServicesErrorEventArgs_get_message_m01068B68B9A346668096C85950C1EBCAFD574659,
	UnityServicesErrorEventArgs_set_message_m254418BFBACE5225FC58D871062BD19AAE06CD31,
	UnsupportedPlatform__ctor_mCFDBDAA0C48857D823D75E36B2B064ABD5AFF9FB,
	UnsupportedPlatform_add_onError_m38FEF05FB64F918802F2A729BE80CB1DECF0ED24,
	UnsupportedPlatform_remove_onError_m570E81D1CF8B4AB5674AD8B44AD7D22F09972057,
	UnsupportedPlatform_get_version_m4F6214BEA30F0603E712C30F455305AAD3DE28D3,
	UnsupportedPlatform_Initialize_mDFB595E9AE1E6824178DCC7C62B9C3812D16D8A3,
	UnsupportedPlatform_IsReady_m306C45B9EC7969E0268BB069DAB8EDE8140F31C7,
	UnsupportedPlatform_GetPlacementContent_m0187F86C5D04A1DD5651CDF8A022365F66DE9D94,
	UnsupportedPlatform_SetMetaData_mBE7D6DAEF494B853F93FF7128718B97FF0464AD1,
};
static const int32_t s_InvokerIndices[191] = 
{
	49,
	121,
	126,
	3,
	165,
	4,
	26,
	26,
	14,
	118,
	9,
	28,
	26,
	137,
	32,
	567,
	26,
	137,
	23,
	107,
	26,
	1699,
	23,
	165,
	165,
	3,
	165,
	23,
	137,
	26,
	213,
	26,
	7,
	25,
	15,
	23,
	7,
	1700,
	1701,
	165,
	165,
	165,
	165,
	27,
	27,
	1699,
	175,
	3,
	32,
	10,
	23,
	23,
	1700,
	18,
	1702,
	1703,
	1704,
	95,
	0,
	1705,
	285,
	1706,
	26,
	14,
	27,
	14,
	0,
	0,
	26,
	48,
	0,
	23,
	14,
	14,
	14,
	34,
	14,
	14,
	23,
	245,
	245,
	14,
	10,
	23,
	0,
	26,
	26,
	26,
	26,
	26,
	3,
	4,
	49,
	812,
	121,
	589,
	0,
	165,
	149,
	23,
	121,
	589,
	18,
	18,
	149,
	4,
	26,
	26,
	118,
	9,
	28,
	26,
	14,
	137,
	974,
	166,
	1707,
	567,
	1708,
	1709,
	3,
	3,
	4,
	165,
	17,
	971,
	1710,
	1585,
	137,
	137,
	1711,
	26,
	137,
	1708,
	1712,
	26,
	137,
	1709,
	1713,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	26,
	26,
	26,
	26,
	0,
	23,
	118,
	23,
	23,
	32,
	27,
	26,
	26,
	26,
	27,
	23,
	32,
	89,
	31,
	89,
	27,
	14,
	31,
	14,
	1714,
	23,
	32,
	23,
	27,
	26,
	27,
	36,
	1709,
	181,
	208,
	14,
	26,
	23,
	26,
	26,
	14,
	118,
	9,
	28,
	26,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x0600001B, 7,  (void**)&IosAnalytics_TriggerAddExtras_m7B4EC630487FD3749A4E1653BFDB3BEBB25DBE0A_RuntimeMethod_var, 0 },
	{ 0x0600002F, 8,  (void**)&IosShowAdOperations_OnAdFinishedCallback_mD383F9E325A135F27B25E0D1ECD13B9E455B92D2_RuntimeMethod_var, 0 },
	{ 0x06000030, 9,  (void**)&IosShowAdOperations_OnAdStartedCallback_m49D62D45FB9A71D4986C05F5FF4288B2F303233F_RuntimeMethod_var, 0 },
	{ 0x0600007E, 10,  (void**)&PlatformCallbacksWrapper_OnPlacementContentReady_m7A5A0B9F3D73F85B7CC731431AE49CC93A77683F_RuntimeMethod_var, 0 },
	{ 0x0600007F, 11,  (void**)&PlatformCallbacksWrapper_OnPlacementContentChanged_m1CF0E10F8B7C001F8B17874A86EA47F45E6539AC_RuntimeMethod_var, 0 },
	{ 0x06000080, 12,  (void**)&PlatformCallbacksWrapper_OnError_mA264256519EDC878046B6920CAA50D6E37A00B10_RuntimeMethod_var, 0 },
};
extern const Il2CppCodeGenModule g_UnityEngine_Monetization_iOSCodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_Monetization_iOSCodeGenModule = 
{
	"UnityEngine.Monetization.iOS.dll",
	191,
	s_methodPointers,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
};
