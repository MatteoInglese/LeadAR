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
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EarthPosition
struct EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E;
// ExitManager
struct ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589;
// ExitManagerImpostazioni
struct ExitManagerImpostazioni_t9C47EE06BDD14E218572BF589A10A8F4E075CF5B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GeospatialObject
struct GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B;
// GestoreDestinazioni
struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40;
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
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SchermataImpostazioni
struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3;
// SchermataMenuIniziale
struct SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B;
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
// VPSManager/<GetLocation>d__7
struct U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t391448499BB460DEF23846051427869A2B708836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018F915A2366D42EA5F0DB0E9D19E7136B08B37B;
IL2CPP_EXTERN_C String_t* _stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A;
IL2CPP_EXTERN_C String_t* _stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A;
IL2CPP_EXTERN_C String_t* _stringLiteral299B6AEB334BD055D2F013516D13E858E168C74C;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C;
IL2CPP_EXTERN_C String_t* _stringLiteral8045A7906D444C63B19AF30F817FC5DBC3628BEB;
IL2CPP_EXTERN_C String_t* _stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8;
IL2CPP_EXTERN_C String_t* _stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E;
IL2CPP_EXTERN_C String_t* _stringLiteralB057A438444498A79A7724C7395556AB54E62FEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544;
IL2CPP_EXTERN_C String_t* _stringLiteralB29863D97935F87245759F48D47366B206A87A11;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42;
IL2CPP_EXTERN_C String_t* _stringLiteralD70CD721A5D7BD17AD89D2F7DC3343DC8ED2CB13;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645;
IL2CPP_EXTERN_C String_t* _stringLiteralE60155132313C5959DB516CB80851951055F4700;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882;
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
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mBFAFF0525A15BEE8D9047F24C691E9C05D4FAAF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA5B43D86514D06C823392C93E8CEDB655EB324ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetLocationU3Ed__7_System_Collections_IEnumerator_Reset_m79D078089BC46B100954C57A42B49BEA359FA268_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

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

// VPSManager/<GetLocation>d__7
struct U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB  : public RuntimeObject
{
	// System.Int32 VPSManager/<GetLocation>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VPSManager/<GetLocation>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VPSManager VPSManager/<GetLocation>d__7::<>4__this
	VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* ___U3CU3E4__this_2;
	// System.Int32 VPSManager/<GetLocation>d__7::<maxWait>5__2
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// ExitManager
struct ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ExitManager::sceneIndex
	int32_t ___sceneIndex_4;
};

// ExitManagerImpostazioni
struct ExitManagerImpostazioni_t9C47EE06BDD14E218572BF589A10A8F4E075CF5B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GestoreDestinazioni
struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GestoreDestinazioni::luogoPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___luogoPrefab_5;
	// UnityEngine.Transform GestoreDestinazioni::genitoreLuogo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___genitoreLuogo_6;
};

struct GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields
{
	// System.Collections.Generic.List`1<Interest> GestoreDestinazioni::interests
	List_1_t391448499BB460DEF23846051427869A2B708836* ___interests_4;
};

// SchermataImpostazioni
struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields
{
	// System.Int32 SchermataImpostazioni::SceneIndex
	int32_t ___SceneIndex_4;
};

// SchermataMenuIniziale
struct SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VPSManager
struct VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.XR.ARCoreExtensions.AREarthManager VPSManager::earthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___earthManager_4;
	// UnityEngine.XR.ARFoundation.ARAnchorManager VPSManager::aRAnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___aRAnchorManager_5;
	// System.Collections.Generic.List`1<EarthPosition> VPSManager::positions
	List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* ___positions_6;
	// System.Collections.Generic.List`1<GeospatialObject> VPSManager::geospatialObjects
	List_1_tE0C87873805AA426F20564FC518E05B58339737D* ___geospatialObjects_7;
	// System.Boolean VPSManager::isUpdating
	bool ___isUpdating_9;
};

struct VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields
{
	// EarthPosition VPSManager::userPosition
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___userPosition_8;
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
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
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
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.String Interest::get_Nome()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Interest>::MoveNext()
inline bool Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165 (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Interest>::.ctor()
inline void List_1__ctor_m8804A1D4DFE226F5CF7C1A0ACD3CF85BF737627C (List_1_t391448499BB460DEF23846051427869A2B708836* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t391448499BB460DEF23846051427869A2B708836*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.Collections.IEnumerator VPSManager::GetLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VPSManager_GetLocation_mFD95E5534F53DDDD840EF8BE4782780E360A8950 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void VPSManager/<GetLocation>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__7__ctor_mDD61D50E7DDB2E590A977DDED7E4C7B7B0A34426 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.List`1<EarthPosition>>(System.String)
inline List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
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
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
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
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Reverse()
inline void List_1_Reverse_mBFAFF0525A15BEE8D9047F24C691E9C05D4FAAF4 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
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
// System.Void EarthPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EarthPosition__ctor_mB7D3B2CDC435CFE11784A8AE318EC7C88D68086E (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_altitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_altitude_m3B4BE2F447F3599F5677DD72A86C3A1A801ABAE0 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GeospatialObject>::get_Item(System.Int32)
inline GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* List_1_get_Item_mA5B43D86514D06C823392C93E8CEDB655EB324ED (List_1_tE0C87873805AA426F20564FC518E05B58339737D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* (*) (List_1_tE0C87873805AA426F20564FC518E05B58339737D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Double EarthPosition::Distance(EarthPosition,EarthPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F (EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* __this, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e10, EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* ___e21, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
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
// System.Void ExitManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManager_Start_m7412A20D1F66E27AA4C436A30159ED17D2DCD936 (ExitManager_t9B7E6555E92D4CE89ED3CB617969FE49A16FF589* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// sceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		__this->___sceneIndex_4 = L_1;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// if (SceneManager.GetActiveScene().buildIndex == 0)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}

IL_001e:
	{
		// SceneManager.LoadScene(sceneIndex - 1);
		int32_t L_3 = __this->___sceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
	}

IL_002b:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitManagerImpostazioni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManagerImpostazioni_Start_m72D3DD93BFF833D41AD691AE897ACB1A56F21273 (ExitManagerImpostazioni_t9C47EE06BDD14E218572BF589A10A8F4E075CF5B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ExitManagerImpostazioni::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManagerImpostazioni_Update_m22AE569916B14AC3E9E4F057F17E34ABA9C305C0 (ExitManagerImpostazioni_t9C47EE06BDD14E218572BF589A10A8F4E075CF5B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene(SchermataImpostazioni.SceneIndex);
		int32_t L_1 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ExitManagerImpostazioni::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitManagerImpostazioni__ctor_mD4328F9BC5542FC2F6C9DD5A2CB5193C42EF2FF7 (ExitManagerImpostazioni_t9C47EE06BDD14E218572BF589A10A8F4E075CF5B* __this, const RuntimeMethod* method) 
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
// System.Void GestoreDestinazioni::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestoreDestinazioni_Start_m2BB783281C9F914B797FD2FD344DA31CCE1D2EB3 (GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t391448499BB460DEF23846051427869A2B708836_mF2F9A864BB26E90B71972309F5C3D099FE9D977A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD70CD721A5D7BD17AD89D2F7DC3343DC8ED2CB13);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* V_1 = NULL;
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
		// foreach (var interest in interests)
		List_1_t391448499BB460DEF23846051427869A2B708836* L_3 = ((GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_StaticFields*)il2cpp_codegen_static_fields_for(GestoreDestinazioni_t9036E99DB4F5F9261858FC70AC4BE2D421842F40_il2cpp_TypeInfo_var))->___interests_4;
		NullCheck(L_3);
		Enumerator_t78EA6801DE0082729BA586BBA74231378A5415B2 L_4;
		L_4 = List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B(L_3, List_1_GetEnumerator_m91A7121AC6D1FAFE43D0CBD4BA9ABAE34B49B67B_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D((&V_0), Enumerator_Dispose_m3FAFE7E5A9F3F711FCE84C2693752F705681912D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0026_1:
			{
				// foreach (var interest in interests)
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_5;
				L_5 = Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_inline((&V_0), Enumerator_get_Current_m22EC4FC80B791D45E3A680A59E53CBD106B67FA7_RuntimeMethod_var);
				V_1 = L_5;
				// GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___luogoPrefab_5;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___genitoreLuogo_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				// Text[] texts = newGo.GetComponentsInChildren<Text>();
				NullCheck(L_8);
				TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_9;
				L_9 = GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21(L_8, GameObject_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m531D23F4AD96C7E6896EE31533EAFE928D694C21_RuntimeMethod_var);
				// texts[0].text = interest.Nome;
				NullCheck(L_9);
				int32_t L_10 = 0;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* L_12 = V_1;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline(L_12, NULL);
				NullCheck(L_11);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
			}

IL_0051_1:
			{
				// foreach (var interest in interests)
				bool L_14;
				L_14 = Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165((&V_0), Enumerator_MoveNext_m75596B1F87623719055109926C48B70EE7F85165_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
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
// System.Void VPSManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_Update_m83394B2A173A0CB79276D600B0692DE7E1C30170 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	{
		// if (!isUpdating)
		bool L_0 = __this->___isUpdating_9;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// StartCoroutine(GetLocation());
		RuntimeObject* L_1;
		L_1 = VPSManager_GetLocation_mFD95E5534F53DDDD840EF8BE4782780E360A8950(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// isUpdating = !isUpdating;
		bool L_3 = __this->___isUpdating_9;
		__this->___isUpdating_9 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator VPSManager::GetLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VPSManager_GetLocation_mFD95E5534F53DDDD840EF8BE4782780E360A8950 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* L_0 = (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB*)il2cpp_codegen_object_new(U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetLocationU3Ed__7__ctor_mDD61D50E7DDB2E590A977DDED7E4C7B7B0A34426(L_0, 0, NULL);
		U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VPSManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VPSManager_Start_m6CCB660B0D42CCA1B542D58D7E16820A94452B19 (VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* V_1 = NULL;
	{
		// positions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0;
		L_0 = Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2(_stringLiteralCA634254E46C45AA3BE34FBE082CE56483F72F42, Resources_Load_TisTextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_m55E770DF81AB6D40763121667DA5E743EF1036B2_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_2;
		L_2 = JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F(L_1, JsonConvert_DeserializeObject_TisList_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_mD648963B53FC0CB2ED1A2D25F7E3FA676DB9C36F_RuntimeMethod_var);
		__this->___positions_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_6), (void*)L_2);
		// foreach (var position in positions)
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_3 = __this->___positions_6;
		NullCheck(L_3);
		Enumerator_tB811CC553D9F5A089AF123445854A2E79DF5AC3E L_4;
		L_4 = List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546(L_3, List_1_GetEnumerator_m0AFDB5D263C7560FA64B37F2B92EF20DA6695546_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D((&V_0), Enumerator_Dispose_m0CCB6A1E597A072B66A6B27472390CC13553456D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0028_1:
			{
				// foreach (var position in positions)
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_5;
				L_5 = Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_inline((&V_0), Enumerator_get_Current_mBB47DC0A1152E2F8E527215264BE51137C5E7816_RuntimeMethod_var);
				// GeospatialObject geo = new GeospatialObject(position);
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_6 = (GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B*)il2cpp_codegen_object_new(GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				GeospatialObject__ctor_m75A1253C8B9789644669A38022BC656AC896167B(L_6, L_5, NULL);
				V_1 = L_6;
				// geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_7 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
				L_8 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteral80BC6B7A6CECCE5459FCC4FC252283C0DD1AC6A8, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
				NullCheck(L_7);
				L_7->___ObjectPrefab_0 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&L_7->___ObjectPrefab_0), (void*)L_8);
				// geospatialObjects.Add(geo);
				List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_9 = __this->___geospatialObjects_7;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_10 = V_1;
				NullCheck(L_9);
				List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_inline(L_9, L_10, List_1_Add_m6B3C124C1017F1469E4DA59848BE4E556ADF4B6C_RuntimeMethod_var);
			}

IL_0051_1:
			{
				// foreach (var position in positions)
				bool L_11;
				L_11 = Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA((&V_0), Enumerator_MoveNext_mAF61F062EF53186CB16D79FD68231A8945AA3FBA_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mBFAFF0525A15BEE8D9047F24C691E9C05D4FAAF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* V_2 = NULL;
	EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* V_3 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// if (earthManager.EarthTrackingState == TrackingState.Tracking)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___earthManager_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0109;
		}
	}
	{
		// var geospatialPose = earthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_2 = __this->___earthManager_4;
		NullCheck(L_2);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_3;
		L_3 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_2, NULL);
		// List<Transform> path = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_4, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_4;
		// foreach (var obj in geospatialObjects)
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_5 = __this->___geospatialObjects_7;
		NullCheck(L_5);
		Enumerator_tD28AE11BF5A246323971BB8629434C503B77AD8C L_6;
		L_6 = List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16(L_5, List_1_GetEnumerator_m98C89FBC37A4D5DC69C0EB5302691FB6384E3F16_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302((&V_1), Enumerator_Dispose_mFA023B53B75E7F4CDCB4BE366553A9A59E133302_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0081_1;
			}

IL_0031_1:
			{
				// foreach (var obj in geospatialObjects)
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_7;
				L_7 = Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_inline((&V_1), Enumerator_get_Current_m551574CBC19405C282190F15D3A0E69F434A9329_RuntimeMethod_var);
				V_2 = L_7;
				// var earthPosition = obj.EarthPosition;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_8 = V_2;
				NullCheck(L_8);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_9 = L_8->___EarthPosition_1;
				V_3 = L_9;
				// var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
				ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_10 = __this->___aRAnchorManager_5;
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_11 = V_3;
				NullCheck(L_11);
				double L_12;
				L_12 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_11, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_13 = V_3;
				NullCheck(L_13);
				double L_14;
				L_14 = EarthPosition_get_Longitude_m48B0EC069D124AF78D9B6BCF2822E47B9A8B4C48_inline(L_13, NULL);
				EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_15 = V_3;
				NullCheck(L_15);
				double L_16;
				L_16 = EarthPosition_get_Altitude_mD0E0880D6F2658A9525132EEF982D3FE28958805_inline(L_15, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
				L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18;
				L_18 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_10, L_12, L_14, L_16, L_17, NULL);
				V_4 = L_18;
				// path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_19 = V_0;
				GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_20 = V_2;
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___ObjectPrefab_0;
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_22 = V_4;
				NullCheck(L_22);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
				L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
				L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_21, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				NullCheck(L_24);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
				L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
				NullCheck(L_19);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_19, L_25, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_0081_1:
			{
				// foreach (var obj in geospatialObjects)
				bool L_26;
				L_26 = Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB((&V_1), Enumerator_MoveNext_m55FF198A4FF200E9D2DF947A9C383585EFAF52FB_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		// path.Reverse();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_27 = V_0;
		NullCheck(L_27);
		List_1_Reverse_mBFAFF0525A15BEE8D9047F24C691E9C05D4FAAF4(L_27, List_1_Reverse_mBFAFF0525A15BEE8D9047F24C691E9C05D4FAAF4_RuntimeMethod_var);
		// for (int i = 0; i < path.Count; i++)
		V_5 = 0;
		goto IL_00fe;
	}

IL_00a5:
	{
		// if (path[i] != path[path.Count - 1])
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_28, L_29, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_31 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_32, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_31, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, L_34, NULL);
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		// path[i + 1].LookAt(path[i]);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_36, ((int32_t)il2cpp_codegen_add(L_37, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_39, L_40, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_38);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_38, L_41, NULL);
		// path[i + 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_42 = V_0;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_44);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_44, (0.0f), (-90.0f), (0.0f), 1, NULL);
	}

IL_00f8:
	{
		// for (int i = 0; i < path.Count; i++)
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00fe:
	{
		// for (int i = 0; i < path.Count; i++)
		int32_t L_46 = V_5;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_47, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_00a5;
		}
	}
	{
		return;
	}

IL_0109:
	{
		// else if (earthManager.EarthTrackingState == TrackingState.None)
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_49 = __this->___earthManager_4;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_49, NULL);
		if (L_50)
		{
			goto IL_0126;
		}
	}
	{
		// Invoke("Place Objects", 5.0f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral479D026ACC41F8C5E164E03798587C7B28536E6C, (5.0f), NULL);
	}

IL_0126:
	{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<EarthPosition> positions = new List<EarthPosition>();
		List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9* L_0 = (List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9*)il2cpp_codegen_object_new(List_1_t171D5B76E652A6877E6FD4CC22A2E730584B13D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914(L_0, List_1__ctor_m03CC7CDF2042ABA05D1642E9252EE69B64930914_RuntimeMethod_var);
		__this->___positions_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_6), (void*)L_0);
		// [SerializeField] private List<GeospatialObject> geospatialObjects = new List<GeospatialObject>();
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_1 = (List_1_tE0C87873805AA426F20564FC518E05B58339737D*)il2cpp_codegen_object_new(List_1_tE0C87873805AA426F20564FC518E05B58339737D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2(L_1, List_1__ctor_m5A5111B9EF1B7A4A4D16C0872209983D1D6D2AB2_RuntimeMethod_var);
		__this->___geospatialObjects_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___geospatialObjects_7), (void*)L_1);
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
		((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8), (void*)L_0);
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
// System.Void VPSManager/<GetLocation>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__7__ctor_mDD61D50E7DDB2E590A977DDED7E4C7B7B0A34426 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VPSManager/<GetLocation>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__7_System_IDisposable_Dispose_m3EF6827C56CCD0B8D2C13757461F574C09AD1D74 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VPSManager/<GetLocation>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetLocationU3Ed__7_MoveNext_mA1131F41132216DF84834A0508DE7A638DA21E97 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA5B43D86514D06C823392C93E8CEDB655EB324ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB057A438444498A79A7724C7395556AB54E62FEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB29863D97935F87245759F48D47366B206A87A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* V_1 = NULL;
	int32_t V_2 = 0;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* L_1 = __this->___U3CU3E4__this_2;
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
		il2cpp_codegen_runtime_class_init_inline(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_17 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
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
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_21 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
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
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_25 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
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
		// Text lat = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral275FCC34040D18D84074326CBD23A1C1A584DF4A, NULL);
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30;
		L_30 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_29, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// lat.text = "Latitude: " + userPosition.Latitude.ToString();
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_31 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
		NullCheck(L_31);
		double L_32;
		L_32 = EarthPosition_get_Latitude_mC6D88348B62E6CF2F1F33C1AADDF7F820437FE94_inline(L_31, NULL);
		V_4 = L_32;
		String_t* L_33;
		L_33 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_4), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE9BF22729544B5E920EAC9403A78D51B00B6B882, L_33, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		// Text lon = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE53895BDC990962B1E9D15B36B3F47D783004645, NULL);
		NullCheck(L_35);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36;
		L_36 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_35, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		// lon.text = "Distance: " + userPosition.Distance(userPosition, geospatialObjects[0].EarthPosition) + "m";
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_37 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_38 = ((VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_StaticFields*)il2cpp_codegen_static_fields_for(VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841_il2cpp_TypeInfo_var))->___userPosition_8;
		VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* L_39 = V_1;
		NullCheck(L_39);
		List_1_tE0C87873805AA426F20564FC518E05B58339737D* L_40 = L_39->___geospatialObjects_7;
		NullCheck(L_40);
		GeospatialObject_t9E2E5CBBC2D16DA6871C2A30381F1986F8D8A75B* L_41;
		L_41 = List_1_get_Item_mA5B43D86514D06C823392C93E8CEDB655EB324ED(L_40, 0, List_1_get_Item_mA5B43D86514D06C823392C93E8CEDB655EB324ED_RuntimeMethod_var);
		NullCheck(L_41);
		EarthPosition_tC712E0561D35EBC3E87812B8B164F207A188348E* L_42 = L_41->___EarthPosition_1;
		NullCheck(L_37);
		double L_43;
		L_43 = EarthPosition_Distance_m942F3B008888AAFA4FC456D8F7C2B207F52A056F(L_37, L_38, L_42, NULL);
		V_4 = L_43;
		String_t* L_44;
		L_44 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_4), NULL);
		String_t* L_45;
		L_45 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB057A438444498A79A7724C7395556AB54E62FEC, L_44, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_45);
		// isUpdating = !isUpdating;
		VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* L_46 = V_1;
		VPSManager_tD11BA77BA140C85F80DD3131483141FACA139841* L_47 = V_1;
		NullCheck(L_47);
		bool L_48 = L_47->___isUpdating_9;
		NullCheck(L_46);
		L_46->___isUpdating_9 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_49;
		L_49 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_49);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_49, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VPSManager/<GetLocation>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetLocationU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m46CD133B5C83FBADD243C2FF8535046BB6EF5354 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VPSManager/<GetLocation>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetLocationU3Ed__7_System_Collections_IEnumerator_Reset_m79D078089BC46B100954C57A42B49BEA359FA268 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetLocationU3Ed__7_System_Collections_IEnumerator_Reset_m79D078089BC46B100954C57A42B49BEA359FA268_RuntimeMethod_var)));
	}
}
// System.Object VPSManager/<GetLocation>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetLocationU3Ed__7_System_Collections_IEnumerator_get_Current_m6968B3D991D1708DD0E7965E3A8A025CBC5D9432 (U3CGetLocationU3Ed__7_tA338F0A91A723B34069DC4285212356473BD30DB* __this, const RuntimeMethod* method) 
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
	{
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::TornaMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_TornaMenu_m939B8A8AF7CE385D2D0B0BD1E325E5AB72A9894C (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MenuIniziale");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB0AB1F009442AF716476C48E57740C9BE9980544, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::SetDistanceTrue(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_SetDistanceTrue_mFB41655962C7094E48C6DDAC54A64642ACAC32FE (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	{
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::SetDistanceFalse(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_SetDistanceFalse_m6EB5FD6D4EE5D438EA674AAA11A096DFDE906F1B (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	{
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::ApriImpostazioni()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_ApriImpostazioni_mB3634C649C2DC952AB3C3933389F56FB773FECF3 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___SceneIndex_4 = L_1;
		// SceneManager.LoadScene("Impostazioni");
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral123C18A438A1BA71B1324593B0EF1C4AABC80E2A, NULL);
		// }
		return;
	}
}
// System.Void SchermataImpostazioni::TornaIndietro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataImpostazioni_TornaIndietro_m5B7FE01D8CC37F072D2D4726F65391F9D05AD068 (SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(SceneIndex);
		int32_t L_0 = ((SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_StaticFields*)il2cpp_codegen_static_fields_for(SchermataImpostazioni_tE951BB5745FEFAA4CFCE7596FCBEF484F727A9B3_il2cpp_TypeInfo_var))->___SceneIndex_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SchermataMenuIniziale::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataMenuIniziale_Start_m3939F7341A11F6791FEEFEEC36E2953F5D4AA5D0 (SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SchermataMenuIniziale::ApriEsplorazione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataMenuIniziale_ApriEsplorazione_m7E4AC9717F198FFE3BA64A8F957136345D9B03BD (SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// }
		return;
	}
}
// System.Void SchermataMenuIniziale::ApriSceltaDestinazione()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataMenuIniziale_ApriSceltaDestinazione_m8D6AA72BB5DE93BAAE69168BBFD8DFDC75A4EE79 (SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SceltaDestinazione");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral86F29772E4D2278C1EA3AC5AAB1B1C43136C922E, NULL);
		// }
		return;
	}
}
// System.Void SchermataMenuIniziale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchermataMenuIniziale__ctor_mF9E6A3152531AD663CAD73239A62B52107A51EAE (SchermataMenuIniziale_t90BBF9081A793620359653DC3D436069E9CACF7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Interest_get_Nome_m33182751EDFCA06E8F38F0FA0772C35E6BA81194_inline (Interest_tF8A8128B3099735B39C5C9293708883957A3CC45* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public string Nome { get; set; }
		String_t* L_0 = __this->___U3CNomeU3Ek__BackingField_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
