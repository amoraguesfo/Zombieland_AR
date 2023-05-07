#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t70BCBD395B99126866E0354041C8DCD1CE80A714;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// ButtonUI
struct ButtonUI_t5256A8C05315E0757F96C06015768AC38E80C269;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Helpers.CardboardSetup
struct CardboardSetup_t93C199A353A77161AA1B897ACD906A0BCB922543;
// Google.XR.Cardboard.CardboardStartup
struct CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF;
// Animations.Collectable
struct Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Managers.GameManager
struct GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GazeInteractionSource
struct GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F;
// Animations.Highlight
struct Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IEventSystemHandler
struct IEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F;
// Interactions.NavigationController
struct NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectInteract_test
struct ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Animations.Spin
struct Spin_t8EFA146F71FD3E887A431771B690B0A13D9F1B32;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34;
// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D;
// Google.XR.Cardboard.XRLoader
struct XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// ZombieMove
struct ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB;
// mouseMoveEditor
struct mouseMoveEditor_tEECE66E75CF04B9895574CB96678B14679343564;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Animations.Collectable/<Collect>d__5
struct U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A;
// Animations.Highlight/<Transition>d__9
struct U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Interactions.NavigationController/<DisplayMarker>d__6
struct U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03;

IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432;
IL2CPP_EXTERN_C String_t* _stringLiteral370684D8B8185944ECF106EECA58A528269380DC;
IL2CPP_EXTERN_C String_t* _stringLiteral3D93608C7636930F81DC177E8A4317349B290C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F4FAB8D965605EA7112F2938188E6856029E7CF;
IL2CPP_EXTERN_C String_t* _stringLiteral648064382B131EE3D12FD289ECF8CE013184124C;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC;
IL2CPP_EXTERN_C String_t* _stringLiteralC20D876BA870F80DB2CBB76E64F9363ECFCA1C6C;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFCFBD3FF06BE4F4F1A7BCC160D9739B08935F34A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m98D942258C08C47422F529E5AFDF79F673C26BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m44B2E05E36411A6BEF4D593FADA0AD185D568F7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6B53313811F460FB14C9E5D9927949B611BF067C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisGameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_m85B396B185361FB0DCBE0A018C1A54094D655F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisIEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5_mAEC49791B86879B4734D56F1163B052C539BDC82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mD4C575C3343108E2B738747896831CC808965D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisIPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_m61506C544445FF39509BC1C220277DD7F25DC3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1_Create_m5BA14D56739F7FF52EC7A254341F000A49E62EF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m152030B04DF89D0BE4D0E11651A3D04C58969F17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisXRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_mFB28223BBCAE2102EC27A43CA528B16CEF466865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_m680620E39BD3BB777B7AA175E898ACAD749A6941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCollectU3Ed__5_System_Collections_IEnumerator_Reset_m9A9C9849EDE7E0FEB279A525AFEB5746044E5EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayMarkerU3Ed__6_System_Collections_IEnumerator_Reset_m44F4C623877E2088E349E67531911DD5FEB0B10C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTransitionU3Ed__9_System_Collections_IEnumerator_Reset_m0E1E98C40889F9B7A5D3FE1A320C03C58085FB6D_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

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

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Animations.Collectable/<Collect>d__5
struct U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A  : public RuntimeObject
{
	// System.Int32 Animations.Collectable/<Collect>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Animations.Collectable/<Collect>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Animations.Collectable Animations.Collectable/<Collect>d__5::<>4__this
	Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* ___U3CU3E4__this_2;
	// System.Single Animations.Collectable/<Collect>d__5::delay
	float ___delay_3;
	// System.Single Animations.Collectable/<Collect>d__5::<time>5__2
	float ___U3CtimeU3E5__2_4;
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

// System.Collections.Generic.List`1/Enumerator<System.Single>
struct Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	float ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>
struct Enumerator_t90437B5A987837790258FA617758AAEAB48304B2 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// Animations.Highlight/<Transition>d__9
struct U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9  : public RuntimeObject
{
	// System.Int32 Animations.Highlight/<Transition>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Animations.Highlight/<Transition>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single Animations.Highlight/<Transition>d__9::delay
	float ___delay_2;
	// System.Collections.Generic.List`1<System.Single> Animations.Highlight/<Transition>d__9::scales
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___scales_3;
	// Animations.Highlight Animations.Highlight/<Transition>d__9::<>4__this
	Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* ___U3CU3E4__this_4;
	// System.Single Animations.Highlight/<Transition>d__9::<fractionalDelay>5__2
	float ___U3CfractionalDelayU3E5__2_5;
	// System.Collections.Generic.List`1/Enumerator<System.Single> Animations.Highlight/<Transition>d__9::<>7__wrap2
	Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C ___U3CU3E7__wrap2_6;
	// System.Single Animations.Highlight/<Transition>d__9::<time>5__4
	float ___U3CtimeU3E5__4_7;
	// UnityEngine.Vector3 Animations.Highlight/<Transition>d__9::<vectorScale>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvectorScaleU3E5__5_8;
};

// Interactions.NavigationController/<DisplayMarker>d__6
struct U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03  : public RuntimeObject
{
	// System.Int32 Interactions.NavigationController/<DisplayMarker>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Interactions.NavigationController/<DisplayMarker>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Interactions.NavigationController Interactions.NavigationController/<DisplayMarker>d__6::<>4__this
	NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Interactions.NavigationController/<DisplayMarker>d__6::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// System.Single Interactions.NavigationController/<DisplayMarker>d__6::delay
	float ___delay_4;
	// System.Single Interactions.NavigationController/<DisplayMarker>d__6::<time>5__2
	float ___U3CtimeU3E5__2_5;
};

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7  : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D
{
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC541D17A8306FA1C3A608A1328A6DBFDA3264671_marshaled_com : public IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34  : public IntegratedSubsystem_1_tF93BC76362E85BDD215312162457BE510FC76D3B
{
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tC867D66471C553CFFF8707FF2C59FB7AAB03086A* ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_DeviceIdsCache_4;
};

// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D  : public IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARTapToPlaceObject
struct ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARTapToPlaceObject::objectToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToPlace_4;
	// UnityEngine.GameObject ARTapToPlaceObject::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_5;
	// UnityEngine.GameObject ARTapToPlaceObject::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARTapToPlaceObject::arOrigin
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___arOrigin_7;
	// UnityEngine.Pose ARTapToPlaceObject::placementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___placementPose_8;
	// System.Boolean ARTapToPlaceObject::placementPoseIsValid
	bool ___placementPoseIsValid_9;
};

// ButtonUI
struct ButtonUI_t5256A8C05315E0757F96C06015768AC38E80C269  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ButtonUI::vr_game
	String_t* ___vr_game_4;
	// System.String ButtonUI::ar_game
	String_t* ___ar_game_5;
};

// Helpers.CardboardSetup
struct CardboardSetup_t93C199A353A77161AA1B897ACD906A0BCB922543  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.Cardboard.CardboardStartup
struct CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.XR.Cardboard.XRLoader Google.XR.Cardboard.CardboardStartup::loader
	XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* ___loader_6;
	// System.String Google.XR.Cardboard.CardboardStartup::inputMatch
	String_t* ___inputMatch_9;
};

// Animations.Collectable
struct Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Animations.Collectable::collectTime
	float ___collectTime_4;
	// UnityEngine.Transform Animations.Collectable::_player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____player_5;
};

// Managers.GameManager
struct GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Managers.GameManager::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// System.Int32 Managers.GameManager::time
	int32_t ___time_6;
};

// GazeInteractionSource
struct GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GazeInteractionSource::ReticleSortingOrder
	int32_t ___ReticleSortingOrder_4;
	// UnityEngine.LayerMask GazeInteractionSource::ReticleInteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ReticleInteractionLayerMask_5;
	// System.Single GazeInteractionSource::_RETICLE_MAX_DISTANCE
	float ____RETICLE_MAX_DISTANCE_11;
	// UnityEngine.GameObject GazeInteractionSource::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_14;
	// UnityEngine.Material GazeInteractionSource::_reticleMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____reticleMaterial_15;
	// System.Single GazeInteractionSource::_reticleInnerAngle
	float ____reticleInnerAngle_16;
	// System.Single GazeInteractionSource::_reticleOuterAngle
	float ____reticleOuterAngle_17;
	// System.Single GazeInteractionSource::_reticleDistanceInMeters
	float ____reticleDistanceInMeters_18;
	// System.Single GazeInteractionSource::_reticleInnerDiameter
	float ____reticleInnerDiameter_19;
	// System.Single GazeInteractionSource::_reticleOuterDiameter
	float ____reticleOuterDiameter_20;
	// UnityEngine.EventSystems.PointerEventData GazeInteractionSource::_eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ____eventData_21;
	// UnityEngine.Events.UnityEvent GazeInteractionSource::onFocusInteractable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onFocusInteractable_22;
	// UnityEngine.Events.UnityEvent GazeInteractionSource::onLoseFocus
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onLoseFocus_23;
	// UnityEngine.Events.UnityEvent GazeInteractionSource::onClick
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onClick_24;
};

// Animations.Highlight
struct Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Animations.Highlight::transitionTime
	float ___transitionTime_4;
	// UnityEngine.Vector3 Animations.Highlight::_originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____originalScale_5;
	// UnityEngine.Coroutine Animations.Highlight::_transition
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____transition_6;
};

// Interactions.NavigationController
struct NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AI.NavMeshAgent Interactions.NavigationController::playerNavMeshAgent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___playerNavMeshAgent_4;
	// UnityEngine.Transform Interactions.NavigationController::marker
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___marker_5;
	// System.Single Interactions.NavigationController::markerHideDelay
	float ___markerHideDelay_6;
	// UnityEngine.Coroutine Interactions.NavigationController::_displayMarkerCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____displayMarkerCoroutine_8;
};

// ObjectInteract_test
struct ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectInteract_test::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectInteract_test::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Material ObjectInteract_test::SelectedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___SelectedMaterial_6;
	// UnityEngine.Renderer ObjectInteract_test::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_11;
	// UnityEngine.Vector3 ObjectInteract_test::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_12;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlayerController::GotHitScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GotHitScreen_4;
};

// Animations.Spin
struct Spin_t8EFA146F71FD3E887A431771B690B0A13D9F1B32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Animations.Spin::rotationSpeed
	float ___rotationSpeed_4;
	// System.Single Animations.Spin::axisRotationSpeed
	float ___axisRotationSpeed_5;
	// UnityEngine.Vector3 Animations.Spin::_axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____axis_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.Cardboard.XRLoader
struct XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

// ZombieMove
struct ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ZombieMove::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.AI.NavMeshAgent ZombieMove::agent
	NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* ___agent_5;
	// UnityEngine.Animator ZombieMove::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// System.Single ZombieMove::currentDist
	float ___currentDist_7;
	// System.Single ZombieMove::walkDistance
	float ___walkDistance_8;
	// System.Single ZombieMove::attackDistance
	float ___attackDistance_9;
	// System.Boolean ZombieMove::playerDetected
	bool ___playerDetected_10;
	// UnityEngine.GameObject ZombieMove::GotHitScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GotHitScreen_11;
	// System.Single ZombieMove::nextHit
	float ___nextHit_12;
	// System.Single ZombieMove::hitDelay
	float ___hitDelay_13;
};

// mouseMoveEditor
struct mouseMoveEditor_tEECE66E75CF04B9895574CB96678B14679343564  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single mouseMoveEditor::mouseSpeed
	float ___mouseSpeed_4;
	// UnityEngine.Transform mouseMoveEditor::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_5;
	// System.Single mouseMoveEditor::mouseX
	float ___mouseX_6;
	// System.Single mouseMoveEditor::mouseY
	float ___mouseY_7;
	// System.Single mouseMoveEditor::yReal
	float ___yReal_8;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Animations.Collectable/<Collect>d__5

// Animations.Collectable/<Collect>d__5

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Single>

// System.Collections.Generic.List`1/Enumerator<System.Single>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.IntegratedSubsystemDescriptor

// UnityEngine.IntegratedSubsystemDescriptor

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.Touch

// UnityEngine.Touch

// Animations.Highlight/<Transition>d__9

// Animations.Highlight/<Transition>d__9

// Interactions.NavigationController/<DisplayMarker>d__6

// Interactions.NavigationController/<DisplayMarker>d__6

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.XRInputSubsystem

// UnityEngine.XR.XRInputSubsystem

// UnityEngine.XR.XRInputSubsystemDescriptor

// UnityEngine.XR.XRInputSubsystemDescriptor

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AI.NavMeshAgent

// UnityEngine.AI.NavMeshAgent

// ARTapToPlaceObject

// ARTapToPlaceObject

// ButtonUI

// ButtonUI

// Helpers.CardboardSetup

// Helpers.CardboardSetup

// Google.XR.Cardboard.CardboardStartup
struct CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields
{
	// System.IntPtr Google.XR.Cardboard.CardboardStartup::_inputPointer
	intptr_t ____inputPointer_4;
	// System.IntPtr Google.XR.Cardboard.CardboardStartup::_displayPointer
	intptr_t ____displayPointer_5;
	// System.Boolean Google.XR.Cardboard.CardboardStartup::isInitialized
	bool ___isInitialized_7;
	// System.Boolean Google.XR.Cardboard.CardboardStartup::isStarted
	bool ___isStarted_8;
};

// Google.XR.Cardboard.CardboardStartup

// Animations.Collectable

// Animations.Collectable

// Managers.GameManager
struct GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields
{
	// Managers.GameManager Managers.GameManager::_instance
	GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* ____instance_5;
};

// Managers.GameManager

// GazeInteractionSource

// GazeInteractionSource

// Animations.Highlight

// Animations.Highlight

// Interactions.NavigationController

// Interactions.NavigationController

// ObjectInteract_test

// ObjectInteract_test

// PlayerController

// PlayerController

// Animations.Spin

// Animations.Spin

// Google.XR.Cardboard.XRLoader
struct XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Google.XR.Cardboard.XRLoader::_displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ____displaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Google.XR.Cardboard.XRLoader::_inputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ____inputSubsystemDescriptors_6;
	// UnityEngine.Texture2D Google.XR.Cardboard.XRLoader::_closeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____closeTexture_7;
	// UnityEngine.Texture2D Google.XR.Cardboard.XRLoader::_gearTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____gearTexture_8;
	// UnityEngine.Texture2D Google.XR.Cardboard.XRLoader::_whiteLineTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____whiteLineTexture_9;
	// System.Boolean Google.XR.Cardboard.XRLoader::<_isInitialized>k__BackingField
	bool ___U3C_isInitializedU3Ek__BackingField_10;
	// System.Boolean Google.XR.Cardboard.XRLoader::<_isStarted>k__BackingField
	bool ___U3C_isStartedU3Ek__BackingField_11;
};

// Google.XR.Cardboard.XRLoader

// ZombieMove

// ZombieMove

// mouseMoveEditor

// mouseMoveEditor

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedSubsystemDescriptor_1_Create_m7487DAAC6BD8E3BF2361488E7CFF54F6836F6E4C_gshared (IntegratedSubsystemDescriptor_1_t70BCBD395B99126866E0354041C8DCD1CE80A714* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_gshared (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void ARTapToPlaceObject::TapToPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_TapToPlaceObject_m9C8304431CAB0A08E2CD1F481C3683F982D6424F (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void GazeInteractionSource::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_CreateMesh_m7F5BAE1DF412DF39EC80ACD833A6E975C03B9B96 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.EventSystems.IPointerExitHandler>()
inline RuntimeObject* GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Boolean GazeInteractionSource::IsGazedObjectInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractionSource_IsGazedObjectInteractable_m296102B804E390F0467DCCAE0F95B1B89BBA7DDF (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.EventSystems.IPointerEnterHandler>()
inline RuntimeObject* GameObject_GetComponentInParent_TisIPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_m61506C544445FF39509BC1C220277DD7F25DC3A9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void GazeInteractionSource::SetParams(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_SetParams_mF97451E6708149EA0BBD6E4294A2B417168B7552 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, float ___0_distance, bool ___1_interactive, const RuntimeMethod* method) ;
// System.Void GazeInteractionSource::ResetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_ResetParams_m5EB4489EC864BAB2CE4A04B57363DECB112DB3B0 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerPressed_mE2356D33F433C078FB257D788BD9B3B219FA920E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.EventSystems.IPointerClickHandler>()
inline RuntimeObject* GameObject_GetComponentInParent_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mD4C575C3343108E2B738747896831CC808965D3E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) ;
// System.Void GazeInteractionSource::UpdateDiameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_UpdateDiameters_m0D6DD467A0F44632003380D7F4A44AD836BE5133 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.EventSystems.IEventSystemHandler>()
inline RuntimeObject* GameObject_GetComponentInParent_TisIEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5_mAEC49791B86879B4734D56F1163B052C539BDC82 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ObjectInteract_test::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_SetMaterial_mC3475FDC10681C5CAAB7471DF153766D0C641C61 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, bool ___0_gazedAt, const RuntimeMethod* method) ;
// System.Void ObjectInteract_test::SetMaterialSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_SetMaterialSelected_m610D1406977907A6C43F5B3C8196913F9D5423FB (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, bool ___0_gazedAt, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31 (NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void ZombieMove::gotHurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieMove_gotHurt_m22ABB455A2D5DCA81CA6C24FC638962E7881F686 (ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Managers.GameManager>()
inline GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* GameObject_AddComponent_TisGameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_m85B396B185361FB0DCBE0A018C1A54094D655F27 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Interactions.NavigationController::DisplayMarker(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationController_DisplayMarker_mE9FA2BAAF8D7A513887D5E537589C5B9A94A769F (NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_delay, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Interactions.NavigationController/<DisplayMarker>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayMarkerU3Ed__6__ctor_m9D8C22B9C49CBE672B11B2396ED4207C3EB8EE1B (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.CardboardStartup::StartCardboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_StartCardboard_m23EEDC3C023253209EC9EFE66420B1EC13209BF5 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<Google.XR.Cardboard.XRLoader>()
inline XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* ScriptableObject_CreateInstance_TisXRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_mFB28223BBCAE2102EC27A43CA528B16CEF466865 (const RuntimeMethod* method)
{
	return ((  XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void Google.XR.Cardboard.CardboardStartup::ConnectCardboardInputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_ConnectCardboardInputSystem_mBFCE202F0DAA37B2B015ED9C474626923B734A85 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.CardboardStartup::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_ReloadDeviceParams_mA7FB661ECDF75395B71ECCB38AF9DC4AE5E2FDDD (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.CardboardStartup::StopCardboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_StopCardboard_mD03307F74EA3B50D6E4C63BB105A4D00686923EB (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.XRInputSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_m680620E39BD3BB777B7AA175E898ACAD749A6941 (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___0_descriptors, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared)(___0_descriptors, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::GetEnumerator()
inline Enumerator_t90437B5A987837790258FA617758AAEAB48304B2 List_1_GetEnumerator_m152030B04DF89D0BE4D0E11651A3D04C58969F17 (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t90437B5A987837790258FA617758AAEAB48304B2 (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::Dispose()
inline void Enumerator_Dispose_m98D942258C08C47422F529E5AFDF79F673C26BB7 (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::get_Current()
inline XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* Enumerator_get_Current_m6B53313811F460FB14C9E5D9927949B611BF067C_inline (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2* __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* (*) (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15 (IntegratedSubsystemDescriptor_t9232963B842E01748A8E032928DC8E35DF00C10D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>::Create()
inline XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* IntegratedSubsystemDescriptor_1_Create_m5BA14D56739F7FF52EC7A254341F000A49E62EF0 (IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7* __this, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* (*) (IntegratedSubsystemDescriptor_1_t440D086A98F968B9FC279854F552698F319A32F7*, const RuntimeMethod*))IntegratedSubsystemDescriptor_1_Create_m7487DAAC6BD8E3BF2361488E7CFF54F6836F6E4C_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.CardboardStartup::set_inputPointer(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardboardStartup_set_inputPointer_mB4F723075478BFEAB3682F1E887E326CFD6727C6_inline (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRInputSubsystemDescriptor>::MoveNext()
inline bool Enumerator_MoveNext_m44B2E05E36411A6BEF4D593FADA0AD185D568F7C (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t90437B5A987837790258FA617758AAEAB48304B2*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Managers.GameManager Managers.GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* GameManager_get_Instance_m44247C5F9B3BA6945E220BD88D8268DAD166352C (const RuntimeMethod* method) ;
// UnityEngine.Transform Managers.GameManager::GetPlayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameManager_GetPlayer_m13D3D140CFFD54F73C9A300ED359513703EE6E3D_inline (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Animations.Collectable::Collect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collectable_Collect_m855E73F617691B65DA4D88DC287544137CF3AE38 (Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* __this, float ___0_delay, const RuntimeMethod* method) ;
// System.Void Animations.Collectable/<Collect>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollectU3Ed__5__ctor_mBEDC14530633F318DC4D5A2A978C08FF0A1DB6ED (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Animations.Highlight::StartTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_StartTransition_mC66DB7B36ADF9D3C02DEE3EA0A2B57547C4321C7 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, float ___0_scale, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___0_item, method);
}
// System.Void Animations.Highlight::StartTransition(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_StartTransition_m4943263B91CBC6C1BA1AB26391D00FD8BEEFDA1C (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_scales, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Animations.Highlight::Transition(System.Collections.Generic.List`1<System.Single>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Highlight_Transition_m125ABE31A9A452C0443E153A86971E75BB1F9286 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_scales, float ___1_delay, const RuntimeMethod* method) ;
// System.Void Animations.Highlight/<Transition>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9__ctor_m070C866C5CFA7D25C1B57D87320B3AE1329E8DEA (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Animations.Highlight/<Transition>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9_U3CU3Em__Finally1_m4D712063BC0C61E46550596DA48E838248150601 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) ;
// System.Void Animations.Highlight/<Transition>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9_System_IDisposable_Dispose_m944ABB9C5AA5F7426D3971AC082143077E8DD057 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
inline Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Single>::get_Current()
inline float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Single>::MoveNext()
inline bool Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209 (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Single>::Dispose()
inline void Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C*, const RuntimeMethod*))Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void ARTapToPlaceObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Start_m4A8A22AA04062DE0229C41BC767914F2C04F3020 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arOrigin = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___arOrigin_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arOrigin_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_Update_m9B0A45DCE03CA35CFA8CF6CAB12F0369A1C1BAF4 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdatePlacementPose();
		ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230(__this, NULL);
		// UpdatePlacementIndicator();
		ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57(__this, NULL);
		// if(placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		bool L_0 = __this->___placementPoseIsValid_9;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// TapToPlaceObject();
		ARTapToPlaceObject_TapToPlaceObject_m9C8304431CAB0A08E2CD1F481C3683F982D6424F(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::TapToPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_TapToPlaceObject_m9C8304431CAB0A08E2CD1F481C3683F982D6424F (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToPlace_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = (&__this->___placementPose_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___placementPose_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = L_3->___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___spawnedObject_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementIndicator_m64AB22A985ED4DC7395D108AC7700C0B2E1D0E57 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	{
		// if (placementPoseIsValid)
		bool L_0 = __this->___placementPoseIsValid_9;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// placementIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placementIndicator_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placementIndicator_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___placementPose_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->___placementPose_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_3, L_5, L_7, NULL);
		return;
	}

IL_003b:
	{
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___placementIndicator_5;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject_UpdatePlacementPose_m6CB9E056EC5A93F3CB21D9E43FE419B4B67F2230 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m25217A02CB09E3BD50E3E0327879E870AD58C6C3(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_1, NULL);
		V_0 = L_2;
		// var hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// arOrigin.Raycast(screenCenter, hits, TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_4 = __this->___arOrigin_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = V_1;
		NullCheck(L_4);
		bool L_8;
		L_8 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_4, L_6, L_7, ((int32_t)15), NULL);
		// placementPoseIsValid = hits.Count > 0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_9, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		__this->___placementPoseIsValid_9 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		// if( placementPoseIsValid)
		bool L_11 = __this->___placementPoseIsValid_9;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// placementPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_12 = V_1;
		NullCheck(L_12);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_13;
		L_13 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_12, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_13;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14;
		L_14 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		__this->___placementPose_8 = L_14;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ARTapToPlaceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTapToPlaceObject__ctor_m835E4B900ABF4C300EE8938022D18FA3FDD16884 (ARTapToPlaceObject_t608C4C63EACC69846C00DF262C964E81D6DB6994* __this, const RuntimeMethod* method) 
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
// System.Void ButtonUI::LoadSceneVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_LoadSceneVR_m545ADCD3E7D38FFEBA9F1907AA59A1224762821B (ButtonUI_t5256A8C05315E0757F96C06015768AC38E80C269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(vr_game);
		String_t* L_0 = __this->___vr_game_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonUI::LoadSceneAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI_LoadSceneAR_m0741994C540288D899E757846F2B14CC646EA178 (ButtonUI_t5256A8C05315E0757F96C06015768AC38E80C269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(ar_game);
		String_t* L_0 = __this->___ar_game_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonUI__ctor_m76E2C33B8629D3C1BBE5F0FB391CEF0BEAF1612C (ButtonUI_t5256A8C05315E0757F96C06015768AC38E80C269* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string vr_game = "AR-test";
		__this->___vr_game_4 = _stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vr_game_4), (void*)_stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC);
		// [SerializeField] private string ar_game = "AR-test";
		__this->___ar_game_5 = _stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ar_game_5), (void*)_stringLiteralA073AE132BDC4A2096E00D0E60D860B19B9A92AC);
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
// System.Void GazeInteractionSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_Start_m493C5FC20648B2C9D215CD1DD786F3D914B5112B (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// Renderer rendererComponent = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// rendererComponent.sortingOrder = ReticleSortingOrder;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_0;
		int32_t L_2 = __this->___ReticleSortingOrder_4;
		NullCheck(L_1);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_1, L_2, NULL);
		// _reticleMaterial = rendererComponent.material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		__this->____reticleMaterial_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reticleMaterial_15), (void*)L_4);
		// _eventData = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_6, L_5, NULL);
		__this->____eventData_21 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventData_21), (void*)L_6);
		// CreateMesh();
		GazeInteractionSource_CreateMesh_m7F5BAE1DF412DF39EC80ACD833A6E975C03B9B96(__this, NULL);
		// }
		return;
	}
}
// System.Void GazeInteractionSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_Update_m9C451EA8B05FFAAC87B464CE5340F5209154B83D (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mD4C575C3343108E2B738747896831CC808965D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisIPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_m61506C544445FF39509BC1C220277DD7F25DC3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B9_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B8_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B16_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B15_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B24_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B23_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B34_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B33_0 = NULL;
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _RETICLE_MAX_DISTANCE))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = __this->____RETICLE_MAX_DISTANCE_11;
		bool L_5;
		L_5 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_00fd;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____gazedAtObject_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_00cd;
		}
	}
	{
		// if (_gazedAtObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____gazedAtObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		// _gazedAtObject.GetComponentInParent<IPointerExitHandler>()?.OnPointerExit(_eventData);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____gazedAtObject_14;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8(L_12, GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8_RuntimeMethod_var);
		RuntimeObject* L_14 = L_13;
		G_B4_0 = L_14;
		if (L_14)
		{
			G_B5_0 = L_14;
			goto IL_0062;
		}
	}
	{
		goto IL_006d;
	}

IL_0062:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = __this->____eventData_21;
		NullCheck(G_B5_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData) */, IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_il2cpp_TypeInfo_var, G_B5_0, L_15);
	}

IL_006d:
	{
		// if (IsGazedObjectInteractable())
		bool L_16;
		L_16 = GazeInteractionSource_IsGazedObjectInteractable_m296102B804E390F0467DCCAE0F95B1B89BBA7DDF(__this, NULL);
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		// onLoseFocus?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_17 = __this->___onLoseFocus_23;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_0081;
		}
	}
	{
		goto IL_0086;
	}

IL_0081:
	{
		NullCheck(G_B9_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B9_0, NULL);
	}

IL_0086:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		__this->____gazedAtObject_14 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_14), (void*)L_20);
		// _gazedAtObject.GetComponentInParent<IPointerEnterHandler>()?.OnPointerEnter(_eventData);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->____gazedAtObject_14;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = GameObject_GetComponentInParent_TisIPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_m61506C544445FF39509BC1C220277DD7F25DC3A9(L_21, GameObject_GetComponentInParent_TisIPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_m61506C544445FF39509BC1C220277DD7F25DC3A9_RuntimeMethod_var);
		RuntimeObject* L_23 = L_22;
		G_B11_0 = L_23;
		if (L_23)
		{
			G_B12_0 = L_23;
			goto IL_00a9;
		}
	}
	{
		goto IL_00b4;
	}

IL_00a9:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_24 = __this->____eventData_21;
		NullCheck(G_B12_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData) */, IPointerEnterHandler_t4E892ED9F3BC7F8B69057B096E0C4FB97C0CF13F_il2cpp_TypeInfo_var, G_B12_0, L_24);
	}

IL_00b4:
	{
		// if (IsGazedObjectInteractable())
		bool L_25;
		L_25 = GazeInteractionSource_IsGazedObjectInteractable_m296102B804E390F0467DCCAE0F95B1B89BBA7DDF(__this, NULL);
		if (!L_25)
		{
			goto IL_00cd;
		}
	}
	{
		// onFocusInteractable?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_26 = __this->___onFocusInteractable_22;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_27 = L_26;
		G_B15_0 = L_27;
		if (L_27)
		{
			G_B16_0 = L_27;
			goto IL_00c8;
		}
	}
	{
		goto IL_00cd;
	}

IL_00c8:
	{
		NullCheck(G_B16_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B16_0, NULL);
	}

IL_00cd:
	{
		// bool isInteractive = (1 << _gazedAtObject.layer & ReticleInteractionLayerMask) != 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->____gazedAtObject_14;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_28, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_30 = __this->___ReticleInteractionLayerMask_5;
		int32_t L_31;
		L_31 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_30, NULL);
		V_1 = (bool)((!(((uint32_t)((int32_t)(((int32_t)(1<<((int32_t)(L_29&((int32_t)31)))))&L_31))) <= ((uint32_t)0)))? 1 : 0);
		// SetParams(hit.distance, isInteractive);
		float L_32;
		L_32 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		bool L_33 = V_1;
		GazeInteractionSource_SetParams_mF97451E6708149EA0BBD6E4294A2B417168B7552(__this, L_32, L_33, NULL);
		goto IL_0144;
	}

IL_00fd:
	{
		// else if(_gazedAtObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->____gazedAtObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_34, NULL);
		if (!L_35)
		{
			goto IL_0144;
		}
	}
	{
		// _gazedAtObject.GetComponentInParent<IPointerExitHandler>()?.OnPointerExit(_eventData);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->____gazedAtObject_14;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8(L_36, GameObject_GetComponentInParent_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m33A2601C5D3E027755778845E48FC5851FF1AEF8_RuntimeMethod_var);
		RuntimeObject* L_38 = L_37;
		G_B20_0 = L_38;
		if (L_38)
		{
			G_B21_0 = L_38;
			goto IL_011b;
		}
	}
	{
		goto IL_0126;
	}

IL_011b:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_39 = __this->____eventData_21;
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData) */, IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_il2cpp_TypeInfo_var, G_B21_0, L_39);
	}

IL_0126:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_14 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_14), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// onLoseFocus?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_40 = __this->___onLoseFocus_23;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_41 = L_40;
		G_B23_0 = L_41;
		if (L_41)
		{
			G_B24_0 = L_41;
			goto IL_0139;
		}
	}
	{
		goto IL_013e;
	}

IL_0139:
	{
		NullCheck(G_B24_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B24_0, NULL);
	}

IL_013e:
	{
		// ResetParams();
		GazeInteractionSource_ResetParams_m5EB4489EC864BAB2CE4A04B57363DECB112DB3B0(__this, NULL);
	}

IL_0144:
	{
		// if (_gazedAtObject != null && (Api.IsTriggerPressed || Input.GetButton("Fire1")))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->____gazedAtObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_01bb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Api_get_IsTriggerPressed_mE2356D33F433C078FB257D788BD9B3B219FA920E(NULL);
		if (L_44)
		{
			goto IL_0165;
		}
	}
	{
		bool L_45;
		L_45 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_45)
		{
			goto IL_01bb;
		}
	}

IL_0165:
	{
		// var clickHandler = _gazedAtObject.GetComponentInParent<IPointerClickHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->____gazedAtObject_14;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = GameObject_GetComponentInParent_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mD4C575C3343108E2B738747896831CC808965D3E(L_46, GameObject_GetComponentInParent_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mD4C575C3343108E2B738747896831CC808965D3E_RuntimeMethod_var);
		V_2 = L_47;
		// if (clickHandler != null)
		RuntimeObject* L_48 = V_2;
		if (!L_48)
		{
			goto IL_01a2;
		}
	}
	{
		// _eventData.pointerPressRaycast = new RaycastResult
		// {
		//     worldPosition = hit.point
		// };
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_49 = __this->____eventData_21;
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		(&V_3)->___worldPosition_9 = L_50;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_51 = V_3;
		NullCheck(L_49);
		PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline(L_49, L_51, NULL);
		// clickHandler.OnPointerClick(_eventData);
		RuntimeObject* L_52 = V_2;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_53 = __this->____eventData_21;
		NullCheck(L_52);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData) */, IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_il2cpp_TypeInfo_var, L_52, L_53);
	}

IL_01a2:
	{
		// if (IsGazedObjectInteractable())
		bool L_54;
		L_54 = GazeInteractionSource_IsGazedObjectInteractable_m296102B804E390F0467DCCAE0F95B1B89BBA7DDF(__this, NULL);
		if (!L_54)
		{
			goto IL_01bb;
		}
	}
	{
		// onClick?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_55 = __this->___onClick_24;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_56 = L_55;
		G_B33_0 = L_56;
		if (L_56)
		{
			G_B34_0 = L_56;
			goto IL_01b6;
		}
	}
	{
		goto IL_01bb;
	}

IL_01b6:
	{
		NullCheck(G_B34_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B34_0, NULL);
	}

IL_01bb:
	{
		// UpdateDiameters();
		GazeInteractionSource_UpdateDiameters_m0D6DD467A0F44632003380D7F4A44AD836BE5133(__this, NULL);
		// }
		return;
	}
}
// System.Void GazeInteractionSource::UpdateDiameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_UpdateDiameters_m0D6DD467A0F44632003380D7F4A44AD836BE5133 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93608C7636930F81DC177E8A4317349B290C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648064382B131EE3D12FD289ECF8CE013184124C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCFBD3FF06BE4F4F1A7BCC160D9739B08935F34A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		//   _reticleDistanceInMeters =
		// Mathf.Clamp(_reticleDistanceInMeters, _RETICLE_MIN_DISTANCE, _RETICLE_MAX_DISTANCE);
		float L_0 = __this->____reticleDistanceInMeters_18;
		float L_1 = __this->____RETICLE_MAX_DISTANCE_11;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.449999988f), L_1, NULL);
		__this->____reticleDistanceInMeters_18 = L_2;
		// if (_reticleInnerAngle < _RETICLE_MIN_INNER_ANGLE)
		float L_3 = __this->____reticleInnerAngle_16;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// _reticleInnerAngle = _RETICLE_MIN_INNER_ANGLE;
		__this->____reticleInnerAngle_16 = (0.0f);
	}

IL_0034:
	{
		// if (_reticleOuterAngle < _RETICLE_MIN_OUTER_ANGLE)
		float L_4 = __this->____reticleOuterAngle_17;
		if ((!(((float)L_4) < ((float)(0.5f)))))
		{
			goto IL_004c;
		}
	}
	{
		// _reticleOuterAngle = _RETICLE_MIN_OUTER_ANGLE;
		__this->____reticleOuterAngle_17 = (0.5f);
	}

IL_004c:
	{
		// float inner_half_angle_radians = Mathf.Deg2Rad * _reticleInnerAngle * 0.5f;
		float L_5 = __this->____reticleInnerAngle_16;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_5)), (0.5f)));
		// float outer_half_angle_radians = Mathf.Deg2Rad * _reticleOuterAngle * 0.5f;
		float L_6 = __this->____reticleOuterAngle_17;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((0.0174532924f), L_6)), (0.5f)));
		// float inner_diameter = 2.0f * Mathf.Tan(inner_half_angle_radians);
		float L_7 = V_0;
		float L_8;
		L_8 = tanf(L_7);
		V_2 = ((float)il2cpp_codegen_multiply((2.0f), L_8));
		// float outer_diameter = 2.0f * Mathf.Tan(outer_half_angle_radians);
		float L_9 = V_1;
		float L_10;
		L_10 = tanf(L_9);
		V_3 = ((float)il2cpp_codegen_multiply((2.0f), L_10));
		// _reticleInnerDiameter = Mathf.Lerp(
		//     _reticleInnerDiameter, inner_diameter, Time.unscaledDeltaTime * _RETICLE_GROWTH_SPEED);
		float L_11 = __this->____reticleInnerDiameter_19;
		float L_12 = V_2;
		float L_13;
		L_13 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, (8.0f))), NULL);
		__this->____reticleInnerDiameter_19 = L_14;
		// _reticleOuterDiameter = Mathf.Lerp(
		//     _reticleOuterDiameter, outer_diameter, Time.unscaledDeltaTime * _RETICLE_GROWTH_SPEED);
		float L_15 = __this->____reticleOuterDiameter_20;
		float L_16 = V_3;
		float L_17;
		L_17 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_18;
		L_18 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, (8.0f))), NULL);
		__this->____reticleOuterDiameter_20 = L_18;
		// _reticleMaterial.SetFloat(
		//     "_InnerDiameter", _reticleInnerDiameter * _reticleDistanceInMeters);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->____reticleMaterial_15;
		float L_20 = __this->____reticleInnerDiameter_19;
		float L_21 = __this->____reticleDistanceInMeters_18;
		NullCheck(L_19);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_19, _stringLiteralFCFBD3FF06BE4F4F1A7BCC160D9739B08935F34A, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		// _reticleMaterial.SetFloat(
		//     "_OuterDiameter", _reticleOuterDiameter * _reticleDistanceInMeters);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->____reticleMaterial_15;
		float L_23 = __this->____reticleOuterDiameter_20;
		float L_24 = __this->____reticleDistanceInMeters_18;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteral648064382B131EE3D12FD289ECF8CE013184124C, ((float)il2cpp_codegen_multiply(L_23, L_24)), NULL);
		// _reticleMaterial.SetFloat("_DistanceInMeters", _reticleDistanceInMeters);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->____reticleMaterial_15;
		float L_26 = __this->____reticleDistanceInMeters_18;
		NullCheck(L_25);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_25, _stringLiteral3D93608C7636930F81DC177E8A4317349B290C8C, L_26, NULL);
		// }
		return;
	}
}
// System.Void GazeInteractionSource::SetParams(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_SetParams_mF97451E6708149EA0BBD6E4294A2B417168B7552 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, float ___0_distance, bool ___1_interactive, const RuntimeMethod* method) 
{
	{
		// _reticleDistanceInMeters = Mathf.Clamp(distance,
		//                                       _RETICLE_MIN_DISTANCE,
		//                                       _RETICLE_MAX_DISTANCE);
		float L_0 = ___0_distance;
		float L_1 = __this->____RETICLE_MAX_DISTANCE_11;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, (0.449999988f), L_1, NULL);
		__this->____reticleDistanceInMeters_18 = L_2;
		// if (interactive)
		bool L_3 = ___1_interactive;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// _reticleInnerAngle = _RETICLE_MIN_INNER_ANGLE + _RETICLE_GROWTH_ANGLE;
		__this->____reticleInnerAngle_16 = (1.5f);
		// _reticleOuterAngle = _RETICLE_MIN_OUTER_ANGLE + _RETICLE_GROWTH_ANGLE;
		__this->____reticleOuterAngle_17 = (2.0f);
		return;
	}

IL_0031:
	{
		// _reticleInnerAngle = _RETICLE_MIN_INNER_ANGLE;
		__this->____reticleInnerAngle_16 = (0.0f);
		// _reticleOuterAngle = _RETICLE_MIN_OUTER_ANGLE;
		__this->____reticleOuterAngle_17 = (0.5f);
		// }
		return;
	}
}
// System.Void GazeInteractionSource::ResetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_ResetParams_m5EB4489EC864BAB2CE4A04B57363DECB112DB3B0 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	{
		// _reticleDistanceInMeters = _RETICLE_MAX_DISTANCE;
		float L_0 = __this->____RETICLE_MAX_DISTANCE_11;
		__this->____reticleDistanceInMeters_18 = L_0;
		// _reticleInnerAngle = _RETICLE_MIN_INNER_ANGLE;
		__this->____reticleInnerAngle_16 = (0.0f);
		// _reticleOuterAngle = _RETICLE_MIN_OUTER_ANGLE;
		__this->____reticleOuterAngle_17 = (0.5f);
		// }
		return;
	}
}
// System.Void GazeInteractionSource::CreateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource_CreateMesh_m7F5BAE1DF412DF39EC80ACD833A6E975C03B9B96 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	{
		// Mesh mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// gameObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_1, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		// GetComponent<MeshFilter>().mesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4 = V_0;
		NullCheck(L_3);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_3, L_4, NULL);
		// int segments_count = _RETICLE_SEGMENTS;
		V_1 = ((int32_t)20);
		// int vertex_count = (segments_count + 1) * 2;
		int32_t L_5 = V_1;
		// Vector3[] vertices = new Vector3[vertex_count];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_5, 1)), 2)));
		V_2 = L_6;
		// int vi = 0;
		V_3 = 0;
		// for (int si = 0; si <= segments_count; ++si)
		V_7 = 0;
		goto IL_0086;
	}

IL_0033:
	{
		// float angle = (float)si / (float)segments_count * kTwoPi;
		int32_t L_7 = V_7;
		int32_t L_8 = V_1;
		// float x = Mathf.Sin(angle);
		float L_9 = ((float)il2cpp_codegen_multiply(((float)(((float)L_7)/((float)L_8))), (6.28318548f)));
		float L_10;
		L_10 = sinf(L_9);
		V_8 = L_10;
		// float y = Mathf.Cos(angle);
		float L_11;
		L_11 = cosf(L_9);
		V_9 = L_11;
		// vertices[vi++] = new Vector3(x, y, 0.0f); // Outer vertex.
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_2;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		float L_15 = V_8;
		float L_16 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_15, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// vertices[vi++] = new Vector3(x, y, 1.0f); // Inner vertex.
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		float L_21 = V_8;
		float L_22 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_21, L_22, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_23);
		// for (int si = 0; si <= segments_count; ++si)
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0086:
	{
		// for (int si = 0; si <= segments_count; ++si)
		int32_t L_25 = V_7;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0033;
		}
	}
	{
		// int indices_count = (segments_count + 1) * 3 * 2;
		int32_t L_27 = V_1;
		// int[] indices = new int[indices_count];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_27, 1)), 3)), 2)));
		V_4 = L_28;
		// int vert = 0;
		V_5 = 0;
		// int idx = 0;
		V_6 = 0;
		// for (int si = 0; si < segments_count; ++si)
		V_10 = 0;
		goto IL_0102;
	}

IL_00a4:
	{
		// indices[idx++] = vert + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_5;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_32, 1)));
		// indices[idx++] = vert;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_4;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_5;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (int32_t)L_36);
		// indices[idx++] = vert + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		int32_t L_38 = V_6;
		int32_t L_39 = L_38;
		V_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)((int32_t)il2cpp_codegen_add(L_40, 2)));
		// indices[idx++] = vert + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_4;
		int32_t L_42 = V_6;
		int32_t L_43 = L_42;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1)));
		// indices[idx++] = vert + 2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		int32_t L_46 = V_6;
		int32_t L_47 = L_46;
		V_6 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_5;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)((int32_t)il2cpp_codegen_add(L_48, 2)));
		// indices[idx++] = vert + 3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_4;
		int32_t L_50 = V_6;
		int32_t L_51 = L_50;
		V_6 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = V_5;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (int32_t)((int32_t)il2cpp_codegen_add(L_52, 3)));
		// vert += 2;
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 2));
		// for (int si = 0; si < segments_count; ++si)
		int32_t L_54 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0102:
	{
		// for (int si = 0; si < segments_count; ++si)
		int32_t L_55 = V_10;
		int32_t L_56 = V_1;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00a4;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_57 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_58 = V_2;
		NullCheck(L_57);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_57, L_58, NULL);
		// mesh.triangles = indices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_59 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		NullCheck(L_59);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_59, L_60, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_61 = V_0;
		NullCheck(L_61);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_61, NULL);
		// }
		return;
	}
}
// System.Boolean GazeInteractionSource::IsGazedObjectInteractable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractionSource_IsGazedObjectInteractable_m296102B804E390F0467DCCAE0F95B1B89BBA7DDF (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisIEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5_mAEC49791B86879B4734D56F1163B052C539BDC82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _gazedAtObject.GetComponentInParent<IEventSystemHandler>() != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____gazedAtObject_14;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameObject_GetComponentInParent_TisIEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5_mAEC49791B86879B4734D56F1163B052C539BDC82(L_0, GameObject_GetComponentInParent_TisIEventSystemHandler_t050874E4CAEDCBA7E792A19EE3405EA443AE36B5_mAEC49791B86879B4734D56F1163B052C539BDC82_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void GazeInteractionSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractionSource__ctor_mD11FA31C0DB0CC579E670F3756FBA360BA4B2181 (GazeInteractionSource_t995A085999A43C12690839E40DE8A35997A9791F* __this, const RuntimeMethod* method) 
{
	{
		// public int ReticleSortingOrder = 32767;
		__this->___ReticleSortingOrder_4 = ((int32_t)32767);
		// public LayerMask ReticleInteractionLayerMask = 1 << _RETICLE_INTERACTION_DEFAULT_LAYER;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)256), NULL);
		__this->___ReticleInteractionLayerMask_5 = L_0;
		// [SerializeField] private float _RETICLE_MAX_DISTANCE = 10f;
		__this->____RETICLE_MAX_DISTANCE_11 = (10.0f);
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
// System.Void mouseMoveEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mouseMoveEditor_Update_mEAD01DBEAFB9DB433F9CEA91CFBBA70184F7B9F9 (mouseMoveEditor_tEECE66E75CF04B9895574CB96678B14679343564* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void mouseMoveEditor::mouseMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mouseMoveEditor_mouseMovement_mF43AF4C918BA3584FA77173EA53D8EF0613F9000 (mouseMoveEditor_tEECE66E75CF04B9895574CB96678B14679343564* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mouseX = Input.GetAxis("Mouse X") * mouseSpeed * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseSpeed_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___mouseX_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// mouseY = Input.GetAxis("Mouse Y") * mouseSpeed * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseSpeed_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___mouseY_7 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// yReal -= mouseY;
		float L_6 = __this->___yReal_8;
		float L_7 = __this->___mouseY_7;
		__this->___yReal_8 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// yReal = Mathf.Clamp(yReal, -90f, 90f);
		float L_8 = __this->___yReal_8;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___yReal_8 = L_9;
		// cam.localRotation = Quaternion.Euler(yReal, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___cam_5;
		float L_11 = __this->___yReal_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, (0.0f), (0.0f), NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// transform.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = __this->___mouseX_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void mouseMoveEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mouseMoveEditor__ctor_m4636BBBC4C9BB175BE39570F66B4A28C5D35B7CC (mouseMoveEditor_tEECE66E75CF04B9895574CB96678B14679343564* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseSpeed = 500f;
		__this->___mouseSpeed_4 = (500.0f);
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
// System.Void ObjectInteract_test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_Start_mE7E3F25DE7A5622E79CA9D2CDD085A17D33D6721 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_12 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_11), (void*)L_3);
		// SetMaterial(false);
		ObjectInteract_test_SetMaterial_mC3475FDC10681C5CAAB7471DF153766D0C641C61(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectInteract_test::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_OnPointerEnter_m97E75BE4D991770EDF956AFD13CED979E27E2657 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectInteract_test_SetMaterial_mC3475FDC10681C5CAAB7471DF153766D0C641C61(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectInteract_test::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_OnPointerExit_m67317B2FC71D40516067B208344862E6FE615975 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectInteract_test_SetMaterial_mC3475FDC10681C5CAAB7471DF153766D0C641C61(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectInteract_test::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_OnPointerClick_mFDE859EACC89218E0D287E8D91E9F1DC4914AF67 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20D876BA870F80DB2CBB76E64F9363ECFCA1C6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetMaterialSelected(true);
		ObjectInteract_test_SetMaterialSelected_m610D1406977907A6C43F5B3C8196913F9D5423FB(__this, (bool)1, NULL);
		// Debug.Log("cacacacaca");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC20D876BA870F80DB2CBB76E64F9363ECFCA1C6C, NULL);
		// }
		return;
	}
}
// System.Void ObjectInteract_test::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_SetMaterial_mC3475FDC10681C5CAAB7471DF153766D0C641C61 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, bool ___0_gazedAt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B4_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____myRenderer_11;
		bool L_5 = ___0_gazedAt;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___InactiveMaterial_4;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0033;
	}

IL_002d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___GazedAtMaterial_5;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0033:
	{
		NullCheck(G_B5_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B5_1, G_B5_0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ObjectInteract_test::SetMaterialSelected(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test_SetMaterialSelected_m610D1406977907A6C43F5B3C8196913F9D5423FB (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, bool ___0_gazedAt, const RuntimeMethod* method) 
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B2_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B1_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B3_1 = NULL;
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : SelectedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____myRenderer_11;
		bool L_1 = ___0_gazedAt;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___SelectedMaterial_6;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0011:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___GazedAtMaterial_5;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void ObjectInteract_test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteract_test__ctor_m98E194331D6C9BDFE5D5E1703FAD1F8933F8E932 (ObjectInteract_test_tEAEF89FF01FAF9C49B9CFF8C17271C8F7D6012FC* __this, const RuntimeMethod* method) 
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
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter_m2FC01282FAEE546C4408E6B901DBB3EB5A5BF989 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
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
// System.Void ZombieMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieMove_Start_m5D6B316D8410E0A94291B832A8FD32620E2F9B82 (ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral370684D8B8185944ECF106EECA58A528269380DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___player_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_1);
		// GotHitScreen = GameObject.FindWithTag("HitScreen");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteral370684D8B8185944ECF106EECA58A528269380DC, NULL);
		__this->___GotHitScreen_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GotHitScreen_11), (void*)L_2);
		// agent = gameObject.GetComponent<NavMeshAgent>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_4;
		L_4 = GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35(L_3, GameObject_GetComponent_TisNavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F_mC33B09CB26A8782A023D08380CE30DF9B177AA35_RuntimeMethod_var);
		__this->___agent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___agent_5), (void*)L_4);
		// animator = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_6);
		// }
		return;
	}
}
// System.Void ZombieMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieMove_Update_m9E6C816F30FB01B3DD8D7CE6432AF35CD7E25155 (ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// currentDist  = Vector3.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___player_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_3, NULL);
		__this->___currentDist_7 = L_4;
		// if (currentDist < walkDistance && currentDist > attackDistance)
		float L_5 = __this->___currentDist_7;
		float L_6 = __this->___walkDistance_8;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_007d;
		}
	}
	{
		float L_7 = __this->___currentDist_7;
		float L_8 = __this->___attackDistance_9;
		if ((!(((float)L_7) > ((float)L_8))))
		{
			goto IL_007d;
		}
	}
	{
		// agent.SetDestination(player.transform.position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_9 = __this->___agent_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___player_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_9);
		bool L_13;
		L_13 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_9, L_12, NULL);
		// animator.SetBool("isWalking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_6;
		NullCheck(L_14);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_14, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)1, NULL);
		// transform.LookAt(player);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___player_4;
		NullCheck(L_15);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_15, L_16, NULL);
		goto IL_009e;
	}

IL_007d:
	{
		// agent.velocity = Vector3.zero;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_17 = __this->___agent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_17);
		NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31(L_17, L_18, NULL);
		// animator.SetBool("isWalking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___animator_6;
		NullCheck(L_19);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_19, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)0, NULL);
	}

IL_009e:
	{
		// if (currentDist < attackDistance)
		float L_20 = __this->___currentDist_7;
		float L_21 = __this->___attackDistance_9;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00f4;
		}
	}
	{
		// agent.velocity = Vector3.zero;
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_22 = __this->___agent_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_22);
		NavMeshAgent_set_velocity_m3C061136C7F338D33A5DE734B5C364326F6F4B31(L_22, L_23, NULL);
		// animator.SetBool("isAttacking", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_6;
		NullCheck(L_24);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_24, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, (bool)1, NULL);
		// if (Time.time > nextHit)
		float L_25;
		L_25 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_26 = __this->___nextHit_12;
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_0105;
		}
	}
	{
		// gotHurt();
		ZombieMove_gotHurt_m22ABB455A2D5DCA81CA6C24FC638962E7881F686(__this, NULL);
		// nextHit = Time.time + hitDelay;
		float L_27;
		L_27 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_28 = __this->___hitDelay_13;
		__this->___nextHit_12 = ((float)il2cpp_codegen_add(L_27, L_28));
		goto IL_0105;
	}

IL_00f4:
	{
		// animator.SetBool("isAttacking", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_6;
		NullCheck(L_29);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_29, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, (bool)0, NULL);
	}

IL_0105:
	{
		// if(GotHitScreen != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___GotHitScreen_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_0161;
		}
	}
	{
		// if (GotHitScreen.GetComponent<Image>().color.a > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___GotHitScreen_11;
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_32, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_33);
		float L_35 = L_34.___a_3;
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_0161;
		}
	}
	{
		// var color = GotHitScreen.GetComponent<Image>().color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___GotHitScreen_11;
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37;
		L_37 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_36, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_37);
		V_0 = L_38;
		// color.a -= 0.001f;
		float* L_39 = (&(&V_0)->___a_3);
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		*((float*)L_40) = (float)((float)il2cpp_codegen_subtract(L_41, (0.00100000005f)));
		// GotHitScreen.GetComponent<Image>().color = color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___GotHitScreen_11;
		NullCheck(L_42);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43;
		L_43 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_42, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = V_0;
		NullCheck(L_43);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_44);
	}

IL_0161:
	{
		// }
		return;
	}
}
// System.Void ZombieMove::gotHurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieMove_gotHurt_m22ABB455A2D5DCA81CA6C24FC638962E7881F686 (ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var color = GotHitScreen.GetComponent<Image>().color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GotHitScreen_11;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// color.a = 0.6f;
		(&V_0)->___a_3 = (0.600000024f);
		// GotHitScreen.GetComponent<Image>().color = color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___GotHitScreen_11;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_3, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void ZombieMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZombieMove__ctor_m68750185C1F9DCABD202A9B867BE227A280997AB (ZombieMove_tC95A27FC967564804921AF67107D6CD151509CBB* __this, const RuntimeMethod* method) 
{
	{
		// public float walkDistance = 4f;
		__this->___walkDistance_8 = (4.0f);
		// public float attackDistance = 2f;
		__this->___attackDistance_9 = (2.0f);
		// private float hitDelay = 5;
		__this->___hitDelay_13 = (5.0f);
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
// Managers.GameManager Managers.GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* GameManager_get_Instance_m44247C5F9B3BA6945E220BD88D8268DAD166352C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisGameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_m85B396B185361FB0DCBE0A018C1A54094D655F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F4FAB8D965605EA7112F2938188E6856029E7CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_0 = ((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogError("Creating GameManger");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5F4FAB8D965605EA7112F2938188E6856029E7CF, NULL);
		// _instance = new GameObject().AddComponent<GameManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_2, NULL);
		NullCheck(L_2);
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_3;
		L_3 = GameObject_AddComponent_TisGameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_m85B396B185361FB0DCBE0A018C1A54094D655F27(L_2, GameObject_AddComponent_TisGameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_m85B396B185361FB0DCBE0A018C1A54094D655F27_RuntimeMethod_var);
		((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5), (void*)L_3);
	}

IL_0026:
	{
		// return _instance;
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_4 = ((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5;
		return L_4;
	}
}
// System.Void Managers.GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m5C20EC595B22531FF7845E55E87AF2748BCA0169 (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance != null && _instance != this)
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_0 = ((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_2 = ((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0026:
	{
		// _instance = this;
		((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void Managers.GameManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDestroy_mC603B15A0F673D262985A8E3A936B0B2FC6A3231 (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == this)
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_0 = ((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, __this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// _instance = null;
		((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5 = (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8_il2cpp_TypeInfo_var))->____instance_5), (void*)(GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8*)NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Managers.GameManager::GetPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameManager_GetPlayer_m13D3D140CFFD54F73C9A300ED359513703EE6E3D (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) 
{
	{
		// return player;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		return L_0;
	}
}
// System.Void Managers.GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_m17730911128559CA24DC5DD69A37944B5255B4E4 (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) 
{
	{
		// public int time = 120;
		__this->___time_6 = ((int32_t)120);
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
// System.Void Interactions.NavigationController::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController_OnPointerClick_mDC7C52DAB69F86321E62D52DBA0C6F0C3AF7694B (NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position = eventData.pointerPressRaycast.worldPosition;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_1;
		L_1 = PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1.___worldPosition_9;
		V_0 = L_2;
		// playerNavMeshAgent.SetDestination(position);
		NavMeshAgent_t5D0CCC0B3B78242F286C9BD8EDD87C3CCBD0A66F* L_3 = __this->___playerNavMeshAgent_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46(L_3, L_4, NULL);
		// if (_displayMarkerCoroutine != null) StopCoroutine(_displayMarkerCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6 = __this->____displayMarkerCoroutine_8;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// if (_displayMarkerCoroutine != null) StopCoroutine(_displayMarkerCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7 = __this->____displayMarkerCoroutine_8;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_7, NULL);
	}

IL_002d:
	{
		// _displayMarkerCoroutine = StartCoroutine(DisplayMarker(position, markerHideDelay));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = __this->___markerHideDelay_6;
		RuntimeObject* L_10;
		L_10 = NavigationController_DisplayMarker_mE9FA2BAAF8D7A513887D5E537589C5B9A94A769F(__this, L_8, L_9, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		__this->____displayMarkerCoroutine_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displayMarkerCoroutine_8), (void*)L_11);
		// }
		return;
	}
}
// System.Collections.IEnumerator Interactions.NavigationController::DisplayMarker(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationController_DisplayMarker_mE9FA2BAAF8D7A513887D5E537589C5B9A94A769F (NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* L_0 = (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03*)il2cpp_codegen_object_new(U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayMarkerU3Ed__6__ctor_m9D8C22B9C49CBE672B11B2396ED4207C3EB8EE1B(L_0, 0, NULL);
		U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_position;
		NullCheck(L_2);
		L_2->___position_3 = L_3;
		U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* L_4 = L_2;
		float L_5 = ___1_delay;
		NullCheck(L_4);
		L_4->___delay_4 = L_5;
		return L_4;
	}
}
// System.Void Interactions.NavigationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationController__ctor_m7F1E7C99CE8B2892755DED5A0DD99F390B97B867 (NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float markerHideDelay = 2f;
		__this->___markerHideDelay_6 = (2.0f);
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
// System.Void Interactions.NavigationController/<DisplayMarker>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayMarkerU3Ed__6__ctor_m9D8C22B9C49CBE672B11B2396ED4207C3EB8EE1B (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Interactions.NavigationController/<DisplayMarker>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayMarkerU3Ed__6_System_IDisposable_Dispose_m8823498FD24FB758CA56C64CFB93BFAD85D4321C (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Interactions.NavigationController/<DisplayMarker>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayMarkerU3Ed__6_MoveNext_mDF29C4A784C7451833BBEE6C18955CDC10D9FE14 (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// marker.position = position;
		NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___marker_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___position_3;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		// marker.gameObject.SetActive(true);
		NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___marker_5;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// float time = 0;
		__this->___U3CtimeU3E5__2_5 = (0.0f);
		goto IL_00a1;
	}

IL_004d:
	{
		// marker.position += SpeedMultiplier * Time.deltaTime * Vector3.down;
		NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10->___marker_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply((0.75f), L_14)), L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_16, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_17, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0088:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// time += Time.deltaTime;
		float L_18 = __this->___U3CtimeU3E5__2_5;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_5 = ((float)il2cpp_codegen_add(L_18, L_19));
	}

IL_00a1:
	{
		// while (time < delay)
		float L_20 = __this->___U3CtimeU3E5__2_5;
		float L_21 = __this->___delay_4;
		if ((((float)L_20) < ((float)L_21)))
		{
			goto IL_004d;
		}
	}
	{
		// marker.gameObject.SetActive(false);
		NavigationController_tBBCA8D91EFBD6A7DF466FC90BFFCC5315102685D* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___marker_5;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Interactions.NavigationController/<DisplayMarker>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayMarkerU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDAA95ACDF792E08631FC6928B87B9395EBCC15E2 (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Interactions.NavigationController/<DisplayMarker>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayMarkerU3Ed__6_System_Collections_IEnumerator_Reset_m44F4C623877E2088E349E67531911DD5FEB0B10C (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayMarkerU3Ed__6_System_Collections_IEnumerator_Reset_m44F4C623877E2088E349E67531911DD5FEB0B10C_RuntimeMethod_var)));
	}
}
// System.Object Interactions.NavigationController/<DisplayMarker>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayMarkerU3Ed__6_System_Collections_IEnumerator_get_Current_m3F2A81D08B8D49552E8184A3857E0CAF8D9184CD (U3CDisplayMarkerU3Ed__6_tBE4389FEC006CB7B829C411AC47017C648BE2B03* __this, const RuntimeMethod* method) 
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
// System.IntPtr Google.XR.Cardboard.CardboardStartup::get_inputPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CardboardStartup_get_inputPointer_mE6778EE519576276C087A4CD91C3CECC6010D306 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { if (isStarted) { return _inputPointer; } else { return IntPtr.Zero; } }
		bool L_0 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// get { if (isStarted) { return _inputPointer; } else { return IntPtr.Zero; } }
		intptr_t L_1 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->____inputPointer_4;
		return L_1;
	}

IL_000d:
	{
		// get { if (isStarted) { return _inputPointer; } else { return IntPtr.Zero; } }
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_2;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::set_inputPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_set_inputPointer_mB4F723075478BFEAB3682F1E887E326CFD6727C6 (intptr_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _inputPointer = value; }
		intptr_t L_0 = ___0_value;
		((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->____inputPointer_4 = L_0;
		// set { _inputPointer = value; }
		return;
	}
}
// System.IntPtr Google.XR.Cardboard.CardboardStartup::get_displayPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CardboardStartup_get_displayPointer_mE03372CE758DA315997170776AD49EF319B19337 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { if (isStarted) { return _displayPointer; } else { return IntPtr.Zero; } }
		bool L_0 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// get { if (isStarted) { return _displayPointer; } else { return IntPtr.Zero; } }
		intptr_t L_1 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->____displayPointer_5;
		return L_1;
	}

IL_000d:
	{
		// get { if (isStarted) { return _displayPointer; } else { return IntPtr.Zero; } }
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_2;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::set_displayPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_set_displayPointer_mA9C7D136F368A63883E399F98AA311FE6CFC349D (intptr_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _displayPointer = value; }
		intptr_t L_0 = ___0_value;
		((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->____displayPointer_5 = L_0;
		// set { _displayPointer = value; }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m56F74C09A9FFE2D48C4C2E1E177A8049FFC3AAA9 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	{
		// StartCardboard();
		CardboardStartup_StartCardboard_m23EEDC3C023253209EC9EFE66420B1EC13209BF5(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::StartCardboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_StartCardboard_m23EEDC3C023253209EC9EFE66420B1EC13209BF5 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisXRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_mFB28223BBCAE2102EC27A43CA528B16CEF466865_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// if (!loader)
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_0 = __this->___loader_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		// loader = ScriptableObject.CreateInstance<XRLoader>();
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_2;
		L_2 = ScriptableObject_CreateInstance_TisXRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_mFB28223BBCAE2102EC27A43CA528B16CEF466865(ScriptableObject_CreateInstance_TisXRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779_mFB28223BBCAE2102EC27A43CA528B16CEF466865_RuntimeMethod_var);
		__this->___loader_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loader_6), (void*)L_2);
	}

IL_002f:
	{
		// loader.Initialize();
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_3 = __this->___loader_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Management.XRLoader::Initialize() */, L_3);
		// loader.Start();
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_5 = __this->___loader_6;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.XR.Management.XRLoader::Start() */, L_5);
		// ConnectCardboardInputSystem();
		CardboardStartup_ConnectCardboardInputSystem_mBFCE202F0DAA37B2B015ED9C474626923B734A85(__this, NULL);
		// isStarted = true;
		((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8 = (bool)1;
		// ReloadDeviceParams();
		CardboardStartup_ReloadDeviceParams_mA7FB661ECDF75395B71ECCB38AF9DC4AE5E2FDDD(__this, NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_7)
		{
			goto IL_0065;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::StopCardboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_StopCardboard_mD03307F74EA3B50D6E4C63BB105A4D00686923EB (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loader)
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_0 = __this->___loader_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// loader.Stop();
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_2 = __this->___loader_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.XR.Management.XRLoader::Stop() */, L_2);
		// loader.Deinitialize();
		XRLoader_t9E03B2E5E25A68BDAD7018462DE0746D5B750779* L_4 = __this->___loader_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.XR.Management.XRLoader::Deinitialize() */, L_4);
	}

IL_0025:
	{
		// isStarted = false;
		((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8 = (bool)0;
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_ReloadDeviceParams_mA7FB661ECDF75395B71ECCB38AF9DC4AE5E2FDDD (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isStarted)
		bool L_0 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_OnDestroy_mC3581B2DC1ED6B0166ABEBED4603BC075CD4FE2D (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	{
		// StopCardboard();
		CardboardStartup_StopCardboard_mD03307F74EA3B50D6E4C63BB105A4D00686923EB(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m389936FD6C7EAF27A679F9646C4DA9ACC1A81514 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isStarted)
		bool L_0 = ((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->___isStarted_8;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0014:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0020:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_002c:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::ConnectCardboardInputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_ConnectCardboardInputSystem_mBFCE202F0DAA37B2B015ED9C474626923B734A85 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m98D942258C08C47422F529E5AFDF79F673C26BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m44B2E05E36411A6BEF4D593FADA0AD185D568F7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6B53313811F460FB14C9E5D9927949B611BF067C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1_Create_m5BA14D56739F7FF52EC7A254341F000A49E62EF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m152030B04DF89D0BE4D0E11651A3D04C58969F17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_m680620E39BD3BB777B7AA175E898ACAD749A6941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t90437B5A987837790258FA617758AAEAB48304B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* V_1 = NULL;
	XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* V_2 = NULL;
	{
		// List<XRInputSubsystemDescriptor> inputs = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_0 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_0, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		// SubsystemManager.GetSubsystemDescriptors(inputs);
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_m680620E39BD3BB777B7AA175E898ACAD749A6941(L_1, SubsystemManager_GetSubsystemDescriptors_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_m680620E39BD3BB777B7AA175E898ACAD749A6941_RuntimeMethod_var);
		// foreach (var d in inputs)
		NullCheck(L_1);
		Enumerator_t90437B5A987837790258FA617758AAEAB48304B2 L_2;
		L_2 = List_1_GetEnumerator_m152030B04DF89D0BE4D0E11651A3D04C58969F17(L_1, List_1_GetEnumerator_m152030B04DF89D0BE4D0E11651A3D04C58969F17_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m98D942258C08C47422F529E5AFDF79F673C26BB7((&V_0), Enumerator_Dispose_m98D942258C08C47422F529E5AFDF79F673C26BB7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0013_1:
			{
				// foreach (var d in inputs)
				XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* L_3;
				L_3 = Enumerator_get_Current_m6B53313811F460FB14C9E5D9927949B611BF067C_inline((&V_0), Enumerator_get_Current_m6B53313811F460FB14C9E5D9927949B611BF067C_RuntimeMethod_var);
				V_1 = L_3;
				// if (d.id.Equals(inputMatch))
				XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = IntegratedSubsystemDescriptor_get_id_m89DBA940C79ED7EFE1137E3EC4A5A53BF7052F15(L_4, NULL);
				String_t* L_6 = __this->___inputMatch_9;
				NullCheck(L_5);
				bool L_7;
				L_7 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_5, L_6, NULL);
				if (!L_7)
				{
					goto IL_0048_1;
				}
			}
			{
				// XRInputSubsystem inputInst = d.Create();
				XRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D* L_8 = V_1;
				NullCheck(L_8);
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_9;
				L_9 = IntegratedSubsystemDescriptor_1_Create_m5BA14D56739F7FF52EC7A254341F000A49E62EF0(L_8, IntegratedSubsystemDescriptor_1_Create_m5BA14D56739F7FF52EC7A254341F000A49E62EF0_RuntimeMethod_var);
				V_2 = L_9;
				// if (inputInst != null)
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_10 = V_2;
				if (!L_10)
				{
					goto IL_0048_1;
				}
			}
			{
				// GCHandle handle = GCHandle.Alloc(inputInst);
				XRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34* L_11 = V_2;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
				L_12 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_11, NULL);
				// inputPointer = GCHandle.ToIntPtr(handle);
				intptr_t L_13;
				L_13 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_12, NULL);
				CardboardStartup_set_inputPointer_mB4F723075478BFEAB3682F1E887E326CFD6727C6_inline(L_13, NULL);
			}

IL_0048_1:
			{
				// foreach (var d in inputs)
				bool L_14;
				L_14 = Enumerator_MoveNext_m44B2E05E36411A6BEF4D593FADA0AD185D568F7C((&V_0), Enumerator_MoveNext_m44B2E05E36411A6BEF4D593FADA0AD185D568F7C_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Google.XR.Cardboard.CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m615BA9575F4EC4D3983D0C55ABE8C6A9ECBB1933 (CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string inputMatch = "Input";
		__this->___inputMatch_9 = _stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputMatch_9), (void*)_stringLiteral2C6C4A0396E04E83942E78DFF4DF343644956432);
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
// System.Void Helpers.CardboardSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSetup_Start_mFCE50E2616638E73236DCEDF4604859E85F4520C (CardboardSetup_t93C199A353A77161AA1B897ACD906A0BCB922543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Helpers.CardboardSetup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSetup_Update_m2AA571BD5C230E7E83EA563A4DA070C2E665903C (CardboardSetup_t93C199A353A77161AA1B897ACD906A0BCB922543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0018:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Helpers.CardboardSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardSetup__ctor_m90B8497A0924D652CFCECB72B440C66073008FF6 (CardboardSetup_t93C199A353A77161AA1B897ACD906A0BCB922543* __this, const RuntimeMethod* method) 
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
// System.Void Animations.Collectable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable_Start_mD202790AEEA507458847E831F04771D11AF4025F (Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* __this, const RuntimeMethod* method) 
{
	{
		// _player = GameManager.Instance.GetPlayer();
		GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* L_0;
		L_0 = GameManager_get_Instance_m44247C5F9B3BA6945E220BD88D8268DAD166352C(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameManager_GetPlayer_m13D3D140CFFD54F73C9A300ED359513703EE6E3D_inline(L_0, NULL);
		__this->____player_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____player_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void Animations.Collectable::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable_Collect_m0DF3ECEB5EDF7A91A3B1EC4BC557AB0D4A886E9E (Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_0 = NULL;
	{
		// Collider collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		V_0 = L_0;
		// if (collider) collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// if (collider) collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = V_0;
		NullCheck(L_3);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_3, (bool)0, NULL);
	}

IL_0016:
	{
		// StartCoroutine(Collect(collectTime));
		float L_4 = __this->___collectTime_4;
		RuntimeObject* L_5;
		L_5 = Collectable_Collect_m855E73F617691B65DA4D88DC287544137CF3AE38(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Animations.Collectable::Collect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collectable_Collect_m855E73F617691B65DA4D88DC287544137CF3AE38 (Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* __this, float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* L_0 = (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A*)il2cpp_codegen_object_new(U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCollectU3Ed__5__ctor_mBEDC14530633F318DC4D5A2A978C08FF0A1DB6ED(L_0, 0, NULL);
		U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* L_2 = L_1;
		float L_3 = ___0_delay;
		NullCheck(L_2);
		L_2->___delay_3 = L_3;
		return L_2;
	}
}
// System.Void Animations.Collectable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable__ctor_mDAF5BD7D97875D66D13DF262D1D19E6E509D2C84 (Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float collectTime = 3f;
		__this->___collectTime_4 = (3.0f);
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
// System.Void Animations.Collectable/<Collect>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollectU3Ed__5__ctor_mBEDC14530633F318DC4D5A2A978C08FF0A1DB6ED (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Animations.Collectable/<Collect>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollectU3Ed__5_System_IDisposable_Dispose_mAFCED961047D4C3E25BD485269D6E975CB6A1E02 (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Animations.Collectable/<Collect>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCollectU3Ed__5_MoveNext_m0B44A3F90BC3786796B6C5083B740905DFB1A558 (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__2_4 = (0.0f);
		goto IL_0087;
	}

IL_002b:
	{
		// transform.position = Vector3.Lerp(transform.position, _player.position, time / delay);
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = L_9->____player_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = __this->___U3CtimeU3E5__2_4;
		float L_13 = __this->___delay_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_11, ((float)(L_12/L_13)), NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// time += Time.deltaTime;
		float L_15 = __this->___U3CtimeU3E5__2_4;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__2_4 = ((float)il2cpp_codegen_add(L_15, L_16));
	}

IL_0087:
	{
		// while (time < delay && Vector3.Distance(transform.position, _player.position) > CollectingDistance)
		float L_17 = __this->___U3CtimeU3E5__2_4;
		float L_18 = __this->___delay_3;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_00ba;
		}
	}
	{
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_19 = V_1;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->____player_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25;
		L_25 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_21, L_24, NULL);
		if ((((float)L_25) > ((float)(0.100000001f))))
		{
			goto IL_002b;
		}
	}

IL_00ba:
	{
		// Destroy(gameObject);
		Collectable_tE15E7363D2888616C18E60204E5EF8881E3F1EDD* L_26 = V_1;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_27, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Animations.Collectable/<Collect>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCollectU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C5E9C758DE6846CFCFF787E30000278635BE61A (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Animations.Collectable/<Collect>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCollectU3Ed__5_System_Collections_IEnumerator_Reset_m9A9C9849EDE7E0FEB279A525AFEB5746044E5EFC (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCollectU3Ed__5_System_Collections_IEnumerator_Reset_m9A9C9849EDE7E0FEB279A525AFEB5746044E5EFC_RuntimeMethod_var)));
	}
}
// System.Object Animations.Collectable/<Collect>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCollectU3Ed__5_System_Collections_IEnumerator_get_Current_m7AB99A382BB5DAF5D935FABE67A05D6C9236B3EF (U3CCollectU3Ed__5_t329D1D0FCE6387C3A9ADE2D243313B3733E6380A* __this, const RuntimeMethod* method) 
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
// System.Void Animations.Highlight::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_Awake_mE630523D0703018D4F3576A606653BCDD9160725 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, const RuntimeMethod* method) 
{
	{
		// _originalScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		__this->____originalScale_5 = L_1;
		// }
		return;
	}
}
// System.Void Animations.Highlight::Scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_Scale_mA750F093956162759020907C4B89B39F0AF9C5E3 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, float ___0_scale, const RuntimeMethod* method) 
{
	{
		// StartTransition(scale);
		float L_0 = ___0_scale;
		Highlight_StartTransition_mC66DB7B36ADF9D3C02DEE3EA0A2B57547C4321C7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Animations.Highlight::ScaleAndReset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_ScaleAndReset_m7D6214EBB3523AD1E66562B66D621E97B6C2780D (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, float ___0_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float currentScale = transform.localScale.x / _originalScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->____originalScale_5);
		float L_4 = L_3->___x_2;
		V_0 = ((float)(L_2/L_4));
		// StartTransition(new List<float> {scale, currentScale});
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_5 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_5, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_6 = L_5;
		float L_7 = ___0_scale;
		NullCheck(L_6);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_6, L_7, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_8 = L_6;
		float L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_8, L_9, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		Highlight_StartTransition_m4943263B91CBC6C1BA1AB26391D00FD8BEEFDA1C(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Animations.Highlight::ResetScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_ResetScale_mA5701C608416BC748128C6F2ED24FA4AC2C853EC (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, const RuntimeMethod* method) 
{
	{
		// StartTransition(1);
		Highlight_StartTransition_mC66DB7B36ADF9D3C02DEE3EA0A2B57547C4321C7(__this, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void Animations.Highlight::StartTransition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_StartTransition_mC66DB7B36ADF9D3C02DEE3EA0A2B57547C4321C7 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, float ___0_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartTransition(new List<float> {scale});
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_0, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = L_0;
		float L_2 = ___0_scale;
		NullCheck(L_1);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_1, L_2, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		Highlight_StartTransition_m4943263B91CBC6C1BA1AB26391D00FD8BEEFDA1C(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Animations.Highlight::StartTransition(System.Collections.Generic.List`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight_StartTransition_m4943263B91CBC6C1BA1AB26391D00FD8BEEFDA1C (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_scales, const RuntimeMethod* method) 
{
	{
		// if (_transition != null) StopCoroutine(_transition);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->____transition_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (_transition != null) StopCoroutine(_transition);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->____transition_6;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// _transition = StartCoroutine(Transition(scales, transitionTime));
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = ___0_scales;
		float L_3 = __this->___transitionTime_4;
		RuntimeObject* L_4;
		L_4 = Highlight_Transition_m125ABE31A9A452C0443E153A86971E75BB1F9286(__this, L_2, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		__this->____transition_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transition_6), (void*)L_5);
		// }
		return;
	}
}
// System.Collections.IEnumerator Animations.Highlight::Transition(System.Collections.Generic.List`1<System.Single>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Highlight_Transition_m125ABE31A9A452C0443E153A86971E75BB1F9286 (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___0_scales, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* L_0 = (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9*)il2cpp_codegen_object_new(U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTransitionU3Ed__9__ctor_m070C866C5CFA7D25C1B57D87320B3AE1329E8DEA(L_0, 0, NULL);
		U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* L_2 = L_1;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_3 = ___0_scales;
		NullCheck(L_2);
		L_2->___scales_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___scales_3), (void*)L_3);
		U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* L_4 = L_2;
		float L_5 = ___1_delay;
		NullCheck(L_4);
		L_4->___delay_2 = L_5;
		return L_4;
	}
}
// System.Void Animations.Highlight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highlight__ctor_m116025EB169A8D46FDD7EBF613251DD5E41E431C (Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float transitionTime = 1f;
		__this->___transitionTime_4 = (1.0f);
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
// System.Void Animations.Highlight/<Transition>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9__ctor_m070C866C5CFA7D25C1B57D87320B3AE1329E8DEA (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Animations.Highlight/<Transition>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9_System_IDisposable_Dispose_m944ABB9C5AA5F7426D3971AC082143077E8DD057 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CTransitionU3Ed__9_U3CU3Em__Finally1_m4D712063BC0C61E46550596DA48E838248150601(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Animations.Highlight/<Transition>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTransitionU3Ed__9_MoveNext_m4409A11D00F7BADF586B87954D72774FC7841966 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* V_2 = NULL;
	float V_3 = 0.0f;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0122:
			{// begin fault (depth: 1)
				U3CTransitionU3Ed__9_System_IDisposable_Dispose_m944ABB9C5AA5F7426D3971AC082143077E8DD057(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* L_1 = __this->___U3CU3E4__this_4;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001f_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_00da_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0129;
			}

IL_001f_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// float fractionalDelay = delay / scales.Count;
				float L_4 = __this->___delay_2;
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_5 = __this->___scales_3;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_5, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
				__this->___U3CfractionalDelayU3E5__2_5 = ((float)(L_4/((float)L_6)));
				// foreach (float scale in scales)
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_7 = __this->___scales_3;
				NullCheck(L_7);
				Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C L_8;
				L_8 = List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2(L_7, List_1_GetEnumerator_m71EFDC880406F4D6CF28CE6D33FAB2BC69233CB2_RuntimeMethod_var);
				__this->___U3CU3E7__wrap2_6 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap2_6))->____list_0), (void*)NULL);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00fc_1;
			}

IL_005d_1:
			{
				// foreach (float scale in scales)
				Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_9 = (&__this->___U3CU3E7__wrap2_6);
				float L_10;
				L_10 = Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_inline(L_9, Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_RuntimeMethod_var);
				V_3 = L_10;
				// float time = 0;
				__this->___U3CtimeU3E5__4_7 = (0.0f);
				// Vector3 vectorScale = _originalScale * scale;
				Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* L_11 = V_2;
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->____originalScale_5;
				float L_13 = V_3;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
				L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
				__this->___U3CvectorScaleU3E5__5_8 = L_14;
				goto IL_00e2_1;
			}

IL_0088_1:
			{
				// transform.localScale = Vector3.Lerp(transform.localScale, vectorScale, time / fractionalDelay);
				Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* L_15 = V_2;
				NullCheck(L_15);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
				Highlight_t5FD5ED1304A631A53727A84DEACC3E33D41D740A* L_17 = V_2;
				NullCheck(L_17);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
				L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
				NullCheck(L_18);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
				L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___U3CvectorScaleU3E5__5_8;
				float L_21 = __this->___U3CtimeU3E5__4_7;
				float L_22 = __this->___U3CfractionalDelayU3E5__2_5;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
				L_23 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, ((float)(L_21/L_22)), NULL);
				NullCheck(L_16);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_23, NULL);
				// time += Time.deltaTime;
				float L_24 = __this->___U3CtimeU3E5__4_7;
				float L_25;
				L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				__this->___U3CtimeU3E5__4_7 = ((float)il2cpp_codegen_add(L_24, L_25));
				// yield return null;
				__this->___U3CU3E2__current_1 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0129;
			}

IL_00da_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00e2_1:
			{
				// while (time <= fractionalDelay)
				float L_26 = __this->___U3CtimeU3E5__4_7;
				float L_27 = __this->___U3CfractionalDelayU3E5__2_5;
				if ((((float)L_26) <= ((float)L_27)))
				{
					goto IL_0088_1;
				}
			}
			{
				// }
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___U3CvectorScaleU3E5__5_8);
				il2cpp_codegen_initobj(L_28, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
			}

IL_00fc_1:
			{
				// foreach (float scale in scales)
				Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_29 = (&__this->___U3CU3E7__wrap2_6);
				bool L_30;
				L_30 = Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209(L_29, Enumerator_MoveNext_mF26FFD8FBB27A9B076AA63274A3A37EB6C64B209_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_005d_1;
				}
			}
			{
				U3CTransitionU3Ed__9_U3CU3Em__Finally1_m4D712063BC0C61E46550596DA48E838248150601(__this, NULL);
				Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_31 = (&__this->___U3CU3E7__wrap2_6);
				il2cpp_codegen_initobj(L_31, sizeof(Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C));
				// }
				V_0 = (bool)0;
				goto IL_0129;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0129:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Animations.Highlight/<Transition>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9_U3CU3Em__Finally1_m4D712063BC0C61E46550596DA48E838248150601 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* L_0 = (&__this->___U3CU3E7__wrap2_6);
		Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD(L_0, Enumerator_Dispose_m303AC76CE7A119590F84226B76939A8209A18DBD_RuntimeMethod_var);
		return;
	}
}
// System.Object Animations.Highlight/<Transition>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC70C21FB24DF38F0857DC203084742AE8A1DC70 (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Animations.Highlight/<Transition>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransitionU3Ed__9_System_Collections_IEnumerator_Reset_m0E1E98C40889F9B7A5D3FE1A320C03C58085FB6D (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTransitionU3Ed__9_System_Collections_IEnumerator_Reset_m0E1E98C40889F9B7A5D3FE1A320C03C58085FB6D_RuntimeMethod_var)));
	}
}
// System.Object Animations.Highlight/<Transition>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTransitionU3Ed__9_System_Collections_IEnumerator_get_Current_m809A7A14BE8B045C5137E4FA0B2BB0EF5607DB6F (U3CTransitionU3Ed__9_t28A44255B2BB3B9552B3F27B569BF9B01B1094D9* __this, const RuntimeMethod* method) 
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
// System.Void Animations.Spin::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spin_FixedUpdate_m26E7512DFBE8B37D14BA9611D9C1F66AA9A102AA (Spin_t8EFA146F71FD3E887A431771B690B0A13D9F1B32* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(_axis, rotationSpeed * Time.fixedDeltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____axis_6;
		float L_2 = __this->___rotationSpeed_4;
		float L_3;
		L_3 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// _axis = Quaternion.AngleAxis(axisRotationSpeed * Time.fixedDeltaTime, Vector3.right) * _axis;
		float L_4 = __this->___axisRotationSpeed_5;
		float L_5;
		L_5 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->____axis_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_7, L_8, NULL);
		__this->____axis_6 = L_9;
		// }
		return;
	}
}
// System.Void Animations.Spin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spin__ctor_mAFC05867BBC26203D08776B05C407CBEFE5130FF (Spin_t8EFA146F71FD3E887A431771B690B0A13D9F1B32* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float rotationSpeed = 25f;
		__this->___rotationSpeed_4 = (25.0f);
		// [SerializeField] private float axisRotationSpeed = 10f;
		__this->___axisRotationSpeed_5 = (10.0f);
		// private Vector3 _axis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->____axis_6 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___0_value, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___0_value;
		__this->___U3CpointerPressRaycastU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerPressRaycast_mEB1B974F5543F78162984E2924EF908E18CE3B5D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerPressRaycastU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CardboardStartup_set_inputPointer_mB4F723075478BFEAB3682F1E887E326CFD6727C6_inline (intptr_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _inputPointer = value; }
		intptr_t L_0 = ___0_value;
		((CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_StaticFields*)il2cpp_codegen_static_fields_for(CardboardStartup_tFBDB45FD06F7BD575E37EE5513D848B3C49203DF_il2cpp_TypeInfo_var))->____inputPointer_4 = L_0;
		// set { _inputPointer = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameManager_GetPlayer_m13D3D140CFFD54F73C9A300ED359513703EE6E3D_inline (GameManager_t39B655B445A842D6F315BA8214FA8616B11E11E8* __this, const RuntimeMethod* method) 
{
	{
		// return player;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___0_item, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___0_item;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Enumerator_get_Current_mE13A1E832E60D5343CBDDC3A4E7B5B9F9E7D9058_gshared_inline (Enumerator_t2EB0E98DCA027A450E71AC1FC8108D34C9E4FD2C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
