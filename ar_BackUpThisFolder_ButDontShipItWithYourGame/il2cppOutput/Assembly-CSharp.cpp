#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<EarthPosition>
struct List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9;
// System.Collections.Generic.List`1<GeospatialObject>
struct List_1_tE0C87873805AA426F20564FC518E05B58339737D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Interest>
struct List_1_t391448499BB460DEF23846051427869A2B708836;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// EarthPosition[]
struct EarthPositionU5BU5D_t92DB7076B42E711297577E752D8774D3E0EE9CB6;
// GeospatialObject[]
struct GeospatialObjectU5BU5D_tCF2DCA2E82C4E8E79786F45A3AD02FAC9A2DAB28;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Interest[]
struct InterestU5BU5D_tA535C4855F8D7CECC96A5585DD23037C98E3E5C1;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Caricamento
struct Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// EarthPosition
struct EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E;
// ExitManager
struct ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GeospatialObject
struct GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B;
// GestoreAudio
struct GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D;
// GestoreCerca
struct GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7;
// GestoreDestinazioni
struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40;
// GestoreEntrateInScena
struct GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Interest
struct Interest_tF8A8128B3099735B39C5C9293708883957A3CC45;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuIniziale
struct MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NumeroNotifiche
struct NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SchermataDestinazioni
struct SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3;
// SchermataImpostazioni
struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// User
struct User_t830E70FAB67A96176D2C105CB5BBDA86733559AB;
// VPSManager
struct VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// User/<GetLocation>d__3
struct U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018F915A2366D42EA5F0DB0E9D19E7136B08B37B;
IL2CPP_EXTERN_C String_t* _stringLiteral025DA6D85184BCACBCD5DDFA1721813CD8284701;
IL2CPP_EXTERN_C String_t* _stringLiteral096F1D4E819E6C12B5952CC7B912A4377A9A7D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A;
IL2CPP_EXTERN_C String_t* _stringLiteral170FA094A41419CD8031F808C2C23EB3C26D4E2F;
IL2CPP_EXTERN_C String_t* _stringLiteral253F88F231640E28C64C5628CA0517ACD9605EA0;
IL2CPP_EXTERN_C String_t* _stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A;
IL2CPP_EXTERN_C String_t* _stringLiteral299B6AEB334BD055D2F013516D13E858E168C74C;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA78458F2B685C40BFEAEE5D1D651E264882E58;
IL2CPP_EXTERN_C String_t* _stringLiteral404C9914512656BF38DD189F063FD3D5D1C48197;
IL2CPP_EXTERN_C String_t* _stringLiteral4732CA873979EA3EE33343A40E30D23599EC6A49;
IL2CPP_EXTERN_C String_t* _stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C;
IL2CPP_EXTERN_C String_t* _stringLiteral55761D1306E9EE93D1F40FAF7E27D9F078C695E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6AEDE535D1F168B733D6408F9C4DFE56B108F3EA;
IL2CPP_EXTERN_C String_t* _stringLiteral8045A7906D444C63B19AF30F817FC5DBC3628BEB;
IL2CPP_EXTERN_C String_t* _stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8;
IL2CPP_EXTERN_C String_t* _stringLiteral81EC819791C5271AC0C7144B393F4C7F603A0E0A;
IL2CPP_EXTERN_C String_t* _stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544;
IL2CPP_EXTERN_C String_t* _stringLiteralB29863D97935F87245759F48D47366B206A87A11;
IL2CPP_EXTERN_C String_t* _stringLiteralB7F783F43EF614C9F4012A2031B529832AB1DB19;
IL2CPP_EXTERN_C String_t* _stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42;
IL2CPP_EXTERN_C String_t* _stringLiteralD70CD721A5D7BD17AD89D2F7DC3343DC8ED2CB13;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645;
IL2CPP_EXTERN_C String_t* _stringLiteralE60155132313C5959DB516CB80851951055F4700;
IL2CPP_EXTERN_C String_t* _stringLiteralF73083C0EDB3975EEAAD59DBC58A7B83244C1723;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetLocationU3Ed__3_System_Collections_IEnumerator_Reset_m7B762154AEFAB9354D812D57B38AA70C021F3E82_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<EarthPosition>
struct List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EarthPositionU5BU5D_t92DB7076B42E711297577E752D8774D3E0EE9CB6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EarthPositionU5BU5D_t92DB7076B42E711297577E752D8774D3E0EE9CB6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GeospatialObject>
struct List_1_tE0C87873805AA426F20564FC518E05B58339737D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GeospatialObjectU5BU5D_tCF2DCA2E82C4E8E79786F45A3AD02FAC9A2DAB28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE0C87873805AA426F20564FC518E05B58339737D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GeospatialObjectU5BU5D_tCF2DCA2E82C4E8E79786F45A3AD02FAC9A2DAB28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Interest>
struct List_1_t391448499BB460DEF23846051427869A2B708836  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InterestU5BU5D_tA535C4855F8D7CECC96A5585DD23037C98E3E5C1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t391448499BB460DEF23846051427869A2B708836_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InterestU5BU5D_tA535C4855F8D7CECC96A5585DD23037C98E3E5C1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// EarthPosition
struct EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E  : public RuntimeObject
{
	// System.Double EarthPosition::<Latitude>k__BackingField
	double ___U3CLatitudeU3Ek__BackingField_0;
	// System.Double EarthPosition::<Longitude>k__BackingField
	double ___U3CLongitudeU3Ek__BackingField_1;
	// System.Double EarthPosition::<Altitude>k__BackingField
	double ___U3CAltitudeU3Ek__BackingField_2;
};

// GeospatialObject
struct GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B  : public RuntimeObject
{
	// UnityEngine.GameObject GeospatialObject::ObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ObjectPrefab_0;
	// EarthPosition GeospatialObject::EarthPosition
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___EarthPosition_1;
};

// Interest
struct Interest_tF8A8128B3099735B39C5C9293708883957A3CC45  : public RuntimeObject
{
	// System.Double Interest::<Latitude>k__BackingField
	double ___U3CLatitudeU3Ek__BackingField_0;
	// System.Double Interest::<Longitude>k__BackingField
	double ___U3CLongitudeU3Ek__BackingField_1;
	// System.Double Interest::<Altitude>k__BackingField
	double ___U3CAltitudeU3Ek__BackingField_2;
	// System.String Interest::<Nome>k__BackingField
	String_t* ___U3CNomeU3Ek__BackingField_3;
	// System.String Interest::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_4;
	// System.Boolean Interest::<HasPath>k__BackingField
	bool ___U3CHasPathU3Ek__BackingField_5;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// User/<GetLocation>d__3
struct U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7  : public RuntimeObject
{
	// System.Int32 User/<GetLocation>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object User/<GetLocation>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// User User/<GetLocation>d__3::<>4__this
	User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* ___U3CU3E4__this_2;
	// System.Int32 User/<GetLocation>d__3::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<EarthPosition>
struct Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<GeospatialObject>
struct Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE0C87873805AA426F20564FC518E05B58339737D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Interest>
struct Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t391448499BB460DEF23846051427869A2B708836* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Caricamento
struct Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Caricamento::caricamento
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___caricamento_4;
	// UnityEngine.GameObject Caricamento::iconarotante
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___iconarotante_5;
};

// ExitManager
struct ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields
{
	// System.Collections.Generic.List`1<System.Int32> ExitManager::SceneIndex
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___SceneIndex_4;
	// System.Int32 ExitManager::i
	int32_t ___i_5;
};

// GestoreAudio
struct GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GestoreAudio::AudioOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AudioOn_4;
	// UnityEngine.GameObject GestoreAudio::AudioOff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AudioOff_5;
};

// GestoreCerca
struct GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GestoreCerca::luogoPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___luogoPrefab_4;
	// UnityEngine.GameObject GestoreCerca::guraPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___guraPrefab_5;
	// UnityEngine.Transform GestoreCerca::genitoreLuogo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___genitoreLuogo_6;
};

// GestoreDestinazioni
struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields
{
	// System.Collections.Generic.List`1<Interest> GestoreDestinazioni::interests
	List_1_t391448499BB460DEF23846051427869A2B708836* ___interests_4;
};

// GestoreEntrateInScena
struct GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D_StaticFields
{
	// System.Int32 GestoreEntrateInScena::ExitImpostazioni
	int32_t ___ExitImpostazioni_4;
};

// MenuIniziale
struct MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields
{
	// EarthPosition MenuIniziale::userPosition
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___userPosition_4;
};

// NumeroNotifiche
struct NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SchermataDestinazioni
struct SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SchermataDestinazioni::oopsie
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___oopsie_4;
	// UnityEngine.GameObject SchermataDestinazioni::luogoPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___luogoPrefab_5;
	// UnityEngine.GameObject SchermataDestinazioni::guraPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___guraPrefab_6;
	// UnityEngine.Transform SchermataDestinazioni::genitoreLuogo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___genitoreLuogo_7;
};

// SchermataImpostazioni
struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SchermataImpostazioni::m100
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m100_4;
	// UnityEngine.GameObject SchermataImpostazioni::m500
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m500_5;
	// UnityEngine.GameObject SchermataImpostazioni::m1000
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m1000_6;
	// UnityEngine.GameObject SchermataImpostazioni::m5000
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m5000_7;
};

struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields
{
	// System.Int32 SchermataImpostazioni::setting
	int32_t ___setting_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// User
struct User_t830E70FAB67A96176D2C105CB5BBDA86733559AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean User::isUpdating
	bool ___isUpdating_4;
};

struct User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields
{
	// EarthPosition User::userPosition
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___userPosition_5;
};

// VPSManager
struct VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.XR.ARCoreExtensions.AREarthManager VPSManager::earthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___earthManager_4;
	// UnityEngine.XR.ARFoundation.ARAnchorManager VPSManager::aRAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___aRAnchorManager_5;
	// System.Collections.Generic.List`1<EarthPosition> VPSManager::arrowsPositions
	List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* ___arrowsPositions_6;
	// System.Collections.Generic.List`1<GeospatialObject> VPSManager::arrows
	List_1_tE0C87873805AA426F20564FC518E05B58339737D* ___arrows_7;
	// System.Collections.Generic.List`1<Interest> VPSManager::interestsPositions
	List_1_t391448499BB460DEF23846051427869A2B708836* ___interestsPositions_8;
	// System.Collections.Generic.List`1<GeospatialObject> VPSManager::interests
	List_1_tE0C87873805AA426F20564FC518E05B58339737D* ___interests_9;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VPSManager::path
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___path_10;
	// System.Collections.Generic.List`1<UnityEngine.Transform> VPSManager::goals
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___goals_11;
	// UnityEngine.GameObject VPSManager::descrizionePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___descrizionePrefab_13;
};

struct VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields
{
	// EarthPosition VPSManager::userPosition
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___userPosition_12;
	// System.Boolean VPSManager::showPath
	bool ___showPath_14;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void EarthPosition::set_Latitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void EarthPosition::set_Longitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void EarthPosition::set_Altitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double EarthPosition::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) ;
// System.Double EarthPosition::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) ;
// System.Double EarthPosition::ToRad(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___degs0, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Double System.Math::Truncate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C (double ___d0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// EarthPosition User::GetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* User_GetUserPosition_m81E5402F1D0C86144750A3F4537C11A592D117B9 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.List`1<EarthPosition>>(System.String)
inline List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.List`1<Interest>>(System.String)
inline List_1_t391448499BB460DEF23846051427869A2B708836* JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  List_1_t391448499BB460DEF23846051427869A2B708836* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Interest>::GetEnumerator()
inline Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B (List_1_t391448499BB460DEF23846051427869A2B708836* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 (*) (List_1_t391448499BB460DEF23846051427869A2B708836*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Interest>::Dispose()
inline void Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Interest>::get_Current()
inline Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2* __this, const RuntimeMethod* method)
{
	return ((  Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* (*) (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Double Interest::get_Latitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// System.Double Interest::get_Longitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// System.Double Interest::get_Altitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// System.Void EarthPosition::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___lat0, double ___lon1, double ___alt2, const RuntimeMethod* method) ;
// System.Void GeospatialObject::.ctor(EarthPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialObject__ctor_m75A1253C8B9789644669A38022BC656AC896167B (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* __this, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___pos0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Void System.Collections.Generic.List`1<GeospatialObject>::Add(T)
inline void List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_inline (List_1_tE0C87873805AA426F20564FC518E05B58339737D* __this, GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE0C87873805AA426F20564FC518E05B58339737D*, GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Interest>::MoveNext()
inline bool Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165 (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<EarthPosition>::GetEnumerator()
inline Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546 (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E (*) (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EarthPosition>::Dispose()
inline void Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<EarthPosition>::get_Current()
inline EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_inline (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E* __this, const RuntimeMethod* method)
{
	return ((  EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* (*) (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<EarthPosition>::MoveNext()
inline bool Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void VPSManager::VerifyGeospatialSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_VerifyGeospatialSupport_mA56281D7ACF78DE56A51E70D2CEEB85FD7FBCEEA (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void VPSManager::PlaceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_PlaceObjects_mFB0E40DED26CB62B627A90D88C934C5DCCB1CB91 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<GeospatialObject>::GetEnumerator()
inline Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16 (List_1_tE0C87873805AA426F20564FC518E05B58339737D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C (*) (List_1_tE0C87873805AA426F20564FC518E05B58339737D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GeospatialObject>::Dispose()
inline void Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302 (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<GeospatialObject>::get_Current()
inline GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_inline (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C* __this, const RuntimeMethod* method)
{
	return ((  GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* (*) (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Double EarthPosition::get_Altitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<GeospatialObject>::MoveNext()
inline bool Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<EarthPosition>::.ctor()
inline void List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914 (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GeospatialObject>::.ctor()
inline void List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2 (List_1_tE0C87873805AA426F20564FC518E05B58339737D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE0C87873805AA426F20564FC518E05B58339737D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Interest>::.ctor()
inline void List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C (List_1_t391448499BB460DEF23846051427869A2B708836* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t391448499BB460DEF23846051427869A2B708836*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void EarthPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) ;
// System.Void Caricamento::AttesaPosizione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caricamento_AttesaPosizione_mDEE8E0244AB36AEA7919AA9A9CD8FD98B417E7E2 (Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void VPSManager::setShowPathFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_setShowPathFalse_m3389103560FDB60319AA3B4CEF2532F903E4E9A8 (const RuntimeMethod* method) ;
// System.Void VPSManager::setShowPathTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_setShowPathTrue_mC7461A5F6AD2E671B6C654F66CD2BB4AD1ADB24C (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void Interest::set_Latitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Latitude_m61EA58AB675DDF90F95B5A3F846A31706FDE70D8_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Interest::set_Longitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Longitude_m32C543B5C1BE97EF855A10D70CE4808B6742F43E_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Interest::set_Altitude(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Altitude_mC583C1F1688B94323CED41CC271DF0C1F66662AD_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Interest::set_Nome(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Nome_mE24DAC0BE62ED305754E48CB9ED02AB8286745A0_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Interest::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Text_m633C04ED121386AC131813926E58C4FBF9A290A3_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Interest::set_HasPath(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_HasPath_mB12D851A3EE8D2A14504C1ADE8E88515FB18C394_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void NumeroNotifiche::AggiornaNotifiche()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumeroNotifiche_AggiornaNotifiche_m98F30A44584F5D3BD3333D7A67A348A0E4BCA911 (NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB* __this, const RuntimeMethod* method) ;
// System.Double EarthPosition::Distance(EarthPosition,EarthPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e10, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e21, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void User/<GetLocation>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__3__ctor_mB9189BFBA71A94A4CFD7D15F42C578AEF8194ED3 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void SchermataImpostazioni::Set100()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set100_mEA7A2CA34ED03220F59404CE35EA8C44A6E87160 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) ;
// System.Void SchermataImpostazioni::Set500()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set500_m12A3F32B4F30455DD62B042A3FEBAD58D8A8A411 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) ;
// System.Void SchermataImpostazioni::Set1000()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set1000_m170381731FFA56A8C82210F0445350C264DAB7F1 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) ;
// System.Void SchermataImpostazioni::Set5000()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set5000_m3B4C712BBC7B8531B45B0914A05BA8DE8920DB95 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean Interest::get_HasPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interest_get_HasPath_mB7F40C0534898429749E8AC70EDC98DEA080A76B_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.String Interest::get_Nome()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// System.String GestoreDestinazioni::Truncate(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03 (String_t* ___value0, int32_t ___maxChars1, const RuntimeMethod* method) ;
// System.String GestoreDestinazioni::Arrotonda(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE (double ___distanza0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Double EarthPosition::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = __this->___U3CLatitudeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void EarthPosition::set_Latitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLatitudeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Double EarthPosition::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = __this->___U3CLongitudeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void EarthPosition::set_Longitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLongitudeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Double EarthPosition::get_Altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = __this->___U3CAltitudeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void EarthPosition::set_Altitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CAltitudeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void EarthPosition::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___lat0, double ___lon1, double ___alt2, const RuntimeMethod* method) 
{
	{
		// public EarthPosition(double lat, double lon, double alt)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = lat;
		double L_0 = ___lat0;
		EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline(__this, L_0, NULL);
		// Longitude = lon;
		double L_1 = ___lon1;
		EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline(__this, L_1, NULL);
		// Altitude = alt;
		double L_2 = ___alt2;
		EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void EarthPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// public EarthPosition()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = 0;
		EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline(__this, (0.0), NULL);
		// Longitude = 0;
		EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline(__this, (0.0), NULL);
		// Altitude = 0;
		EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline(__this, (0.0), NULL);
		// }
		return;
	}
}
// System.Double EarthPosition::Distance(EarthPosition,EarthPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e10, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		// double lat1 = e1.Latitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = ___e10;
		NullCheck(L_0);
		double L_1;
		L_1 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_0, NULL);
		V_0 = L_1;
		// double lon1 = e1.Longitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_2 = ___e10;
		NullCheck(L_2);
		double L_3;
		L_3 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_2, NULL);
		V_1 = L_3;
		// double lat2 = e2.Latitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_4 = ___e21;
		NullCheck(L_4);
		double L_5;
		L_5 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_4, NULL);
		V_2 = L_5;
		// double lon2 = e2.Longitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_6 = ___e21;
		NullCheck(L_6);
		double L_7;
		L_7 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_6, NULL);
		V_3 = L_7;
		// var R = 6376.5000; //Km
		// lat1 = ToRad(lat1);
		double L_8 = V_0;
		double L_9;
		L_9 = EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874(__this, L_8, NULL);
		V_0 = L_9;
		// lat2 = ToRad(lat2);
		double L_10 = V_2;
		double L_11;
		L_11 = EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874(__this, L_10, NULL);
		V_2 = L_11;
		// lon1 = ToRad(lon1);
		double L_12 = V_1;
		double L_13;
		L_13 = EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874(__this, L_12, NULL);
		V_1 = L_13;
		// lon2 = ToRad(lon2);
		double L_14 = V_3;
		double L_15;
		L_15 = EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874(__this, L_14, NULL);
		V_3 = L_15;
		// var dLat = lat2 - lat1;
		double L_16 = V_2;
		double L_17 = V_0;
		// var dLon = lon2 - lon1;
		double L_18 = V_3;
		double L_19 = V_1;
		V_4 = ((double)il2cpp_codegen_subtract(L_18, L_19));
		// var a = Math.Pow(Math.Sin(dLat / 2), 2) + (Math.Pow(Math.Sin(dLon / 2), 2) * Math.Cos(lat1) * Math.Cos(lat2));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sin(((double)(((double)il2cpp_codegen_subtract(L_16, L_17))/(2.0))));
		double L_21;
		L_21 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_20, (2.0), NULL);
		double L_22 = V_4;
		double L_23;
		L_23 = sin(((double)(L_22/(2.0))));
		double L_24;
		L_24 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(L_23, (2.0), NULL);
		double L_25 = V_0;
		double L_26;
		L_26 = cos(L_25);
		double L_27 = V_2;
		double L_28;
		L_28 = cos(L_27);
		V_5 = ((double)il2cpp_codegen_add(L_21, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_24, L_26)), L_28))));
		// var c = 2 * Math.Atan2(Math.Sqrt(a), Math.Sqrt(1 - a));
		double L_29 = V_5;
		double L_30;
		L_30 = sqrt(L_29);
		double L_31 = V_5;
		double L_32;
		L_32 = sqrt(((double)il2cpp_codegen_subtract((1.0), L_31)));
		double L_33;
		L_33 = atan2(L_30, L_32);
		V_6 = ((double)il2cpp_codegen_multiply((2.0), L_33));
		// double distance = R * c * 1000;
		double L_34 = V_6;
		// return Math.Truncate(distance);
		double L_35;
		L_35 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((6376.5), L_34)), (1000.0))), NULL);
		return L_35;
	}
}
// System.Double EarthPosition::ToRad(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_ToRad_m580698E073F5036A5F85A6B6465267AB9A13E874 (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___degs0, const RuntimeMethod* method) 
{
	{
		// return degs * (Math.PI / 180.0);
		double L_0 = ___degs0;
		return ((double)il2cpp_codegen_multiply(L_0, (0.017453292519943295)));
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
// System.Void GeospatialObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialObject_Start_m53B75A6E8A0DBED064387DD9B30385CFD7568F4C (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GeospatialObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialObject_Update_m18B125ECC2B5412456834FAFD3A1D0D3C737DA18 (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GeospatialObject::.ctor(EarthPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialObject__ctor_m75A1253C8B9789644669A38022BC656AC896167B (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* __this, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___pos0, const RuntimeMethod* method) 
{
	{
		// public GeospatialObject(EarthPosition pos)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ObjectPrefab = null;
		__this->___ObjectPrefab_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ObjectPrefab_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// EarthPosition = pos;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = ___pos0;
		__this->___EarthPosition_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EarthPosition_1), (void*)L_0);
		// }
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
// System.Void GestoreAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreAudio_Start_m44464AA55908AA6AED3E7B51687D8A0E0B221CE5 (GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestoreAudio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreAudio_Update_m76A6CB60A64AC5B3C70F82087D6F1A50D9E96F13 (GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestoreAudio::SetAudioOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreAudio_SetAudioOnOff_m7BA188B75113C99A58FC296067A6174587E4E2D4 (GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D* __this, const RuntimeMethod* method) 
{
	{
		// if(AudioOn.activeInHierarchy== true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AudioOn_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// AudioOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AudioOn_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// AudioOff.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___AudioOff_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0026:
	{
		// AudioOn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___AudioOn_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// AudioOff.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___AudioOff_5;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GestoreAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreAudio__ctor_m061F218CEFD24646F6FE3CEE166A9A0A245A7A0B (GestoreAudio_t51A65578F92123D7B30F5ED156E4C2A17C8F103D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VPSManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_Update_m83394B2A173A0CB79276D600B0692DE7E1C30170 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// userPosition = User.GetUserPosition();
		il2cpp_codegen_runtime_class_init_inline(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0;
		L_0 = User_GetUserPosition_m81E5402F1D0C86144750A3F4537C11A592D117B9(NULL);
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12), (void*)L_0);
		// for (int i = 0; i < path.Count - 1; i++)
		V_0 = 0;
		goto IL_0052;
	}

IL_000e:
	{
		// path[i].LookAt(path[(i + 1)]);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___path_10;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_1, L_2, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___path_10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_3, L_6, NULL);
		// path[i].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_7 = __this->___path_10;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_7, L_8, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_9, (0.0f), (-90.0f), (0.0f), 1, NULL);
		// for (int i = 0; i < path.Count - 1; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < path.Count - 1; i++)
		int32_t L_11 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_12 = __this->___path_10;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_12, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_000e;
		}
	}
	{
		// path[path.Count - 1].LookAt(goals[0]);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_14 = __this->___path_10;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_15 = __this->___path_10;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_15, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_14, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = __this->___goals_11;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_18, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_17);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_17, L_19, NULL);
		// path[path.Count - 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_20 = __this->___path_10;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_21 = __this->___path_10;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_21, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_20, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_23, (0.0f), (-90.0f), (0.0f), 1, NULL);
		// Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A, NULL);
		NullCheck(L_24);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25;
		L_25 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_24, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// posizione.text = path[0].position.ToString();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_26 = __this->___path_10;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_26, 0, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		V_1 = L_28;
		String_t* L_29;
		L_29 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_29);
		// Text show = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645, NULL);
		NullCheck(L_30);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31;
		L_31 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_30, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// show.text = showPath.ToString();
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		String_t* L_32;
		L_32 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14), NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_32);
		// }
		return;
	}
}
// System.Void VPSManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_Start_m6CCB660B0D42CCA1B542D58D7E16820A94452B19 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral170FA094A41419CD8031F808C2C23EB3C26D4E2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7F783F43EF614C9F4012A2031B529832AB1DB19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* V_1 = NULL;
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* V_2 = NULL;
	Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E V_3;
	memset((&V_3), 0, sizeof(V_3));
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* V_4 = NULL;
	{
		// userPosition = MenuIniziale.userPosition;
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12), (void*)L_0);
		// arrowsPositions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1;
		L_1 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_3;
		L_3 = JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F(L_2, JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F_RuntimeMethod_var);
		__this->___arrowsPositions_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowsPositions_6), (void*)L_3);
		// interestsPositions = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/interest").ToString());
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_4;
		L_4 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralB7F783F43EF614C9F4012A2031B529832AB1DB19, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		List_1_t391448499BB460DEF23846051427869A2B708836* L_6;
		L_6 = JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A(L_5, JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var);
		__this->___interestsPositions_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interestsPositions_8), (void*)L_6);
		// foreach (var position in interestsPositions)
		List_1_t391448499BB460DEF23846051427869A2B708836* L_7 = __this->___interestsPositions_8;
		NullCheck(L_7);
		Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 L_8;
		L_8 = List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B(L_7, List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D((&V_0), Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_004c_1:
			{
				// foreach (var position in interestsPositions)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_9;
				L_9 = Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline((&V_0), Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
				V_1 = L_9;
				// GeospatialObject geo = new GeospatialObject(new EarthPosition(position.Latitude, position.Longitude, position.Altitude));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_10 = V_1;
				NullCheck(L_10);
				double L_11;
				L_11 = Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline(L_10, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_12 = V_1;
				NullCheck(L_12);
				double L_13;
				L_13 = Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline(L_12, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_14 = V_1;
				NullCheck(L_14);
				double L_15;
				L_15 = Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline(L_14, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_16 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E(L_16, L_11, L_13, L_15, NULL);
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_17 = (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B*)il2cpp_codegen_object_new(GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				GeospatialObject__ctor_m75A1253C8B9789644669A38022BC656AC896167B(L_17, L_16, NULL);
				V_2 = L_17;
				// geo.ObjectPrefab = Resources.Load<GameObject>("puntointeresse") as GameObject;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_18 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteral170FA094A41419CD8031F808C2C23EB3C26D4E2F, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
				NullCheck(L_18);
				L_18->___ObjectPrefab_0 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&L_18->___ObjectPrefab_0), (void*)L_19);
				// interests.Add(geo);
				List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_20 = __this->___interests_9;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_21 = V_2;
				NullCheck(L_20);
				List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_inline(L_20, L_21, List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var);
			}

IL_008d_1:
			{
				// foreach (var position in interestsPositions)
				bool L_22;
				L_22 = Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165((&V_0), Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// foreach (var position in arrowsPositions)
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_23 = __this->___arrowsPositions_6;
		NullCheck(L_23);
		Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E L_24;
		L_24 = List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546(L_23, List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var);
		V_3 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00eb:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D((&V_3), Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e0_1;
			}

IL_00b4_1:
			{
				// foreach (var position in arrowsPositions)
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_25;
				L_25 = Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_inline((&V_3), Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_RuntimeMethod_var);
				// GeospatialObject geo = new GeospatialObject(position);
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_26 = (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B*)il2cpp_codegen_object_new(GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				GeospatialObject__ctor_m75A1253C8B9789644669A38022BC656AC896167B(L_26, L_25, NULL);
				V_4 = L_26;
				// geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_27 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
				L_28 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
				NullCheck(L_27);
				L_27->___ObjectPrefab_0 = L_28;
				Il2CppCodeGenWriteBarrier((void**)(&L_27->___ObjectPrefab_0), (void*)L_28);
				// arrows.Add(geo);
				List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_29 = __this->___arrows_7;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_30 = V_4;
				NullCheck(L_29);
				List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_inline(L_29, L_30, List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var);
			}

IL_00e0_1:
			{
				// foreach (var position in arrowsPositions)
				bool L_31;
				L_31 = Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA((&V_3), Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_00b4_1;
				}
			}
			{
				goto IL_00f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f9:
	{
		// Text posizione = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645, NULL);
		NullCheck(L_32);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33;
		L_33 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_32, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// posizione.text = showPath.ToString();
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14), NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// VerifyGeospatialSupport();
		VPSManager_VerifyGeospatialSupport_mA56281D7ACF78DE56A51E70D2CEEB85FD7FBCEEA(__this, NULL);
		// }
		return;
	}
}
// System.Void VPSManager::VerifyGeospatialSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_VerifyGeospatialSupport_mA56281D7ACF78DE56A51E70D2CEEB85FD7FBCEEA (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018F915A2366D42EA5F0DB0E9D19E7136B08B37B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299B6AEB334BD055D2F013516D13E858E168C74C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8045A7906D444C63B19AF30F817FC5DBC3628BEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60155132313C5959DB516CB80851951055F4700);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = earthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___earthManager_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_0, 2, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_004c;
			}
		}
	}
	{
		return;
	}

IL_0020:
	{
		// Debug.Log("Ready to use VPS");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8045A7906D444C63B19AF30F817FC5DBC3628BEB, NULL);
		// PlaceObjects();
		VPSManager_PlaceObjects_mFB0E40DED26CB62B627A90D88C934C5DCCB1CB91(__this, NULL);
		// break;
		return;
	}

IL_0031:
	{
		// Debug.Log("Unknown...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral018F915A2366D42EA5F0DB0E9D19E7136B08B37B, NULL);
		// Invoke("VerifyGeospatialSupport", 5.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralE60155132313C5959DB516CB80851951055F4700, (5.0f), NULL);
		// break;
		return;
	}

IL_004c:
	{
		// Debug.Log("VPS Unsupported");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral299B6AEB334BD055D2F013516D13E858E168C74C, NULL);
		// }
		return;
	}
}
// System.Void VPSManager::PlaceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_PlaceObjects_mFB0E40DED26CB62B627A90D88C934C5DCCB1CB91 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096F1D4E819E6C12B5952CC7B912A4377A9A7D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_1 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* V_4 = NULL;
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_5 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_6 = NULL;
	{
		// if (earthManager.EarthTrackingState == TrackingState.Tracking)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___earthManager_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0150;
		}
	}
	{
		// var geospatialPose = earthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_2 = __this->___earthManager_4;
		NullCheck(L_2);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_3;
		L_3 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_2, NULL);
		// foreach (var obj in interests)
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_4 = __this->___interests_9;
		NullCheck(L_4);
		Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C L_5;
		L_5 = List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16(L_4, List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302((&V_0), Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0090_1;
			}

IL_002b_1:
			{
				// foreach (var obj in interests)
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_6;
				L_6 = Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_inline((&V_0), Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_RuntimeMethod_var);
				// var earthPosition = obj.EarthPosition;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_7 = L_6;
				NullCheck(L_7);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_8 = L_7->___EarthPosition_1;
				V_1 = L_8;
				// var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
				ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_9 = __this->___aRAnchorManager_5;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_10 = V_1;
				NullCheck(L_10);
				double L_11;
				L_11 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_10, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_12 = V_1;
				NullCheck(L_12);
				double L_13;
				L_13 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_12, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_14 = V_1;
				NullCheck(L_14);
				double L_15;
				L_15 = EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline(L_14, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
				L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_17;
				L_17 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_9, L_11, L_13, L_15, L_16, NULL);
				V_2 = L_17;
				// GameObject newGo = Instantiate(obj.ObjectPrefab, objAnchor.transform);
				NullCheck(L_7);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_7->___ObjectPrefab_0;
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_19 = V_2;
				NullCheck(L_19);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
				L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_18, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				V_3 = L_21;
				// goals.Add(newGo.transform);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_22 = __this->___goals_11;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_3;
				NullCheck(L_23);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
				NullCheck(L_22);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_22, L_24, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				// GameObject descrizione = Instantiate(descrizionePrefab, newGo.transform); //questa riga ? quella che piazza la descrizione
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___descrizionePrefab_13;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_3;
				NullCheck(L_26);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
				L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_25, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
			}

IL_0090_1:
			{
				// foreach (var obj in interests)
				bool L_29;
				L_29 = Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB((&V_0), Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		// if (showPath)
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		bool L_30 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14;
		if (!L_30)
		{
			goto IL_0136;
		}
	}
	{
		// foreach (var obj in arrows)
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_31 = __this->___arrows_7;
		NullCheck(L_31);
		Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C L_32;
		L_32 = List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16(L_31, List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var);
		V_0 = L_32;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0128:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302((&V_0), Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011d_1;
			}

IL_00c1_1:
			{
				// foreach (var obj in arrows)
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_33;
				L_33 = Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_inline((&V_0), Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_RuntimeMethod_var);
				V_4 = L_33;
				// var earthPosition = obj.EarthPosition;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_34 = V_4;
				NullCheck(L_34);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_35 = L_34->___EarthPosition_1;
				V_5 = L_35;
				// var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
				ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_36 = __this->___aRAnchorManager_5;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_37 = V_5;
				NullCheck(L_37);
				double L_38;
				L_38 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_37, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_39 = V_5;
				NullCheck(L_39);
				double L_40;
				L_40 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_39, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_41 = V_5;
				NullCheck(L_41);
				double L_42;
				L_42 = EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline(L_41, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
				L_43 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_44;
				L_44 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_36, L_38, L_40, L_42, L_43, NULL);
				V_6 = L_44;
				// path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_45 = __this->___path_10;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_46 = V_4;
				NullCheck(L_46);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = L_46->___ObjectPrefab_0;
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_48 = V_6;
				NullCheck(L_48);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
				L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
				L_50 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_47, L_49, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				NullCheck(L_50);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
				L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
				NullCheck(L_45);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_45, L_51, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_011d_1:
			{
				// foreach (var obj in arrows)
				bool L_52;
				L_52 = Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB((&V_0), Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB_RuntimeMethod_var);
				if (L_52)
				{
					goto IL_00c1_1;
				}
			}
			{
				goto IL_016d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0136:
	{
		// Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A, NULL);
		NullCheck(L_53);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54;
		L_54 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_53, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// posizione.text = "percorso non istanziato";
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, _stringLiteral096F1D4E819E6C12B5952CC7B912A4377A9A7D6C);
		return;
	}

IL_0150:
	{
		// else if (earthManager.EarthTrackingState == TrackingState.None)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_55 = __this->___earthManager_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_55, NULL);
		if (L_56)
		{
			goto IL_016d;
		}
	}
	{
		// Invoke("Place Objects", 5.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C, (5.0f), NULL);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void VPSManager::setShowPathTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_setShowPathTrue_mC7461A5F6AD2E671B6C654F66CD2BB4AD1ADB24C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// showPath = true;
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14 = (bool)1;
		// }
		return;
	}
}
// System.Void VPSManager::setShowPathFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_setShowPathFalse_m3389103560FDB60319AA3B4CEF2532F903E4E9A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// showPath = false;
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14 = (bool)0;
		// }
		return;
	}
}
// System.Void VPSManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager__ctor_m4B2FDB926B57742D76BA2934AE0EFA5980B05334 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<EarthPosition> arrowsPositions = new List<EarthPosition>();
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_0 = (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9*)il2cpp_codegen_object_new(List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914(L_0, List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914_RuntimeMethod_var);
		__this->___arrowsPositions_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrowsPositions_6), (void*)L_0);
		// [SerializeField] private List<GeospatialObject> arrows = new List<GeospatialObject>();
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_1 = (List_1_tE0C87873805AA426F20564FC518E05B58339737D*)il2cpp_codegen_object_new(List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2(L_1, List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var);
		__this->___arrows_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrows_7), (void*)L_1);
		// [SerializeField] private List<Interest> interestsPositions = new List<Interest>();
		List_1_t391448499BB460DEF23846051427869A2B708836* L_2 = (List_1_t391448499BB460DEF23846051427869A2B708836*)il2cpp_codegen_object_new(List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C(L_2, List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var);
		__this->___interestsPositions_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interestsPositions_8), (void*)L_2);
		// [SerializeField] private List<GeospatialObject> interests = new List<GeospatialObject>();
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_3 = (List_1_tE0C87873805AA426F20564FC518E05B58339737D*)il2cpp_codegen_object_new(List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2(L_3, List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var);
		__this->___interests_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interests_9), (void*)L_3);
		// [SerializeField] private List<Transform> path = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_4, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___path_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_10), (void*)L_4);
		// [SerializeField] private List<Transform> goals = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_5, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___goals_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___goals_11), (void*)L_5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VPSManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager__cctor_m9E360C068BFF299A09E5F19A65C000CBDF7758E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public static EarthPosition userPosition = new EarthPosition();
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E(L_0, NULL);
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_12), (void*)L_0);
		// private static bool showPath = false;
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___showPath_14 = (bool)0;
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
// System.Void Caricamento::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caricamento_Start_m1E6EA19D3A56F0434A66CB4EF5884C71249AD050 (Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Caricamento::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caricamento_Update_m177F6AB93AF4C7CC92E110F615498699753748A4 (Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991* __this, const RuntimeMethod* method) 
{
	{
		// AttesaPosizione();
		Caricamento_AttesaPosizione_mDEE8E0244AB36AEA7919AA9A9CD8FD98B417E7E2(__this, NULL);
		// }
		return;
	}
}
// System.Void Caricamento::AttesaPosizione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caricamento_AttesaPosizione_mDEE8E0244AB36AEA7919AA9A9CD8FD98B417E7E2 (Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MenuIniziale.userPosition.Latitude == 0 && MenuIniziale.userPosition.Longitude == 0 && MenuIniziale.userPosition.Altitude == 0)
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
		NullCheck(L_0);
		double L_1;
		L_1 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_0, NULL);
		if ((!(((double)L_1) == ((double)(0.0)))))
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_2 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
		NullCheck(L_2);
		double L_3;
		L_3 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_2, NULL);
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_4 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
		NullCheck(L_4);
		double L_5;
		L_5 = EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline(L_4, NULL);
		if ((!(((double)L_5) == ((double)(0.0)))))
		{
			goto IL_004d;
		}
	}
	{
		// caricamento.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___caricamento_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		goto IL_0060;
	}

IL_004d:
	{
		// caricamento.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___caricamento_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0060:
	{
		// iconarotante.transform.rotation *= Quaternion.Euler(0f, 0f, 0.4f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___iconarotante_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9;
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.400000006f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_13, NULL);
		// }
		return;
	}
}
// System.Void Caricamento::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Caricamento__ctor_m2EB5440931B47368B6001EFAF472F80272A68BBE (Caricamento_t21AE6C7566EBA877A112B7634A6AFA008C4D3991* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ExitManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManager_Start_m7412A20D1F66E27AA4C436A30159ED17D2DCD936 (ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManager_Update_m60069D8FE5FDD29EDEBD0868DD5317E270FC0227 (ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if (i > 0)
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// SceneManager.LoadScene(SceneIndex[i - 1]);
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		int32_t L_3 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_4, NULL);
		// SceneIndex.Remove(i-1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		int32_t L_6 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// i--;
		int32_t L_8 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		return;
	}

IL_0046:
	{
		// else { Application.Quit(); }
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ExitManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManager__ctor_m445B996C3352BAEE016F5CC3B6E9634C2ADF05D0 (ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ExitManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManager__cctor_m0C120D346734D418D9D234B28C6EFDDEA2A8A9BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<int> SceneIndex = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4), (void*)L_0);
		// public static int i = 0;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = 0;
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
// System.Void GestoreEntrateInScena::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_Start_m235BD82203E356274ACCA8B24FD9117B3C80BD3D (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_Update_m75B8102CF9756BCA283C97EEC53BB8817194D412 (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriSceltaDestinazione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriSceltaDestinazione_mB4C5160F3857D0968188B061E742F43B7F5BF466 (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("SceltaDestinazione");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriEsplorazione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriEsplorazione_m392407CBE51EE22B60CD61B88BFB715B0987C087 (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// VPSManager.setShowPathFalse();
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		VPSManager_setShowPathFalse_m3389103560FDB60319AA3B4CEF2532F903E4E9A8(NULL);
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("SampleScene");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriPercorso()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriPercorso_mB47BAC77A24EFFA916A424FC6B243CF39C5B9A4A (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// VPSManager.setShowPathTrue();
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		VPSManager_setShowPathTrue_mC7461A5F6AD2E671B6C654F66CD2BB4AD1ADB24C(NULL);
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("SampleScene");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriMenu_m60E488894676DD6AC351C3CD1028EFAF8AF10E29 (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("MenuIniziale");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriImpostazioni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriImpostazioni_m60835819AB51875FC9185F8F5522CA99BA32B70D (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("Impostazioni");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::ApriRicerca()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_ApriRicerca_m77367CAF0AB52FD8D813F6ABEB996F8A3461E5DE (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral404C9914512656BF38DD189F063FD3D5D1C48197);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ExitManager.i = ExitManager.i + 1;
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		NullCheck(L_1);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_1, L_3, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// SceneManager.LoadScene("cercadestinazione");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral404C9914512656BF38DD189F063FD3D5D1C48197, NULL);
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::FrecciaIndietro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena_FrecciaIndietro_m08B3A7CAA994BB90F31C54ED2FF12C43679EFCD7 (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ExitManager.SceneIndex.Count > 0)
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// SceneManager.LoadScene(ExitManager.SceneIndex[ExitManager.i - 1]);
		il2cpp_codegen_runtime_class_init_inline(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		int32_t L_3 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_2, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_4, NULL);
		// ExitManager.SceneIndex.Remove(ExitManager.i - 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___SceneIndex_4;
		int32_t L_6 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_RuntimeMethod_var);
		// ExitManager.i--;
		int32_t L_8 = ((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5;
		((ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_StaticFields*)il2cpp_codegen_static_fields_for(ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589_il2cpp_TypeInfo_var))->___i_5 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void GestoreEntrateInScena::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreEntrateInScena__ctor_m2ECDEC573A1E8B38DEAFCD59CB5A27CE3CE8A3AF (GestoreEntrateInScena_t0698ABDFCAA71C8546F24C78757F4900AEE1479D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Double Interest::get_Latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = __this->___U3CLatitudeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Interest::set_Latitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_Latitude_m61EA58AB675DDF90F95B5A3F846A31706FDE70D8 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLatitudeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Double Interest::get_Longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = __this->___U3CLongitudeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Interest::set_Longitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_Longitude_m32C543B5C1BE97EF855A10D70CE4808B6742F43E (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLongitudeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Double Interest::get_Altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = __this->___U3CAltitudeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Interest::set_Altitude(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_Altitude_mC583C1F1688B94323CED41CC271DF0C1F66662AD (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CAltitudeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Interest::get_Nome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Nome { get; set; }
		String_t* L_0 = __this->___U3CNomeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Interest::set_Nome(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_Nome_mE24DAC0BE62ED305754E48CB9ED02AB8286745A0 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Nome { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNomeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNomeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Interest::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Interest_get_Text_mB11EAA953DB7D6121A5127B3A65E4CF0979A15F3 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Text { get; set; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Interest::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_Text_m633C04ED121386AC131813926E58C4FBF9A290A3 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Interest::get_HasPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Interest_get_HasPath_mB7F40C0534898429749E8AC70EDC98DEA080A76B (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool HasPath { get; set; }
		bool L_0 = __this->___U3CHasPathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Interest::set_HasPath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_set_HasPath_mB12D851A3EE8D2A14504C1ADE8E88515FB18C394 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool HasPath { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasPathU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void Interest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_Start_mD611928CB9DF06E5D88297E9B7363CEFD513A6A0 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Interest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest_Update_mD5E6F54D09AA09300FD2FFCE8AB4676D5761524E (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Interest::.ctor(System.Double,System.Double,System.Double,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interest__ctor_m80A9EE043585394488C6AD81E2E2531EC4983058 (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___lat0, double ___lon1, double ___alt2, String_t* ___name3, String_t* ___txt4, bool ___hasPath5, const RuntimeMethod* method) 
{
	{
		// public Interest(double lat, double lon, double alt, string name, string txt, bool hasPath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Latitude = lat;
		double L_0 = ___lat0;
		Interest_set_Latitude_m61EA58AB675DDF90F95B5A3F846A31706FDE70D8_inline(__this, L_0, NULL);
		// Longitude = lon;
		double L_1 = ___lon1;
		Interest_set_Longitude_m32C543B5C1BE97EF855A10D70CE4808B6742F43E_inline(__this, L_1, NULL);
		// Altitude = alt;
		double L_2 = ___alt2;
		Interest_set_Altitude_mC583C1F1688B94323CED41CC271DF0C1F66662AD_inline(__this, L_2, NULL);
		// Nome = name;
		String_t* L_3 = ___name3;
		Interest_set_Nome_mE24DAC0BE62ED305754E48CB9ED02AB8286745A0_inline(__this, L_3, NULL);
		// Text = txt;
		String_t* L_4 = ___txt4;
		Interest_set_Text_m633C04ED121386AC131813926E58C4FBF9A290A3_inline(__this, L_4, NULL);
		// HasPath = hasPath;
		bool L_5 = ___hasPath5;
		Interest_set_HasPath_mB12D851A3EE8D2A14504C1ADE8E88515FB18C394_inline(__this, L_5, NULL);
		// }
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
// System.Void NumeroNotifiche::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumeroNotifiche_Start_m6E938F23D2B1F4FCA59FA39AED796B632E55BAD7 (NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB* __this, const RuntimeMethod* method) 
{
	{
		// AggiornaNotifiche();
		NumeroNotifiche_AggiornaNotifiche_m98F30A44584F5D3BD3333D7A67A348A0E4BCA911(__this, NULL);
		// }
		return;
	}
}
// System.Void NumeroNotifiche::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumeroNotifiche_Update_m70676B84B6072DC0D8DC246EF9B1166290F3A493 (NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB* __this, const RuntimeMethod* method) 
{
	{
		// AggiornaNotifiche();
		NumeroNotifiche_AggiornaNotifiche_m98F30A44584F5D3BD3333D7A67A348A0E4BCA911(__this, NULL);
		// }
		return;
	}
}
// System.Void NumeroNotifiche::AggiornaNotifiche()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumeroNotifiche_AggiornaNotifiche_m98F30A44584F5D3BD3333D7A67A348A0E4BCA911 (NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral025DA6D85184BCACBCD5DDFA1721813CD8284701);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF73083C0EDB3975EEAAD59DBC58A7B83244C1723);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* V_4 = NULL;
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_5 = NULL;
	{
		// int i = 0;
		V_0 = 0;
		// GameObject obj = GameObject.Find("Canvas/PulsanteDestinazioni/notifiche");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral025DA6D85184BCACBCD5DDFA1721813CD8284701, NULL);
		V_1 = L_0;
		// GameObject num = GameObject.Find("Canvas/PulsanteDestinazioni/notifiche/NumeroNotifiche");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF73083C0EDB3975EEAAD59DBC58A7B83244C1723, NULL);
		V_2 = L_1;
		// foreach (var interest in GestoreDestinazioni.interests)
		il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		List_1_t391448499BB460DEF23846051427869A2B708836* L_2 = ((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4;
		NullCheck(L_2);
		Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 L_3;
		L_3 = List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B(L_2, List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		V_3 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D((&V_3), Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0067_1;
			}

IL_0025_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_4;
				L_4 = Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline((&V_3), Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
				V_4 = L_4;
				// EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_5 = V_4;
				NullCheck(L_5);
				double L_6;
				L_6 = Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline(L_5, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_7 = V_4;
				NullCheck(L_7);
				double L_8;
				L_8 = Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline(L_7, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_9 = V_4;
				NullCheck(L_9);
				double L_10;
				L_10 = Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline(L_9, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_11 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E(L_11, L_6, L_8, L_10, NULL);
				V_5 = L_11;
				// distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);
				il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_12 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_13 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_14 = V_5;
				NullCheck(L_12);
				double L_15;
				L_15 = EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F(L_12, L_13, L_14, NULL);
				// if (distanza < SchermataImpostazioni.setting)
				il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
				int32_t L_16 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
				if ((!(((double)L_15) < ((double)((double)L_16)))))
				{
					goto IL_0067_1;
				}
			}
			{
				// i++;
				int32_t L_17 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0067_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				bool L_18;
				L_18 = Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165((&V_3), Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0080;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0080:
	{
		// if (i > 0)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_009d;
		}
	}
	{
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// Text Numero = num.GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22;
		L_22 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_21, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// Numero.text = i.ToString();
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_23);
	}

IL_009d:
	{
		// new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void NumeroNotifiche::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumeroNotifiche__ctor_mB8AF6F0A27CA1A5B787B79F5AAF5D8EF04C6D059 (NumeroNotifiche_t617C98D7C839DF72503337FAEA766FA2E9DA0CDB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void User::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User_Awake_m0CFBDCCE66420BD3BFA23DD7FF2FCA92FD92ADA1 (User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator User::GetLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* User_GetLocation_m45FC0A473E6DD8D4E28D905299D0B99A00827A00 (User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* L_0 = (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7*)il2cpp_codegen_object_new(U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetLocationU3Ed__3__ctor_mB9189BFBA71A94A4CFD7D15F42C578AEF8194ED3(L_0, 0, NULL);
		U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// EarthPosition User::GetUserPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* User_GetUserPosition_m81E5402F1D0C86144750A3F4537C11A592D117B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// userPosition.Latitude = Input.location.lastData.latitude;
		il2cpp_codegen_runtime_class_init_inline(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_1;
		L_1 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_1);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_2;
		L_2 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_0), NULL);
		NullCheck(L_0);
		EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline(L_0, ((double)L_3), NULL);
		// userPosition.Longitude = Input.location.lastData.longitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_4 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_5;
		L_5 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_5);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_6;
		L_6 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_0), NULL);
		NullCheck(L_4);
		EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline(L_4, ((double)L_7), NULL);
		// userPosition.Altitude = Input.location.lastData.altitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_8 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_10;
		L_10 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_9, NULL);
		V_0 = L_10;
		float L_11;
		L_11 = LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0((&V_0), NULL);
		NullCheck(L_8);
		EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline(L_8, ((double)L_11), NULL);
		// return userPosition;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_12 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		return L_12;
	}
}
// System.Void User::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__ctor_mA93BAFF15F26978414F373DFC6287FA047561577 (User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void User::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void User__cctor_mE66DCDFB186544515A40A296F618C2EBA8E6EF51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EarthPosition userPosition = new EarthPosition();
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E(L_0, NULL);
		((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5), (void*)L_0);
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
// System.Void User/<GetLocation>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__3__ctor_mB9189BFBA71A94A4CFD7D15F42C578AEF8194ED3 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void User/<GetLocation>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__3_System_IDisposable_Dispose_m9C7034B921677C8F2A5A8A74B3C4D348FBDFFD80 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean User/<GetLocation>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetLocationU3Ed__3_MoveNext_m47D8F51B5DE1BCB81653063B60798012D62B83A0 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* V_1 = NULL;
	int32_t V_2 = 0;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_00a2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_3;
		L_3 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// Permission.RequestUserPermission(Permission.CoarseLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralB29863D97935F87245759F48D47366B206A87A11, NULL);
	}

IL_0049:
	{
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_4;
		L_4 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_4, NULL);
		if (L_5)
		{
			goto IL_0075;
		}
	}
	{
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0075:
	{
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_7;
		L_7 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_7);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_7, NULL);
		// int maxWait = 10;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)10);
		goto IL_00b9;
	}

IL_0089:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// maxWait--;
		int32_t L_9 = __this->___U3CmaxWaitU3E5__2_3;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
	}

IL_00b9:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_11;
		L_11 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_11, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_13 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0089;
		}
	}

IL_00cf:
	{
		// if (maxWait < 1)
		int32_t L_14 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_14) >= ((int32_t)1)))
		{
			goto IL_00da;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00da:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_15;
		L_15 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_15, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00e9;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_00e9:
	{
		// userPosition.Latitude = Input.location.lastData.latitude;
		il2cpp_codegen_runtime_class_init_inline(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_17 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_18;
		L_18 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_18);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_19;
		L_19 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_18, NULL);
		V_3 = L_19;
		float L_20;
		L_20 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_3), NULL);
		NullCheck(L_17);
		EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline(L_17, ((double)L_20), NULL);
		// userPosition.Longitude = Input.location.lastData.longitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_21 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_22;
		L_22 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_22);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_23;
		L_23 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_22, NULL);
		V_3 = L_23;
		float L_24;
		L_24 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_3), NULL);
		NullCheck(L_21);
		EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline(L_21, ((double)L_24), NULL);
		// userPosition.Altitude = Input.location.lastData.altitude;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_25 = ((User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_StaticFields*)il2cpp_codegen_static_fields_for(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var))->___userPosition_5;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_26;
		L_26 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_26);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_27;
		L_27 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_26, NULL);
		V_3 = L_27;
		float L_28;
		L_28 = LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0((&V_3), NULL);
		NullCheck(L_25);
		EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline(L_25, ((double)L_28), NULL);
		// isUpdating = !isUpdating;
		User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* L_29 = V_1;
		User_t830E70FAB67A96176D2C105CB5BBDA86733559AB* L_30 = V_1;
		NullCheck(L_30);
		bool L_31 = L_30->___isUpdating_4;
		NullCheck(L_29);
		L_29->___isUpdating_4 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_32;
		L_32 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_32);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_32, NULL);
		// }
		return (bool)0;
	}
}
// System.Object User/<GetLocation>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetLocationU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB8890BD8273259BA06E452B9E42F72832CBAE436 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void User/<GetLocation>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__3_System_Collections_IEnumerator_Reset_m7B762154AEFAB9354D812D57B38AA70C021F3E82 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetLocationU3Ed__3_System_Collections_IEnumerator_Reset_m7B762154AEFAB9354D812D57B38AA70C021F3E82_RuntimeMethod_var)));
	}
}
// System.Object User/<GetLocation>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetLocationU3Ed__3_System_Collections_IEnumerator_get_Current_m703BAB16D2BF0E5A2F2931B6242F5AA982FB12C0 (U3CGetLocationU3Ed__3_t368225E375739049525541143B3D9A8550481AB7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SchermataImpostazioni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Start_mF90C618A9B0DA8E4B2C94C5B7EE62B4E6C68D1C5 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(setting == 100)
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0010;
		}
	}
	{
		// this.Set100();
		SchermataImpostazioni_Set100_mEA7A2CA34ED03220F59404CE35EA8C44A6E87160(__this, NULL);
		return;
	}

IL_0010:
	{
		// else if(setting == 500)
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)500)))))
		{
			goto IL_0023;
		}
	}
	{
		// this.Set500();
		SchermataImpostazioni_Set500_m12A3F32B4F30455DD62B042A3FEBAD58D8A8A411(__this, NULL);
		return;
	}

IL_0023:
	{
		// else if (setting == 1000)
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0036;
		}
	}
	{
		// this.Set1000();
		SchermataImpostazioni_Set1000_m170381731FFA56A8C82210F0445350C264DAB7F1(__this, NULL);
		return;
	}

IL_0036:
	{
		// else if (setting == 5000)
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		int32_t L_3 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)5000)))))
		{
			goto IL_0048;
		}
	}
	{
		// this.Set5000();
		SchermataImpostazioni_Set5000_m3B4C712BBC7B8531B45B0914A05BA8DE8920DB95(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::Set100()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set100_mEA7A2CA34ED03220F59404CE35EA8C44A6E87160 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setting = 100;
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8 = ((int32_t)100);
		// m100.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m100_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// m500.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m500_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m1000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m1000_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m5000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m5000_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::Set500()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set500_m12A3F32B4F30455DD62B042A3FEBAD58D8A8A411 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setting= 500;
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8 = ((int32_t)500);
		// m100.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m100_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m500.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m500_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// m1000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m1000_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m5000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m5000_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::Set1000()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set1000_m170381731FFA56A8C82210F0445350C264DAB7F1 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setting = 1000;
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8 = ((int32_t)1000);
		// m100.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m100_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m500.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m500_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m1000.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m1000_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// m5000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m5000_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::Set5000()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_Set5000_m3B4C712BBC7B8531B45B0914A05BA8DE8920DB95 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// setting = 5000;
		il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8 = ((int32_t)5000);
		// m100.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m100_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// m500.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m500_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// m1000.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m1000_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// m5000.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m5000_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni__ctor_m7BE9067FB17ABD7FE6AA508316E59136BE3B8986 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SchermataImpostazioni::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni__cctor_mC3178D8D7E13AD88B0EF3E553D5316C9688585B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int setting = 100;
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8 = ((int32_t)100);
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
// System.Void MenuIniziale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIniziale_Start_mA098E468486622AE14B1EFD340778AA93752F36B (MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuIniziale::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIniziale_Update_m0A23D80C43620C4A2E027D838883F4CC8DC69A96 (MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuIniziale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIniziale__ctor_m79A499599430BE237BB22F4A4AD201124F5009C2 (MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void MenuIniziale::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuIniziale__cctor_m5B2F2EBFB9A4DDD4AEDC11E3D3627B6BF7449C6F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EarthPosition userPosition = new EarthPosition();
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E(L_0, NULL);
		((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4), (void*)L_0);
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
// System.Void GestoreDestinazioni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreDestinazioni_Start_m2BB783281C9F914B797FD2FD344DA31CCE1D2EB3 (GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD70CD721A5D7BD17AD89D2F7DC3343DC8ED2CB13);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralD70CD721A5D7BD17AD89D2F7DC3343DC8ED2CB13, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		List_1_t391448499BB460DEF23846051427869A2B708836* L_2;
		L_2 = JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A(L_1, JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4), (void*)L_2);
		// }
		return;
	}
}
// System.String GestoreDestinazioni::Truncate(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03 (String_t* ___value0, int32_t ___maxChars1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.Length <= maxChars ? value : value.Substring(0, maxChars) + "...";
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2 = ___maxChars1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = ___value0;
		int32_t L_4 = ___maxChars1;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, 0, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		return L_6;
	}

IL_001c:
	{
		String_t* L_7 = ___value0;
		return L_7;
	}
}
// System.String GestoreDestinazioni::Arrotonda(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE (double ___distanza0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral253F88F231640E28C64C5628CA0517ACD9605EA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DA78458F2B685C40BFEAEE5D1D651E264882E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4732CA873979EA3EE33343A40E30D23599EC6A49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55761D1306E9EE93D1F40FAF7E27D9F078C695E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AEDE535D1F168B733D6408F9C4DFE56B108F3EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81EC819791C5271AC0C7144B393F4C7F603A0E0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string num = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		double L_0 = ___distanza0;
		if ((!(((double)L_0) <= ((double)(500.0)))))
		{
			goto IL_002c;
		}
	}
	{
		double L_1 = ___distanza0;
		if ((((double)L_1) <= ((double)(50.0))))
		{
			goto IL_0054;
		}
	}
	{
		double L_2 = ___distanza0;
		if ((((double)L_2) <= ((double)(100.0))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0064;
	}

IL_002c:
	{
		double L_3 = ___distanza0;
		if ((!(((double)L_3) <= ((double)(5000.0)))))
		{
			goto IL_0046;
		}
	}
	{
		double L_4 = ___distanza0;
		if ((((double)L_4) <= ((double)(1000.0))))
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0074;
	}

IL_0046:
	{
		double L_5 = ___distanza0;
		if ((((double)L_5) > ((double)(5000.0))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0082;
	}

IL_0054:
	{
		// num = "50m";
		V_0 = _stringLiteral253F88F231640E28C64C5628CA0517ACD9605EA0;
		// break;
		goto IL_0082;
	}

IL_005c:
	{
		// num = "100m";
		V_0 = _stringLiteral55761D1306E9EE93D1F40FAF7E27D9F078C695E5;
		// break;
		goto IL_0082;
	}

IL_0064:
	{
		// num = "500m";
		V_0 = _stringLiteral4732CA873979EA3EE33343A40E30D23599EC6A49;
		// break;
		goto IL_0082;
	}

IL_006c:
	{
		// num = "1000m";
		V_0 = _stringLiteral2DA78458F2B685C40BFEAEE5D1D651E264882E58;
		// break;
		goto IL_0082;
	}

IL_0074:
	{
		// num = "5 km";
		V_0 = _stringLiteral81EC819791C5271AC0C7144B393F4C7F603A0E0A;
		// break;
		goto IL_0082;
	}

IL_007c:
	{
		// num = "5 km+";
		V_0 = _stringLiteral6AEDE535D1F168B733D6408F9C4DFE56B108F3EA;
	}

IL_0082:
	{
		// return num;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void GestoreDestinazioni::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreDestinazioni__ctor_mBD84E20E8ED8E7ACFAF4DFE5CFCC3975956E9DF9 (GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GestoreDestinazioni::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreDestinazioni__cctor_m27C46BEEB2BC130CCFE0EB1DEFA4CE9594BEDBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] public static List<Interest> interests = new List<Interest>();
		List_1_t391448499BB460DEF23846051427869A2B708836* L_0 = (List_1_t391448499BB460DEF23846051427869A2B708836*)il2cpp_codegen_object_new(List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C(L_0, List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var);
		((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4), (void*)L_0);
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
// System.Void SchermataDestinazioni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataDestinazioni_Start_m0C923D93195744E006E5D0871D483B2AF7360967 (SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* V_2 = NULL;
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_3 = NULL;
	{
		// double distanza = 0;                  // variabile con assegnato un valore momentaneo (in teoria uno di default, just in case)
		V_0 = (0.0);
		// foreach (var interest in GestoreDestinazioni.interests)
		il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		List_1_t391448499BB460DEF23846051427869A2B708836* L_0 = ((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4;
		NullCheck(L_0);
		Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 L_1;
		L_1 = List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B(L_0, List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dc:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D((&V_1), Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ce_1;
			}

IL_001a_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_2;
				L_2 = Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline((&V_1), Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
				V_2 = L_2;
				// EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_3 = V_2;
				NullCheck(L_3);
				double L_4;
				L_4 = Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline(L_3, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_5 = V_2;
				NullCheck(L_5);
				double L_6;
				L_6 = Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline(L_5, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_7 = V_2;
				NullCheck(L_7);
				double L_8;
				L_8 = Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline(L_7, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_9 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E(L_9, L_4, L_6, L_8, NULL);
				V_3 = L_9;
				// distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);
				il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_10 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_11 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_12 = V_3;
				NullCheck(L_10);
				double L_13;
				L_13 = EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F(L_10, L_11, L_12, NULL);
				V_0 = L_13;
				// if (distanza < SchermataImpostazioni.setting)
				double L_14 = V_0;
				il2cpp_codegen_runtime_class_init_inline(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
				int32_t L_15 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___setting_8;
				if ((!(((double)L_14) < ((double)((double)L_15)))))
				{
					goto IL_00ce_1;
				}
			}
			{
				// if (interest.HasPath)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_16 = V_2;
				NullCheck(L_16);
				bool L_17;
				L_17 = Interest_get_HasPath_mB7F40C0534898429749E8AC70EDC98DEA080A76B_inline(L_16, NULL);
				if (!L_17)
				{
					goto IL_0096_1;
				}
			}
			{
				// GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___luogoPrefab_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___genitoreLuogo_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				// Text[] texts = newGo.GetComponentsInChildren<Text>();
				NullCheck(L_20);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_21;
				L_21 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_20, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
				// texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_22 = L_21;
				NullCheck(L_22);
				int32_t L_23 = 0;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_25 = V_2;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_25, NULL);
				il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
				String_t* L_27;
				L_27 = GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03(L_26, ((int32_t)21), NULL);
				NullCheck(L_24);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
				// texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
				NullCheck(L_22);
				int32_t L_28 = 1;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
				double L_30 = V_0;
				String_t* L_31;
				L_31 = GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE(L_30, NULL);
				NullCheck(L_29);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_31);
				goto IL_00ce_1;
			}

IL_0096_1:
			{
				// GameObject newGura = Instantiate(guraPrefab, genitoreLuogo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___guraPrefab_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___genitoreLuogo_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
				L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				// Text[] texts = newGura.GetComponentsInChildren<Text>();
				NullCheck(L_34);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_35;
				L_35 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_34, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
				// texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_36 = L_35;
				NullCheck(L_36);
				int32_t L_37 = 0;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_39 = V_2;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_39, NULL);
				il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
				String_t* L_41;
				L_41 = GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03(L_40, ((int32_t)21), NULL);
				NullCheck(L_38);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_41);
				// texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
				NullCheck(L_36);
				int32_t L_42 = 1;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
				double L_44 = V_0;
				String_t* L_45;
				L_45 = GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE(L_44, NULL);
				NullCheck(L_43);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_45);
			}

IL_00ce_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				bool L_46;
				L_46 = Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165((&V_1), Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void SchermataDestinazioni::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataDestinazioni_Update_m6EF37D527E4F085261E61E685C40B9EBF9C3215E (SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MenuIniziale.userPosition = User.GetUserPosition();
		il2cpp_codegen_runtime_class_init_inline(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0;
		L_0 = User_GetUserPosition_m81E5402F1D0C86144750A3F4537C11A592D117B9(NULL);
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SchermataDestinazioni::oopsieWoopsie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataDestinazioni_oopsieWoopsie_mA8675076CD856417E225327F60E546FAFFBB56D9 (SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___oopsie_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// gura.SetActive(true);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SchermataDestinazioni::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataDestinazioni__ctor_mC6FF612E2D1E79F6BAD746ADFEF058B9D720910F (SchermataDestinazioni_t85992086AC345AB05324E01A9487A5A0042A1FA3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GestoreCerca::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreCerca_Start_mFF0DE926992FBD23E9A67AFA62F2830B4B2B9F41 (GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MenuIniziale.userPosition = User.GetUserPosition();
		il2cpp_codegen_runtime_class_init_inline(User_t830E70FAB67A96176D2C105CB5BBDA86733559AB_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_0;
		L_0 = User_GetUserPosition_m81E5402F1D0C86144750A3F4537C11A592D117B9(NULL);
		il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void GestoreCerca::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreCerca_Update_mDA65009A3405F6F1D01841D87794C24795114637 (GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GestoreCerca::Ricerca(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreCerca_Ricerca_m39B1B513E6546BB3B777D55BEA193BAFC21698CC (GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7* __this, String_t* ___stringa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* V_4 = NULL;
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_5 = NULL;
	{
		// double distanza = 0;
		V_0 = (0.0);
		// foreach (Transform interest in genitoreLuogo)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___genitoreLuogo_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0018_1:
			{
				// foreach (Transform interest in genitoreLuogo)
				RuntimeObject* L_5 = V_1;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Destroy(interest.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_002d_1:
			{
				// foreach (Transform interest in genitoreLuogo)
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// foreach (var interest in GestoreDestinazioni.interests)
		il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		List_1_t391448499BB460DEF23846051427869A2B708836* L_10 = ((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4;
		NullCheck(L_10);
		Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 L_11;
		L_11 = List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B(L_10, List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0133:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D((&V_3), Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0125_1;
			}

IL_0058_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_12;
				L_12 = Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline((&V_3), Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
				V_4 = L_12;
				// EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_13 = V_4;
				NullCheck(L_13);
				double L_14;
				L_14 = Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline(L_13, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_15 = V_4;
				NullCheck(L_15);
				double L_16;
				L_16 = Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline(L_15, NULL);
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_17 = V_4;
				NullCheck(L_17);
				double L_18;
				L_18 = Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline(L_17, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_19 = (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E*)il2cpp_codegen_object_new(EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var);
				NullCheck(L_19);
				EarthPosition__ctor_m7830D2EA2EF59E04582CE74CB64C9F2F00B7F84E(L_19, L_14, L_16, L_18, NULL);
				V_5 = L_19;
				// distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);
				il2cpp_codegen_runtime_class_init_inline(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_20 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_21 = ((MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_StaticFields*)il2cpp_codegen_static_fields_for(MenuIniziale_t0817E6488176A3DBF72BBEF7B99E6A8C48E28EE2_il2cpp_TypeInfo_var))->___userPosition_4;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_22 = V_5;
				NullCheck(L_20);
				double L_23;
				L_23 = EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F(L_20, L_21, L_22, NULL);
				V_0 = L_23;
				// if (interest.Nome.ToLower().Contains(stringa.ToLower()))
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_24 = V_4;
				NullCheck(L_24);
				String_t* L_25;
				L_25 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_24, NULL);
				NullCheck(L_25);
				String_t* L_26;
				L_26 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_25, NULL);
				String_t* L_27 = ___stringa0;
				NullCheck(L_27);
				String_t* L_28;
				L_28 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_27, NULL);
				NullCheck(L_26);
				bool L_29;
				L_29 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_26, L_28, NULL);
				if (!L_29)
				{
					goto IL_0125_1;
				}
			}
			{
				// if (interest.HasPath)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_30 = V_4;
				NullCheck(L_30);
				bool L_31;
				L_31 = Interest_get_HasPath_mB7F40C0534898429749E8AC70EDC98DEA080A76B_inline(L_30, NULL);
				if (!L_31)
				{
					goto IL_00ec_1;
				}
			}
			{
				// GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___luogoPrefab_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___genitoreLuogo_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
				L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				// Text[] texts = newGo.GetComponentsInChildren<Text>();
				NullCheck(L_34);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_35;
				L_35 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_34, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
				// texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_36 = L_35;
				NullCheck(L_36);
				int32_t L_37 = 0;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_39 = V_4;
				NullCheck(L_39);
				String_t* L_40;
				L_40 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_39, NULL);
				il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
				String_t* L_41;
				L_41 = GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03(L_40, ((int32_t)21), NULL);
				NullCheck(L_38);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_41);
				// texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
				NullCheck(L_36);
				int32_t L_42 = 1;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
				double L_44 = V_0;
				String_t* L_45;
				L_45 = GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE(L_44, NULL);
				NullCheck(L_43);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_45);
				goto IL_0125_1;
			}

IL_00ec_1:
			{
				// GameObject newGura = Instantiate(guraPrefab, genitoreLuogo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___guraPrefab_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___genitoreLuogo_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
				L_48 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_46, L_47, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				// Text[] texts = newGura.GetComponentsInChildren<Text>();
				NullCheck(L_48);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_49;
				L_49 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_48, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
				// texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_50 = L_49;
				NullCheck(L_50);
				int32_t L_51 = 0;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_53 = V_4;
				NullCheck(L_53);
				String_t* L_54;
				L_54 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_53, NULL);
				il2cpp_codegen_runtime_class_init_inline(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
				String_t* L_55;
				L_55 = GestoreDestinazioni_Truncate_m5427157D0656A407BC2ABF1904424CF4B1F3CC03(L_54, ((int32_t)21), NULL);
				NullCheck(L_52);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_55);
				// texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
				NullCheck(L_50);
				int32_t L_56 = 1;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
				double L_58 = V_0;
				String_t* L_59;
				L_59 = GestoreDestinazioni_Arrotonda_m27761B704F6BBF68104E35AB852B6EFBE11F73EE(L_58, NULL);
				NullCheck(L_57);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_59);
			}

IL_0125_1:
			{
				// foreach (var interest in GestoreDestinazioni.interests)
				bool L_60;
				L_60 = Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165((&V_3), Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
				if (L_60)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_0141;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0141:
	{
		// }
		return;
	}
}
// System.Void GestoreCerca::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreCerca__ctor_mEE880A538E2806599C1A744A309FA76F429E546A (GestoreCerca_t9694CD4889443F65BAE65C8342755A9D88B68DB7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Latitude_m7622C4967B61E24C577AD875C9F38BF3FA733118_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLatitudeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Longitude_m9D1241E4BF0641DF5C39134435EC294977E782BA_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLongitudeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EarthPosition_set_Altitude_mA04D5CE58BDAF02341F0E15ABA7E1DCFF4458B0C_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CAltitudeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = __this->___U3CLatitudeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = __this->___U3CLongitudeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Latitude_mB3BC32E83A85D2D68233D604874FBF028E3C477E_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = __this->___U3CLatitudeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Longitude_m3251EBE4CF690C33AAD54263A6F4E41D2F5E26F7_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = __this->___U3CLongitudeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Interest_get_Altitude_mA3B71E48BB3E892201DD65AD2B49293838C2DE4F_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = __this->___U3CAltitudeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = __this->___U3CAltitudeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Latitude_m61EA58AB675DDF90F95B5A3F846A31706FDE70D8_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Latitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLatitudeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Longitude_m32C543B5C1BE97EF855A10D70CE4808B6742F43E_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Longitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CLongitudeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Altitude_mC583C1F1688B94323CED41CC271DF0C1F66662AD_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public double Altitude { get; set; }
		double L_0 = ___value0;
		__this->___U3CAltitudeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Nome_mE24DAC0BE62ED305754E48CB9ED02AB8286745A0_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Nome { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNomeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNomeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_Text_m633C04ED121386AC131813926E58C4FBF9A290A3_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Interest_set_HasPath_mB12D851A3EE8D2A14504C1ADE8E88515FB18C394_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool HasPath { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasPathU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Interest_get_HasPath_mB7F40C0534898429749E8AC70EDC98DEA080A76B_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public bool HasPath { get; set; }
		bool L_0 = __this->___U3CHasPathU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Nome { get; set; }
		String_t* L_0 = __this->___U3CNomeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
