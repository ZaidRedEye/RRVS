#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tFB39B350582053B206393ED428938B171A469EE0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.MissingFieldException
struct MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37;
// System.MissingMethodException
struct MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AssetBundle
struct AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;
// UnityEngine.GUISettings
struct GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4;
// UnityEngine.GUISkin
struct GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WWW
struct WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// VoxelBusters.Utility.PopupAttribute
struct PopupAttribute_t0503A5881BE8D3D4C44292E41B0F0F250B2141B4;
// VoxelBusters.Utility.RegexAttribute
struct RegexAttribute_t058348639EA159AE9A53B3165CF2A723E151EC3E;
// VoxelBusters.Utility.Request
struct Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6;
// VoxelBusters.Utility.Request/<StartAsynchronousRequest>d__16
struct U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA;
// VoxelBusters.Utility.Request/SurrogateMonoBehaviour
struct SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891;
// VoxelBusters.Utility.TextureExtensions/<TakeScreenshot>d__5
struct U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B;
// VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu
struct GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B;
// VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase
struct GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290;
// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu
struct GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328;
// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu[]
struct GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1;
// VoxelBusters.Utility.UnityGUILayoutUtility
struct UnityGUILayoutUtility_tE2F686A99C7A6BBA76B66C873FF96FA525F436D5;
// VoxelBusters.Utility.WebRequest
struct WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32;
// VoxelBusters.Utility.WebRequest/JSONResponse
struct JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8;

IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral055A6794CB419700D51BA15C06AB64D6C37AA4C2;
IL2CPP_EXTERN_C String_t* _stringLiteral05D0BF13F2C9D24CDFA1D503BAA52AC4E0DCF206;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC6D150549780250A9772C06B619BCC46A0E560;
IL2CPP_EXTERN_C String_t* _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671;
IL2CPP_EXTERN_C String_t* _stringLiteral132C39D757E56240228996917C990A336774026B;
IL2CPP_EXTERN_C String_t* _stringLiteral3596D634BFF7B6823C10B8DA2A347D0951AFD6B8;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral48A3661D846478FA991A825EBD10B78671444B5B;
IL2CPP_EXTERN_C String_t* _stringLiteral570043596E41F9067D43FBFF99F1ACB348A090BF;
IL2CPP_EXTERN_C String_t* _stringLiteral64C65374DBAB6FE3762748196D9D3A9610E2E5A9;
IL2CPP_EXTERN_C String_t* _stringLiteral68784C3217DF1AD9FECBFDE5454023246BF3B5E2;
IL2CPP_EXTERN_C String_t* _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D;
IL2CPP_EXTERN_C String_t* _stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3;
IL2CPP_EXTERN_C String_t* _stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D;
IL2CPP_EXTERN_C String_t* _stringLiteral758DA7453531E2E02D91F2C47D4B1F99518C5EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral7DD8E1D2BEF219138A20A499DD1CFA6B2BDA9C54;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB5CBE29FF8A179C2E5A288D14B2074824BF0BB;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001;
IL2CPP_EXTERN_C String_t* _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
IL2CPP_EXTERN_C String_t* _stringLiteralABE3FBE099041DE5DB7393044B0D14CB39DA0940;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1F9528AD04FDEE95671EE8BC27F7E8EB2FF434;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6048C88F88DE3E8168823827588E258EB402D299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisGUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328_mC1EA90E037AD87DC31EFC27448457315FD22EF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891_m459F1AA7F27F81C4FA5BE5343ECD4996AE84BC5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IDictionaryExtensions_GetIfAvailable_TisList_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_m0D5A48C24DCE611A8C4F8E1D695682A21395B98A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IDictionaryExtensions_GetIfAvailable_TisString_t_mB60684D446B963F13AA4DAE4FAB2E69E3295776F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_InvokeMethod_m3B98D6E689FB99291D2A318F8535975680E58C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_mFA6B594F5B6637E7DC8F30DACE9100B1150633A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m3FF98CE31E6130C3F186132BFE5DD711C10F19D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t GUIMainMenu_DrawMainMenu_m603C2BB8157CABFFDC08919384CEF1FE40B744C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMainMenu_Start_m7E9443533E748E1F072A9DA10CD2F65D0C48C88B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMenuBase_BeginButtonLayout_mD265A1CD75265491DD7A95C82593630CEF33C0C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMenuBase_DrawButton_m4AB5EBB121AE6A6306D497F34440B0FB926226BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMenuBase_DrawResultLayout_m0E4893E8A31C6CEA5F6C8D5E3CA9DC0D3650CC24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUISubMenu_OnGUI_mDF42A4C11E000B683190EACD09408E163DDF8D26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_GetFieldWithName_m0C45CD3670FA1FF44E53C69C49A74A7A73457FEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_InvokeMethod_m3B98D6E689FB99291D2A318F8535975680E58C00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionExtensions_SetStaticValue_mCB12634A1EABC5F08082EA86EF0E88E5A56D1F8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Request_StartAsynchronousRequest_m328890740B445B9ECADA3FF2797C08B43BF52794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Request_StartRequest_mF89E94B4E9DA278DBA7BDE80B1A89B49F31DCB1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringExtensions_FromBase64_m795FC747E04E611B418C2D5995372063977FDB03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringExtensions_GetPrintableString_mC2FB424A82D7BF0EC922B934DD68BD4E53DC33CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringExtensions_StringBetween_mC036413823FA01BD766A39D4205A8A562C137CD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringExtensions_ToBase64_m5B73CC6D596C7067854FEAD1DCC6E250449F0A6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_CreateTexture_mA5CC9A5874EBF765B4A42433734E892545FB9244_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_Deserialise_mAEDCEE9FD0741DC42CA856458EF5986AA9B20317_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_MirrorTexture_m15F6B6294A26C0519036FFBBFA2434FAD50699C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_Rotate_m2EC17FFC1917127D1B792BAF71C71A249A06CF50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_Scale_mC04EB0E8A8EAE020DEFC5AA0120665929ADA3ED8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_Serialise_m606FE39C8AE96AA57AB1FF6A87789B42E742C693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_TakeScreenshot_m1A3C5B6C0A979A0F7E033E39C0BFDC1E93EF064D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextureExtensions_ToString_m66D6CB06877C2488440A89FAD155945B40AC3FAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_GetPath_mE3F5E4921201F6C0D0E1B8C000891D1D5000DD5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeExtensions_GetTypeFromTypeCode_m5AF0739D610676693CAE6C281C48175455D04A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeExtensions__cctor_m5DE1F24602E71EFECE206D07E624018B2E548699_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_mFA6B594F5B6637E7DC8F30DACE9100B1150633A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeScreenshotU3Ed__5_MoveNext_m97302DFDDC193B6624477FFABCBD31369267EBB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m3FF98CE31E6130C3F186132BFE5DD711C10F19D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_FileURLWithPath_m9DD4765CAB5EA9C0B56430EBFD42F640250F3410_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_FileURLWithPath_mD1119B1A44541845D8E08B04FB5A73D63446C45A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_URLWithString_m2E48270E04791B0CFC8CD9AC1757C5172C9794FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_URLWithString_m46571724BB6FA1B10655880BF515DECFEF53C2D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityGUILayoutUtility_Foldout_m8E5429005928C2A92AE87F3353707E45679D7780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequest_DidFailStartRequestWithError_m7C6FC93FCE6CC1C114C9B3351E1309BCDB683BA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRequest_OnFetchingResponse_mAF4519E8E03CD05889DAE3F1E30A984FE447887E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebResponse_WebResponseOnFail_m307EBF50F8E986AF6E2E71395707187487DB7E51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebResponse_WebResponseOnSuccess_m380FC28DC7CF4A09757D50C74491F9372230FC8A_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399;
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;
struct GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
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
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Reflection.Binder
struct  Binder_t4D5CB06963501D32847C057B57157D6DC49CA759  : public RuntimeObject
{
public:

public:
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.GUIContent
struct  GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Image_1)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_Text_3)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_Image_4)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_StaticFields, ___none_6)); }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * get_none_6() const { return ___none_6; }
	inline GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// VoxelBusters.Utility.ReflectionExtensions
struct  ReflectionExtensions_tD9600501846B10AC4E7EE5B68205B4EBFCAA671E  : public RuntimeObject
{
public:

public:
};


// VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16
struct  U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VoxelBusters.Utility.Request VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::<>4__this
	Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA, ___U3CU3E4__this_2)); }
	inline Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VoxelBusters.Utility.StringExtensions
struct  StringExtensions_t92350CB3529069E8EDE808FC995E52C5535AA5C1  : public RuntimeObject
{
public:

public:
};


// VoxelBusters.Utility.TextureExtensions
struct  TextureExtensions_t0D9AB6BD186975EECD67F783EF6B31C843CFC96A  : public RuntimeObject
{
public:

public:
};


// VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5
struct  U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B  : public RuntimeObject
{
public:
	// System.Int32 VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action`1<UnityEngine.Texture2D> VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::_onCompletionHandler
	Action_1_tFB39B350582053B206393ED428938B171A469EE0 * ____onCompletionHandler_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of__onCompletionHandler_2() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B, ____onCompletionHandler_2)); }
	inline Action_1_tFB39B350582053B206393ED428938B171A469EE0 * get__onCompletionHandler_2() const { return ____onCompletionHandler_2; }
	inline Action_1_tFB39B350582053B206393ED428938B171A469EE0 ** get_address_of__onCompletionHandler_2() { return &____onCompletionHandler_2; }
	inline void set__onCompletionHandler_2(Action_1_tFB39B350582053B206393ED428938B171A469EE0 * value)
	{
		____onCompletionHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onCompletionHandler_2), (void*)value);
	}
};


// VoxelBusters.Utility.TransformExtensions
struct  TransformExtensions_tAF408613819C0105F7BA9094AC95490B02827CF7  : public RuntimeObject
{
public:

public:
};


// VoxelBusters.Utility.TypeExtensions
struct  TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7  : public RuntimeObject
{
public:

public:
};

struct TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields
{
public:
	// System.Type[] VoxelBusters.Utility.TypeExtensions::typeCodesToType
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___typeCodesToType_0;

public:
	inline static int32_t get_offset_of_typeCodesToType_0() { return static_cast<int32_t>(offsetof(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields, ___typeCodesToType_0)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_typeCodesToType_0() const { return ___typeCodesToType_0; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_typeCodesToType_0() { return &___typeCodesToType_0; }
	inline void set_typeCodesToType_0(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___typeCodesToType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeCodesToType_0), (void*)value);
	}
};


// VoxelBusters.Utility.VectorExtensions
struct  VectorExtensions_t50773C25FB524844325343D3611EA467393B9927  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.ParameterModifier
struct  ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E, ____byRef_0)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};


// VoxelBusters.Utility.URL
struct  URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 
{
public:
	// System.String VoxelBusters.Utility.URL::<URLString>k__BackingField
	String_t* ___U3CURLStringU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CURLStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355, ___U3CURLStringU3Ek__BackingField_0)); }
	inline String_t* get_U3CURLStringU3Ek__BackingField_0() const { return ___U3CURLStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CURLStringU3Ek__BackingField_0() { return &___U3CURLStringU3Ek__BackingField_0; }
	inline void set_U3CURLStringU3Ek__BackingField_0(String_t* value)
	{
		___U3CURLStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CURLStringU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of VoxelBusters.Utility.URL
struct URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_pinvoke
{
	char* ___U3CURLStringU3Ek__BackingField_0;
};
// Native definition for COM marshalling of VoxelBusters.Utility.URL
struct URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_com
{
	Il2CppChar* ___U3CURLStringU3Ek__BackingField_0;
};

// VoxelBusters.Utility.WebResponse
struct  WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD 
{
public:
	// System.Int32 VoxelBusters.Utility.WebResponse::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// System.String VoxelBusters.Utility.WebResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
	// System.Collections.IDictionary VoxelBusters.Utility.WebResponse::<Data>k__BackingField
	RuntimeObject* ___U3CDataU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> VoxelBusters.Utility.WebResponse::<Errors>k__BackingField
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___U3CErrorsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD, ___U3CStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_0() const { return ___U3CStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_0() { return &___U3CStatusU3Ek__BackingField_0; }
	inline void set_U3CStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD, ___U3CDataU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CDataU3Ek__BackingField_2() const { return ___U3CDataU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CDataU3Ek__BackingField_2() { return &___U3CDataU3Ek__BackingField_2; }
	inline void set_U3CDataU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD, ___U3CErrorsU3Ek__BackingField_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_U3CErrorsU3Ek__BackingField_3() const { return ___U3CErrorsU3Ek__BackingField_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_U3CErrorsU3Ek__BackingField_3() { return &___U3CErrorsU3Ek__BackingField_3; }
	inline void set_U3CErrorsU3Ek__BackingField_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___U3CErrorsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorsU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of VoxelBusters.Utility.WebResponse
struct WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_pinvoke
{
	int32_t ___U3CStatusU3Ek__BackingField_0;
	char* ___U3CMessageU3Ek__BackingField_1;
	RuntimeObject* ___U3CDataU3Ek__BackingField_2;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___U3CErrorsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of VoxelBusters.Utility.WebResponse
struct WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_com
{
	int32_t ___U3CStatusU3Ek__BackingField_0;
	Il2CppChar* ___U3CMessageU3Ek__BackingField_1;
	RuntimeObject* ___U3CDataU3Ek__BackingField_2;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___U3CErrorsU3Ek__BackingField_3;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
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
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct  TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t03ED52F888000DAF40C550C434F29F39A23D61C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GUILayoutOption_Type
struct  Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct  RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ThreadPriority
struct  ThreadPriority_tCA32DC97B1FAF52087C84FF48A88EBFF9AB637B7 
{
public:
	// System.Int32 UnityEngine.ThreadPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadPriority_tCA32DC97B1FAF52087C84FF48A88EBFF9AB637B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.Utility.PopupAttribute
struct  PopupAttribute_t0503A5881BE8D3D4C44292E41B0F0F250B2141B4  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String[] VoxelBusters.Utility.PopupAttribute::options
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___options_0;

public:
	inline static int32_t get_offset_of_options_0() { return static_cast<int32_t>(offsetof(PopupAttribute_t0503A5881BE8D3D4C44292E41B0F0F250B2141B4, ___options_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_options_0() const { return ___options_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_options_0() { return &___options_0; }
	inline void set_options_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_0), (void*)value);
	}
};


// VoxelBusters.Utility.RegexAttribute
struct  RegexAttribute_t058348639EA159AE9A53B3165CF2A723E151EC3E  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:
	// System.String VoxelBusters.Utility.RegexAttribute::pattern
	String_t* ___pattern_0;
	// System.String VoxelBusters.Utility.RegexAttribute::helpMessage
	String_t* ___helpMessage_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(RegexAttribute_t058348639EA159AE9A53B3165CF2A723E151EC3E, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_helpMessage_1() { return static_cast<int32_t>(offsetof(RegexAttribute_t058348639EA159AE9A53B3165CF2A723E151EC3E, ___helpMessage_1)); }
	inline String_t* get_helpMessage_1() const { return ___helpMessage_1; }
	inline String_t** get_address_of_helpMessage_1() { return &___helpMessage_1; }
	inline void set_helpMessage_1(String_t* value)
	{
		___helpMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___helpMessage_1), (void*)value);
	}
};


// VoxelBusters.Utility.Request
struct  Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6  : public RuntimeObject
{
public:
	// System.Boolean VoxelBusters.Utility.Request::<IsAsynchronous>k__BackingField
	bool ___U3CIsAsynchronousU3Ek__BackingField_0;
	// VoxelBusters.Utility.URL VoxelBusters.Utility.Request::<URL>k__BackingField
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ___U3CURLU3Ek__BackingField_1;
	// UnityEngine.WWW VoxelBusters.Utility.Request::<WWWObject>k__BackingField
	WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___U3CWWWObjectU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsAsynchronousU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6, ___U3CIsAsynchronousU3Ek__BackingField_0)); }
	inline bool get_U3CIsAsynchronousU3Ek__BackingField_0() const { return ___U3CIsAsynchronousU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsAsynchronousU3Ek__BackingField_0() { return &___U3CIsAsynchronousU3Ek__BackingField_0; }
	inline void set_U3CIsAsynchronousU3Ek__BackingField_0(bool value)
	{
		___U3CIsAsynchronousU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CURLU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6, ___U3CURLU3Ek__BackingField_1)); }
	inline URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  get_U3CURLU3Ek__BackingField_1() const { return ___U3CURLU3Ek__BackingField_1; }
	inline URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * get_address_of_U3CURLU3Ek__BackingField_1() { return &___U3CURLU3Ek__BackingField_1; }
	inline void set_U3CURLU3Ek__BackingField_1(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  value)
	{
		___U3CURLU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CURLU3Ek__BackingField_1))->___U3CURLStringU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CWWWObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6, ___U3CWWWObjectU3Ek__BackingField_2)); }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * get_U3CWWWObjectU3Ek__BackingField_2() const { return ___U3CWWWObjectU3Ek__BackingField_2; }
	inline WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 ** get_address_of_U3CWWWObjectU3Ek__BackingField_2() { return &___U3CWWWObjectU3Ek__BackingField_2; }
	inline void set_U3CWWWObjectU3Ek__BackingField_2(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * value)
	{
		___U3CWWWObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CWWWObjectU3Ek__BackingField_2), (void*)value);
	}
};

struct Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_StaticFields
{
public:
	// UnityEngine.MonoBehaviour VoxelBusters.Utility.Request::surrogateMonobehaviour
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * ___surrogateMonobehaviour_3;

public:
	inline static int32_t get_offset_of_surrogateMonobehaviour_3() { return static_cast<int32_t>(offsetof(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_StaticFields, ___surrogateMonobehaviour_3)); }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * get_surrogateMonobehaviour_3() const { return ___surrogateMonobehaviour_3; }
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** get_address_of_surrogateMonobehaviour_3() { return &___surrogateMonobehaviour_3; }
	inline void set_surrogateMonobehaviour_3(MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		___surrogateMonobehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___surrogateMonobehaviour_3), (void*)value);
	}
};


// VoxelBusters.Utility.TextureExtensions_EncodeTo
struct  EncodeTo_t68156789DBEC0BA7A7E94DC037D9FEC6F3B51106 
{
public:
	// System.Int32 VoxelBusters.Utility.TextureExtensions_EncodeTo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncodeTo_t68156789DBEC0BA7A7E94DC037D9FEC6F3B51106, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.Utility.eInspectorButtonPosition
struct  eInspectorButtonPosition_tEF78CDC72CEDF6E96A4863550D5AC7F9CAD4691A 
{
public:
	// System.Int32 VoxelBusters.Utility.eInspectorButtonPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eInspectorButtonPosition_tEF78CDC72CEDF6E96A4863550D5AC7F9CAD4691A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// VoxelBusters.Utility.eJSONToken
struct  eJSONToken_tE9BDE9A691DCA99A549D065BD7A1416FCE3B888C 
{
public:
	// System.Int32 VoxelBusters.Utility.eJSONToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eJSONToken_tE9BDE9A691DCA99A549D065BD7A1416FCE3B888C, ___value___2)); }
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
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption_Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct  GUIStyle_t671F175A201A19166385EE3392292A5F50070572  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Normal_1)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Hover_2)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Active_3)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Focused_4)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnNormal_5)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnHover_6)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnActive_7)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnFocused_8)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Border_9)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Padding_10)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Margin_11)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Overflow_12)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}
};

struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___s_None_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_14), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Overflow_12;
};

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.WWW
struct  WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// UnityEngine.ThreadPriority UnityEngine.WWW::<threadPriority>k__BackingField
	int32_t ___U3CthreadPriorityU3Ek__BackingField_0;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ____uwr_1;
	// UnityEngine.AssetBundle UnityEngine.WWW::_assetBundle
	AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * ____assetBundle_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ____responseHeaders_3;

public:
	inline static int32_t get_offset_of_U3CthreadPriorityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ___U3CthreadPriorityU3Ek__BackingField_0)); }
	inline int32_t get_U3CthreadPriorityU3Ek__BackingField_0() const { return ___U3CthreadPriorityU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CthreadPriorityU3Ek__BackingField_0() { return &___U3CthreadPriorityU3Ek__BackingField_0; }
	inline void set_U3CthreadPriorityU3Ek__BackingField_0(int32_t value)
	{
		___U3CthreadPriorityU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of__uwr_1() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ____uwr_1)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get__uwr_1() const { return ____uwr_1; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of__uwr_1() { return &____uwr_1; }
	inline void set__uwr_1(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		____uwr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_1), (void*)value);
	}

	inline static int32_t get_offset_of__assetBundle_2() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ____assetBundle_2)); }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * get__assetBundle_2() const { return ____assetBundle_2; }
	inline AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 ** get_address_of__assetBundle_2() { return &____assetBundle_2; }
	inline void set__assetBundle_2(AssetBundle_tCE287BAB693894C3991CDD308B92A8C9C4BD4C78 * value)
	{
		____assetBundle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assetBundle_2), (void*)value);
	}

	inline static int32_t get_offset_of__responseHeaders_3() { return static_cast<int32_t>(offsetof(WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664, ____responseHeaders_3)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get__responseHeaders_3() const { return ____responseHeaders_3; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of__responseHeaders_3() { return &____responseHeaders_3; }
	inline void set__responseHeaders_3(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		____responseHeaders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____responseHeaders_3), (void*)value);
	}
};


// VoxelBusters.Utility.WebRequest
struct  WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32  : public Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6
{
public:
	// System.Object VoxelBusters.Utility.WebRequest::<Parameters>k__BackingField
	RuntimeObject * ___U3CParametersU3Ek__BackingField_4;
	// VoxelBusters.Utility.WebRequest_JSONResponse VoxelBusters.Utility.WebRequest::<OnSuccess>k__BackingField
	JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * ___U3COnSuccessU3Ek__BackingField_5;
	// VoxelBusters.Utility.WebRequest_JSONResponse VoxelBusters.Utility.WebRequest::<OnFailure>k__BackingField
	JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * ___U3COnFailureU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32, ___U3CParametersU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CParametersU3Ek__BackingField_4() const { return ___U3CParametersU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CParametersU3Ek__BackingField_4() { return &___U3CParametersU3Ek__BackingField_4; }
	inline void set_U3CParametersU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CParametersU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSuccessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32, ___U3COnSuccessU3Ek__BackingField_5)); }
	inline JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * get_U3COnSuccessU3Ek__BackingField_5() const { return ___U3COnSuccessU3Ek__BackingField_5; }
	inline JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 ** get_address_of_U3COnSuccessU3Ek__BackingField_5() { return &___U3COnSuccessU3Ek__BackingField_5; }
	inline void set_U3COnSuccessU3Ek__BackingField_5(JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * value)
	{
		___U3COnSuccessU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSuccessU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnFailureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32, ___U3COnFailureU3Ek__BackingField_6)); }
	inline JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * get_U3COnFailureU3Ek__BackingField_6() const { return ___U3COnFailureU3Ek__BackingField_6; }
	inline JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 ** get_address_of_U3COnFailureU3Ek__BackingField_6() { return &___U3COnFailureU3Ek__BackingField_6; }
	inline void set_U3COnFailureU3Ek__BackingField_6(JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * value)
	{
		___U3COnFailureU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnFailureU3Ek__BackingField_6), (void*)value);
	}
};


// System.Action`1<UnityEngine.Texture2D>
struct  Action_1_tFB39B350582053B206393ED428938B171A469EE0  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.MemberAccessException
struct  MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.GUISkin
struct  GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalSlider_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalSliderThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbar_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarThumb_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarLeftButton_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_horizontalScrollbarRightButton_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbar_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarThumb_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarUpButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_verticalScrollbarDownButton_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_ScrollView_24;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* ___m_CustomStyles_25;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * ___m_Settings_26;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * ___m_Styles_28;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Font_4)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_box_5)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_button_6)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_toggle_7)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_label_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_textField_9)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_textArea_10)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_window_11)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalSlider_12)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_14() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalSlider_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalSlider_14() const { return ___m_verticalSlider_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalSlider_14() { return &___m_verticalSlider_14; }
	inline void set_m_verticalSlider_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalSlider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalSliderThumb_15)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalSliderThumb_15() const { return ___m_verticalSliderThumb_15; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalSliderThumb_15() { return &___m_verticalSliderThumb_15; }
	inline void set_m_verticalSliderThumb_15(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalSliderThumb_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_16() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbar_16)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbar_16() const { return ___m_horizontalScrollbar_16; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbar_16() { return &___m_horizontalScrollbar_16; }
	inline void set_m_horizontalScrollbar_16(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbar_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_17() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarThumb_17)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarThumb_17() const { return ___m_horizontalScrollbarThumb_17; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarThumb_17() { return &___m_horizontalScrollbarThumb_17; }
	inline void set_m_horizontalScrollbarThumb_17(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarThumb_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_18() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarLeftButton_18)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarLeftButton_18() const { return ___m_horizontalScrollbarLeftButton_18; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarLeftButton_18() { return &___m_horizontalScrollbarLeftButton_18; }
	inline void set_m_horizontalScrollbarLeftButton_18(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarLeftButton_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_19() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_horizontalScrollbarRightButton_19)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_horizontalScrollbarRightButton_19() const { return ___m_horizontalScrollbarRightButton_19; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_horizontalScrollbarRightButton_19() { return &___m_horizontalScrollbarRightButton_19; }
	inline void set_m_horizontalScrollbarRightButton_19(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_horizontalScrollbarRightButton_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_20() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbar_20)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbar_20() const { return ___m_verticalScrollbar_20; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbar_20() { return &___m_verticalScrollbar_20; }
	inline void set_m_verticalScrollbar_20(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbar_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_21() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarThumb_21)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarThumb_21() const { return ___m_verticalScrollbarThumb_21; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarThumb_21() { return &___m_verticalScrollbarThumb_21; }
	inline void set_m_verticalScrollbarThumb_21(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarThumb_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarUpButton_22)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarUpButton_22() const { return ___m_verticalScrollbarUpButton_22; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarUpButton_22() { return &___m_verticalScrollbarUpButton_22; }
	inline void set_m_verticalScrollbarUpButton_22(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarUpButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_23() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_verticalScrollbarDownButton_23)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_verticalScrollbarDownButton_23() const { return ___m_verticalScrollbarDownButton_23; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_verticalScrollbarDownButton_23() { return &___m_verticalScrollbarDownButton_23; }
	inline void set_m_verticalScrollbarDownButton_23(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_verticalScrollbarDownButton_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_24() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_ScrollView_24)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_ScrollView_24() const { return ___m_ScrollView_24; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_ScrollView_24() { return &___m_ScrollView_24; }
	inline void set_m_ScrollView_24(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_ScrollView_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_25() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_CustomStyles_25)); }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* get_m_CustomStyles_25() const { return ___m_CustomStyles_25; }
	inline GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB** get_address_of_m_CustomStyles_25() { return &___m_CustomStyles_25; }
	inline void set_m_CustomStyles_25(GUIStyleU5BU5D_t2F343713D6ADFF41BBCF1D17BAE79F51BD745DBB* value)
	{
		___m_CustomStyles_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_26() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Settings_26)); }
	inline GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * get_m_Settings_26() const { return ___m_Settings_26; }
	inline GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 ** get_address_of_m_Settings_26() { return &___m_Settings_26; }
	inline void set_m_Settings_26(GUISettings_tA863524720A3C984BAE56598D922F2C04DC80EF4 * value)
	{
		___m_Settings_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7, ___m_Styles_28)); }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * get_m_Styles_28() const { return ___m_Styles_28; }
	inline Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A ** get_address_of_m_Styles_28() { return &___m_Styles_28; }
	inline void set_m_Styles_28(Dictionary_2_tF2F04E1BE233EE6C4A6E90261E463B2A67A3FB6A * value)
	{
		___m_Styles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_28), (void*)value);
	}
};

struct GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___ms_Error_27;
	// UnityEngine.GUISkin_SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * ___m_SkinChanged_29;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * ___current_30;

public:
	inline static int32_t get_offset_of_ms_Error_27() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___ms_Error_27)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_ms_Error_27() const { return ___ms_Error_27; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_ms_Error_27() { return &___ms_Error_27; }
	inline void set_ms_Error_27(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___ms_Error_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_29() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___m_SkinChanged_29)); }
	inline SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * get_m_SkinChanged_29() const { return ___m_SkinChanged_29; }
	inline SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 ** get_address_of_m_SkinChanged_29() { return &___m_SkinChanged_29; }
	inline void set_m_SkinChanged_29(SkinChangedDelegate_tAB4CEEA8C8A0BDCFD51C9624AE173C46A40135D8 * value)
	{
		___m_SkinChanged_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_29), (void*)value);
	}

	inline static int32_t get_offset_of_current_30() { return static_cast<int32_t>(offsetof(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7_StaticFields, ___current_30)); }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * get_current_30() const { return ___current_30; }
	inline GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 ** get_address_of_current_30() { return &___current_30; }
	inline void set_current_30(GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * value)
	{
		___current_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_30), (void*)value);
	}
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// VoxelBusters.Utility.WebRequest_JSONResponse
struct  JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8  : public MulticastDelegate_t
{
public:

public:
};


// System.MissingMemberException
struct  MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD  : public MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_18), (void*)value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___Signature_19)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Signature_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// System.MissingFieldException
struct  MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37  : public MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD
{
public:

public:
};


// System.MissingMethodException
struct  MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498  : public MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_20), (void*)value);
	}
};


// VoxelBusters.Utility.Request_SurrogateMonoBehaviour
struct  SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase
struct  GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rect VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::m_titleLayoutNormalisedRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_titleLayoutNormalisedRect_4;
	// UnityEngine.Rect VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::m_buttonLayoutNormalisedRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_buttonLayoutNormalisedRect_5;
	// UnityEngine.Rect VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::m_resultLayoutNormalisedRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_resultLayoutNormalisedRect_6;
	// System.Single VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::m_buttonColumnCount
	float ___m_buttonColumnCount_7;

public:
	inline static int32_t get_offset_of_m_titleLayoutNormalisedRect_4() { return static_cast<int32_t>(offsetof(GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290, ___m_titleLayoutNormalisedRect_4)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_titleLayoutNormalisedRect_4() const { return ___m_titleLayoutNormalisedRect_4; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_titleLayoutNormalisedRect_4() { return &___m_titleLayoutNormalisedRect_4; }
	inline void set_m_titleLayoutNormalisedRect_4(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_titleLayoutNormalisedRect_4 = value;
	}

	inline static int32_t get_offset_of_m_buttonLayoutNormalisedRect_5() { return static_cast<int32_t>(offsetof(GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290, ___m_buttonLayoutNormalisedRect_5)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_buttonLayoutNormalisedRect_5() const { return ___m_buttonLayoutNormalisedRect_5; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_buttonLayoutNormalisedRect_5() { return &___m_buttonLayoutNormalisedRect_5; }
	inline void set_m_buttonLayoutNormalisedRect_5(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_buttonLayoutNormalisedRect_5 = value;
	}

	inline static int32_t get_offset_of_m_resultLayoutNormalisedRect_6() { return static_cast<int32_t>(offsetof(GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290, ___m_resultLayoutNormalisedRect_6)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_resultLayoutNormalisedRect_6() const { return ___m_resultLayoutNormalisedRect_6; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_resultLayoutNormalisedRect_6() { return &___m_resultLayoutNormalisedRect_6; }
	inline void set_m_resultLayoutNormalisedRect_6(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_resultLayoutNormalisedRect_6 = value;
	}

	inline static int32_t get_offset_of_m_buttonColumnCount_7() { return static_cast<int32_t>(offsetof(GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290, ___m_buttonColumnCount_7)); }
	inline float get_m_buttonColumnCount_7() const { return ___m_buttonColumnCount_7; }
	inline float* get_address_of_m_buttonColumnCount_7() { return &___m_buttonColumnCount_7; }
	inline void set_m_buttonColumnCount_7(float value)
	{
		___m_buttonColumnCount_7 = value;
	}
};


// VoxelBusters.Utility.UnityGUILayoutUtility
struct  UnityGUILayoutUtility_tE2F686A99C7A6BBA76B66C873FF96FA525F436D5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu
struct  GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B  : public GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290
{
public:
	// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu[] VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::m_subMenuList
	GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* ___m_subMenuList_11;
	// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::m_activeSubMenu
	GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * ___m_activeSubMenu_12;
	// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::m_showingMainMenu
	bool ___m_showingMainMenu_13;

public:
	inline static int32_t get_offset_of_m_subMenuList_11() { return static_cast<int32_t>(offsetof(GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B, ___m_subMenuList_11)); }
	inline GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* get_m_subMenuList_11() const { return ___m_subMenuList_11; }
	inline GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1** get_address_of_m_subMenuList_11() { return &___m_subMenuList_11; }
	inline void set_m_subMenuList_11(GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* value)
	{
		___m_subMenuList_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subMenuList_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_activeSubMenu_12() { return static_cast<int32_t>(offsetof(GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B, ___m_activeSubMenu_12)); }
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * get_m_activeSubMenu_12() const { return ___m_activeSubMenu_12; }
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 ** get_address_of_m_activeSubMenu_12() { return &___m_activeSubMenu_12; }
	inline void set_m_activeSubMenu_12(GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * value)
	{
		___m_activeSubMenu_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_activeSubMenu_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_showingMainMenu_13() { return static_cast<int32_t>(offsetof(GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B, ___m_showingMainMenu_13)); }
	inline bool get_m_showingMainMenu_13() const { return ___m_showingMainMenu_13; }
	inline bool* get_address_of_m_showingMainMenu_13() { return &___m_showingMainMenu_13; }
	inline void set_m_showingMainMenu_13(bool value)
	{
		___m_showingMainMenu_13 = value;
	}
};


// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu
struct  GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328  : public GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290
{
public:
	// UnityEngine.GameObject VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::m_gameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_gameObject_11;

public:
	inline static int32_t get_offset_of_m_gameObject_11() { return static_cast<int32_t>(offsetof(GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328, ___m_gameObject_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_gameObject_11() const { return ___m_gameObject_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_gameObject_11() { return &___m_gameObject_11; }
	inline void set_m_gameObject_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_gameObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gameObject_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
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
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  m_Items[1];

public:
	inline ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  m_Items[1];

public:
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		m_Items[index] = value;
	}
};
// VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu[]
struct GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * m_Items[1];

public:
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * m_Items[1];

public:
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// T VoxelBusters.Utility.IDictionaryExtensions::GetIfAvailable<System.Int32>(System.Collections.IDictionary,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A_gshared (RuntimeObject* ____sourceDictionary0, String_t* ____key1, int32_t ____defaultValue2, const RuntimeMethod* method);
// T VoxelBusters.Utility.IDictionaryExtensions::GetIfAvailable<System.Object>(System.Collections.IDictionary,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IDictionaryExtensions_GetIfAvailable_TisRuntimeObject_m9BA44F28269CC88F7BAF3795FA113CDBC32A652B_gshared (RuntimeObject* ____sourceDictionary0, String_t* ____key1, RuntimeObject * ____defaultValue2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.ReflectionExtensions::SetFieldValue(System.Object,System.Type,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9 (RuntimeObject * ____object0, Type_t * ____objectType1, String_t* ____name2, RuntimeObject * ____value3, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.MissingFieldException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingFieldException__ctor_mC6E169055FBC76AE0C760DD5B47433E7039B5100 (MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object VoxelBusters.Utility.ReflectionExtensions::GetStaticValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1 (Type_t * ____objectType0, String_t* ____name1, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.ReflectionExtensions::SetStaticValue(System.Type,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_SetStaticValue_mCB12634A1EABC5F08082EA86EF0E88E5A56D1F8F (Type_t * ____objectType0, String_t* ____name1, RuntimeObject * ____value2, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeMethod(System.Object,System.Type,System.String,System.Object[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC (RuntimeObject * ____object0, Type_t * ____objectType1, String_t* ____method2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____argValues3, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____argTypes4, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m694F07057F23808980BF6B1637544F34852759FA (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___binder2, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___types3, ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA* ___modifiers4, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.Void System.MissingMethodException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMethodException__ctor_m1DF6EAD8AE77C7C77D64E7FAE249FE024C56EB71 (MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeStaticMethod(System.Type,System.String,System.Object[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721 (Type_t * ____objectType0, String_t* ____method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____argValues2, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____argTypes3, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Reflection.FieldInfo VoxelBusters.Utility.ReflectionExtensions::GetFieldWithName(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * ReflectionExtensions_GetFieldWithName_m0C45CD3670FA1FF44E53C69C49A74A7A73457FEF (Type_t * ____type0, String_t* ____name1, bool ____isPublic2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.Request::set_URL(VoxelBusters.Utility.URL)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Request_set_URL_m920D8BCEA762B078633CCF4FD4DE184A6230179C_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ___value0, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.Request::set_IsAsynchronous(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Request_set_IsAsynchronous_mB232A352F43F8C941D092937AB9DAAD20D5D217C_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.WWW VoxelBusters.Utility.Request::get_WWWObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method);
// VoxelBusters.Utility.URL VoxelBusters.Utility.Request::get_URL()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  Request_get_URL_mB98724B5742A622A3CB5B2E5FC8AF7E324655F84_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.URL::get_URLString()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean VoxelBusters.Utility.Request::get_IsAsynchronous()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Request_get_IsAsynchronous_m675FFAE3DC70BF4E98BAF7EBAA06770F71FEFCF7_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<VoxelBusters.Utility.Request/SurrogateMonoBehaviour>()
inline SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891 * GameObject_AddComponent_TisSurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891_m459F1AA7F27F81C4FA5BE5343ECD4996AE84BC5D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Collections.IEnumerator VoxelBusters.Utility.Request::StartAsynchronousRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Request_StartAsynchronousRequest_m328890740B445B9ECADA3FF2797C08B43BF52794 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWW::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWW_get_isDone_m7D3800B83136885374E82BFC6ACB63BA3F6AB5DF (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.Request/<StartAsynchronousRequest>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16__ctor_m282761AEE9C96C7C66CC51273463D8B750452D1D (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WWW::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66 (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inArray0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156 (String_t* ___s0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01 (String_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ImageConversion_EncodeToJPG_mDE6C67AACCC7BAD006D0A852093F881D11F9C8DF (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.String VoxelBusters.Utility.TextureExtensions::ToString(UnityEngine.Texture2D,VoxelBusters.Utility.TextureExtensions/EncodeTo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureExtensions_ToString_m66D6CB06877C2488440A89FAD155945B40AC3FAD (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____img0, int32_t ____encodeTo1, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.JSONUtility::ToJSON(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONUtility_ToJSON_mB719806E83CBE9D8B8600A92694543075D05839D (RuntimeObject * ____object0, const RuntimeMethod* method);
// System.Object VoxelBusters.Utility.JSONUtility::FromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JSONUtility_FromJSON_m0A95C44DF377A58189AE195E0FFC0C1148A8B35B (String_t* ____inputJSONString0, const RuntimeMethod* method);
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::CreateTexture(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_CreateTexture_mA5CC9A5874EBF765B4A42433734E892545FB9244 (String_t* ____texDataB640, int32_t ____width1, int32_t ____height2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___tex0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.TextureExtensions/<TakeScreenshot>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5__ctor_m1A49B838FBBE92B6730735DD9AD357654C6E510D (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 VoxelBusters.Utility.VectorExtensions::Rotate(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____vec0, float ____angleDeg1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Texture2D_GetPixels32_mD84F05C717774887B5EF65ADEE82045A3E2FBD75 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___miplevel0, const RuntimeMethod* method);
// UnityEngine.Color VoxelBusters.Utility.TextureExtensions::GetPixel(UnityEngine.Texture2D,UnityEngine.Color32[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  TextureExtensions_GetPixel_mBE8648583A524441F8991623613FBF2650B48248 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputTex0, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____pixels1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____coordinate2, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  Color32_op_Implicit_m52B034473369A651C8952BD916A2AB193E0E5B30 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m22195EEABA78058324C83EBF327A7E5EFBEE809F (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_clear_m419239BDAEB3D3C4B4291BF2C6EF09A7D7D81360 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color32_op_Implicit_mA89CAD76E78975F51DF7374A67D18A5F6EF8DA61 (Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___c0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Texture2D_GetPixelBilinear_m3E0E9A22A0989E99A7295BC6FE6999728F290A78 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, float ___u0, float ___v1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mE261D2D072DB4CF447A259731E51291267EEA3AC (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m1ED1C11E41D0ACC8CFCABBD25946CF0BD16D4F61 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0)
inline void Action_1_Invoke_m6048C88F88DE3E8168823827588E258EB402D299 (Action_1_tFB39B350582053B206393ED428938B171A469EE0 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFB39B350582053B206393ED428938B171A469EE0 *, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.TransformExtensions::GetPath(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformExtensions_GetPath_mE3F5E4921201F6C0D0E1B8C000891D1D5000DD5C (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____transform0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8 (Type_t * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.URL::set_URLString(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.URL::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, String_t* ____URLString0, const RuntimeMethod* method);
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::FileURLWithPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_FileURLWithPath_m9DD4765CAB5EA9C0B56430EBFD42F640250F3410 (String_t* ____filePath0, const RuntimeMethod* method);
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::URLWithString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_URLWithString_m46571724BB6FA1B10655880BF515DECFEF53C2D5 (String_t* ____URLString0, const RuntimeMethod* method);
// System.Boolean VoxelBusters.Utility.URL::isFileReferenceURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.URL::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu>()
inline GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* Component_GetComponentsInChildren_TisGUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328_mC1EA90E037AD87DC31EFC27448457315FD22EF24 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared)(__this, method);
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu_SetActive_m8EF7CAA281E3D6667181CBCBBD6B57B84E504C42 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, bool ____newState0, const RuntimeMethod* method);
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUISubMenu_IsActive_mE707F67C65CE69A9A85A457351D9E922D17DE117 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_DrawTitle_m6AEBD515711FBEE555E1A280306C1219B745C9E6 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____title0, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::BeginButtonLayout(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_BeginButtonLayout_mD265A1CD75265491DD7A95C82593630CEF33C0C2 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, float ____columnCount0, float ____normalisedHeight1, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::DrawSubMenuColumn(VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* ____subMenuList0, int32_t ____startIndex1, int32_t ____endIndex2, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::EndButtonLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_EndButtonLayout_mA6673C632C3E57212142AB94EE3E3BEB21546A35 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_m45C3FA429E4195BE547B37B078FF395DA9CF8288 (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options0, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::get_SubMenuName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUISubMenu_get_SubMenuName_m2D32E0D18BEB2A9F9F009FBC08A587B7680A06D8 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method);
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIMenuBase_DrawButton_m4AB5EBB121AE6A6306D497F34440B0FB926226BE (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____buttonName0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_m7AAD929902547940A6076D23277B7255B96584FE (const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase__ctor_mFB4DE49165DDF23CF56650064B855CC79A361275 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method);
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawTitleWithBackButton(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____title0, String_t* ____button1, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866 (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_button_m015FA6A0418D94F03B5F12131DED65CCFDCA8F7A (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, const RuntimeMethod* method);
// UnityEngine.Rect VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::GetLayoutRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUIMenuBase_GetLayoutRect_m6E34541E77B453A006F97F67E9B1CD8F63524D8E (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ____normalisedRect0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_mE329140CF26780AF025A41979D054854DD7587B8 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___screenRect0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_label_mC5C9D4CD377D7F5BB970B01E665EE077565AFF72 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E (float ___pixels0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mC865CE06BCFD7999DA8720A65827034DC481D550 (String_t* ___text0, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style1, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mCBC21D52BCF9CAF29EEFC0A9F986BECE2F1CA754 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m690713D70FD850E74B529E8929492AC80E673902 (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_m1DE9883227F98E1DA9309F1AF1370F1158A658C6 (const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_MinHeight_m1F930C27879C11B9DD29540F7572420601C6582A (float ___minHeight0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GUILayout_MaxWidth_m39E7ADD7E23B56F2246BFA9A659D18D35B9CA4ED (float ___maxWidth0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918 (String_t* ___text0, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUISkin_get_textArea_m865E5C1D39519731718B66C9C993DFDEE0299C92 (GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::get_CachedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::OnPressingBackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu_OnPressingBackButton_mB2A488EBB6AA1AD7B9952D0B25D3512BE29C3E8E (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * GUIStyle_op_Implicit_m678936E26D59BE1DAE146E28C3B0C8AD1BB69E19 (String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_richText_mC8DC3225CC7A8E011FD97B0BDFDF91E89C4F8982 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m8C923B0C5DE305F6A22320F44BE37F81CA099316 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___src0, const RuntimeMethod* method);
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mAAFFFB0278FCB4F7A7661BE595BA42CD093E38C5 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent_set_text_m866E0C5690119816D87D83124C81BDC0A0ED4316 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_mF7767116F694ECED3533C06972B3D50294A99707 (bool ___value0, GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ___content1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___style2, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.Request::.ctor(VoxelBusters.Utility.URL,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mA6E2964FC0FCD991FAC6F640AD8EB23FFCEA70A1 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ____URL0, bool ____isAsynchronous1, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebRequest::set_Parameters(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRequest_set_Parameters_mC2916E110D63C180A355CECCB6CEA82DD9F07240_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// VoxelBusters.Utility.WebRequest/JSONResponse VoxelBusters.Utility.WebRequest::get_OnFailure()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebRequest/JSONResponse::Invoke(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse_Invoke_m2F2136CBD4AC89316E790E04992F6EA2EA72381A (JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * __this, RuntimeObject* ____response0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WWW::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1 (WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * __this, const RuntimeMethod* method);
// VoxelBusters.Utility.WebRequest/JSONResponse VoxelBusters.Utility.WebRequest::get_OnSuccess()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnSuccess_m3886B3B3D8E7423CBBAE027B9AEE79B84B6965F8_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method);
// System.Int32 VoxelBusters.Utility.WebResponse::get_Status()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebResponse_get_Status_m2D1C0DE36728DD2026AB921D31116B8EFBF86DCB_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebResponse::set_Status(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String VoxelBusters.Utility.WebResponse::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebResponse_get_Message_mAA8F7EEE39E2241D2BE1C9BB1504A610B7CB2C35_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebResponse::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.IDictionary VoxelBusters.Utility.WebResponse::get_Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WebResponse_get_Data_m9200F44458ADE013F5B60B615DF81F5FCF456A9F_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebResponse::set_Data(System.Collections.IDictionary)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> VoxelBusters.Utility.WebResponse::get_Errors()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method);
// System.Void VoxelBusters.Utility.WebResponse::set_Errors(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value0, const RuntimeMethod* method);
// T VoxelBusters.Utility.IDictionaryExtensions::GetIfAvailable<System.Int32>(System.Collections.IDictionary,System.String,T)
inline int32_t IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A (RuntimeObject* ____sourceDictionary0, String_t* ____key1, int32_t ____defaultValue2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*))IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A_gshared)(____sourceDictionary0, ____key1, ____defaultValue2, method);
}
// T VoxelBusters.Utility.IDictionaryExtensions::GetIfAvailable<System.String>(System.Collections.IDictionary,System.String,T)
inline String_t* IDictionaryExtensions_GetIfAvailable_TisString_t_mB60684D446B963F13AA4DAE4FAB2E69E3295776F (RuntimeObject* ____sourceDictionary0, String_t* ____key1, String_t* ____defaultValue2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*))IDictionaryExtensions_GetIfAvailable_TisRuntimeObject_m9BA44F28269CC88F7BAF3795FA113CDBC32A652B_gshared)(____sourceDictionary0, ____key1, ____defaultValue2, method);
}
// T VoxelBusters.Utility.IDictionaryExtensions::GetIfAvailable<System.Collections.Generic.List`1<System.String>>(System.Collections.IDictionary,System.String,T)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * IDictionaryExtensions_GetIfAvailable_TisList_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_m0D5A48C24DCE611A8C4F8E1D695682A21395B98A (RuntimeObject* ____sourceDictionary0, String_t* ____key1, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ____defaultValue2, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (RuntimeObject*, String_t*, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))IDictionaryExtensions_GetIfAvailable_TisRuntimeObject_m9BA44F28269CC88F7BAF3795FA113CDBC32A652B_gshared)(____sourceDictionary0, ____key1, ____defaultValue2, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoxelBusters.Utility.PopupAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupAttribute__ctor_mAC92AE3BAA4BEA86DD761F1F1482592925B88AA9 (PopupAttribute_t0503A5881BE8D3D4C44292E41B0F0F250B2141B4 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____options0, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ____options0;
		__this->set_options_0(L_0);
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
// System.Void VoxelBusters.Utility.ReflectionExtensions::SetFieldValue(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_SetFieldValue_m2A7793023F716F0EEB358DBDDA89A6E9ED9F8F10 (RuntimeObject * ____object0, String_t* ____name1, RuntimeObject * ____value2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ____object0;
		RuntimeObject * L_1 = ____object0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ____name1;
		RuntimeObject * L_4 = ____value2;
		ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9(L_0, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::SetFieldValue(System.Object,System.Type,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9 (RuntimeObject * ____object0, Type_t * ____objectType1, String_t* ____name2, RuntimeObject * ____value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	{
		V_0 = ((int32_t)52);
		Type_t * L_0 = ____objectType1;
		String_t* L_1 = ____name2;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		FieldInfo_t * L_3 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(73 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		V_1 = L_3;
		FieldInfo_t * L_4 = V_1;
		bool L_5 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE(L_4, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		RuntimeObject * L_7 = ____object0;
		RuntimeObject * L_8 = ____value3;
		NullCheck(L_6);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		Type_t * L_9 = ____objectType1;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_11 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_10, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_12 = ____object0;
		Type_t * L_13 = ____objectType1;
		NullCheck(L_13);
		Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_13);
		String_t* L_15 = ____name2;
		RuntimeObject * L_16 = ____value3;
		ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9(L_12, L_14, L_15, L_16, /*hidden argument*/NULL);
		return;
	}

IL_003b:
	{
		String_t* L_17 = ____name2;
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3596D634BFF7B6823C10B8DA2A347D0951AFD6B8, L_17, /*hidden argument*/NULL);
		MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37 * L_19 = (MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37 *)il2cpp_codegen_object_new(MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37_il2cpp_TypeInfo_var);
		MissingFieldException__ctor_mC6E169055FBC76AE0C760DD5B47433E7039B5100(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, ReflectionExtensions_SetFieldValue_m12A9619F156C9D9B8E8ABC859C550CBA79DD13F9_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.Utility.ReflectionExtensions::GetStaticValue(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1 (Type_t * ____objectType0, String_t* ____name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	{
		V_0 = ((int32_t)56);
		Type_t * L_0 = ____objectType0;
		String_t* L_1 = ____name1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		FieldInfo_t * L_3 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(73 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		V_1 = L_3;
		FieldInfo_t * L_4 = V_1;
		bool L_5 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE(L_4, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject * L_7 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(32 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, NULL);
		return L_7;
	}

IL_001d:
	{
		Type_t * L_8 = ____objectType0;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		Type_t * L_11 = ____objectType0;
		NullCheck(L_11);
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_11);
		String_t* L_13 = ____name1;
		RuntimeObject * L_14 = ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0038:
	{
		String_t* L_15 = ____name1;
		String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3596D634BFF7B6823C10B8DA2A347D0951AFD6B8, L_15, /*hidden argument*/NULL);
		MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37 * L_17 = (MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37 *)il2cpp_codegen_object_new(MissingFieldException_tDDE5A10CB4AC8418D5507B2A00B8C55C8B053D37_il2cpp_TypeInfo_var);
		MissingFieldException__ctor_mC6E169055FBC76AE0C760DD5B47433E7039B5100(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, ReflectionExtensions_GetStaticValue_m44AE5BDBAD8ED92DECD9C1D343D9AD9BC1653DE1_RuntimeMethod_var);
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::SetStaticValue(System.Type,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_SetStaticValue_mCB12634A1EABC5F08082EA86EF0E88E5A56D1F8F (Type_t * ____objectType0, String_t* ____name1, RuntimeObject * ____value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_SetStaticValue_mCB12634A1EABC5F08082EA86EF0E88E5A56D1F8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	{
		V_0 = ((int32_t)56);
		Type_t * L_0 = ____objectType0;
		String_t* L_1 = ____name1;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		FieldInfo_t * L_3 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(73 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		V_1 = L_3;
		FieldInfo_t * L_4 = V_1;
		bool L_5 = FieldInfo_op_Inequality_mB88B704E9238C7A9FD42274FCFEFA7CFABBF16EE(L_4, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		FieldInfo_t * L_6 = V_1;
		RuntimeObject * L_7 = ____value2;
		NullCheck(L_6);
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(L_6, NULL, L_7, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		Type_t * L_8 = ____objectType0;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		Type_t * L_11 = ____objectType0;
		NullCheck(L_11);
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_11);
		String_t* L_13 = ____name1;
		RuntimeObject * L_14 = ____value2;
		ReflectionExtensions_SetStaticValue_mCB12634A1EABC5F08082EA86EF0E88E5A56D1F8F(L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0039:
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeMethod(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeMethod_m3B98D6E689FB99291D2A318F8535975680E58C00 (RuntimeObject * ____object0, String_t* ____method1, RuntimeObject * ____value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_InvokeMethod_m3B98D6E689FB99291D2A318F8535975680E58C00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* V_2 = NULL;
	{
		RuntimeObject * L_0 = ____object0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_1 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_1, _stringLiteralDA1F9528AD04FDEE95671EE8BC27F7E8EB2FF434, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReflectionExtensions_InvokeMethod_m3B98D6E689FB99291D2A318F8535975680E58C00_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject * L_2 = ____object0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL;
		V_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL;
		RuntimeObject * L_4 = ____value2;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_5;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_6;
		goto IL_0047;
	}

IL_002c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		RuntimeObject * L_9 = ____value2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		V_1 = L_8;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_11 = L_10;
		RuntimeObject * L_12 = ____value2;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_13);
		V_2 = L_11;
	}

IL_0047:
	{
		RuntimeObject * L_14 = ____object0;
		Type_t * L_15 = V_0;
		String_t* L_16 = ____method1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_18 = V_2;
		ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC(L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeMethod(System.Object,System.String,System.Object[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeMethod_mBEDB0CD6DD3B5FD40372616D7A6275605B9449BE (RuntimeObject * ____object0, String_t* ____method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____argValues2, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____argTypes3, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ____object0;
		RuntimeObject * L_1 = ____object0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ____method1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ____argValues2;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_5 = ____argTypes3;
		ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC(L_0, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeMethod(System.Object,System.Type,System.String,System.Object[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC (RuntimeObject * ____object0, Type_t * ____objectType1, String_t* ____method2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____argValues3, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____argTypes4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MethodInfo_t * V_1 = NULL;
	{
		V_0 = ((int32_t)262196);
		V_1 = (MethodInfo_t *)NULL;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ____argValues3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = ____objectType1;
		String_t* L_2 = ____method2;
		int32_t L_3 = V_0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_4 = ____argTypes4;
		NullCheck(L_1);
		MethodInfo_t * L_5 = Type_GetMethod_m694F07057F23808980BF6B1637544F34852759FA(L_1, L_2, L_3, (Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 *)NULL, L_4, (ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA*)(ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA*)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0023;
	}

IL_001a:
	{
		Type_t * L_6 = ____objectType1;
		String_t* L_7 = ____method2;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		MethodInfo_t * L_9 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0023:
	{
		MethodInfo_t * L_10 = V_1;
		bool L_11 = MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237(L_10, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		MethodInfo_t * L_12 = V_1;
		RuntimeObject * L_13 = ____object0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = ____argValues3;
		NullCheck(L_12);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_12, L_13, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		Type_t * L_15 = ____objectType1;
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_17 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_16, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_18 = ____object0;
		Type_t * L_19 = ____objectType1;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_19);
		String_t* L_21 = ____method2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ____argValues3;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_23 = ____argTypes4;
		ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC(L_18, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}

IL_0055:
	{
		MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498 * L_24 = (MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498 *)il2cpp_codegen_object_new(MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498_il2cpp_TypeInfo_var);
		MissingMethodException__ctor_m1DF6EAD8AE77C7C77D64E7FAE249FE024C56EB71(L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, ReflectionExtensions_InvokeMethod_m4B60A8364567A896094DC3C051B34225A4C527EC_RuntimeMethod_var);
	}
}
// System.Void VoxelBusters.Utility.ReflectionExtensions::InvokeStaticMethod(System.Type,System.String,System.Object[],System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721 (Type_t * ____objectType0, String_t* ____method1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____argValues2, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ____argTypes3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MethodInfo_t * V_1 = NULL;
	{
		V_0 = ((int32_t)262200);
		V_1 = (MethodInfo_t *)NULL;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ____argValues2;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_1 = ____objectType0;
		String_t* L_2 = ____method1;
		int32_t L_3 = V_0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_4 = ____argTypes3;
		NullCheck(L_1);
		MethodInfo_t * L_5 = Type_GetMethod_m694F07057F23808980BF6B1637544F34852759FA(L_1, L_2, L_3, (Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 *)NULL, L_4, (ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA*)(ParameterModifierU5BU5D_t63EC46F14F048DC9EF6BF1362E8AEBEA1A05A5EA*)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0022;
	}

IL_0019:
	{
		Type_t * L_6 = ____objectType0;
		String_t* L_7 = ____method1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		MethodInfo_t * L_9 = Type_GetMethod_m9EC42D4B1F765B882F516EE6D7970D51CF5D80DD(L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0022:
	{
		MethodInfo_t * L_10 = V_1;
		bool L_11 = MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237(L_10, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		MethodInfo_t * L_12 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ____argValues2;
		NullCheck(L_12);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_12, NULL, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0035:
	{
		Type_t * L_14 = ____objectType0;
		NullCheck(L_14);
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_16 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_15, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_17 = ____objectType0;
		NullCheck(L_17);
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_17);
		String_t* L_19 = ____method1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ____argValues2;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_21 = ____argTypes3;
		ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721(L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		return;
	}

IL_0052:
	{
		MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498 * L_22 = (MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498 *)il2cpp_codegen_object_new(MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498_il2cpp_TypeInfo_var);
		MissingMethodException__ctor_m1DF6EAD8AE77C7C77D64E7FAE249FE024C56EB71(L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, ReflectionExtensions_InvokeStaticMethod_m1BACAE822C9FC01853C95F5FB58FA4F5C0570721_RuntimeMethod_var);
	}
}
// System.Reflection.FieldInfo VoxelBusters.Utility.ReflectionExtensions::GetFieldWithName(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * ReflectionExtensions_GetFieldWithName_m0C45CD3670FA1FF44E53C69C49A74A7A73457FEF (Type_t * ____type0, String_t* ____name1, bool ____isPublic2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionExtensions_GetFieldWithName_m0C45CD3670FA1FF44E53C69C49A74A7A73457FEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		V_0 = 4;
		bool L_0 = ____isPublic2;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)16)));
		goto IL_0011;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2|(int32_t)((int32_t)32)));
	}

IL_0011:
	{
		Type_t * L_3 = ____type0;
		String_t* L_4 = ____name1;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		FieldInfo_t * L_6 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(73 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, L_4, L_5);
		V_1 = L_6;
		FieldInfo_t * L_7 = V_1;
		bool L_8 = FieldInfo_op_Equality_m924E721654B7BDF09AA6E20C6E8D2BC4D4AF9DB7(L_7, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_9 = ____type0;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(58 /* System.Type System.Type::get_BaseType() */, L_9);
		V_2 = L_10;
		Type_t * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_12 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_11, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_13 = V_2;
		String_t* L_14 = ____name1;
		bool L_15 = ____isPublic2;
		FieldInfo_t * L_16 = ReflectionExtensions_GetFieldWithName_m0C45CD3670FA1FF44E53C69C49A74A7A73457FEF(L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_003c:
	{
		FieldInfo_t * L_17 = V_1;
		return L_17;
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
// System.Void VoxelBusters.Utility.RegexAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexAttribute__ctor_mF89A155A0BCC4D468C891A2E63B82BC65CA6CFB1 (RegexAttribute_t058348639EA159AE9A53B3165CF2A723E151EC3E * __this, String_t* ___pattern0, String_t* ___helpMessage1, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___pattern0;
		__this->set_pattern_0(L_0);
		String_t* L_1 = ___helpMessage1;
		__this->set_helpMessage_1(L_1);
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
// System.Boolean VoxelBusters.Utility.Request::get_IsAsynchronous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Request_get_IsAsynchronous_m675FFAE3DC70BF4E98BAF7EBAA06770F71FEFCF7 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsAsynchronousU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.Request::set_IsAsynchronous(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_set_IsAsynchronous_mB232A352F43F8C941D092937AB9DAAD20D5D217C (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsAsynchronousU3Ek__BackingField_0(L_0);
		return;
	}
}
// VoxelBusters.Utility.URL VoxelBusters.Utility.Request::get_URL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  Request_get_URL_mB98724B5742A622A3CB5B2E5FC8AF7E324655F84 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = __this->get_U3CURLU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.Request::set_URL(VoxelBusters.Utility.URL)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_set_URL_m920D8BCEA762B078633CCF4FD4DE184A6230179C (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ___value0, const RuntimeMethod* method)
{
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = ___value0;
		__this->set_U3CURLU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.WWW VoxelBusters.Utility.Request::get_WWWObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = __this->get_U3CWWWObjectU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.Request::set_WWWObject(UnityEngine.WWW)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_set_WWWObject_m630AAFA2BFD5136119DDC8C456F10935B7DC1C15 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * ___value0, const RuntimeMethod* method)
{
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = ___value0;
		__this->set_U3CWWWObjectU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.Request::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mF61E77C3C3BC08270204617914C02DE0978F47F4 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.Request::.ctor(VoxelBusters.Utility.URL,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request__ctor_mA6E2964FC0FCD991FAC6F640AD8EB23FFCEA70A1 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ____URL0, bool ____isAsynchronous1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = ____URL0;
		Request_set_URL_m920D8BCEA762B078633CCF4FD4DE184A6230179C_inline(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ____isAsynchronous1;
		Request_set_IsAsynchronous_mB232A352F43F8C941D092937AB9DAAD20D5D217C_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.Request::StartRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_StartRequest_mF89E94B4E9DA278DBA7BDE80B1A89B49F31DCB1C (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request_StartRequest_mF89E94B4E9DA278DBA7BDE80B1A89B49F31DCB1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_1 = Request_get_URL_mB98724B5742A622A3CB5B2E5FC8AF7E324655F84_inline(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)(&V_0), /*hidden argument*/NULL);
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralABE3FBE099041DE5DB7393044B0D14CB39DA0940, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void VoxelBusters.Utility.Request::DidFailStartRequestWithError(System.String) */, __this, _stringLiteral7DD8E1D2BEF219138A20A499DD1CFA6B2BDA9C54);
		return;
	}

IL_0033:
	{
		bool L_4 = Request_get_IsAsynchronous_m675FFAE3DC70BF4E98BAF7EBAA06770F71FEFCF7_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_5 = ((Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_StaticFields*)il2cpp_codegen_static_fields_for(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_il2cpp_TypeInfo_var))->get_surrogateMonobehaviour_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7;
		NullCheck(L_8);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_8, 1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = L_8;
		NullCheck(L_9);
		SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891 * L_10 = GameObject_AddComponent_TisSurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891_m459F1AA7F27F81C4FA5BE5343ECD4996AE84BC5D(L_9, /*hidden argument*/GameObject_AddComponent_TisSurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891_m459F1AA7F27F81C4FA5BE5343ECD4996AE84BC5D_RuntimeMethod_var);
		((Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_StaticFields*)il2cpp_codegen_static_fields_for(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_il2cpp_TypeInfo_var))->set_surrogateMonobehaviour_3(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_9, /*hidden argument*/NULL);
	}

IL_0064:
	{
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = ((Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_StaticFields*)il2cpp_codegen_static_fields_for(Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6_il2cpp_TypeInfo_var))->get_surrogateMonobehaviour_3();
		RuntimeObject* L_12 = Request_StartAsynchronousRequest_m328890740B445B9ECADA3FF2797C08B43BF52794(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_11, L_12, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_13 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = WWW_get_isDone_m7D3800B83136885374E82BFC6ACB63BA3F6AB5DF(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void VoxelBusters.Utility.Request::OnFetchingResponse() */, __this);
		return;
	}
}
// System.Collections.IEnumerator VoxelBusters.Utility.Request::StartAsynchronousRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Request_StartAsynchronousRequest_m328890740B445B9ECADA3FF2797C08B43BF52794 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request_StartAsynchronousRequest_m328890740B445B9ECADA3FF2797C08B43BF52794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * L_0 = (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA *)il2cpp_codegen_object_new(U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA_il2cpp_TypeInfo_var);
		U3CStartAsynchronousRequestU3Ed__16__ctor_m282761AEE9C96C7C66CC51273463D8B750452D1D(L_0, 0, /*hidden argument*/NULL);
		U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void VoxelBusters.Utility.Request::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Request_Abort_mEA7046BBC778CBAE135C248E0DDCFC50D49B7957 (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_1 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = WWW_get_isDone_m7D3800B83136885374E82BFC6ACB63BA3F6AB5DF(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_3 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		WWW_Dispose_m481A801C09AEF9D4B7EE5BD680ECE80C0B1E0F66(L_3, /*hidden argument*/NULL);
	}

IL_0020:
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
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16__ctor_m282761AEE9C96C7C66CC51273463D8B750452D1D (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16_System_IDisposable_Dispose_mC754B873E6BEB804B7948F102DBA4A56A7BBF09E (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartAsynchronousRequestU3Ed__16_MoveNext_m70188FBEAB0BF9A8830AF503511F97C87CE93F9F (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * L_4 = V_1;
		NullCheck(L_4);
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_5 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = WWW_get_isDone_m7D3800B83136885374E82BFC6ACB63BA3F6AB5DF(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(4 /* System.Void VoxelBusters.Utility.Request::OnFetchingResponse() */, L_7);
		return (bool)0;
	}
}
// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAsynchronousRequestU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B1BD52ABBFE863414477AE508AFC791E96A4E16 (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_mFA6B594F5B6637E7DC8F30DACE9100B1150633A7 (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_mFA6B594F5B6637E7DC8F30DACE9100B1150633A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_Reset_mFA6B594F5B6637E7DC8F30DACE9100B1150633A7_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.Utility.Request_<StartAsynchronousRequest>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAsynchronousRequestU3Ed__16_System_Collections_IEnumerator_get_Current_m0E1492C31EC0956591455AE3D26B375107CB0041 (U3CStartAsynchronousRequestU3Ed__16_t17A056CCA930A27D0D4BD8EC90A26274895303DA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void VoxelBusters.Utility.Request_SurrogateMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateMonoBehaviour__ctor_m39E1F5C2FFBAC5F374FCD627D234F38B67075A22 (SurrogateMonoBehaviour_t0A22FC7BC5025910C2CDEA0D419BE2648F3FF891 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.String VoxelBusters.Utility.StringExtensions::GetPrintableString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_GetPrintableString_mC2FB424A82D7BF0EC922B934DD68BD4E53DC33CE (String_t* ____string0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtensions_GetPrintableString_mC2FB424A82D7BF0EC922B934DD68BD4E53DC33CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____string0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ____string0;
		return L_1;
	}

IL_0005:
	{
		return _stringLiteralEEF19C54306DAA69EDA49C0272623BDB5E2B341F;
	}
}
// System.Boolean VoxelBusters.Utility.StringExtensions::Contains(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExtensions_Contains_m812C48CA6190C72BF57EC7BB3666CFD8ABF11841 (String_t* ____string0, String_t* ____stringToCheck1, bool ____ignoreCase2, const RuntimeMethod* method)
{
	{
		bool L_0 = ____ignoreCase2;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ____string0;
		String_t* L_2 = ____stringToCheck1;
		NullCheck(L_1);
		bool L_3 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000b:
	{
		String_t* L_4 = ____string0;
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ____stringToCheck1;
		NullCheck(L_6);
		String_t* L_7 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String VoxelBusters.Utility.StringExtensions::ToBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_ToBase64_m5B73CC6D596C7067854FEAD1DCC6E250449F0A6F (String_t* ____string0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtensions_ToBase64_m5B73CC6D596C7067854FEAD1DCC6E250449F0A6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_1 = ____string0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String VoxelBusters.Utility.StringExtensions::FromBase64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_FromBase64_m795FC747E04E611B418C2D5995372063977FDB03 (String_t* ____string0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtensions_FromBase64_m795FC747E04E611B418C2D5995372063977FDB03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		String_t* L_0 = ____string0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		NullCheck(L_4);
		NullCheck(L_2);
		String_t* L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		return L_5;
	}
}
// System.String VoxelBusters.Utility.StringExtensions::StringBetween(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExtensions_StringBetween_mC036413823FA01BD766A39D4205A8A562C137CD7 (String_t* ____string0, String_t* ____startString1, String_t* ____endString2, bool ____ignoreCase3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringExtensions_StringBetween_mC036413823FA01BD766A39D4205A8A562C137CD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = ____ignoreCase3;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 5;
	}

IL_0007:
	{
		V_0 = G_B3_0;
		String_t* L_1 = ____startString1;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0014;
	}

IL_000e:
	{
		String_t* L_2 = ____startString1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		G_B6_0 = L_3;
	}

IL_0014:
	{
		V_1 = G_B6_0;
		String_t* L_4 = ____string0;
		String_t* L_5 = ____startString1;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7 = String_IndexOf_mF9EA8429E9D1B7475D5A297E67435CF34E965F28(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8 = ____string0;
		String_t* L_9 = ____endString2;
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		NullCheck(L_8);
		int32_t L_13 = String_IndexOf_m2B8FDE7216A37799B7B3A093EDDF1A820AAF4D01(L_8, L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_15 = V_3;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_003b;
		}
	}

IL_0032:
	{
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_004f;
	}

IL_003b:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18))));
		String_t* L_19 = ____string0;
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		int32_t L_22 = V_5;
		NullCheck(L_19);
		String_t* L_23 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), L_22, /*hidden argument*/NULL);
		V_4 = L_23;
	}

IL_004f:
	{
		String_t* L_24 = V_4;
		return L_24;
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
// System.String VoxelBusters.Utility.TextureExtensions::ToString(UnityEngine.Texture2D,VoxelBusters.Utility.TextureExtensions_EncodeTo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureExtensions_ToString_m66D6CB06877C2488440A89FAD155945B40AC3FAD (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____img0, int32_t ____encodeTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_ToString_m66D6CB06877C2488440A89FAD155945B40AC3FAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;
	{
		int32_t L_0 = ____encodeTo1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ____img0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ImageConversion_EncodeToPNG_m8D67A36A7D81F436CDA108CC5293E15A9CFD5617(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000b:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ____img0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ImageConversion_EncodeToJPG_mDE6C67AACCC7BAD006D0A852093F881D11F9C8DF(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_5 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String VoxelBusters.Utility.TextureExtensions::Serialise(UnityEngine.Texture2D,VoxelBusters.Utility.TextureExtensions_EncodeTo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureExtensions_Serialise_m606FE39C8AE96AA57AB1FF6A87789B42E742C693 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____img0, int32_t ____encodeTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_Serialise_m606FE39C8AE96AA57AB1FF6A87789B42E742C693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = L_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ____img0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_1, _stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3, L_5);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = L_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = ____img0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_6, _stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D, L_10);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = L_6;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_12 = ____img0;
		int32_t L_13 = ____encodeTo1;
		String_t* L_14 = TextureExtensions_ToString_m66D6CB06877C2488440A89FAD155945B40AC3FAD(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_11, _stringLiteral8AB5CBE29FF8A179C2E5A288D14B2074824BF0BB, L_14);
		String_t* L_15 = JSONUtility_ToJSON_mB719806E83CBE9D8B8600A92694543075D05839D(L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::Deserialise(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_Deserialise_mAEDCEE9FD0741DC42CA856458EF5986AA9B20317 (String_t* ____strImg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_Deserialise_mAEDCEE9FD0741DC42CA856458EF5986AA9B20317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ____strImg0;
		RuntimeObject * L_1 = JSONUtility_FromJSON_m0A95C44DF377A58189AE195E0FFC0C1148A8B35B(L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)IsInstClass((RuntimeObject*)L_1, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_3, _stringLiteral70BEC8A9BF5ECD2E6B37316E112B3F4C615AD4D3);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_5, _stringLiteral73E7E545C519A38F0AEC9E72DF51F8BA169DB34D);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_6, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject * L_8 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_7, _stringLiteral8AB5CBE29FF8A179C2E5A288D14B2074824BF0BB);
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = TextureExtensions_CreateTexture_mA5CC9A5874EBF765B4A42433734E892545FB9244(((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)), L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0049:
	{
		return (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL;
	}
}
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::CreateTexture(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_CreateTexture_mA5CC9A5874EBF765B4A42433734E892545FB9244 (String_t* ____texDataB640, int32_t ____width1, int32_t ____height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_CreateTexture_mA5CC9A5874EBF765B4A42433734E892545FB9244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		String_t* L_0 = ____texDataB640;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ____width1;
		int32_t L_3 = ____height2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_4, L_2, L_3, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ImageConversion_LoadImage_m94295492E96C38984406A23CC2A3931758ECE86B(L_5, L_6, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.IEnumerator VoxelBusters.Utility.TextureExtensions::TakeScreenshot(System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureExtensions_TakeScreenshot_m1A3C5B6C0A979A0F7E033E39C0BFDC1E93EF064D (Action_1_tFB39B350582053B206393ED428938B171A469EE0 * ____onCompletionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_TakeScreenshot_m1A3C5B6C0A979A0F7E033E39C0BFDC1E93EF064D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * L_0 = (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B *)il2cpp_codegen_object_new(U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B_il2cpp_TypeInfo_var);
		U3CTakeScreenshotU3Ed__5__ctor_m1A49B838FBBE92B6730735DD9AD357654C6E510D(L_0, 0, /*hidden argument*/NULL);
		U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * L_1 = L_0;
		Action_1_tFB39B350582053B206393ED428938B171A469EE0 * L_2 = ____onCompletionHandler0;
		NullCheck(L_1);
		L_1->set__onCompletionHandler_2(L_2);
		return L_1;
	}
}
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::Rotate(UnityEngine.Texture2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_Rotate_m2EC17FFC1917127D1B792BAF71C71A249A06CF50 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputTex0, float ____angle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_Rotate_m2EC17FFC1917127D1B792BAF71C71A249A06CF50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_10 = NULL;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_11 = NULL;
	int32_t V_12 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ____inputTex0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = ____inputTex0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		float L_4 = ____angle1;
		V_4 = (fmodf(((float)il2cpp_codegen_subtract((float)L_4, (float)(45.0f))), (360.0f)));
		float L_5 = V_4;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = V_4;
		V_4 = ((float)il2cpp_codegen_add((float)L_6, (float)(360.0f)));
	}

IL_0030:
	{
		float L_7 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)((float)((float)L_7/(float)(90.0f)))))), (int32_t)1));
		int32_t L_8 = V_5;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = V_5;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_004d;
		}
	}

IL_0047:
	{
		int32_t L_10 = V_1;
		V_2 = L_10;
		int32_t L_11 = V_0;
		V_3 = L_11;
		goto IL_0051;
	}

IL_004d:
	{
		int32_t L_12 = V_0;
		V_2 = L_12;
		int32_t L_13 = V_1;
		V_3 = L_13;
	}

IL_0051:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_6), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_14))), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_15))), (float)(0.5f))), /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_18), ((float)il2cpp_codegen_multiply((float)(((float)((float)((-L_16))))), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)(((float)((float)((-L_17))))), (float)(0.5f))), /*hidden argument*/NULL);
		float L_19 = ____angle1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA(L_18, L_19, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_20, L_21, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		float L_24 = ____angle1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA(L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_27 = ____angle1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA(L_26, L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		V_9 = L_22;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_29 = ____inputTex0;
		NullCheck(L_29);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_30 = Texture2D_GetPixels32_mD84F05C717774887B5EF65ADEE82045A3E2FBD75(L_29, 0, /*hidden argument*/NULL);
		V_10 = L_30;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_31 = V_10;
		NullCheck(L_31);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_32 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))));
		V_11 = L_32;
		V_12 = 0;
		goto IL_0114;
	}

IL_00c1:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = V_9;
		V_13 = L_33;
		int32_t L_34 = V_12;
		int32_t L_35 = V_2;
		V_14 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)L_35));
		V_15 = 0;
		goto IL_00fe;
	}

IL_00d0:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_36 = V_11;
		int32_t L_37 = V_14;
		int32_t L_38 = L_37;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = ____inputTex0;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_40 = V_10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = V_13;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_42 = TextureExtensions_GetPixel_mBE8648583A524441F8991623613FBF2650B48248(L_39, L_40, L_41, /*hidden argument*/NULL);
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_43 = Color32_op_Implicit_m52B034473369A651C8952BD916A2AB193E0E5B30(L_42, /*hidden argument*/NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 )L_43);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = V_13;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_46 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_44, L_45, /*hidden argument*/NULL);
		V_13 = L_46;
		int32_t L_47 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00fe:
	{
		int32_t L_48 = V_15;
		int32_t L_49 = V_2;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00d0;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = V_9;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_51 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_50, L_51, /*hidden argument*/NULL);
		V_9 = L_52;
		int32_t L_53 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0114:
	{
		int32_t L_54 = V_12;
		int32_t L_55 = V_3;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_58 = ____inputTex0;
		NullCheck(L_58);
		int32_t L_59 = Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F(L_58, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_60 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_60, L_56, L_57, L_59, (bool)0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_61 = L_60;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_62 = V_11;
		NullCheck(L_61);
		Texture2D_SetPixels32_m22195EEABA78058324C83EBF327A7E5EFBEE809F(L_61, L_62, 0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_63 = L_61;
		NullCheck(L_63);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_63, /*hidden argument*/NULL);
		return L_63;
	}
}
// UnityEngine.Color VoxelBusters.Utility.TextureExtensions::GetPixel(UnityEngine.Texture2D,UnityEngine.Color32[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  TextureExtensions_GetPixel_mBE8648583A524441F8991623613FBF2650B48248 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputTex0, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____pixels1, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____coordinate2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ____coordinate2;
		float L_1 = L_0.get_x_0();
		V_0 = (((int32_t)((int32_t)L_1)));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ____coordinate2;
		float L_3 = L_2.get_y_1();
		V_1 = (((int32_t)((int32_t)L_3)));
		int32_t L_4 = V_0;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_5 = ____inputTex0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_001d:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_get_clear_m419239BDAEB3D3C4B4291BF2C6EF09A7D7D81360(/*hidden argument*/NULL);
		return L_8;
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = ____inputTex0;
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		if ((((int32_t)L_9) >= ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = Color_get_clear_m419239BDAEB3D3C4B4291BF2C6EF09A7D7D81360(/*hidden argument*/NULL);
		return L_13;
	}

IL_0036:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_14 = ____pixels1;
		int32_t L_15 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = ____inputTex0;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		int32_t L_18 = V_0;
		NullCheck(L_14);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_17)), (int32_t)L_18));
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_20 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_21 = Color32_op_Implicit_mA89CAD76E78975F51DF7374A67D18A5F6EF8DA61(L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::MirrorTexture(UnityEngine.Texture2D,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_MirrorTexture_m15F6B6294A26C0519036FFBBFA2434FAD50699C2 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputTex0, bool ____mirrorHorizontally1, bool ____mirrorVertically2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_MirrorTexture_m15F6B6294A26C0519036FFBBFA2434FAD50699C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_4 = NULL;
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* V_5 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ____inputTex0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = ____inputTex0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = ____inputTex0;
		NullCheck(L_6);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_7 = Texture2D_GetPixels32_mD84F05C717774887B5EF65ADEE82045A3E2FBD75(L_6, 0, /*hidden argument*/NULL);
		V_4 = L_7;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_8 = V_4;
		NullCheck(L_8);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_9 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))));
		V_5 = L_9;
		V_7 = 0;
		goto IL_0081;
	}

IL_002f:
	{
		int32_t L_10 = V_7;
		int32_t L_11 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11));
		bool L_12 = ____mirrorVertically2;
		if (L_12)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_13 = V_7;
		G_B4_0 = L_13;
		goto IL_0040;
	}

IL_003c:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_7;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
	}

IL_0040:
	{
		int32_t L_16 = V_0;
		V_9 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B4_0, (int32_t)L_16));
		V_10 = 0;
		goto IL_0076;
	}

IL_0049:
	{
		bool L_17 = ____mirrorHorizontally1;
		if (L_17)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_18 = V_10;
		G_B8_0 = L_18;
		goto IL_0054;
	}

IL_0050:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_10;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_0054:
	{
		V_11 = G_B8_0;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_21 = V_5;
		int32_t L_22 = V_9;
		int32_t L_23 = V_11;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_24 = V_4;
		int32_t L_25 = V_8;
		int32_t L_26 = L_25;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))), (Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 )L_28);
		int32_t L_29 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0076:
	{
		int32_t L_30 = V_10;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0081:
	{
		int32_t L_33 = V_7;
		int32_t L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36 = V_2;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_37 = ____inputTex0;
		NullCheck(L_37);
		int32_t L_38 = Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F(L_37, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_39, L_35, L_36, L_38, (bool)0, /*hidden argument*/NULL);
		V_6 = L_39;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_40 = V_6;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_41 = V_5;
		NullCheck(L_40);
		Texture2D_SetPixels32_m22195EEABA78058324C83EBF327A7E5EFBEE809F(L_40, L_41, 0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_42 = V_6;
		NullCheck(L_42);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral68784C3217DF1AD9FECBFDE5454023246BF3B5E2);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral68784C3217DF1AD9FECBFDE5454023246BF3B5E2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_45 = L_44;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_46 = V_6;
		NullCheck(L_46);
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_46);
		int32_t L_48 = L_47;
		RuntimeObject * L_49 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_49);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_49);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = L_45;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteral055A6794CB419700D51BA15C06AB64D6C37AA4C2);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral055A6794CB419700D51BA15C06AB64D6C37AA4C2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = L_50;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_52 = V_6;
		NullCheck(L_52);
		int32_t L_53 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_52);
		int32_t L_54 = L_53;
		RuntimeObject * L_55 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_55);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_55);
		String_t* L_56 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_56, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_57 = V_6;
		return L_57;
	}
}
// UnityEngine.Texture2D VoxelBusters.Utility.TextureExtensions::Scale(UnityEngine.Texture2D,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureExtensions_Scale_mC04EB0E8A8EAE020DEFC5AA0120665929ADA3ED8 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputTex0, float ____scaleFactor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextureExtensions_Scale_mC04EB0E8A8EAE020DEFC5AA0120665929ADA3ED8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	{
		float L_0 = ____scaleFactor1;
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = ____inputTex0;
		return L_1;
	}

IL_000a:
	{
		float L_2 = ____scaleFactor1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = ____inputTex0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		float L_6 = ____scaleFactor1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_7 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)(((float)((float)L_5))), (float)L_6)), /*hidden argument*/NULL);
		V_0 = L_7;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = ____inputTex0;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		float L_10 = ____scaleFactor1;
		int32_t L_11 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)(((float)((float)L_9))), (float)L_10)), /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_14 = (ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399*)SZArrayNew(ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13)));
		V_2 = L_14;
		V_3 = 0;
		goto IL_008c;
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		V_4 = ((float)((float)(((float)((float)L_15)))/(float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_16))), (float)(1.0f)))));
		int32_t L_17 = V_3;
		int32_t L_18 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18));
		V_6 = 0;
		goto IL_0083;
	}

IL_005a:
	{
		int32_t L_19 = V_6;
		int32_t L_20 = V_0;
		V_7 = ((float)((float)(((float)((float)L_19)))/(float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_20))), (float)(1.0f)))));
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_21 = V_2;
		int32_t L_22 = V_5;
		int32_t L_23 = V_6;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_24 = ____inputTex0;
		float L_25 = V_7;
		float L_26 = V_4;
		NullCheck(L_24);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_27 = Texture2D_GetPixelBilinear_m3E0E9A22A0989E99A7295BC6FE6999728F290A78(L_24, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))), (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_27);
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_29 = V_6;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_36 = ____inputTex0;
		NullCheck(L_36);
		int32_t L_37 = Texture2D_get_format_mF0EE5CEB9F84280D4E722B71546BBBA577101E9F(L_36, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_38 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_38, L_34, L_35, L_37, (bool)0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_39 = L_38;
		ColorU5BU5D_t166D390E0E6F24360F990D1F81881A72B73CA399* L_40 = V_2;
		NullCheck(L_39);
		Texture2D_SetPixels_mE261D2D072DB4CF447A259731E51291267EEA3AC(L_39, L_40, 0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_41 = L_39;
		NullCheck(L_41);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_41, /*hidden argument*/NULL);
		return L_41;
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
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5__ctor_m1A49B838FBBE92B6730735DD9AD357654C6E510D (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5_System_IDisposable_Dispose_m3869FB19A51984372FF48558DF1F011D9DAD4C23 (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeScreenshotU3Ed__5_MoveNext_m97302DFDDC193B6624477FFABCBD31369267EBB1 (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeScreenshotU3Ed__5_MoveNext_m97302DFDDC193B6624477FFABCBD31369267EBB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_3 = (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA *)il2cpp_codegen_object_new(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002b:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_4 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m0C86A87871AA8075791EF98499D34DA95ACB0E35(L_6, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_7 = V_1;
		int32_t L_8 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_9 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_10), (0.0f), (0.0f), (((float)((float)L_8))), (((float)((float)L_9))), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m1ED1C11E41D0ACC8CFCABBD25946CF0BD16D4F61(L_7, L_10, 0, 0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = V_1;
		NullCheck(L_11);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_11, /*hidden argument*/NULL);
		Action_1_tFB39B350582053B206393ED428938B171A469EE0 * L_12 = __this->get__onCompletionHandler_2();
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		Action_1_tFB39B350582053B206393ED428938B171A469EE0 * L_13 = __this->get__onCompletionHandler_2();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_14 = V_1;
		NullCheck(L_13);
		Action_1_Invoke_m6048C88F88DE3E8168823827588E258EB402D299(L_13, L_14, /*hidden argument*/Action_1_Invoke_m6048C88F88DE3E8168823827588E258EB402D299_RuntimeMethod_var);
	}

IL_007f:
	{
		return (bool)0;
	}
}
// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8281BBFE1064827A88583B6E961F8EEDB9498DB0 (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m3FF98CE31E6130C3F186132BFE5DD711C10F19D0 (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m3FF98CE31E6130C3F186132BFE5DD711C10F19D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_Reset_m3FF98CE31E6130C3F186132BFE5DD711C10F19D0_RuntimeMethod_var);
	}
}
// System.Object VoxelBusters.Utility.TextureExtensions_<TakeScreenshot>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeScreenshotU3Ed__5_System_Collections_IEnumerator_get_Current_m6FBB72891E03F2BEE9DDD0799B2E72D519AA9338 (U3CTakeScreenshotU3Ed__5_tF64D1E03FA67F20FBF5E90E9481A8B1F8382BC3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void VoxelBusters.Utility.TransformExtensions::AddChild(UnityEngine.Transform,UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_AddChild_mD612BB833AB727872F3E91D84BAC5D761C928D7D (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____parentTransform0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____childGameObject1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localPosition2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____localRotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localScale4, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ____childGameObject1;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ____parentTransform0;
		NullCheck(L_2);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_2, L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ____localPosition2;
		NullCheck(L_4);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_4, L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = L_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = ____localRotation3;
		NullCheck(L_6);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ____localScale4;
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.TransformExtensions::AddChild(UnityEngine.RectTransform,UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_AddChild_m917781B9DF6DE212529740625A2AB564B82D6427 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ____parentTransform0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____childGameObject1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localPosition2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____localRotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localScale4, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ____childGameObject1;
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = L_1;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_3 = ____parentTransform0;
		NullCheck(L_2);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ____localPosition2;
		NullCheck(L_4);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_4, L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = L_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = ____localRotation3;
		NullCheck(L_6);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ____localScale4;
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.String VoxelBusters.Utility.TransformExtensions::GetPath(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformExtensions_GetPath_mE3F5E4921201F6C0D0E1B8C000891D1D5000DD5C (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ____transform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_GetPath_mE3F5E4921201F6C0D0E1B8C000891D1D5000DD5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ____transform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ____transform0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ____transform0;
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002c:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		String_t* L_10 = TransformExtensions_GetPath_mE3F5E4921201F6C0D0E1B8C000891D1D5000DD5C(L_9, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = ____transform0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_10, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_12, /*hidden argument*/NULL);
		return L_13;
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
// System.Void VoxelBusters.Utility.TypeExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeExtensions__cctor_m5DE1F24602E71EFECE206D07E624018B2E548699 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions__cctor_m5DE1F24602E71EFECE206D07E624018B2E548699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->set_typeCodesToType_0(L_0);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_1 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_4 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (DBNull_t7400E04939C2C29699B389B106997892BF53A8E5_0_0_0_var) };
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_6);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_7 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_9);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_10 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (Type_t *)L_12);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_13 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (Type_t *)L_15);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_16 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (Type_t *)L_18);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_19 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(7), (Type_t *)L_21);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_22 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_23 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		Type_t * L_24 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(8), (Type_t *)L_24);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_25 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_26 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		Type_t * L_27 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Type_t *)L_27);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_28 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_29 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_30 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Type_t *)L_30);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_31 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_32 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		Type_t * L_33 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Type_t *)L_33);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_34 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_35 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		Type_t * L_36 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Type_t *)L_36);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_37 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_38 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		Type_t * L_39 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Type_t *)L_39);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_40 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Type_t *)L_42);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_43 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_44 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		Type_t * L_45 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Type_t *)L_45);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_46 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_47 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		Type_t * L_48 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Type_t *)L_48);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_49 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_50 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_51 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_51);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Type_t *)L_51);
		return;
	}
}
// System.Object VoxelBusters.Utility.TypeExtensions::DefaultValue(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeExtensions_DefaultValue_m36E6D2DCD1E316CCCC1C995E4DB35A88AC8A6969 (Type_t * ____type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ____type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_mDDCCBAE9B59A483CBC3E5C02E3D68CEBEB2E41A8(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ____type0;
		RuntimeObject * L_3 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		return NULL;
	}
}
// System.Type VoxelBusters.Utility.TypeExtensions::GetTypeFromTypeCode(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeExtensions_GetTypeFromTypeCode_m5AF0739D610676693CAE6C281C48175455D04A49 (int32_t ____typeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_GetTypeFromTypeCode_m5AF0739D610676693CAE6C281C48175455D04A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_0 = ((TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_StaticFields*)il2cpp_codegen_static_fields_for(TypeExtensions_t61A88B80AC59E2240DB8BD3CD44BC43D772284C7_il2cpp_TypeInfo_var))->get_typeCodesToType_0();
		int32_t L_1 = ____typeCode0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Type_t * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
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
// Conversion methods for marshalling of: VoxelBusters.Utility.URL
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_pinvoke(const URL_tB5292167633E41DA8A3D1E5D800A492F59C31355& unmarshaled, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CURLStringU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CURLStringU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_pinvoke_back(const URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_pinvoke& marshaled, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355& unmarshaled)
{
	unmarshaled.set_U3CURLStringU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CURLStringU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: VoxelBusters.Utility.URL
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_pinvoke_cleanup(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CURLStringU3Ek__BackingField_0);
	marshaled.___U3CURLStringU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: VoxelBusters.Utility.URL
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_com(const URL_tB5292167633E41DA8A3D1E5D800A492F59C31355& unmarshaled, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_com& marshaled)
{
	marshaled.___U3CURLStringU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CURLStringU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_com_back(const URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_com& marshaled, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355& unmarshaled)
{
	unmarshaled.set_U3CURLStringU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CURLStringU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: VoxelBusters.Utility.URL
IL2CPP_EXTERN_C void URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshal_com_cleanup(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CURLStringU3Ek__BackingField_0);
	marshaled.___U3CURLStringU3Ek__BackingField_0 = NULL;
}
// System.String VoxelBusters.Utility.URL::get_URLString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CURLStringU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * _thisAdjusted = reinterpret_cast<URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *>(__this + 1);
	return URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline(_thisAdjusted, method);
}
// System.Void VoxelBusters.Utility.URL::set_URLString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CURLStringU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * _thisAdjusted = reinterpret_cast<URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *>(__this + 1);
	URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline(_thisAdjusted, ___value0, method);
}
// System.Void VoxelBusters.Utility.URL::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, String_t* ____URLString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 ));
		String_t* L_0 = ____URLString0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_0, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ____URLString0;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_2, /*hidden argument*/NULL);
		URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		String_t* L_4 = ____URLString0;
		URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05_AdjustorThunk (RuntimeObject * __this, String_t* ____URLString0, const RuntimeMethod* method)
{
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * _thisAdjusted = reinterpret_cast<URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *>(__this + 1);
	URL__ctor_mF30A03982217E5EFA05D7188FE68EAFBA0082D05(_thisAdjusted, ____URLString0, method);
}
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::FileURLWithPath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_FileURLWithPath_mD1119B1A44541845D8E08B04FB5A73D63446C45A (String_t* ____rootPath0, String_t* ____relativePath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_FileURLWithPath_mD1119B1A44541845D8E08B04FB5A73D63446C45A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____rootPath0;
		String_t* L_1 = ____relativePath1;
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_0, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_1, /*hidden argument*/NULL);
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_3 = URL_FileURLWithPath_m9DD4765CAB5EA9C0B56430EBFD42F640250F3410(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::FileURLWithPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_FileURLWithPath_m9DD4765CAB5EA9C0B56430EBFD42F640250F3410 (String_t* ____filePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_FileURLWithPath_m9DD4765CAB5EA9C0B56430EBFD42F640250F3410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ____filePath0;
		V_0 = L_0;
		String_t* L_1 = ____filePath0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ____filePath0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ____filePath0;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 ));
		String_t* L_6 = V_0;
		URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)(&V_1), L_6, /*hidden argument*/NULL);
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_7 = V_1;
		return L_7;
	}
}
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::URLWithString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_URLWithString_m2E48270E04791B0CFC8CD9AC1757C5172C9794FA (String_t* ____rootURLString0, String_t* ____relativePath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_URLWithString_m2E48270E04791B0CFC8CD9AC1757C5172C9794FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____rootURLString0;
		String_t* L_1 = ____relativePath1;
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_0, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, L_1, /*hidden argument*/NULL);
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_3 = URL_URLWithString_m46571724BB6FA1B10655880BF515DECFEF53C2D5(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// VoxelBusters.Utility.URL VoxelBusters.Utility.URL::URLWithString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  URL_URLWithString_m46571724BB6FA1B10655880BF515DECFEF53C2D5 (String_t* ____URLString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_URLWithString_m46571724BB6FA1B10655880BF515DECFEF53C2D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ____URLString0;
		V_0 = L_0;
		String_t* L_1 = ____URLString0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ____URLString0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_mA9A0117D68338238E51E5928CDA8EB3DC9DA497B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ____URLString0;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 ));
		String_t* L_6 = V_0;
		URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)(&V_1), L_6, /*hidden argument*/NULL);
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_7 = V_1;
		return L_7;
	}
}
// System.Boolean VoxelBusters.Utility.URL::isFileReferenceURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_0, _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * _thisAdjusted = reinterpret_cast<URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *>(__this + 1);
	return URL_isFileReferenceURL_m46CC0D2B37EACD7326973C7E3D53AC7164B6DA31(_thisAdjusted, method);
}
// System.String VoxelBusters.Utility.URL::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516 (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline((URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral132C39D757E56240228996917C990A336774026B, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * _thisAdjusted = reinterpret_cast<URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 *>(__this + 1);
	return URL_ToString_m5A1855083F3615102DE560C14D9045E3800D8516(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_Start_m7E9443533E748E1F072A9DA10CD2F65D0C48C88B (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMainMenu_Start_m7E9443533E748E1F072A9DA10CD2F65D0C48C88B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_0 = Component_GetComponentsInChildren_TisGUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328_mC1EA90E037AD87DC31EFC27448457315FD22EF24(__this, /*hidden argument*/Component_GetComponentsInChildren_TisGUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328_mC1EA90E037AD87DC31EFC27448457315FD22EF24_RuntimeMethod_var);
		__this->set_m_subMenuList_11(L_0);
		__this->set_m_showingMainMenu_13((bool)1);
		V_0 = 0;
		goto IL_0029;
	}

IL_0017:
	{
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_1 = __this->get_m_subMenuList_11();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GUISubMenu_SetActive_m8EF7CAA281E3D6667181CBCBBD6B57B84E504C42(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_6 = V_0;
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_7 = __this->get_m_subMenuList_11();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_Update_m8F82913184927405951650D50EC9D39FCADD2921 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_showingMainMenu_13();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_1 = __this->get_m_activeSubMenu_12();
		NullCheck(L_1);
		bool L_2 = GUISubMenu_IsActive_mE707F67C65CE69A9A85A457351D9E922D17DE117(L_1, /*hidden argument*/NULL);
		__this->set_m_showingMainMenu_13((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0));
	}

IL_001c:
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_OnGUI_mF614EB812D322A82BD80C56CF65AB56FF98C5040 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_showingMainMenu_13();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(8 /* System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::DrawMainMenu() */, __this);
	}

IL_000e:
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::DrawMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_DrawMainMenu_m603C2BB8157CABFFDC08919384CEF1FE40B744C9 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMainMenu_DrawMainMenu_m603C2BB8157CABFFDC08919384CEF1FE40B744C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		GUIMenuBase_DrawTitle_m6AEBD515711FBEE555E1A280306C1219B745C9E6(__this, _stringLiteral758DA7453531E2E02D91F2C47D4B1F99518C5EAB, /*hidden argument*/NULL);
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_0 = __this->get_m_subMenuList_11();
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		G_B1_0 = ((int32_t)((int32_t)L_1/(int32_t)5));
		if (!((int32_t)((int32_t)L_2%(int32_t)5)))
		{
			G_B2_0 = ((int32_t)((int32_t)L_1/(int32_t)5));
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		int32_t L_3 = V_1;
		GUIMenuBase_BeginButtonLayout_mD265A1CD75265491DD7A95C82593630CEF33C0C2(__this, (((float)((float)L_3))), (0.8f), /*hidden argument*/NULL);
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_4 = __this->get_m_subMenuList_11();
		GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9(__this, L_4, 0, 5, /*hidden argument*/NULL);
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_5 = __this->get_m_subMenuList_11();
		int32_t L_6 = V_0;
		GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9(__this, L_5, 5, L_6, /*hidden argument*/NULL);
		GUIMenuBase_EndButtonLayout_mA6673C632C3E57212142AB94EE3E3BEB21546A35(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::DrawSubMenuColumn(VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* ____subMenuList0, int32_t ____startIndex1, int32_t ____endIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMainMenu_DrawSubMenuColumn_m5C3D711602ECB63091E8661958434A02A2C7E8E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * V_2 = NULL;
	{
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_0 = ____subMenuList0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_1 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var);
		GUILayout_BeginVertical_m45C3FA429E4195BE547B37B078FF395DA9CF8288(L_1, /*hidden argument*/NULL);
		int32_t L_2 = ____startIndex1;
		V_1 = L_2;
		goto IL_0042;
	}

IL_0012:
	{
		GUISubMenuU5BU5D_t4902559B90B40E32B89EF9C91780148BC13431C1* L_3 = ____subMenuList0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8 = GUISubMenu_get_SubMenuName_m2D32E0D18BEB2A9F9F009FBC08A587B7680A06D8(L_7, /*hidden argument*/NULL);
		bool L_9 = GUIMenuBase_DrawButton_m4AB5EBB121AE6A6306D497F34440B0FB926226BE(__this, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_10 = V_2;
		__this->set_m_activeSubMenu_12(L_10);
		GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * L_11 = __this->get_m_activeSubMenu_12();
		NullCheck(L_11);
		GUISubMenu_SetActive_m8EF7CAA281E3D6667181CBCBBD6B57B84E504C42(L_11, (bool)1, /*hidden argument*/NULL);
		__this->set_m_showingMainMenu_13((bool)0);
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ____endIndex2;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0012;
		}
	}

IL_004a:
	{
		GUILayout_EndVertical_m7AAD929902547940A6076D23277B7255B96584FE(/*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMainMenu__ctor_m62D054299FDDA2959579810DC067A337032B0858 (GUIMainMenu_tB0483669D8B98683CF62833B10A61AB0D0989F4B * __this, const RuntimeMethod* method)
{
	{
		GUIMenuBase__ctor_mFB4DE49165DDF23CF56650064B855CC79A361275(__this, /*hidden argument*/NULL);
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
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_OnEnable_mF24AA1BB7BEA6D8A3FF7BDACE05C42EA0CED2BAE (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_OnDisable_m128C315DD333121D7037EFCDBAEFDA2900ACE3DF (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_OnGUI_mAE6FC4D5858BE651A529BB24441EF192407A5022 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_DrawTitle_m6AEBD515711FBEE555E1A280306C1219B745C9E6 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ____title0;
		GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9(__this, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawTitleWithBackButton(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____title0, String_t* ____button1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_1 = NULL;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_2 = NULL;
	{
		V_0 = (bool)0;
		String_t* L_0 = ____button1;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_2 = GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866(/*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_3 = GUISkin_get_button_m015FA6A0418D94F03B5F12131DED65CCFDCA8F7A(L_2, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_4 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_5 = V_1;
		NullCheck(L_5);
		GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF(L_5, 4, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_6), (10.0f), (5.0f), (40.0f), (40.0f), /*hidden argument*/NULL);
		String_t* L_7 = ____button1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_8 = V_1;
		bool L_9 = GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B(L_6, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0045:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10 = __this->get_m_titleLayoutNormalisedRect_4();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_11 = GUIMenuBase_GetLayoutRect_m6E34541E77B453A006F97F67E9B1CD8F63524D8E(__this, L_10, /*hidden argument*/NULL);
		GUILayout_BeginArea_mE329140CF26780AF025A41979D054854DD7587B8(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_12 = GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866(/*hidden argument*/NULL);
		NullCheck(L_12);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_13 = GUISkin_get_label_mC5C9D4CD377D7F5BB970B01E665EE077565AFF72(L_12, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_14 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_14, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_15 = V_2;
		NullCheck(L_15);
		GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF(L_15, 1, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_16 = V_2;
		NullCheck(L_16);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_16, ((int32_t)20), /*hidden argument*/NULL);
		GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E((10.0f), /*hidden argument*/NULL);
		String_t* L_17 = ____title0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_18 = V_2;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_19 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var);
		GUILayout_Label_mC865CE06BCFD7999DA8720A65827034DC481D550(L_17, L_18, L_19, /*hidden argument*/NULL);
		GUILayout_EndArea_mCBC21D52BCF9CAF29EEFC0A9F986BECE2F1CA754(/*hidden argument*/NULL);
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::BeginButtonLayout(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_BeginButtonLayout_mD265A1CD75265491DD7A95C82593630CEF33C0C2 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, float ____columnCount0, float ____normalisedHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMenuBase_BeginButtonLayout_mD265A1CD75265491DD7A95C82593630CEF33C0C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_0 = __this->get_address_of_m_buttonLayoutNormalisedRect_5();
		float L_1 = ____normalisedHeight1;
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_0, L_1, /*hidden argument*/NULL);
		float L_2 = ____columnCount0;
		__this->set_m_buttonColumnCount_7(L_2);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = __this->get_m_buttonLayoutNormalisedRect_5();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_4 = GUIMenuBase_GetLayoutRect_m6E34541E77B453A006F97F67E9B1CD8F63524D8E(__this, L_3, /*hidden argument*/NULL);
		GUILayout_BeginArea_mE329140CF26780AF025A41979D054854DD7587B8(L_4, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_5 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m690713D70FD850E74B529E8929492AC80E673902(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::EndButtonLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_EndButtonLayout_mA6673C632C3E57212142AB94EE3E3BEB21546A35 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method)
{
	{
		GUILayout_EndHorizontal_m1DE9883227F98E1DA9309F1AF1370F1158A658C6(/*hidden argument*/NULL);
		GUILayout_EndArea_mCBC21D52BCF9CAF29EEFC0A9F986BECE2F1CA754(/*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUIMenuBase_DrawButton_m4AB5EBB121AE6A6306D497F34440B0FB926226BE (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____buttonName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMenuBase_DrawButton_m4AB5EBB121AE6A6306D497F34440B0FB926226BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ____buttonName0;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_1 = (GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)(GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B*)SZArrayNew(GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B_il2cpp_TypeInfo_var, (uint32_t)2);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_2 = L_1;
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_3 = GUILayout_MinHeight_m1F930C27879C11B9DD29540F7572420601C6582A((40.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)L_3);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_4 = L_2;
		int32_t L_5 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_6 = __this->get_address_of_m_buttonLayoutNormalisedRect_5();
		float L_7 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_m_buttonColumnCount_7();
		GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * L_9 = GUILayout_MaxWidth_m39E7ADD7E23B56F2246BFA9A659D18D35B9CA4ED(((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_5))), (float)L_7))/(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_9);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 *)L_9);
		bool L_10 = GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918(L_0, L_4, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)1;
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::DrawResultLayout(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase_DrawResultLayout_m0E4893E8A31C6CEA5F6C8D5E3CA9DC0D3650CC24 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, String_t* ____result0, float ____normalisedHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUIMenuBase_DrawResultLayout_m0E4893E8A31C6CEA5F6C8D5E3CA9DC0D3650CC24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_0 = __this->get_address_of_m_resultLayoutNormalisedRect_6();
		float L_1 = ____normalisedHeight1;
		Rect_set_height_mF4CB5A97D4706696F1C9EA31A5D8C466E48050D6((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_0, L_1, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE * L_2 = __this->get_address_of_m_resultLayoutNormalisedRect_6();
		float L_3 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)L_2, /*hidden argument*/NULL);
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUISkin_tE22941292F37A41BE0EDF70FC3A9CD9EB02ADDB7 * L_4 = GUI_get_skin_mF6804BE33CFD74FF0665C1185AC7B5C1687AE866(/*hidden argument*/NULL);
		NullCheck(L_4);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_5 = GUISkin_get_textArea_m865E5C1D39519731718B66C9C993DFDEE0299C92(L_4, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_6 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_7 = __this->get_m_resultLayoutNormalisedRect_6();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_8 = GUIMenuBase_GetLayoutRect_m6E34541E77B453A006F97F67E9B1CD8F63524D8E(__this, L_7, /*hidden argument*/NULL);
		String_t* L_9 = ____result0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_10 = V_0;
		GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6(L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::GetLayoutRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUIMenuBase_GetLayoutRect_m6E34541E77B453A006F97F67E9B1CD8F63524D8E (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ____normalisedRect0, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), (((float)((float)L_0))), (((float)((float)L_1))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = V_0;
		float L_3 = L_2.get_x_0();
		float L_4 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&____normalisedRect0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		float L_6 = L_5.get_y_1();
		float L_7 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&____normalisedRect0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		float L_10 = Rect_get_xMax_mA16D7C3C2F30F8608719073ED79028C11CE90983((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&____normalisedRect0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_0;
		float L_12 = L_11.get_y_1();
		float L_13 = Rect_get_yMax_m8AA5E92C322AF3FF571330F00579DA864F33341B((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&____normalisedRect0), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_14), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUIMenuBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIMenuBase__ctor_mFB4DE49165DDF23CF56650064B855CC79A361275 (GUIMenuBase_t1321A2D1B1E1BCAA4644B0FB20B506C4D6A1F290 * __this, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_0), (0.05f), (0.0f), (0.9f), (0.2f), /*hidden argument*/NULL);
		__this->set_m_titleLayoutNormalisedRect_4(L_0);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_1), (0.05f), (0.2f), (0.9f), (0.8f), /*hidden argument*/NULL);
		__this->set_m_buttonLayoutNormalisedRect_5(L_1);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_2), (0.0f), (0.8f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_m_resultLayoutNormalisedRect_6(L_2);
		__this->set_m_buttonColumnCount_7((2.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.GameObject VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::get_CachedGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_gameObject_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		__this->set_m_gameObject_11(L_2);
	}

IL_001a:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_m_gameObject_11();
		return L_3;
	}
}
// System.String VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::get_SubMenuName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUISubMenu_get_SubMenuName_m2D32E0D18BEB2A9F9F009FBC08A587B7680A06D8 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu_OnGUI_mDF42A4C11E000B683190EACD09408E163DDF8D26 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GUISubMenu_OnGUI_mDF42A4C11E000B683190EACD09408E163DDF8D26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = GUISubMenu_get_SubMenuName_m2D32E0D18BEB2A9F9F009FBC08A587B7680A06D8(__this, /*hidden argument*/NULL);
		bool L_1 = GUIMenuBase_DrawTitleWithBackButton_m21565BE1879E9A714FFB236C5E6E17B4943737A9(__this, L_0, _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GUISubMenu_OnPressingBackButton_mB2A488EBB6AA1AD7B9952D0B25D3512BE29C3E8E(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu_SetActive_m8EF7CAA281E3D6667181CBCBBD6B57B84E504C42 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, bool ____newState0, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A(__this, /*hidden argument*/NULL);
		bool L_1 = ____newState0;
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUISubMenu_IsActive_mE707F67C65CE69A9A85A457351D9E922D17DE117 (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GUISubMenu_get_CachedGameObject_mA394E771EABCF44034ED864B480F7240DBD0513A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::OnPressingBackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu_OnPressingBackButton_mB2A488EBB6AA1AD7B9952D0B25D3512BE29C3E8E (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.UnityGUI.MENU.GUISubMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUISubMenu__ctor_mCFF0B5AC428FA053521F71C76AFBE6B642124E7B (GUISubMenu_t3AC2258D5B9A24E9263C805B393705CCA2EAF328 * __this, const RuntimeMethod* method)
{
	{
		GUIMenuBase__ctor_mFB4DE49165DDF23CF56650064B855CC79A361275(__this, /*hidden argument*/NULL);
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
// System.Boolean VoxelBusters.Utility.UnityGUILayoutUtility::Foldout(UnityEngine.GUIContent,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityGUILayoutUtility_Foldout_m8E5429005928C2A92AE87F3353707E45679D7780 (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * ____label0, bool ____state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityGUILayoutUtility_Foldout_m8E5429005928C2A92AE87F3353707E45679D7780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * V_0 = NULL;
	GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_0 = GUIStyle_op_Implicit_m678936E26D59BE1DAE146E28C3B0C8AD1BB69E19(_stringLiteral64C65374DBAB6FE3762748196D9D3A9610E2E5A9, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_1 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_richText_mC8DC3225CC7A8E011FD97B0BDFDF91E89C4F8982(L_2, (bool)1, /*hidden argument*/NULL);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_3 = ____label0;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_4 = (GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 *)il2cpp_codegen_object_new(GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0_il2cpp_TypeInfo_var);
		GUIContent__ctor_m8C923B0C5DE305F6A22320F44BE37F81CA099316(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = (String_t*)NULL;
		bool L_5 = ____state1;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		V_2 = _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
		goto IL_0031;
	}

IL_002b:
	{
		V_2 = _stringLiteralA979EF10CC6F6A36DF6B8A323307EE3BB2E2DB9C;
	}

IL_0031:
	{
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_6 = V_1;
		String_t* L_7 = V_2;
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_8 = ____label0;
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_mAAFFFB0278FCB4F7A7661BE595BA42CD093E38C5(L_8, /*hidden argument*/NULL);
		String_t* L_10 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral05D0BF13F2C9D24CDFA1D503BAA52AC4E0DCF206, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIContent_set_text_m866E0C5690119816D87D83124C81BDC0A0ED4316(L_6, L_10, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_11 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m690713D70FD850E74B529E8929492AC80E673902(L_11, /*hidden argument*/NULL);
		GUIContent_t2A00F8961C69C0A382168840CFB2111FB00B5EA0 * L_12 = V_1;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_13 = V_0;
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_14 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m88E55351140AB39BE4B8A54049DBD85D467A8C66_RuntimeMethod_var);
		bool L_15 = GUILayout_Toggle_mF7767116F694ECED3533C06972B3D50294A99707((bool)1, L_12, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0067;
		}
	}
	{
		bool L_16 = ____state1;
		____state1 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
	}

IL_0067:
	{
		GUILayout_EndHorizontal_m1DE9883227F98E1DA9309F1AF1370F1158A658C6(/*hidden argument*/NULL);
		bool L_17 = ____state1;
		return L_17;
	}
}
// System.Void VoxelBusters.Utility.UnityGUILayoutUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityGUILayoutUtility__ctor_m17CB7109332C9C76493CA6F047BE92352F4E1178 (UnityGUILayoutUtility_tE2F686A99C7A6BBA76B66C873FF96FA525F436D5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 VoxelBusters.Utility.VectorExtensions::Rotate(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ____vec0, float ____angleDeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VectorExtensions_Rotate_m7ECF4E88B793D29960D61A8626366FCF09526DAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = ____angleDeg1;
		float L_1 = ((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = cosf(L_1);
		V_0 = L_2;
		float L_3 = sinf(L_1);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		V_2 = L_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ____vec0;
		float L_6 = L_5.get_x_0();
		float L_7 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ____vec0;
		float L_9 = L_8.get_y_1();
		float L_10 = V_1;
		(&V_2)->set_x_0(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = ____vec0;
		float L_12 = L_11.get_x_0();
		float L_13 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = ____vec0;
		float L_15 = L_14.get_y_1();
		float L_16 = V_0;
		(&V_2)->set_y_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_2;
		return L_17;
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
// System.Object VoxelBusters.Utility.WebRequest::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WebRequest_get_Parameters_mC652ADD5A27AEAE4CDD7C7DDDBA0CB48A73696DB (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CParametersU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::set_Parameters(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_set_Parameters_mC2916E110D63C180A355CECCB6CEA82DD9F07240 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_4(L_0);
		return;
	}
}
// VoxelBusters.Utility.WebRequest_JSONResponse VoxelBusters.Utility.WebRequest::get_OnSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnSuccess_m3886B3B3D8E7423CBBAE027B9AEE79B84B6965F8 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = __this->get_U3COnSuccessU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::set_OnSuccess(VoxelBusters.Utility.WebRequest_JSONResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_set_OnSuccess_mC22758BAB01853D19D712A588D73E32FAC58EF81 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * ___value0, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = ___value0;
		__this->set_U3COnSuccessU3Ek__BackingField_5(L_0);
		return;
	}
}
// VoxelBusters.Utility.WebRequest_JSONResponse VoxelBusters.Utility.WebRequest::get_OnFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = __this->get_U3COnFailureU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::set_OnFailure(VoxelBusters.Utility.WebRequest_JSONResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_set_OnFailure_mCFF208E416891DC315A7E1992FF2558E509A548E (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * ___value0, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = ___value0;
		__this->set_U3COnFailureU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::.ctor(VoxelBusters.Utility.URL,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest__ctor_mCA290247F92D59592F177543966347E41BD54454 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ____URL0, RuntimeObject * ____params1, bool ____isAsynchronous2, const RuntimeMethod* method)
{
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = ____URL0;
		bool L_1 = ____isAsynchronous2;
		Request__ctor_mA6E2964FC0FCD991FAC6F640AD8EB23FFCEA70A1(__this, L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ____params1;
		WebRequest_set_Parameters_mC2916E110D63C180A355CECCB6CEA82DD9F07240_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::DidFailStartRequestWithError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_DidFailStartRequestWithError_m7C6FC93FCE6CC1C114C9B3351E1309BCDB683BA2 (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, String_t* ____error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequest_DidFailStartRequestWithError_m7C6FC93FCE6CC1C114C9B3351E1309BCDB683BA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_0, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_1 = L_0;
		String_t* L_2 = ____error0;
		NullCheck(L_1);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_1, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_2, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		V_0 = L_1;
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_3 = WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_4 = WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		NullCheck(L_4);
		JSONResponse_Invoke_m2F2136CBD4AC89316E790E04992F6EA2EA72381A(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void VoxelBusters.Utility.WebRequest::OnFetchingResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequest_OnFetchingResponse_mAF4519E8E03CD05889DAE3F1E30A984FE447887E (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequest_OnFetchingResponse_mAF4519E8E03CD05889DAE3F1E30A984FE447887E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_0, /*hidden argument*/NULL);
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_3 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = WWW_get_text_mC889F75AD1B47FD117196F98F3DDDC83985BD0E1(L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = JSONUtility_FromJSON_m0A95C44DF377A58189AE195E0FFC0C1148A8B35B(L_4, /*hidden argument*/NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_6 = WebRequest_get_OnSuccess_m3886B3B3D8E7423CBBAE027B9AEE79B84B6965F8_inline(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_7 = WebRequest_get_OnSuccess_m3886B3B3D8E7423CBBAE027B9AEE79B84B6965F8_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_8 = V_0;
		NullCheck(L_7);
		JSONResponse_Invoke_m2F2136CBD4AC89316E790E04992F6EA2EA72381A(L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_003d:
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_9 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_9, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_10 = L_9;
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_11 = Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = WWW_get_error_mED42EEAAE7847167CCEEFF2098563F78A79F8C2A(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_10, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671, L_12, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		V_1 = L_10;
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_13 = WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_14 = WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_15 = V_1;
		NullCheck(L_14);
		JSONResponse_Invoke_m2F2136CBD4AC89316E790E04992F6EA2EA72381A(L_14, L_15, /*hidden argument*/NULL);
	}

IL_006d:
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
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse__ctor_m58EC6703B09127F7A4413AB76CC8B4B0403C3201 (JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::Invoke(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse_Invoke_m2F2136CBD4AC89316E790E04992F6EA2EA72381A (JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * __this, RuntimeObject* ____response0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____response0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ____response0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ____response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ____response0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ____response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(____response0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ____response0);
					else
						GenericVirtActionInvoker1< RuntimeObject* >::Invoke(targetMethod, targetThis, ____response0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____response0);
					else
						VirtActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____response0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____response0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult VoxelBusters.Utility.WebRequest_JSONResponse::BeginInvoke(System.Collections.IDictionary,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONResponse_BeginInvoke_m2C788D15C35CD92F95BD70848E01B2EAEBB09A06 (JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * __this, RuntimeObject* ____response0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____response0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void VoxelBusters.Utility.WebRequest_JSONResponse::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONResponse_EndInvoke_mE044266186B26D369E5830F1B16B54C4B1033720 (JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: VoxelBusters.Utility.WebResponse
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_pinvoke(const WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD& unmarshaled, WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CDataU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Data>k__BackingField' of type 'WebResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDataU3Ek__BackingField_2Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_pinvoke_back(const WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_pinvoke& marshaled, WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD& unmarshaled)
{
	Exception_t* ___U3CDataU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Data>k__BackingField' of type 'WebResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDataU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: VoxelBusters.Utility.WebResponse
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_pinvoke_cleanup(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VoxelBusters.Utility.WebResponse
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_com(const WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD& unmarshaled, WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_com& marshaled)
{
	Exception_t* ___U3CDataU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Data>k__BackingField' of type 'WebResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDataU3Ek__BackingField_2Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_com_back(const WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_com& marshaled, WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD& unmarshaled)
{
	Exception_t* ___U3CDataU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Data>k__BackingField' of type 'WebResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CDataU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: VoxelBusters.Utility.WebResponse
IL2CPP_EXTERN_C void WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshal_com_cleanup(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD_marshaled_com& marshaled)
{
}
// System.Int32 VoxelBusters.Utility.WebResponse::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebResponse_get_Status_m2D1C0DE36728DD2026AB921D31116B8EFBF86DCB (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WebResponse_get_Status_m2D1C0DE36728DD2026AB921D31116B8EFBF86DCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	return WebResponse_get_Status_m2D1C0DE36728DD2026AB921D31116B8EFBF86DCB_inline(_thisAdjusted, method);
}
// System.Void VoxelBusters.Utility.WebResponse::set_Status(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7 (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_inline(_thisAdjusted, ___value0, method);
}
// System.String VoxelBusters.Utility.WebResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebResponse_get_Message_mAA8F7EEE39E2241D2BE1C9BB1504A610B7CB2C35 (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* WebResponse_get_Message_mAA8F7EEE39E2241D2BE1C9BB1504A610B7CB2C35_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	return WebResponse_get_Message_mAA8F7EEE39E2241D2BE1C9BB1504A610B7CB2C35_inline(_thisAdjusted, method);
}
// System.Void VoxelBusters.Utility.WebResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.IDictionary VoxelBusters.Utility.WebResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebResponse_get_Data_m9200F44458ADE013F5B60B615DF81F5FCF456A9F (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* WebResponse_get_Data_m9200F44458ADE013F5B60B615DF81F5FCF456A9F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	return WebResponse_get_Data_m9200F44458ADE013F5B60B615DF81F5FCF456A9F_inline(_thisAdjusted, method);
}
// System.Void VoxelBusters.Utility.WebResponse::set_Data(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8 (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.List`1<System.String> VoxelBusters.Utility.WebResponse::get_Errors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192 (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_U3CErrorsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	return WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192_inline(_thisAdjusted, method);
}
// System.Void VoxelBusters.Utility.WebResponse::set_Errors(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219 (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = ___value0;
		__this->set_U3CErrorsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_AdjustorThunk (RuntimeObject * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value0, const RuntimeMethod* method)
{
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * _thisAdjusted = reinterpret_cast<WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *>(__this + 1);
	WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_inline(_thisAdjusted, ___value0, method);
}
// VoxelBusters.Utility.WebResponse VoxelBusters.Utility.WebResponse::WebResponseOnSuccess(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  WebResponse_WebResponseOnSuccess_m380FC28DC7CF4A09757D50C74491F9372230FC8A (RuntimeObject* ____jsonResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebResponse_WebResponseOnSuccess_m380FC28DC7CF4A09757D50C74491F9372230FC8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD ));
		RuntimeObject* L_0 = ____jsonResponse0;
		int32_t L_1 = IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A(L_0, _stringLiteral48A3661D846478FA991A825EBD10B78671444B5B, 0, /*hidden argument*/IDictionaryExtensions_GetIfAvailable_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4465AFB6DA9BBC61F3EE16DE0E5AC921DBC8460A_RuntimeMethod_var);
		WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ____jsonResponse0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_2, _stringLiteral0EC6D150549780250A9772C06B619BCC46A0E560);
		if (!L_3)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_4 = ____jsonResponse0;
		NullCheck(L_4);
		RuntimeObject * L_5 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_4, _stringLiteral0EC6D150549780250A9772C06B619BCC46A0E560);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_6, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD);
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject * L_9 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_8, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD);
		WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		RuntimeObject* L_10 = V_1;
		String_t* L_11 = IDictionaryExtensions_GetIfAvailable_TisString_t_mB60684D446B963F13AA4DAE4FAB2E69E3295776F(L_10, _stringLiteral6F9B9AF3CD6E8B8A73C2CDCED37FE9F59226E27D, (String_t*)NULL, /*hidden argument*/IDictionaryExtensions_GetIfAvailable_TisString_t_mB60684D446B963F13AA4DAE4FAB2E69E3295776F_RuntimeMethod_var);
		WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), L_11, /*hidden argument*/NULL);
		RuntimeObject* L_12 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = IDictionaryExtensions_GetIfAvailable_TisList_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_m0D5A48C24DCE611A8C4F8E1D695682A21395B98A(L_12, _stringLiteral570043596E41F9067D43FBFF99F1ACB348A090BF, (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)NULL, /*hidden argument*/IDictionaryExtensions_GetIfAvailable_TisList_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_m0D5A48C24DCE611A8C4F8E1D695682A21395B98A_RuntimeMethod_var);
		WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), L_13, /*hidden argument*/NULL);
	}

IL_0083:
	{
		WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  L_14 = V_0;
		return L_14;
	}
}
// VoxelBusters.Utility.WebResponse VoxelBusters.Utility.WebResponse::WebResponseOnFail(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  WebResponse_WebResponseOnFail_m307EBF50F8E986AF6E2E71395707187487DB7E51 (RuntimeObject* ____jsonResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebResponse_WebResponseOnFail_m307EBF50F8E986AF6E2E71395707187487DB7E51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD ));
		WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), 0, /*hidden argument*/NULL);
		WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), (String_t*)NULL, /*hidden argument*/NULL);
		WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), L_0, /*hidden argument*/NULL);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_1 = WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192_inline((WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD *)(&V_0), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ____jsonResponse0;
		NullCheck(L_2);
		RuntimeObject * L_3 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_2, _stringLiteral11F9578D05E6F7BB58A3CDD00107E9F4E3882671);
		NullCheck(L_1);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_1, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD  L_4 = V_0;
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Request_set_URL_m920D8BCEA762B078633CCF4FD4DE184A6230179C_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  ___value0, const RuntimeMethod* method)
{
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = ___value0;
		__this->set_U3CURLU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Request_set_IsAsynchronous_mB232A352F43F8C941D092937AB9DAAD20D5D217C_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsAsynchronousU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * Request_get_WWWObject_m7BD6AB293676020971E70E0E69B4078A3007812E_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		WWW_tA50AFB5DE276783409B4CE88FE9B772322EE5664 * L_0 = __this->get_U3CWWWObjectU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  Request_get_URL_mB98724B5742A622A3CB5B2E5FC8AF7E324655F84_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		URL_tB5292167633E41DA8A3D1E5D800A492F59C31355  L_0 = __this->get_U3CURLU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* URL_get_URLString_m343C4CBD0152088421C2AF632E0FF4A4666796B9_inline (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CURLStringU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Request_get_IsAsynchronous_m675FFAE3DC70BF4E98BAF7EBAA06770F71FEFCF7_inline (Request_t6EFDFAFD913CCB901D2028230B0F99B4F2BCCBE6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsAsynchronousU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void URL_set_URLString_mDDA56445DB9B5431E811EE8F5D7AB68C737849E1_inline (URL_tB5292167633E41DA8A3D1E5D800A492F59C31355 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CURLStringU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRequest_set_Parameters_mC2916E110D63C180A355CECCB6CEA82DD9F07240_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnFailure_m15FE827C20DDC73014CF7F03199BCC59D4457136_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = __this->get_U3COnFailureU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * WebRequest_get_OnSuccess_m3886B3B3D8E7423CBBAE027B9AEE79B84B6965F8_inline (WebRequest_t1CE7205128F433E9F6CD364437BFAD42109FEC32 * __this, const RuntimeMethod* method)
{
	{
		JSONResponse_tF7BF3C2C9AD7BBE8DB5C27F94E3CF5531CA11DE8 * L_0 = __this->get_U3COnSuccessU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebResponse_get_Status_m2D1C0DE36728DD2026AB921D31116B8EFBF86DCB_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Status_mB3ECA52F73D8C35EA029E5449D0B00C3D29F2AB7_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebResponse_get_Message_mAA8F7EEE39E2241D2BE1C9BB1504A610B7CB2C35_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Message_m6EA0A65B40C8C5FF9D353CB85644E9137708172B_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WebResponse_get_Data_m9200F44458ADE013F5B60B615DF81F5FCF456A9F_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Data_m909ACEF5418AC7339E3267FE8498A297C3120DC8_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * WebResponse_get_Errors_mE315DA8EF2B0593EB16A3FBA464A8A24DE349192_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, const RuntimeMethod* method)
{
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_U3CErrorsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebResponse_set_Errors_m9CD09B57763597961339570383CC610F8BAED219_inline (WebResponse_t8B7AF0808F3F6438970141536C2EB6AEAE5DA5FD * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = ___value0;
		__this->set_U3CErrorsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
