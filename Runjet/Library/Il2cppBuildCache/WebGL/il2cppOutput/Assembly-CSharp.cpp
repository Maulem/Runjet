#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<GameManager/GameState>
struct IEnumerable_1_tD0C0674E94968826F3E3E59F88F831E118AD739E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// GameManager/GameState[]
struct GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB;
// ActiveOnSomeStates
struct ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// AttachFire
struct AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0;
// AttachLaser
struct AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8;
// AttachLaser2
struct AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC;
// AttachLaser3
struct AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183;
// AttachLaser4
struct AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackgroundSpawner
struct BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A;
// Collectable
struct Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DestroyDistant
struct DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// ForegroundSpawner
struct ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectSpawner
struct ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UICoins
struct UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651;
// UIDistance
struct UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F;
// UIEndgame
struct UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E;
// UIMenu
struct UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA;
// UIPause
struct UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// GameManager/ChangeStateDelegate
struct ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A2BCC6DA933DBEC507ADA10E0599B08392B0168;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2D74B14C6EB173C7A466E74BFB656569F534AC80;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3D4999486114FC9252665845E0B2D8E4140076D2;
IL2CPP_EXTERN_C String_t* _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907;
IL2CPP_EXTERN_C String_t* _stringLiteral4F71B24EA2E5451BD3C26748262E8046A44FD46C;
IL2CPP_EXTERN_C String_t* _stringLiteral652C5E270CB47C8078E282123F22FB8685734496;
IL2CPP_EXTERN_C String_t* _stringLiteral765EC736B7DF3074084DED8E3251969235884D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9150854E20960D7C4FF22DA43731C86836B37759;
IL2CPP_EXTERN_C String_t* _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F19D72B6FC236B040D8D07A377D8AAC5C8571C;
IL2CPP_EXTERN_C String_t* _stringLiteralC391C7F65B84B17D2E9B0B73C83A64A82E844FAC;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B67D73F83D52D1B87B3EA43C5660F30E176177;
IL2CPP_EXTERN_C String_t* _stringLiteralE6D650E5FE77B61390ADAC37AF15166D519F520B;
IL2CPP_EXTERN_C const RuntimeMethod* ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisGameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2_mB7A5151461AD4ACD1642E5BB87BF09ECB2435D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
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


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// GameManager/GameState
struct GameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2 
{
public:
	// System.Int32 GameManager/GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public RuntimeObject
{
public:
	// GameManager/GameState GameManager::<gameState>k__BackingField
	int32_t ___U3CgameStateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CgameStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CgameStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CgameStateU3Ek__BackingField_0() const { return ___U3CgameStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CgameStateU3Ek__BackingField_0() { return &___U3CgameStateU3Ek__BackingField_0; }
	inline void set_U3CgameStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CgameStateU3Ek__BackingField_0 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::_instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ____instance_1;
	// GameManager/ChangeStateDelegate GameManager::changeStateDelegate
	ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * ___changeStateDelegate_2;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ____instance_1)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get__instance_1() const { return ____instance_1; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}

	inline static int32_t get_offset_of_changeStateDelegate_2() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___changeStateDelegate_2)); }
	inline ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * get_changeStateDelegate_2() const { return ___changeStateDelegate_2; }
	inline ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 ** get_address_of_changeStateDelegate_2() { return &___changeStateDelegate_2; }
	inline void set_changeStateDelegate_2(ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * value)
	{
		___changeStateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeStateDelegate_2), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GameManager/ChangeStateDelegate
struct ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// ActiveOnSomeStates
struct ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager/GameState[] ActiveOnSomeStates::activeStates
	GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB* ___activeStates_4;
	// GameManager ActiveOnSomeStates::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_5;

public:
	inline static int32_t get_offset_of_activeStates_4() { return static_cast<int32_t>(offsetof(ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2, ___activeStates_4)); }
	inline GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB* get_activeStates_4() const { return ___activeStates_4; }
	inline GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB** get_address_of_activeStates_4() { return &___activeStates_4; }
	inline void set_activeStates_4(GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB* value)
	{
		___activeStates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeStates_4), (void*)value);
	}

	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2, ___gm_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_5() const { return ___gm_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}
};


// AttachFire
struct AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AttachFire::Fire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Fire_4;
	// UnityEngine.GameObject AttachFire::fire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fire_5;
	// UnityEngine.Vector3 AttachFire::fireCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fireCoords_6;

public:
	inline static int32_t get_offset_of_Fire_4() { return static_cast<int32_t>(offsetof(AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0, ___Fire_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Fire_4() const { return ___Fire_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Fire_4() { return &___Fire_4; }
	inline void set_Fire_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Fire_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fire_4), (void*)value);
	}

	inline static int32_t get_offset_of_fire_5() { return static_cast<int32_t>(offsetof(AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0, ___fire_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fire_5() const { return ___fire_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fire_5() { return &___fire_5; }
	inline void set_fire_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fire_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fire_5), (void*)value);
	}

	inline static int32_t get_offset_of_fireCoords_6() { return static_cast<int32_t>(offsetof(AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0, ___fireCoords_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_fireCoords_6() const { return ___fireCoords_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_fireCoords_6() { return &___fireCoords_6; }
	inline void set_fireCoords_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___fireCoords_6 = value;
	}
};


// AttachLaser
struct AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AttachLaser::LaserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserSmoke_4;
	// UnityEngine.GameObject AttachLaser::LaserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserParticles_5;
	// UnityEngine.GameObject AttachLaser::LaserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserRobot_6;
	// UnityEngine.GameObject AttachLaser::laserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserSmoke_7;
	// UnityEngine.GameObject AttachLaser::laserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserParticles_8;
	// UnityEngine.GameObject AttachLaser::laserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserRobot_9;
	// UnityEngine.Vector3 AttachLaser::laserSmokeCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserSmokeCoords_10;
	// UnityEngine.Vector3 AttachLaser::laserParticlesCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserParticlesCoords_11;
	// UnityEngine.Vector3 AttachLaser::laserRobotCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserRobotCoords_12;

public:
	inline static int32_t get_offset_of_LaserSmoke_4() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___LaserSmoke_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserSmoke_4() const { return ___LaserSmoke_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserSmoke_4() { return &___LaserSmoke_4; }
	inline void set_LaserSmoke_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserSmoke_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserSmoke_4), (void*)value);
	}

	inline static int32_t get_offset_of_LaserParticles_5() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___LaserParticles_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserParticles_5() const { return ___LaserParticles_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserParticles_5() { return &___LaserParticles_5; }
	inline void set_LaserParticles_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_LaserRobot_6() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___LaserRobot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserRobot_6() const { return ___LaserRobot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserRobot_6() { return &___LaserRobot_6; }
	inline void set_LaserRobot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserRobot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserRobot_6), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmoke_7() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserSmoke_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserSmoke_7() const { return ___laserSmoke_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserSmoke_7() { return &___laserSmoke_7; }
	inline void set_laserSmoke_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserSmoke_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserSmoke_7), (void*)value);
	}

	inline static int32_t get_offset_of_laserParticles_8() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserParticles_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserParticles_8() const { return ___laserParticles_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserParticles_8() { return &___laserParticles_8; }
	inline void set_laserParticles_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserParticles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserParticles_8), (void*)value);
	}

	inline static int32_t get_offset_of_laserRobot_9() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserRobot_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserRobot_9() const { return ___laserRobot_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserRobot_9() { return &___laserRobot_9; }
	inline void set_laserRobot_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserRobot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserRobot_9), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmokeCoords_10() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserSmokeCoords_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserSmokeCoords_10() const { return ___laserSmokeCoords_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserSmokeCoords_10() { return &___laserSmokeCoords_10; }
	inline void set_laserSmokeCoords_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserSmokeCoords_10 = value;
	}

	inline static int32_t get_offset_of_laserParticlesCoords_11() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserParticlesCoords_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserParticlesCoords_11() const { return ___laserParticlesCoords_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserParticlesCoords_11() { return &___laserParticlesCoords_11; }
	inline void set_laserParticlesCoords_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserParticlesCoords_11 = value;
	}

	inline static int32_t get_offset_of_laserRobotCoords_12() { return static_cast<int32_t>(offsetof(AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8, ___laserRobotCoords_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserRobotCoords_12() const { return ___laserRobotCoords_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserRobotCoords_12() { return &___laserRobotCoords_12; }
	inline void set_laserRobotCoords_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserRobotCoords_12 = value;
	}
};


// AttachLaser2
struct AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AttachLaser2::LaserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserSmoke_4;
	// UnityEngine.GameObject AttachLaser2::LaserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserParticles_5;
	// UnityEngine.GameObject AttachLaser2::LaserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserRobot_6;
	// UnityEngine.GameObject AttachLaser2::laserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserSmoke_7;
	// UnityEngine.GameObject AttachLaser2::laserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserParticles_8;
	// UnityEngine.GameObject AttachLaser2::laserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserRobot_9;
	// UnityEngine.Vector3 AttachLaser2::laserSmokeCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserSmokeCoords_10;
	// UnityEngine.Vector3 AttachLaser2::laserParticlesCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserParticlesCoords_11;
	// UnityEngine.Vector3 AttachLaser2::laserRobotCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserRobotCoords_12;

public:
	inline static int32_t get_offset_of_LaserSmoke_4() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___LaserSmoke_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserSmoke_4() const { return ___LaserSmoke_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserSmoke_4() { return &___LaserSmoke_4; }
	inline void set_LaserSmoke_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserSmoke_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserSmoke_4), (void*)value);
	}

	inline static int32_t get_offset_of_LaserParticles_5() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___LaserParticles_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserParticles_5() const { return ___LaserParticles_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserParticles_5() { return &___LaserParticles_5; }
	inline void set_LaserParticles_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_LaserRobot_6() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___LaserRobot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserRobot_6() const { return ___LaserRobot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserRobot_6() { return &___LaserRobot_6; }
	inline void set_LaserRobot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserRobot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserRobot_6), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmoke_7() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserSmoke_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserSmoke_7() const { return ___laserSmoke_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserSmoke_7() { return &___laserSmoke_7; }
	inline void set_laserSmoke_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserSmoke_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserSmoke_7), (void*)value);
	}

	inline static int32_t get_offset_of_laserParticles_8() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserParticles_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserParticles_8() const { return ___laserParticles_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserParticles_8() { return &___laserParticles_8; }
	inline void set_laserParticles_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserParticles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserParticles_8), (void*)value);
	}

	inline static int32_t get_offset_of_laserRobot_9() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserRobot_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserRobot_9() const { return ___laserRobot_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserRobot_9() { return &___laserRobot_9; }
	inline void set_laserRobot_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserRobot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserRobot_9), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmokeCoords_10() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserSmokeCoords_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserSmokeCoords_10() const { return ___laserSmokeCoords_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserSmokeCoords_10() { return &___laserSmokeCoords_10; }
	inline void set_laserSmokeCoords_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserSmokeCoords_10 = value;
	}

	inline static int32_t get_offset_of_laserParticlesCoords_11() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserParticlesCoords_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserParticlesCoords_11() const { return ___laserParticlesCoords_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserParticlesCoords_11() { return &___laserParticlesCoords_11; }
	inline void set_laserParticlesCoords_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserParticlesCoords_11 = value;
	}

	inline static int32_t get_offset_of_laserRobotCoords_12() { return static_cast<int32_t>(offsetof(AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC, ___laserRobotCoords_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserRobotCoords_12() const { return ___laserRobotCoords_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserRobotCoords_12() { return &___laserRobotCoords_12; }
	inline void set_laserRobotCoords_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserRobotCoords_12 = value;
	}
};


// AttachLaser3
struct AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AttachLaser3::LaserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserSmoke_4;
	// UnityEngine.GameObject AttachLaser3::LaserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserParticles_5;
	// UnityEngine.GameObject AttachLaser3::LaserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserRobot_6;
	// UnityEngine.GameObject AttachLaser3::laserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserSmoke_7;
	// UnityEngine.GameObject AttachLaser3::laserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserParticles_8;
	// UnityEngine.GameObject AttachLaser3::laserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserRobot_9;
	// UnityEngine.Vector3 AttachLaser3::laserSmokeCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserSmokeCoords_10;
	// UnityEngine.Vector3 AttachLaser3::laserParticlesCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserParticlesCoords_11;
	// UnityEngine.Vector3 AttachLaser3::laserRobotCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserRobotCoords_12;

public:
	inline static int32_t get_offset_of_LaserSmoke_4() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___LaserSmoke_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserSmoke_4() const { return ___LaserSmoke_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserSmoke_4() { return &___LaserSmoke_4; }
	inline void set_LaserSmoke_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserSmoke_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserSmoke_4), (void*)value);
	}

	inline static int32_t get_offset_of_LaserParticles_5() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___LaserParticles_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserParticles_5() const { return ___LaserParticles_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserParticles_5() { return &___LaserParticles_5; }
	inline void set_LaserParticles_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_LaserRobot_6() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___LaserRobot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserRobot_6() const { return ___LaserRobot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserRobot_6() { return &___LaserRobot_6; }
	inline void set_LaserRobot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserRobot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserRobot_6), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmoke_7() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserSmoke_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserSmoke_7() const { return ___laserSmoke_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserSmoke_7() { return &___laserSmoke_7; }
	inline void set_laserSmoke_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserSmoke_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserSmoke_7), (void*)value);
	}

	inline static int32_t get_offset_of_laserParticles_8() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserParticles_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserParticles_8() const { return ___laserParticles_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserParticles_8() { return &___laserParticles_8; }
	inline void set_laserParticles_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserParticles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserParticles_8), (void*)value);
	}

	inline static int32_t get_offset_of_laserRobot_9() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserRobot_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserRobot_9() const { return ___laserRobot_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserRobot_9() { return &___laserRobot_9; }
	inline void set_laserRobot_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserRobot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserRobot_9), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmokeCoords_10() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserSmokeCoords_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserSmokeCoords_10() const { return ___laserSmokeCoords_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserSmokeCoords_10() { return &___laserSmokeCoords_10; }
	inline void set_laserSmokeCoords_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserSmokeCoords_10 = value;
	}

	inline static int32_t get_offset_of_laserParticlesCoords_11() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserParticlesCoords_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserParticlesCoords_11() const { return ___laserParticlesCoords_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserParticlesCoords_11() { return &___laserParticlesCoords_11; }
	inline void set_laserParticlesCoords_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserParticlesCoords_11 = value;
	}

	inline static int32_t get_offset_of_laserRobotCoords_12() { return static_cast<int32_t>(offsetof(AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183, ___laserRobotCoords_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserRobotCoords_12() const { return ___laserRobotCoords_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserRobotCoords_12() { return &___laserRobotCoords_12; }
	inline void set_laserRobotCoords_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserRobotCoords_12 = value;
	}
};


// AttachLaser4
struct AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AttachLaser4::LaserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserSmoke_4;
	// UnityEngine.GameObject AttachLaser4::LaserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserParticles_5;
	// UnityEngine.GameObject AttachLaser4::LaserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LaserRobot_6;
	// UnityEngine.GameObject AttachLaser4::laserSmoke
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserSmoke_7;
	// UnityEngine.GameObject AttachLaser4::laserParticles
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserParticles_8;
	// UnityEngine.GameObject AttachLaser4::laserRobot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laserRobot_9;
	// UnityEngine.Vector3 AttachLaser4::laserSmokeCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserSmokeCoords_10;
	// UnityEngine.Vector3 AttachLaser4::laserParticlesCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserParticlesCoords_11;
	// UnityEngine.Vector3 AttachLaser4::laserRobotCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___laserRobotCoords_12;

public:
	inline static int32_t get_offset_of_LaserSmoke_4() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___LaserSmoke_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserSmoke_4() const { return ___LaserSmoke_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserSmoke_4() { return &___LaserSmoke_4; }
	inline void set_LaserSmoke_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserSmoke_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserSmoke_4), (void*)value);
	}

	inline static int32_t get_offset_of_LaserParticles_5() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___LaserParticles_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserParticles_5() const { return ___LaserParticles_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserParticles_5() { return &___LaserParticles_5; }
	inline void set_LaserParticles_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserParticles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserParticles_5), (void*)value);
	}

	inline static int32_t get_offset_of_LaserRobot_6() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___LaserRobot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LaserRobot_6() const { return ___LaserRobot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LaserRobot_6() { return &___LaserRobot_6; }
	inline void set_LaserRobot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LaserRobot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LaserRobot_6), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmoke_7() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserSmoke_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserSmoke_7() const { return ___laserSmoke_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserSmoke_7() { return &___laserSmoke_7; }
	inline void set_laserSmoke_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserSmoke_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserSmoke_7), (void*)value);
	}

	inline static int32_t get_offset_of_laserParticles_8() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserParticles_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserParticles_8() const { return ___laserParticles_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserParticles_8() { return &___laserParticles_8; }
	inline void set_laserParticles_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserParticles_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserParticles_8), (void*)value);
	}

	inline static int32_t get_offset_of_laserRobot_9() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserRobot_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laserRobot_9() const { return ___laserRobot_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laserRobot_9() { return &___laserRobot_9; }
	inline void set_laserRobot_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laserRobot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laserRobot_9), (void*)value);
	}

	inline static int32_t get_offset_of_laserSmokeCoords_10() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserSmokeCoords_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserSmokeCoords_10() const { return ___laserSmokeCoords_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserSmokeCoords_10() { return &___laserSmokeCoords_10; }
	inline void set_laserSmokeCoords_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserSmokeCoords_10 = value;
	}

	inline static int32_t get_offset_of_laserParticlesCoords_11() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserParticlesCoords_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserParticlesCoords_11() const { return ___laserParticlesCoords_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserParticlesCoords_11() { return &___laserParticlesCoords_11; }
	inline void set_laserParticlesCoords_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserParticlesCoords_11 = value;
	}

	inline static int32_t get_offset_of_laserRobotCoords_12() { return static_cast<int32_t>(offsetof(AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB, ___laserRobotCoords_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_laserRobotCoords_12() const { return ___laserRobotCoords_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_laserRobotCoords_12() { return &___laserRobotCoords_12; }
	inline void set_laserRobotCoords_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___laserRobotCoords_12 = value;
	}
};


// BackgroundSpawner
struct BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject BackgroundSpawner::background
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___background_4;
	// UnityEngine.GameObject BackgroundSpawner::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// UnityEngine.GameObject BackgroundSpawner::back
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___back_6;
	// System.Boolean BackgroundSpawner::spawned
	bool ___spawned_7;
	// UnityEngine.Vector3 BackgroundSpawner::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_8;

public:
	inline static int32_t get_offset_of_background_4() { return static_cast<int32_t>(offsetof(BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3, ___background_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_background_4() const { return ___background_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_background_4() { return &___background_4; }
	inline void set_background_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___background_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_back_6() { return static_cast<int32_t>(offsetof(BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3, ___back_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_back_6() const { return ___back_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_back_6() { return &___back_6; }
	inline void set_back_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___back_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___back_6), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_7() { return static_cast<int32_t>(offsetof(BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3, ___spawned_7)); }
	inline bool get_spawned_7() const { return ___spawned_7; }
	inline bool* get_address_of_spawned_7() { return &___spawned_7; }
	inline void set_spawned_7(bool value)
	{
		___spawned_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3, ___position_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_8() const { return ___position_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_8 = value;
	}
};


// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// System.Single CameraFollow::smoothSpeed
	float ___smoothSpeed_5;
	// System.Single CameraFollow::xPosition
	float ___xPosition_6;
	// System.Single CameraFollow::yPosition
	float ___yPosition_7;
	// UnityEngine.Vector3 CameraFollow::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_8;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_smoothSpeed_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___smoothSpeed_5)); }
	inline float get_smoothSpeed_5() const { return ___smoothSpeed_5; }
	inline float* get_address_of_smoothSpeed_5() { return &___smoothSpeed_5; }
	inline void set_smoothSpeed_5(float value)
	{
		___smoothSpeed_5 = value;
	}

	inline static int32_t get_offset_of_xPosition_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___xPosition_6)); }
	inline float get_xPosition_6() const { return ___xPosition_6; }
	inline float* get_address_of_xPosition_6() { return &___xPosition_6; }
	inline void set_xPosition_6(float value)
	{
		___xPosition_6 = value;
	}

	inline static int32_t get_offset_of_yPosition_7() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___yPosition_7)); }
	inline float get_yPosition_7() const { return ___yPosition_7; }
	inline float* get_address_of_yPosition_7() { return &___yPosition_7; }
	inline void set_yPosition_7(float value)
	{
		___yPosition_7 = value;
	}

	inline static int32_t get_offset_of_offset_8() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___offset_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_8() const { return ___offset_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_8() { return &___offset_8; }
	inline void set_offset_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_8 = value;
	}
};


// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip CharacterController2D::coinClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___coinClip_6;
	// UnityEngine.AudioClip CharacterController2D::zapClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___zapClip_7;
	// UnityEngine.AudioClip CharacterController2D::boomClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___boomClip_8;
	// UnityEngine.AudioSource CharacterController2D::AudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AudioSource_9;
	// System.Single CharacterController2D::speed
	float ___speed_10;
	// UnityEngine.GameObject CharacterController2D::Fire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Fire_11;
	// UnityEngine.GameObject CharacterController2D::jetfire
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___jetfire_12;
	// System.Boolean CharacterController2D::onGround
	bool ___onGround_13;
	// System.Boolean CharacterController2D::flying
	bool ___flying_14;
	// System.Boolean CharacterController2D::gameOn
	bool ___gameOn_15;
	// System.Single CharacterController2D::jump
	float ___jump_18;
	// System.Single CharacterController2D::vAxis
	float ___vAxis_19;
	// System.Single CharacterController2D::hAxis
	float ___hAxis_20;
	// System.Single CharacterController2D::timeOff
	float ___timeOff_21;
	// System.Single CharacterController2D::deathTime
	float ___deathTime_22;
	// UnityEngine.GameObject CharacterController2D::raycastTarget
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___raycastTarget_23;
	// UnityEngine.Rigidbody2D CharacterController2D::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_24;
	// UnityEngine.Vector3 CharacterController2D::movingDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movingDirection_25;
	// UnityEngine.Vector3 CharacterController2D::jetfireLeftCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___jetfireLeftCoords_26;
	// UnityEngine.Vector3 CharacterController2D::jetfireRightCoords
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___jetfireRightCoords_27;
	// UnityEngine.Animator CharacterController2D::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_28;
	// GameManager CharacterController2D::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_29;

public:
	inline static int32_t get_offset_of_coinClip_6() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___coinClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_coinClip_6() const { return ___coinClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_coinClip_6() { return &___coinClip_6; }
	inline void set_coinClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___coinClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_zapClip_7() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___zapClip_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_zapClip_7() const { return ___zapClip_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_zapClip_7() { return &___zapClip_7; }
	inline void set_zapClip_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___zapClip_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zapClip_7), (void*)value);
	}

	inline static int32_t get_offset_of_boomClip_8() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___boomClip_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_boomClip_8() const { return ___boomClip_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_boomClip_8() { return &___boomClip_8; }
	inline void set_boomClip_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___boomClip_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boomClip_8), (void*)value);
	}

	inline static int32_t get_offset_of_AudioSource_9() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___AudioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AudioSource_9() const { return ___AudioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AudioSource_9() { return &___AudioSource_9; }
	inline void set_AudioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AudioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_Fire_11() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___Fire_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Fire_11() const { return ___Fire_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Fire_11() { return &___Fire_11; }
	inline void set_Fire_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Fire_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fire_11), (void*)value);
	}

	inline static int32_t get_offset_of_jetfire_12() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___jetfire_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_jetfire_12() const { return ___jetfire_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_jetfire_12() { return &___jetfire_12; }
	inline void set_jetfire_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___jetfire_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jetfire_12), (void*)value);
	}

	inline static int32_t get_offset_of_onGround_13() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___onGround_13)); }
	inline bool get_onGround_13() const { return ___onGround_13; }
	inline bool* get_address_of_onGround_13() { return &___onGround_13; }
	inline void set_onGround_13(bool value)
	{
		___onGround_13 = value;
	}

	inline static int32_t get_offset_of_flying_14() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___flying_14)); }
	inline bool get_flying_14() const { return ___flying_14; }
	inline bool* get_address_of_flying_14() { return &___flying_14; }
	inline void set_flying_14(bool value)
	{
		___flying_14 = value;
	}

	inline static int32_t get_offset_of_gameOn_15() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___gameOn_15)); }
	inline bool get_gameOn_15() const { return ___gameOn_15; }
	inline bool* get_address_of_gameOn_15() { return &___gameOn_15; }
	inline void set_gameOn_15(bool value)
	{
		___gameOn_15 = value;
	}

	inline static int32_t get_offset_of_jump_18() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___jump_18)); }
	inline float get_jump_18() const { return ___jump_18; }
	inline float* get_address_of_jump_18() { return &___jump_18; }
	inline void set_jump_18(float value)
	{
		___jump_18 = value;
	}

	inline static int32_t get_offset_of_vAxis_19() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___vAxis_19)); }
	inline float get_vAxis_19() const { return ___vAxis_19; }
	inline float* get_address_of_vAxis_19() { return &___vAxis_19; }
	inline void set_vAxis_19(float value)
	{
		___vAxis_19 = value;
	}

	inline static int32_t get_offset_of_hAxis_20() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___hAxis_20)); }
	inline float get_hAxis_20() const { return ___hAxis_20; }
	inline float* get_address_of_hAxis_20() { return &___hAxis_20; }
	inline void set_hAxis_20(float value)
	{
		___hAxis_20 = value;
	}

	inline static int32_t get_offset_of_timeOff_21() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___timeOff_21)); }
	inline float get_timeOff_21() const { return ___timeOff_21; }
	inline float* get_address_of_timeOff_21() { return &___timeOff_21; }
	inline void set_timeOff_21(float value)
	{
		___timeOff_21 = value;
	}

	inline static int32_t get_offset_of_deathTime_22() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___deathTime_22)); }
	inline float get_deathTime_22() const { return ___deathTime_22; }
	inline float* get_address_of_deathTime_22() { return &___deathTime_22; }
	inline void set_deathTime_22(float value)
	{
		___deathTime_22 = value;
	}

	inline static int32_t get_offset_of_raycastTarget_23() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___raycastTarget_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_raycastTarget_23() const { return ___raycastTarget_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_raycastTarget_23() { return &___raycastTarget_23; }
	inline void set_raycastTarget_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___raycastTarget_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastTarget_23), (void*)value);
	}

	inline static int32_t get_offset_of_rb_24() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___rb_24)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_24() const { return ___rb_24; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_24() { return &___rb_24; }
	inline void set_rb_24(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_24), (void*)value);
	}

	inline static int32_t get_offset_of_movingDirection_25() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___movingDirection_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movingDirection_25() const { return ___movingDirection_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movingDirection_25() { return &___movingDirection_25; }
	inline void set_movingDirection_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movingDirection_25 = value;
	}

	inline static int32_t get_offset_of_jetfireLeftCoords_26() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___jetfireLeftCoords_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_jetfireLeftCoords_26() const { return ___jetfireLeftCoords_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_jetfireLeftCoords_26() { return &___jetfireLeftCoords_26; }
	inline void set_jetfireLeftCoords_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___jetfireLeftCoords_26 = value;
	}

	inline static int32_t get_offset_of_jetfireRightCoords_27() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___jetfireRightCoords_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_jetfireRightCoords_27() const { return ___jetfireRightCoords_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_jetfireRightCoords_27() { return &___jetfireRightCoords_27; }
	inline void set_jetfireRightCoords_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___jetfireRightCoords_27 = value;
	}

	inline static int32_t get_offset_of_animator_28() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___animator_28)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_28() const { return ___animator_28; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_28() { return &___animator_28; }
	inline void set_animator_28(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_28), (void*)value);
	}

	inline static int32_t get_offset_of_gm_29() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___gm_29)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_29() const { return ___gm_29; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_29() { return &___gm_29; }
	inline void set_gm_29(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_29), (void*)value);
	}
};

struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields
{
public:
	// System.Int32 CharacterController2D::coinsUI
	int32_t ___coinsUI_4;
	// System.Int32 CharacterController2D::coins
	int32_t ___coins_5;
	// System.Int32 CharacterController2D::restart
	int32_t ___restart_16;
	// System.Boolean CharacterController2D::dead
	bool ___dead_17;

public:
	inline static int32_t get_offset_of_coinsUI_4() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields, ___coinsUI_4)); }
	inline int32_t get_coinsUI_4() const { return ___coinsUI_4; }
	inline int32_t* get_address_of_coinsUI_4() { return &___coinsUI_4; }
	inline void set_coinsUI_4(int32_t value)
	{
		___coinsUI_4 = value;
	}

	inline static int32_t get_offset_of_coins_5() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields, ___coins_5)); }
	inline int32_t get_coins_5() const { return ___coins_5; }
	inline int32_t* get_address_of_coins_5() { return &___coins_5; }
	inline void set_coins_5(int32_t value)
	{
		___coins_5 = value;
	}

	inline static int32_t get_offset_of_restart_16() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields, ___restart_16)); }
	inline int32_t get_restart_16() const { return ___restart_16; }
	inline int32_t* get_address_of_restart_16() { return &___restart_16; }
	inline void set_restart_16(int32_t value)
	{
		___restart_16 = value;
	}

	inline static int32_t get_offset_of_dead_17() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields, ___dead_17)); }
	inline bool get_dead_17() const { return ___dead_17; }
	inline bool* get_address_of_dead_17() { return &___dead_17; }
	inline void set_dead_17(bool value)
	{
		___dead_17 = value;
	}
};


// Collectable
struct Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Collectable::speed
	float ___speed_4;
	// System.Single Collectable::xAxis
	float ___xAxis_5;
	// System.Single Collectable::yAxis
	float ___yAxis_6;
	// System.Int32 Collectable::graus
	int32_t ___graus_7;
	// System.Boolean Collectable::up
	bool ___up_8;
	// UnityEngine.Vector3 Collectable::movingDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movingDirection_9;
	// UnityEngine.Rigidbody2D Collectable::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_xAxis_5() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___xAxis_5)); }
	inline float get_xAxis_5() const { return ___xAxis_5; }
	inline float* get_address_of_xAxis_5() { return &___xAxis_5; }
	inline void set_xAxis_5(float value)
	{
		___xAxis_5 = value;
	}

	inline static int32_t get_offset_of_yAxis_6() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___yAxis_6)); }
	inline float get_yAxis_6() const { return ___yAxis_6; }
	inline float* get_address_of_yAxis_6() { return &___yAxis_6; }
	inline void set_yAxis_6(float value)
	{
		___yAxis_6 = value;
	}

	inline static int32_t get_offset_of_graus_7() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___graus_7)); }
	inline int32_t get_graus_7() const { return ___graus_7; }
	inline int32_t* get_address_of_graus_7() { return &___graus_7; }
	inline void set_graus_7(int32_t value)
	{
		___graus_7 = value;
	}

	inline static int32_t get_offset_of_up_8() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___up_8)); }
	inline bool get_up_8() const { return ___up_8; }
	inline bool* get_address_of_up_8() { return &___up_8; }
	inline void set_up_8(bool value)
	{
		___up_8 = value;
	}

	inline static int32_t get_offset_of_movingDirection_9() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___movingDirection_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movingDirection_9() const { return ___movingDirection_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movingDirection_9() { return &___movingDirection_9; }
	inline void set_movingDirection_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movingDirection_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D, ___rb_10)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_10), (void*)value);
	}
};


// DestroyDistant
struct DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DestroyDistant::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// System.Int32 DestroyDistant::destroyDistance
	int32_t ___destroyDistance_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_destroyDistance_5() { return static_cast<int32_t>(offsetof(DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201, ___destroyDistance_5)); }
	inline int32_t get_destroyDistance_5() const { return ___destroyDistance_5; }
	inline int32_t* get_address_of_destroyDistance_5() { return &___destroyDistance_5; }
	inline void set_destroyDistance_5(int32_t value)
	{
		___destroyDistance_5 = value;
	}
};


// ForegroundSpawner
struct ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ForegroundSpawner::foreground1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foreground1_4;
	// UnityEngine.GameObject ForegroundSpawner::foreground2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foreground2_5;
	// UnityEngine.GameObject ForegroundSpawner::foreground3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foreground3_6;
	// UnityEngine.GameObject ForegroundSpawner::foreground4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foreground4_7;
	// UnityEngine.GameObject ForegroundSpawner::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_8;
	// UnityEngine.GameObject ForegroundSpawner::fore
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fore_9;
	// System.Boolean ForegroundSpawner::spawned
	bool ___spawned_10;
	// UnityEngine.Vector3 ForegroundSpawner::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_11;

public:
	inline static int32_t get_offset_of_foreground1_4() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___foreground1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foreground1_4() const { return ___foreground1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foreground1_4() { return &___foreground1_4; }
	inline void set_foreground1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foreground1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foreground1_4), (void*)value);
	}

	inline static int32_t get_offset_of_foreground2_5() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___foreground2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foreground2_5() const { return ___foreground2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foreground2_5() { return &___foreground2_5; }
	inline void set_foreground2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foreground2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foreground2_5), (void*)value);
	}

	inline static int32_t get_offset_of_foreground3_6() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___foreground3_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foreground3_6() const { return ___foreground3_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foreground3_6() { return &___foreground3_6; }
	inline void set_foreground3_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foreground3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foreground3_6), (void*)value);
	}

	inline static int32_t get_offset_of_foreground4_7() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___foreground4_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foreground4_7() const { return ___foreground4_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foreground4_7() { return &___foreground4_7; }
	inline void set_foreground4_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foreground4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foreground4_7), (void*)value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___player_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_8() const { return ___player_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_fore_9() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___fore_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fore_9() const { return ___fore_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fore_9() { return &___fore_9; }
	inline void set_fore_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fore_9), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_10() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___spawned_10)); }
	inline bool get_spawned_10() const { return ___spawned_10; }
	inline bool* get_address_of_spawned_10() { return &___spawned_10; }
	inline void set_spawned_10(bool value)
	{
		___spawned_10 = value;
	}

	inline static int32_t get_offset_of_position_11() { return static_cast<int32_t>(offsetof(ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F, ___position_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_11() const { return ___position_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_11() { return &___position_11; }
	inline void set_position_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_11 = value;
	}
};


// ObjectSpawner
struct ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ObjectSpawner::coin1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coin1_4;
	// UnityEngine.GameObject ObjectSpawner::coinh
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coinh_5;
	// UnityEngine.GameObject ObjectSpawner::coins
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___coins_6;
	// UnityEngine.GameObject ObjectSpawner::missile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___missile_7;
	// UnityEngine.GameObject ObjectSpawner::laser
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laser_8;
	// UnityEngine.GameObject ObjectSpawner::laser2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laser2_9;
	// UnityEngine.GameObject ObjectSpawner::laser3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laser3_10;
	// UnityEngine.GameObject ObjectSpawner::laser4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___laser4_11;
	// UnityEngine.GameObject ObjectSpawner::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_12;
	// UnityEngine.GameObject ObjectSpawner::spawned
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawned_13;
	// UnityEngine.Vector3 ObjectSpawner::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_14;
	// System.Single ObjectSpawner::timeOffCoin
	float ___timeOffCoin_15;
	// System.Single ObjectSpawner::spawnTimeCoin
	float ___spawnTimeCoin_16;
	// System.Single ObjectSpawner::timeOffMissile
	float ___timeOffMissile_17;
	// System.Single ObjectSpawner::spawnTimeMissile
	float ___spawnTimeMissile_18;
	// System.Single ObjectSpawner::RandomX
	float ___RandomX_19;
	// System.Single ObjectSpawner::RandomY
	float ___RandomY_20;
	// GameManager ObjectSpawner::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_22;

public:
	inline static int32_t get_offset_of_coin1_4() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___coin1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coin1_4() const { return ___coin1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coin1_4() { return &___coin1_4; }
	inline void set_coin1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coin1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coin1_4), (void*)value);
	}

	inline static int32_t get_offset_of_coinh_5() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___coinh_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coinh_5() const { return ___coinh_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coinh_5() { return &___coinh_5; }
	inline void set_coinh_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coinh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinh_5), (void*)value);
	}

	inline static int32_t get_offset_of_coins_6() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___coins_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_coins_6() const { return ___coins_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_coins_6() { return &___coins_6; }
	inline void set_coins_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___coins_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coins_6), (void*)value);
	}

	inline static int32_t get_offset_of_missile_7() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___missile_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_missile_7() const { return ___missile_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_missile_7() { return &___missile_7; }
	inline void set_missile_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___missile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missile_7), (void*)value);
	}

	inline static int32_t get_offset_of_laser_8() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___laser_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laser_8() const { return ___laser_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laser_8() { return &___laser_8; }
	inline void set_laser_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laser_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laser_8), (void*)value);
	}

	inline static int32_t get_offset_of_laser2_9() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___laser2_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laser2_9() const { return ___laser2_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laser2_9() { return &___laser2_9; }
	inline void set_laser2_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laser2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laser2_9), (void*)value);
	}

	inline static int32_t get_offset_of_laser3_10() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___laser3_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laser3_10() const { return ___laser3_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laser3_10() { return &___laser3_10; }
	inline void set_laser3_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laser3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laser3_10), (void*)value);
	}

	inline static int32_t get_offset_of_laser4_11() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___laser4_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_laser4_11() const { return ___laser4_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_laser4_11() { return &___laser4_11; }
	inline void set_laser4_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___laser4_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___laser4_11), (void*)value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___player_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_12() const { return ___player_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_12), (void*)value);
	}

	inline static int32_t get_offset_of_spawned_13() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___spawned_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawned_13() const { return ___spawned_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawned_13() { return &___spawned_13; }
	inline void set_spawned_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawned_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawned_13), (void*)value);
	}

	inline static int32_t get_offset_of_position_14() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___position_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_14() const { return ___position_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_14() { return &___position_14; }
	inline void set_position_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_14 = value;
	}

	inline static int32_t get_offset_of_timeOffCoin_15() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___timeOffCoin_15)); }
	inline float get_timeOffCoin_15() const { return ___timeOffCoin_15; }
	inline float* get_address_of_timeOffCoin_15() { return &___timeOffCoin_15; }
	inline void set_timeOffCoin_15(float value)
	{
		___timeOffCoin_15 = value;
	}

	inline static int32_t get_offset_of_spawnTimeCoin_16() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___spawnTimeCoin_16)); }
	inline float get_spawnTimeCoin_16() const { return ___spawnTimeCoin_16; }
	inline float* get_address_of_spawnTimeCoin_16() { return &___spawnTimeCoin_16; }
	inline void set_spawnTimeCoin_16(float value)
	{
		___spawnTimeCoin_16 = value;
	}

	inline static int32_t get_offset_of_timeOffMissile_17() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___timeOffMissile_17)); }
	inline float get_timeOffMissile_17() const { return ___timeOffMissile_17; }
	inline float* get_address_of_timeOffMissile_17() { return &___timeOffMissile_17; }
	inline void set_timeOffMissile_17(float value)
	{
		___timeOffMissile_17 = value;
	}

	inline static int32_t get_offset_of_spawnTimeMissile_18() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___spawnTimeMissile_18)); }
	inline float get_spawnTimeMissile_18() const { return ___spawnTimeMissile_18; }
	inline float* get_address_of_spawnTimeMissile_18() { return &___spawnTimeMissile_18; }
	inline void set_spawnTimeMissile_18(float value)
	{
		___spawnTimeMissile_18 = value;
	}

	inline static int32_t get_offset_of_RandomX_19() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___RandomX_19)); }
	inline float get_RandomX_19() const { return ___RandomX_19; }
	inline float* get_address_of_RandomX_19() { return &___RandomX_19; }
	inline void set_RandomX_19(float value)
	{
		___RandomX_19 = value;
	}

	inline static int32_t get_offset_of_RandomY_20() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___RandomY_20)); }
	inline float get_RandomY_20() const { return ___RandomY_20; }
	inline float* get_address_of_RandomY_20() { return &___RandomY_20; }
	inline void set_RandomY_20(float value)
	{
		___RandomY_20 = value;
	}

	inline static int32_t get_offset_of_gm_22() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388, ___gm_22)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_22() const { return ___gm_22; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_22() { return &___gm_22; }
	inline void set_gm_22(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_22), (void*)value);
	}
};

struct ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields
{
public:
	// System.Boolean ObjectSpawner::dead
	bool ___dead_21;

public:
	inline static int32_t get_offset_of_dead_21() { return static_cast<int32_t>(offsetof(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields, ___dead_21)); }
	inline bool get_dead_21() const { return ___dead_21; }
	inline bool* get_address_of_dead_21() { return &___dead_21; }
	inline void set_dead_21(bool value)
	{
		___dead_21 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UICoins
struct UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UICoins::textComp
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textComp_4;

public:
	inline static int32_t get_offset_of_textComp_4() { return static_cast<int32_t>(offsetof(UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651, ___textComp_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textComp_4() const { return ___textComp_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textComp_4() { return &___textComp_4; }
	inline void set_textComp_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textComp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComp_4), (void*)value);
	}
};


// UIDistance
struct UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIDistance::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.UI.Text UIDistance::textComp
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textComp_6;
	// System.Single UIDistance::playerStartX
	float ___playerStartX_7;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_textComp_6() { return static_cast<int32_t>(offsetof(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F, ___textComp_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textComp_6() const { return ___textComp_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textComp_6() { return &___textComp_6; }
	inline void set_textComp_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textComp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComp_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerStartX_7() { return static_cast<int32_t>(offsetof(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F, ___playerStartX_7)); }
	inline float get_playerStartX_7() const { return ___playerStartX_7; }
	inline float* get_address_of_playerStartX_7() { return &___playerStartX_7; }
	inline void set_playerStartX_7(float value)
	{
		___playerStartX_7 = value;
	}
};

struct UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields
{
public:
	// System.Boolean UIDistance::reset
	bool ___reset_5;
	// System.Int32 UIDistance::distance
	int32_t ___distance_8;

public:
	inline static int32_t get_offset_of_reset_5() { return static_cast<int32_t>(offsetof(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields, ___reset_5)); }
	inline bool get_reset_5() const { return ___reset_5; }
	inline bool* get_address_of_reset_5() { return &___reset_5; }
	inline void set_reset_5(bool value)
	{
		___reset_5 = value;
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields, ___distance_8)); }
	inline int32_t get_distance_8() const { return ___distance_8; }
	inline int32_t* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(int32_t value)
	{
		___distance_8 = value;
	}
};


// UIEndgame
struct UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UIEndgame::message
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___message_4;
	// System.Int32 UIEndgame::score
	int32_t ___score_5;
	// GameManager UIEndgame::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_6;

public:
	inline static int32_t get_offset_of_message_4() { return static_cast<int32_t>(offsetof(UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E, ___message_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_message_4() const { return ___message_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_message_4() { return &___message_4; }
	inline void set_message_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___message_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_4), (void*)value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_gm_6() { return static_cast<int32_t>(offsetof(UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E, ___gm_6)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_6() const { return ___gm_6; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_6() { return &___gm_6; }
	inline void set_gm_6(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_6), (void*)value);
	}
};


// UIMenu
struct UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager UIMenu::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}
};


// UIPause
struct UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager UIPause::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GameManager/GameState[]
struct GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Boolean System.Linq.Enumerable::Contains<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mD191D7048841E7CDD19CE1D5E3292C75FED25D68_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void GameManager/ChangeStateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeStateDelegate__ctor_m18130C68204F7496DE9E0CC6C2C4D07A402E0FCB (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// GameManager GameManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E (const RuntimeMethod* method);
// System.Void ActiveOnSomeStates::UpdateVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847 (ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2 * __this, const RuntimeMethod* method);
// GameManager/GameState GameManager::get_gameState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<GameManager/GameState>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisGameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2_mB7A5151461AD4ACD1642E5BB87BF09ECB2435D40 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mD191D7048841E7CDD19CE1D5E3292C75FED25D68_gshared)(___source0, ___value1, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void BackgroundSpawner::spawnBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundSpawner_spawnBackground_mFDCE65D5B34864901DC069E1C456A508301A960B (BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___layerNames0, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, float ___volume2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CharacterController2D::setFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_setFire_mCEDDA95B9A1FF9A8A299C16C0909C685ABB0E45F (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Void CharacterController2D::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleMovement_mCC92D7EA651B3CC4B129C2B3B0AB4815ECF98830 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Void CharacterController2D::HandleAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleAnimation_m2BAA29F5628A933655A900E1E58ED5687AF5CF40 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Void CharacterController2D::HandleInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleInteractions_mA40066A06415830685AA267DD61E07B4E8099F2D (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void GameManager::ChangeState(GameManager/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___nextState0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void ForegroundSpawner::spawnforeground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForegroundSpawner_spawnforeground_mC8A223752AF9D85AE754E8A6DE087F0AA566F0F4 (ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void GameManager::set_gameState(GameManager/GameState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_gameState_m9D5C18300C41280FA334BA6BD883933588A54B81_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Reset_mA71D1D96D0E38DEC1C7E61CE76675E314FE252C2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager/ChangeStateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeStateDelegate_Invoke_mB975547BF2665701D31699A358D0E7490E7F8DA1 (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, const RuntimeMethod* method);
// System.Void ObjectSpawner::spawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnCoin_m824621B5DE92C2B9EEC74B0E6E92A611F0C8A443 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method);
// System.Void ObjectSpawner::spawnMissile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnMissile_m116C4240BF08002BDBF5EA75EEFEF02AD901ED14 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method);
// System.Void ObjectSpawner::spawnLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnLaser_mDF761EDB224D8478D189C5FDCC673908BABD68E7 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UIDistance::resetVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance_resetVar_m87C59E96205C8F24CFEE440166EAE648F050DCA3 (UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
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
// System.Void ActiveOnSomeStates::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveOnSomeStates_Start_m14B5E7A4896D69A6D462F740BD9C7517693E95D7 (ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.changeStateDelegate += UpdateVisibility;
		ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_changeStateDelegate_2();
		ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * L_1 = (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 *)il2cpp_codegen_object_new(ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748_il2cpp_TypeInfo_var);
		ChangeStateDelegate__ctor_m18130C68204F7496DE9E0CC6C2C4D07A402E0FCB(L_1, __this, (intptr_t)((intptr_t)ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2;
		L_2 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_0, L_1, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_changeStateDelegate_2(((ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 *)CastclassSealed((RuntimeObject*)L_2, ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748_il2cpp_TypeInfo_var)));
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3;
		L_3 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_5(L_3);
		// UpdateVisibility();
		ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActiveOnSomeStates::UpdateVisibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveOnSomeStates_UpdateVisibility_m6275800F1FF6AB54FF0ED705EC5FBD8618B04847 (ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisGameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2_mB7A5151461AD4ACD1642E5BB87BF09ECB2435D40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeStates.Contains(gm.gameState))
		GameStateU5BU5D_tFB73CB63EBD4E7368E86698DB9CA4F7FDBCB0FDB* L_0 = __this->get_activeStates_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_5();
		int32_t L_2;
		L_2 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Enumerable_Contains_TisGameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2_mB7A5151461AD4ACD1642E5BB87BF09ECB2435D40((RuntimeObject*)(RuntimeObject*)L_0, L_2, /*hidden argument*/Enumerable_Contains_TisGameState_t6A84C59192C4BC149B4450173A5D8F0DA98158C2_mB7A5151461AD4ACD1642E5BB87BF09ECB2435D40_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0025:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActiveOnSomeStates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveOnSomeStates__ctor_m72C93843CEDB0D7E4BF12031DBA170A32CC1D14E (ActiveOnSomeStates_t3D95443BBF5E24A2301CDBD966FA1E59B38BBCA2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AttachFire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachFire_Start_m7C677BB4445CF03F233674EA7D088CCFA9F337DA (AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fire = Instantiate(Fire, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Fire_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fire_5(L_5);
		// fire.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_fire_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// fire.transform.position = (transform.position + fireCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_fire_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_fireCoords_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachFire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachFire_Update_m53769A60DBF1FC82D0CCD0E6DB40D5C43CD6C9C3 (AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0 * __this, const RuntimeMethod* method)
{
	{
		// fire.transform.position = (transform.position + fireCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fire_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_fireCoords_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// transform.position = transform.position - new Vector3(0.03f, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (0.0299999993f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_9, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachFire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachFire__ctor_m20BF4A61435FBD580E63BA617FADCF5A1CD8A6F8 (AttachFire_t196844D601E052C9C6F455C824526CAA1BBE84E0 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 fireCoords = new Vector3(0.34f, 0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (0.340000004f), (0.400000006f), /*hidden argument*/NULL);
		__this->set_fireCoords_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AttachLaser::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser_Start_mC1618F70B15133C0EB118072042AD59753B98273 (AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserSmoke = Instantiate(LaserSmoke, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LaserSmoke_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserSmoke_7(L_5);
		// laserSmoke.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// laserParticles = Instantiate(LaserParticles, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_LaserParticles_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserParticles_8(L_20);
		// laserParticles.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_22, L_23, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_29, /*hidden argument*/NULL);
		// laserRobot = Instantiate(LaserRobot, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_LaserRobot_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserRobot_9(L_35);
		// laserRobot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_37, L_38, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser_Update_m71033C372E01B176CEDA54EB024E775621E16B90 (AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8 * __this, const RuntimeMethod* method)
{
	{
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_11, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser__ctor_mE745FD2EC450CC04B24C5618746A249990F82CA8 (AttachLaser_tA4D8DE8767E730B57B1F8925E5EF9B67ACD30BF8 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 laserSmokeCoords = new Vector3(-0.25f, -0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (-0.25f), (-0.0f), /*hidden argument*/NULL);
		__this->set_laserSmokeCoords_10(L_0);
		// private Vector3 laserParticlesCoords = new Vector3(-0.15f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (-0.150000006f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_laserParticlesCoords_11(L_1);
		// private Vector3 laserRobotCoords = new Vector3(0.18f, 3.84f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (0.180000007f), (3.83999991f), /*hidden argument*/NULL);
		__this->set_laserRobotCoords_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AttachLaser2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser2_Start_m0D0D8806E2D606F35C976C3C609161F3D33CC0CF (AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserSmoke = Instantiate(LaserSmoke, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LaserSmoke_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserSmoke_7(L_5);
		// laserSmoke.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// laserParticles = Instantiate(LaserParticles, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_LaserParticles_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserParticles_8(L_20);
		// laserParticles.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_22, L_23, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_29, /*hidden argument*/NULL);
		// laserRobot = Instantiate(LaserRobot, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_LaserRobot_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserRobot_9(L_35);
		// laserRobot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_37, L_38, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser2_Update_m89CFAD9BC2F84B4457F96694576BCD91F603AEE6 (AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC * __this, const RuntimeMethod* method)
{
	{
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_11, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser2__ctor_m66D58A73F7DC4F2D61A5CB50E5C537CEC46A8AF7 (AttachLaser2_tA9407635DE7209185D22A178183D78B971DB80FC * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 laserSmokeCoords = new Vector3(0.25f, -0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (0.25f), (-0.0f), /*hidden argument*/NULL);
		__this->set_laserSmokeCoords_10(L_0);
		// private Vector3 laserParticlesCoords = new Vector3(0.15f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.150000006f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_laserParticlesCoords_11(L_1);
		// private Vector3 laserRobotCoords = new Vector3(-0.18f, 3.84f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (-0.180000007f), (3.83999991f), /*hidden argument*/NULL);
		__this->set_laserRobotCoords_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AttachLaser3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser3_Start_mFDD1B3792958BEA6E2370638BC98CA3D7B04FE20 (AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserSmoke = Instantiate(LaserSmoke, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LaserSmoke_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserSmoke_7(L_5);
		// laserSmoke.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// laserParticles = Instantiate(LaserParticles, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_LaserParticles_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserParticles_8(L_20);
		// laserParticles.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_22, L_23, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_29, /*hidden argument*/NULL);
		// laserRobot = Instantiate(LaserRobot, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_LaserRobot_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserRobot_9(L_35);
		// laserRobot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_37, L_38, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser3_Update_m762FF496B94882A7E13D16E27751E614E84A7152 (AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183 * __this, const RuntimeMethod* method)
{
	{
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_11, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser3__ctor_m15DF86BB8590408EE2E28024385BC4516A2FEDA2 (AttachLaser3_t126C22453BE49C272584BBA90058ACFADD20F183 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 laserSmokeCoords = new Vector3(-0.25f, -0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (-0.25f), (-0.0f), /*hidden argument*/NULL);
		__this->set_laserSmokeCoords_10(L_0);
		// private Vector3 laserParticlesCoords = new Vector3(-0.15f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (-0.150000006f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_laserParticlesCoords_11(L_1);
		// private Vector3 laserRobotCoords = new Vector3(0.18f, -3.84f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (0.180000007f), (-3.83999991f), /*hidden argument*/NULL);
		__this->set_laserRobotCoords_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AttachLaser4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser4_Start_m38F2BFD2652CC681FD4E6FE6FFA105524C79A7AF (AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// laserSmoke = Instantiate(LaserSmoke, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LaserSmoke_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserSmoke_7(L_5);
		// laserSmoke.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// laserParticles = Instantiate(LaserParticles, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_LaserParticles_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_18, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserParticles_8(L_20);
		// laserParticles.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_22, L_23, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_29, /*hidden argument*/NULL);
		// laserRobot = Instantiate(LaserRobot, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_LaserRobot_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_laserRobot_9(L_35);
		// laserRobot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_37, L_38, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser4_Update_m07683D3D7E41FA87729FBCF4E18B28A25CFC2BEE (AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB * __this, const RuntimeMethod* method)
{
	{
		// laserSmoke.transform.position = (transform.position + laserSmokeCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_laserSmoke_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_laserSmokeCoords_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_5, /*hidden argument*/NULL);
		// laserParticles.transform.position = (transform.position + laserParticlesCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laserParticles_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_laserParticlesCoords_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_11, /*hidden argument*/NULL);
		// laserRobot.transform.position = (transform.position + laserRobotCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_laserRobot_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = __this->get_laserRobotCoords_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttachLaser4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachLaser4__ctor_m2D79460E2776E1279EC19499E66B082E127EC946 (AttachLaser4_tCE48B4C533287D65E6701B30253CE17DBFB12DBB * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 laserSmokeCoords = new Vector3(0.25f, -0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (0.25f), (-0.0f), /*hidden argument*/NULL);
		__this->set_laserSmokeCoords_10(L_0);
		// private Vector3 laserParticlesCoords = new Vector3(0.15f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.150000006f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_laserParticlesCoords_11(L_1);
		// private Vector3 laserRobotCoords = new Vector3(-0.18f, -3.84f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_2), (-0.180000007f), (-3.83999991f), /*hidden argument*/NULL);
		__this->set_laserRobotCoords_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BackgroundSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundSpawner_Start_m28020D3EE1C8929F27B993A59C4CA37E636C6E77 (BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position = new Vector3(24.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (24.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_position_8(L_0);
		// back = Instantiate(background, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_background_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_position_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_back_6(L_5);
		// back.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_back_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// position = new Vector3(48.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), (48.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_position_8(L_9);
		// back = Instantiate(background, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_background_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_position_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_11, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_back_6(L_14);
		// back.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_back_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundSpawner_Update_mF255DD73C0ACB0EF2EA22E875FA788313ECC51C3 (BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3 * __this, const RuntimeMethod* method)
{
	{
		// if ((int)player.transform.position.x % 24 == 0 && spawned) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if (((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3)%(int32_t)((int32_t)24))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_4 = __this->get_spawned_7();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// spawned = false;
		__this->set_spawned_7((bool)0);
		// }
		return;
	}

IL_002b:
	{
		// else if ((int)player.transform.position.x % 12 == 0 && !spawned && (int)player.transform.position.x != 0 && !((int)player.transform.position.x % 24 == 0)) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		if (((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8)%(int32_t)((int32_t)12))))
		{
			goto IL_008e;
		}
	}
	{
		bool L_9 = __this->get_spawned_7();
		if (L_9)
		{
			goto IL_008e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		if (!il2cpp_codegen_cast_double_to_int<int32_t>(L_13))
		{
			goto IL_008e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		if (!((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_17)%(int32_t)((int32_t)24))))
		{
			goto IL_008e;
		}
	}
	{
		// spawnBackground();
		BackgroundSpawner_spawnBackground_mFDCE65D5B34864901DC069E1C456A508301A960B(__this, /*hidden argument*/NULL);
		// spawned = true;
		__this->set_spawned_7((bool)1);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void BackgroundSpawner::spawnBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundSpawner_spawnBackground_mFDCE65D5B34864901DC069E1C456A508301A960B (BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position = new Vector3(player.transform.position.x + 48.0f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), ((float)il2cpp_codegen_add((float)L_3, (float)(48.0f))), (0.0f), /*hidden argument*/NULL);
		__this->set_position_8(L_4);
		// back = Instantiate(background, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_background_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_position_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_6, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_back_6(L_9);
		// back.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_back_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundSpawner__ctor_m5FE51098D2203864C4299778A48A334B0C9DB061 (BackgroundSpawner_tC86AF9D6208852CA98C1E800EABE8CDFC49C55E3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m140D0956A03E1CD6C6DF9B74330BDA2A0813248F (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// xPosition = target.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_xPosition_6(L_2);
		// yPosition = target.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yPosition_7(L_5);
		// if (yPosition < 0.0f) yPosition = 0.0f;
		float L_6 = __this->get_yPosition_7();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// if (yPosition < 0.0f) yPosition = 0.0f;
		__this->set_yPosition_7((0.0f));
	}

IL_0044:
	{
		// if (yPosition > 2.0f) yPosition = 2.0f;
		float L_7 = __this->get_yPosition_7();
		if ((!(((float)L_7) > ((float)(2.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// if (yPosition > 2.0f) yPosition = 2.0f;
		__this->set_yPosition_7((2.0f));
	}

IL_005c:
	{
		// Vector3 initialPosition = new Vector3(xPosition, yPosition, target.position.z);
		float L_8 = __this->get_xPosition_6();
		float L_9 = __this->get_yPosition_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), L_8, L_9, L_12, /*hidden argument*/NULL);
		// Vector3 desiredPosition = initialPosition + offset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_offset_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19 = __this->get_smoothSpeed_5();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_17, L_18, ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		V_1 = L_21;
		// transform.position = smoothedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_1;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		// private float smoothSpeed = 10.0f;
		__this->set_smoothSpeed_5((10.0f));
		// private Vector3 offset = new Vector3(8, 0, -3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (8.0f), (0.0f), (-3.0f), /*hidden argument*/NULL);
		__this->set_offset_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CharacterController2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_FixedUpdate_m00D8CBF2991777D0875EB1D13AF8222831A2F0E8 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D74B14C6EB173C7A466E74BFB656569F534AC80);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// LayerMask mascara = LayerMask.GetMask("Collectable");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral2D74B14C6EB173C7A466E74BFB656569F534AC80);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2D74B14C6EB173C7A466E74BFB656569F534AC80);
		int32_t L_2;
		L_2 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_1, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3;
		L_3 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// RaycastHit2D hitCollectables = Physics2D.Raycast(transform.position, transform.up, 1.4f, mascara);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_10 = V_0;
		int32_t L_11;
		L_11 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_12;
		L_12 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_6, L_9, (1.39999998f), L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// if (hitCollectables.collider != null) {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13;
		L_13 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		// raycastTarget = hitCollectables.collider.gameObject;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15;
		L_15 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		__this->set_raycastTarget_23(L_16);
		// }
		return;
	}

IL_006c:
	{
		// raycastTarget = null;
		__this->set_raycastTarget_23((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_OnDrawGizmos_mBBA55AD66340A3E9BEE87FDCEE0FCD6E69506584 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.DrawRay(transform.position, transform.up * 1.4f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, (1.39999998f), /*hidden argument*/NULL);
		Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_OnTriggerEnter2D_m1DE0B23914EA3167C005037BCBE77E2F1EC39FC5 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A2BCC6DA933DBEC507ADA10E0599B08392B0168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Ground") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// onGround = true;
		__this->set_onGround_13((bool)1);
	}

IL_001e:
	{
		// if (col.gameObject.tag == "Enemy") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(zapClip, transform.position + new Vector3(8, 0, -3), 0.5f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_zapClip_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (8.0f), (0.0f), (-3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_11, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_8, L_12, (0.5f), /*hidden argument*/NULL);
		// dead = true;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_dead_17((bool)1);
		// deathTime = Time.time + timeOff;
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_14 = __this->get_timeOff_21();
		__this->set_deathTime_22(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_0081:
	{
		// if (col.gameObject.tag == "Enemy2") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral1A2BCC6DA933DBEC507ADA10E0599B08392B0168, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e4;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(boomClip, transform.position + new Vector3(8, 0, -3), 0.5f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_19 = __this->get_boomClip_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), (8.0f), (0.0f), (-3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_19, L_23, (0.5f), /*hidden argument*/NULL);
		// dead = true;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_dead_17((bool)1);
		// deathTime = Time.time + timeOff;
		float L_24;
		L_24 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_25 = __this->get_timeOff_21();
		__this->set_deathTime_22(((float)il2cpp_codegen_add((float)L_24, (float)L_25)));
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_OnTriggerStay2D_mA1ECCF22E6392FFB8B511FE774D2B53A2010781D (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Ground") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// onGround = true;
		__this->set_onGround_13((bool)1);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_OnTriggerExit2D_mBB81E461BA11CECC759B89BCB0E15288B401560B (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Ground") {
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// onGround = false;
		__this->set_onGround_13((bool)0);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Start_m3391889A8EBEE9ADC6497DCECB6CD8B8098543A3 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_24(L_0);
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_28(L_1);
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2;
		L_2 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_29(L_2);
		// raycastTarget = null;
		__this->set_raycastTarget_23((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// setFire();
		CharacterController2D_setFire_mCEDDA95B9A1FF9A8A299C16C0909C685ABB0E45F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Update_m9FF69F3540BD0A1EEB09127B485FCAD07314B562 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	{
		// if (gm.gameState != GameManager.GameState.GAME) return;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_29();
		int32_t L_1;
		L_1 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// if (gm.gameState != GameManager.GameState.GAME) return;
		return;
	}

IL_000f:
	{
		// HandleMovement();
		CharacterController2D_HandleMovement_mCC92D7EA651B3CC4B129C2B3B0AB4815ECF98830(__this, /*hidden argument*/NULL);
		// HandleAnimation();
		CharacterController2D_HandleAnimation_m2BAA29F5628A933655A900E1E58ED5687AF5CF40(__this, /*hidden argument*/NULL);
		// HandleInteractions();
		CharacterController2D_HandleInteractions_mA40066A06415830685AA267DD61E07B4E8099F2D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleMovement_mCC92D7EA651B3CC4B129C2B3B0AB4815ECF98830 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.Escape) && gm.gameState == GameManager.GameState.GAME) {
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_29();
		int32_t L_2;
		L_2 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// gm.ChangeState(GameManager.GameState.PAUSE);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_gm_29();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_3, 2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if (!dead) hAxis = Input.GetAxis("Horizontal");
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_4 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// if (!dead) hAxis = Input.GetAxis("Horizontal");
		float L_5;
		L_5 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_hAxis_20(L_5);
	}

IL_003a:
	{
		// flying = false;
		__this->set_flying_14((bool)0);
		// vAxis = 0;
		__this->set_vAxis_19((0.0f));
		// if (gameOn) {
		bool L_6 = __this->get_gameOn_15();
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		// if (hAxis <= 0) {
		float L_7 = __this->get_hAxis_20();
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		// hAxis = 0.5f;
		__this->set_hAxis_20((0.5f));
	}

IL_006c:
	{
		// if (hAxis > 0) {
		float L_8 = __this->get_hAxis_20();
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		// GetComponent<SpriteRenderer>().flipX = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_9, (bool)1, /*hidden argument*/NULL);
		// jetfire.transform.position = (transform.position + jetfireLeftCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_jetfire_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_jetfireLeftCoords_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_15, /*hidden argument*/NULL);
		// }
		goto IL_00ec;
	}

IL_00ad:
	{
		// else if (hAxis < 0) {
		float L_16 = __this->get_hAxis_20();
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// GetComponent<SpriteRenderer>().flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17;
		L_17 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_17, (bool)0, /*hidden argument*/NULL);
		// jetfire.transform.position = (transform.position + jetfireRightCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_jetfire_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_jetfireRightCoords_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_23, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// if (Input.GetKey(KeyCode.Space) && !dead) {
		bool L_24;
		L_24 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_25 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (L_25)
		{
			goto IL_014a;
		}
	}
	{
		// if (jump < 0.0f) jump = 0.01f;
		float L_26 = __this->get_jump_18();
		if ((!(((float)L_26) < ((float)(0.0f)))))
		{
			goto IL_0116;
		}
	}
	{
		// if (jump < 0.0f) jump = 0.01f;
		__this->set_jump_18((0.00999999978f));
		goto IL_0135;
	}

IL_0116:
	{
		// else if (jump < 2.0f) jump += 0.01f;
		float L_27 = __this->get_jump_18();
		if ((!(((float)L_27) < ((float)(2.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		// else if (jump < 2.0f) jump += 0.01f;
		float L_28 = __this->get_jump_18();
		__this->set_jump_18(((float)il2cpp_codegen_add((float)L_28, (float)(0.00999999978f))));
	}

IL_0135:
	{
		// vAxis = jump;
		float L_29 = __this->get_jump_18();
		__this->set_vAxis_19(L_29);
		// flying = true;
		__this->set_flying_14((bool)1);
		// }
		goto IL_017d;
	}

IL_014a:
	{
		// else if (!onGround) {
		bool L_30 = __this->get_onGround_13();
		if (L_30)
		{
			goto IL_017d;
		}
	}
	{
		// if (jump > -2.0f) {
		float L_31 = __this->get_jump_18();
		if ((!(((float)L_31) > ((float)(-2.0f)))))
		{
			goto IL_0171;
		}
	}
	{
		// jump -= 0.01f;
		float L_32 = __this->get_jump_18();
		__this->set_jump_18(((float)il2cpp_codegen_subtract((float)L_32, (float)(0.00999999978f))));
	}

IL_0171:
	{
		// vAxis = jump;
		float L_33 = __this->get_jump_18();
		__this->set_vAxis_19(L_33);
	}

IL_017d:
	{
		// if (dead) {
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_34 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (!L_34)
		{
			goto IL_01f5;
		}
	}
	{
		// if (hAxis < -0.2f) {
		float L_35 = __this->get_hAxis_20();
		if ((!(((float)L_35) < ((float)(-0.200000003f)))))
		{
			goto IL_01b1;
		}
	}
	{
		// GetComponent<SpriteRenderer>().flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_36;
		L_36 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_36, (bool)0, /*hidden argument*/NULL);
		// hAxis += 0.001f;
		float L_37 = __this->get_hAxis_20();
		__this->set_hAxis_20(((float)il2cpp_codegen_add((float)L_37, (float)(0.00100000005f))));
		// }
		goto IL_01f5;
	}

IL_01b1:
	{
		// else if (hAxis > 0.2f) {
		float L_38 = __this->get_hAxis_20();
		if ((!(((float)L_38) > ((float)(0.200000003f)))))
		{
			goto IL_01de;
		}
	}
	{
		// GetComponent<SpriteRenderer>().flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_39;
		L_39 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_39, (bool)0, /*hidden argument*/NULL);
		// hAxis -= 0.001f;
		float L_40 = __this->get_hAxis_20();
		__this->set_hAxis_20(((float)il2cpp_codegen_subtract((float)L_40, (float)(0.00100000005f))));
		// }
		goto IL_01f5;
	}

IL_01de:
	{
		// GetComponent<SpriteRenderer>().flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_41;
		L_41 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_41, (bool)0, /*hidden argument*/NULL);
		// hAxis = 0;
		__this->set_hAxis_20((0.0f));
	}

IL_01f5:
	{
		// if (Time.time > deathTime && dead) {
		float L_42;
		L_42 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_43 = __this->get_deathTime_22();
		if ((!(((float)L_42) > ((float)L_43))))
		{
			goto IL_027d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_44 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (!L_44)
		{
			goto IL_027d;
		}
	}
	{
		// hAxis = 0;
		__this->set_hAxis_20((0.0f));
		// vAxis = 0;
		__this->set_vAxis_19((0.0f));
		// movingDirection = new Vector3(hAxis, vAxis);
		float L_45 = __this->get_hAxis_20();
		float L_46 = __this->get_vAxis_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_47), L_45, L_46, /*hidden argument*/NULL);
		__this->set_movingDirection_25(L_47);
		// rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_48 = __this->get_rb_24();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = __this->get_movingDirection_25();
		float L_52 = __this->get_speed_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_51, L_52, /*hidden argument*/NULL);
		float L_54;
		L_54 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_55, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57;
		L_57 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_56, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_48, L_57, /*hidden argument*/NULL);
		// gm.ChangeState(GameManager.GameState.ENDGAME);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_58 = __this->get_gm_29();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_58, 3, /*hidden argument*/NULL);
	}

IL_027d:
	{
		// movingDirection = new Vector3(hAxis, vAxis);
		float L_59 = __this->get_hAxis_20();
		float L_60 = __this->get_vAxis_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_61), L_59, L_60, /*hidden argument*/NULL);
		__this->set_movingDirection_25(L_61);
		// rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_62 = __this->get_rb_24();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = __this->get_movingDirection_25();
		float L_66 = __this->get_speed_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_65, L_66, /*hidden argument*/NULL);
		float L_68;
		L_68 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_67, L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_64, L_69, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		L_71 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_70, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_62, L_71, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::HandleInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleInteractions_mA40066A06415830685AA267DD61E07B4E8099F2D (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (raycastTarget) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_raycastTarget_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		// if (Input.GetAxis("Interaction") != 0 || !gameOn) {
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, /*hidden argument*/NULL);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = __this->get_gameOn_15();
		if (L_3)
		{
			goto IL_0044;
		}
	}

IL_0029:
	{
		// gameOn = true;
		__this->set_gameOn_15((bool)1);
		// GameObject temp = raycastTarget;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_raycastTarget_23();
		// raycastTarget = null;
		__this->set_raycastTarget_23((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// Destroy(temp);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// }
		goto IL_009e;
	}

IL_0044:
	{
		// else if (gameOn) {
		bool L_5 = __this->get_gameOn_15();
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		// coins += 1;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_6 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_coins_5();
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_coins_5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// AudioSource.PlayClipAtPoint(coinClip, transform.position + new Vector3(8, 0, -3), 0.5f);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = __this->get_coinClip_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (8.0f), (0.0f), (-3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_7, L_11, (0.5f), /*hidden argument*/NULL);
		// GameObject temp = raycastTarget;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_raycastTarget_23();
		// raycastTarget = null;
		__this->set_raycastTarget_23((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// Destroy(temp);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// if (coins >= 0) coinsUI = coins;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_13 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_coins_5();
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_00b0;
		}
	}
	{
		// if (coins >= 0) coinsUI = coins;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_14 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_coins_5();
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_coinsUI_4(L_14);
	}

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::HandleAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_HandleAnimation_m2BAA29F5628A933655A900E1E58ED5687AF5CF40 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652C5E270CB47C8078E282123F22FB8685734496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5B67D73F83D52D1B87B3EA43C5660F30E176177);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6D650E5FE77B61390ADAC37AF15166D519F520B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (dead) {
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_0 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// animator.SetBool("isMoving", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_1, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("isDead", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0064;
	}

IL_002b:
	{
		// else if (onGround && hAxis != 0) {
		bool L_3 = __this->get_onGround_13();
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		float L_4 = __this->get_hAxis_20();
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0053;
		}
	}
	{
		// animator.SetBool("isMoving", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_5, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0064;
	}

IL_0053:
	{
		// animator.SetBool("isMoving", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// if (!onGround && flying && !dead) {
		bool L_7 = __this->get_onGround_13();
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		bool L_8 = __this->get_flying_14();
		if (!L_8)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_9 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (L_9)
		{
			goto IL_009f;
		}
	}
	{
		// animator.SetBool("isFlying", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_10, _stringLiteralE6D650E5FE77B61390ADAC37AF15166D519F520B, (bool)1, /*hidden argument*/NULL);
		// jetfire.GetComponent<Renderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_jetfire_12();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_12;
		L_12 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_11, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_12, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_011e;
	}

IL_009f:
	{
		// else if (!onGround && !flying && !dead) {
		bool L_13 = __this->get_onGround_13();
		if (L_13)
		{
			goto IL_00eb;
		}
	}
	{
		bool L_14 = __this->get_flying_14();
		if (L_14)
		{
			goto IL_00eb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_15 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		if (L_15)
		{
			goto IL_00eb;
		}
	}
	{
		// animator.SetBool("isFlying", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_16, _stringLiteralE6D650E5FE77B61390ADAC37AF15166D519F520B, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("isFalling", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_17, _stringLiteralC5B67D73F83D52D1B87B3EA43C5660F30E176177, (bool)1, /*hidden argument*/NULL);
		// jetfire.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_jetfire_12();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_19;
		L_19 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_18, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_19, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_011e;
	}

IL_00eb:
	{
		// animator.SetBool("isFlying", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_20 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_20, _stringLiteralE6D650E5FE77B61390ADAC37AF15166D519F520B, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("isFalling", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_21, _stringLiteralC5B67D73F83D52D1B87B3EA43C5660F30E176177, (bool)0, /*hidden argument*/NULL);
		// jetfire.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_jetfire_12();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_22, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_23, (bool)0, /*hidden argument*/NULL);
	}

IL_011e:
	{
		// switch (restart) {
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_24 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_restart_16();
		V_0 = L_24;
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_015b;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_016c;
		}
	}
	{
		// animator.SetBool("isDead", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_27 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_27, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("isRestart", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_28 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_28, _stringLiteral652C5E270CB47C8078E282123F22FB8685734496, (bool)1, /*hidden argument*/NULL);
		// restart--;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_29 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_restart_16();
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_restart_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)));
		// break;
		return;
	}

IL_015b:
	{
		// animator.SetBool("isRestart", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_30 = __this->get_animator_28();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_30, _stringLiteral652C5E270CB47C8078E282123F22FB8685734496, (bool)0, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::setFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_setFire_mCEDDA95B9A1FF9A8A299C16C0909C685ABB0E45F (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jetfire = Instantiate(Fire, transform.position, transform.rotation) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Fire_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_jetfire_12(L_5);
		// jetfire.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_jetfire_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// jetfire.transform.position = (transform.position + jetfireRightCoords);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_jetfire_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_jetfireRightCoords_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_13, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_14, /*hidden argument*/NULL);
		// jetfire.transform.rotation = (Quaternion.Euler(0, 0, -90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_jetfire_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_17, /*hidden argument*/NULL);
		// jetfire.GetComponent<Renderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_jetfire_12();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_19;
		L_19 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_18, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_19, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D__ctor_m5C93DA812470EF6163E25545DED6CA554BBA83F7 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 30.0f;
		__this->set_speed_10((30.0f));
		// private float timeOff = 2;
		__this->set_timeOff_21((2.0f));
		// private Vector3 jetfireLeftCoords = new Vector3(-0.56f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (-0.560000002f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_jetfireLeftCoords_26(L_0);
		// private Vector3 jetfireRightCoords = new Vector3(0.14f, -0.4f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_1), (0.140000001f), (-0.400000006f), /*hidden argument*/NULL);
		__this->set_jetfireRightCoords_27(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterController2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D__cctor_m87A487B837B7DD0DE3062D214C92395867A585B9 (const RuntimeMethod* method)
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
// System.Void Collectable::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable_OnTriggerEnter2D_mE2EB3E31C2A2C09D7BAA74D0B4675EA0ACC22072 (Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Collectable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable_Start_mDEA091BFCEEC9C19BB4C2D75B20C4599B2947382 (Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_10(L_0);
		// }
		return;
	}
}
// System.Void Collectable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable_Update_m5CCD3F6E6872C7924BCCA9FDF868D98146E9BD52 (Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yAxis = (float)Math.Cos((graus * (Math.PI)) / 180 );
		int32_t L_0 = __this->get_graus_7();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_0)), (double)(3.1415926535897931)))/(double)(180.0))));
		__this->set_yAxis_6(((float)((float)L_1)));
		// if (graus >= 180) {
		int32_t L_2 = __this->get_graus_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)180))))
		{
			goto IL_003d;
		}
	}
	{
		// up = false;
		__this->set_up_8((bool)0);
		// } else if (graus <= 0) {
		goto IL_004d;
	}

IL_003d:
	{
		// } else if (graus <= 0) {
		int32_t L_3 = __this->get_graus_7();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		// up = true;
		__this->set_up_8((bool)1);
	}

IL_004d:
	{
		// if (up) graus++;
		bool L_4 = __this->get_up_8();
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// if (up) graus++;
		int32_t L_5 = __this->get_graus_7();
		__this->set_graus_7(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		goto IL_0073;
	}

IL_0065:
	{
		// else graus --;
		int32_t L_6 = __this->get_graus_7();
		__this->set_graus_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
	}

IL_0073:
	{
		// movingDirection = new Vector3(xAxis, yAxis);
		float L_7 = __this->get_xAxis_5();
		float L_8 = __this->get_yAxis_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), L_7, L_8, /*hidden argument*/NULL);
		__this->set_movingDirection_9(L_9);
		// rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rb_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_movingDirection_9();
		float L_14 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_18, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_10, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Collectable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectable__ctor_m283E3DFE718EBEB3A74977E19FEBE5F4B4EF3498 (Collectable_tD71EE05E8921745E09668E5687A5F296B2D2375D * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 2.0f;
		__this->set_speed_4((2.0f));
		// private int graus = -90;
		__this->set_graus_7(((int32_t)-90));
		// private bool up = true;
		__this->set_up_8((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DestroyDistant::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDistant_Start_m5261A8DE55A59B814ED1B7FB8D33021E211B6B95 (DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral765EC736B7DF3074084DED8E3251969235884D7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("MainCharacter");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral765EC736B7DF3074084DED8E3251969235884D7A, /*hidden argument*/NULL);
		__this->set_player_4(L_0);
		// destroyDistance = 30;
		__this->set_destroyDistance_5(((int32_t)30));
		// if (gameObject.tag == "Enemy") {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// destroyDistance = 25;
		__this->set_destroyDistance_5(((int32_t)25));
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void DestroyDistant::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDistant_Update_mC398001BEFC2DF176C009AC47FCB26441A629C77 (DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.transform.position.x - transform.position.x > destroyDistance) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		int32_t L_7 = __this->get_destroyDistance_5();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_6))) > ((float)((float)((float)L_7))))))
		{
			goto IL_003a;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void DestroyDistant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyDistant__ctor_m1A4004C0C5BBC85A38A3864B35A7AD60A94BF553 (DestroyDistant_t835FDE612DE0EA571C436E0B996828D9DC16B201 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ForegroundSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForegroundSpawner_Start_m937896F884FDE594E7C6C60B39AF766DE62BF6A2 (ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position = new Vector3(24.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_0), (24.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_position_11(L_0);
		// fore = Instantiate(foreground2, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_foreground2_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_5);
		// fore.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_fore_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_7, L_8, /*hidden argument*/NULL);
		// position = new Vector3(48.0f, 0.0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), (48.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_position_11(L_9);
		// fore = Instantiate(foreground4, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_foreground4_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_11, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_14);
		// fore.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_fore_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ForegroundSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForegroundSpawner_Update_mDD49B86C1CCFF4EFF034173D42EA5A087E8658DF (ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F * __this, const RuntimeMethod* method)
{
	{
		// if ((int)player.transform.position.x % 24 == 0 && spawned) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if (((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3)%(int32_t)((int32_t)24))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_4 = __this->get_spawned_10();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// spawned = false;
		__this->set_spawned_10((bool)0);
		// }
		return;
	}

IL_002b:
	{
		// else if ((int)player.transform.position.x % 12 == 0 && !spawned && (int)player.transform.position.x != 0 && !((int)player.transform.position.x % 24 == 0)) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		if (((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_8)%(int32_t)((int32_t)12))))
		{
			goto IL_008e;
		}
	}
	{
		bool L_9 = __this->get_spawned_10();
		if (L_9)
		{
			goto IL_008e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		if (!il2cpp_codegen_cast_double_to_int<int32_t>(L_13))
		{
			goto IL_008e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		if (!((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_17)%(int32_t)((int32_t)24))))
		{
			goto IL_008e;
		}
	}
	{
		// spawnforeground();
		ForegroundSpawner_spawnforeground_mC8A223752AF9D85AE754E8A6DE087F0AA566F0F4(__this, /*hidden argument*/NULL);
		// spawned = true;
		__this->set_spawned_10((bool)1);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void ForegroundSpawner::spawnforeground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForegroundSpawner_spawnforeground_mC8A223752AF9D85AE754E8A6DE087F0AA566F0F4 (ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int choose = Random.Range(1, 5);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		V_0 = L_0;
		// position = new Vector3(player.transform.position.x + 48.0f, 0.0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_5), ((float)il2cpp_codegen_add((float)L_4, (float)(48.0f))), (0.0f), /*hidden argument*/NULL);
		__this->set_position_11(L_5);
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_0098;
			}
			case 3:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_0050:
	{
		// fore = Instantiate(foreground1, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_foreground1_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_8, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_11);
		// break;
		goto IL_00de;
	}

IL_0074:
	{
		// fore = Instantiate(foreground2, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_foreground2_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_12, L_13, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_16);
		// break;
		goto IL_00de;
	}

IL_0098:
	{
		// fore = Instantiate(foreground3, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_foreground3_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_17, L_18, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_21);
		// break;
		goto IL_00de;
	}

IL_00bc:
	{
		// fore = Instantiate(foreground4, position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_foreground4_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = __this->get_position_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
		L_25 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_22, L_23, L_25, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_fore_9(L_26);
	}

IL_00de:
	{
		// fore.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_fore_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ForegroundSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForegroundSpawner__ctor_m60390DF6B1147C1403D7C3EBDA84EECB21C36716 (ForegroundSpawner_t96FE4B7527BF046E62AC582A3CC5270CE5FB918F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// GameManager/GameState GameManager::get_gameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public GameState gameState {get; private set;}
		int32_t L_0 = __this->get_U3CgameStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GameManager::set_gameState(GameManager/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_gameState_m9D5C18300C41280FA334BA6BD883933588A54B81 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GameState gameState {get; private set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgameStateU3Ek__BackingField_0(L_0);
		return;
	}
}
// GameManager GameManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(_instance == null) {
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__instance_1();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _instance = new GameManager();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 *)il2cpp_codegen_object_new(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D(L_1, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set__instance_1(L_1);
	}

IL_0011:
	{
		// return _instance;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get__instance_1();
		return L_2;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// private GameManager() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// gameState = GameState.MENU;
		GameManager_set_gameState_m9D5C18300C41280FA334BA6BD883933588A54B81_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ChangeState(GameManager/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___nextState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameState == GameState.ENDGAME && nextState == GameState.GAME) Reset();
		int32_t L_0;
		L_0 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___nextState0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		// if (gameState == GameState.ENDGAME && nextState == GameState.GAME) Reset();
		GameManager_Reset_mA71D1D96D0E38DEC1C7E61CE76675E314FE252C2(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (gameState == GameState.MENU && nextState == GameState.GAME) Reset();
		int32_t L_2;
		L_2 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = ___nextState0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// if (gameState == GameState.MENU && nextState == GameState.GAME) Reset();
		GameManager_Reset_mA71D1D96D0E38DEC1C7E61CE76675E314FE252C2(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// gameState = nextState;
		int32_t L_4 = ___nextState0;
		GameManager_set_gameState_m9D5C18300C41280FA334BA6BD883933588A54B81_inline(__this, L_4, /*hidden argument*/NULL);
		// changeStateDelegate();
		ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_changeStateDelegate_2();
		ChangeStateDelegate_Invoke_mB975547BF2665701D31699A358D0E7490E7F8DA1(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Reset_mA71D1D96D0E38DEC1C7E61CE76675E314FE252C2 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CharacterController2D.coins = -1;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_coins_5((-1));
		// CharacterController2D.coinsUI = 0;
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_coinsUI_4(0);
		// CharacterController2D.dead = false;
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_dead_17((bool)0);
		// CharacterController2D.restart = 2;
		((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->set_restart_16(2);
		// UIDistance.reset = true;
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->set_reset_5((bool)1);
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
// System.Void ObjectSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Start_mB5C9193D6076E2D9586CA1F5862D4C7D9AF008DE (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dead = CharacterController2D.dead;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_0 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		((ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var))->set_dead_21(L_0);
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_22(L_1);
		// }
		return;
	}
}
// System.Void ObjectSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Update_mBCDB36C4FF21AC8AF713E11BDB1FE504B0EC8D19 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gm.gameState != GameManager.GameState.GAME) return;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_22();
		int32_t L_1;
		L_1 = GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		// if (gm.gameState != GameManager.GameState.GAME) return;
		return;
	}

IL_000f:
	{
		// transform.position = new Vector3(player.transform.position.x + 25, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), ((float)il2cpp_codegen_add((float)L_6, (float)(25.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
		// dead = CharacterController2D.dead;
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		bool L_8 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_dead_17();
		((ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var))->set_dead_21(L_8);
		// if (Time.time > spawnTimeCoin && player.transform.position.x > 20 && !dead) {
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_10 = __this->get_spawnTimeCoin_16();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0096;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		if ((!(((float)L_14) > ((float)(20.0f)))))
		{
			goto IL_0096;
		}
	}
	{
		bool L_15 = ((ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var))->get_dead_21();
		if (L_15)
		{
			goto IL_0096;
		}
	}
	{
		// spawnCoin();
		ObjectSpawner_spawnCoin_m824621B5DE92C2B9EEC74B0E6E92A611F0C8A443(__this, /*hidden argument*/NULL);
		// spawnTimeCoin = Time.time + timeOffCoin;
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_17 = __this->get_timeOffCoin_15();
		__this->set_spawnTimeCoin_16(((float)il2cpp_codegen_add((float)L_16, (float)L_17)));
	}

IL_0096:
	{
		// if (Time.time > spawnTimeMissile && player.transform.position.x > 50 && !dead) {
		float L_18;
		L_18 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_19 = __this->get_spawnTimeMissile_18();
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_player_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		if ((!(((float)L_23) > ((float)(50.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		bool L_24 = ((ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_StaticFields*)il2cpp_codegen_static_fields_for(ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388_il2cpp_TypeInfo_var))->get_dead_21();
		if (L_24)
		{
			goto IL_00e4;
		}
	}
	{
		// spawnMissile();
		ObjectSpawner_spawnMissile_m116C4240BF08002BDBF5EA75EEFEF02AD901ED14(__this, /*hidden argument*/NULL);
		// spawnLaser();
		ObjectSpawner_spawnLaser_mDF761EDB224D8478D189C5FDCC673908BABD68E7(__this, /*hidden argument*/NULL);
		// spawnTimeMissile = Time.time + timeOffMissile;
		float L_25;
		L_25 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_26 = __this->get_timeOffMissile_17();
		__this->set_spawnTimeMissile_18(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_00e4:
	{
		// }
		return;
	}
}
// System.Void ObjectSpawner::spawnCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnCoin_m824621B5DE92C2B9EEC74B0E6E92A611F0C8A443 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RandomX = Random.Range(0, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		__this->set_RandomX_19(((float)((float)L_0)));
		// RandomY = Random.Range(-3, 5);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 5, /*hidden argument*/NULL);
		__this->set_RandomY_20(((float)((float)L_1)));
		// Instantiate(coin1, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_coin1_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_RandomX_19();
		float L_6 = __this->get_RandomY_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_5, L_6, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_2, L_8, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// RandomX = Random.Range(3, 6);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(3, 6, /*hidden argument*/NULL);
		__this->set_RandomX_19(((float)((float)L_12)));
		// RandomY = Random.Range(-3, 5);
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 5, /*hidden argument*/NULL);
		__this->set_RandomY_20(((float)((float)L_13)));
		// Instantiate(coinh, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_coinh_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_RandomX_19();
		float L_18 = __this->get_RandomY_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_17, L_18, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_14, L_20, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// RandomX = Random.Range(6, 9);
		int32_t L_24;
		L_24 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(6, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_RandomX_19(((float)((float)L_24)));
		// RandomY = Random.Range(-3, 5);
		int32_t L_25;
		L_25 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 5, /*hidden argument*/NULL);
		__this->set_RandomY_20(((float)((float)L_25)));
		// Instantiate(coins, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_coins_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_RandomX_19();
		float L_30 = __this->get_RandomY_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), L_29, L_30, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_26, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectSpawner::spawnMissile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnMissile_m116C4240BF08002BDBF5EA75EEFEF02AD901ED14 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RandomY = Random.Range(-3, 5);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-3), 5, /*hidden argument*/NULL);
		__this->set_RandomY_20(((float)((float)L_0)));
		// Instantiate(missile, transform.position + new Vector3(4, RandomY, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_missile_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_RandomY_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (4.0f), L_4, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_6, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectSpawner::spawnLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_spawnLaser_mDF761EDB224D8478D189C5FDCC673908BABD68E7 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// RandomX = Random.Range(-2, 3);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-2), 3, /*hidden argument*/NULL);
		__this->set_RandomX_19(((float)((float)L_0)));
		// float randomNum = Random.Range(1, 5);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 5, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_1));
		float L_2 = V_0;
		if ((((float)L_2) == ((float)(1.0f))))
		{
			goto IL_003f;
		}
	}
	{
		float L_3 = V_0;
		if ((((float)L_3) == ((float)(2.0f))))
		{
			goto IL_007c;
		}
	}
	{
		float L_4 = V_0;
		if ((((float)L_4) == ((float)(3.0f))))
		{
			goto IL_00b9;
		}
	}
	{
		float L_5 = V_0;
		if ((((float)L_5) == ((float)(4.0f))))
		{
			goto IL_00f6;
		}
	}
	{
		return;
	}

IL_003f:
	{
		// Instantiate(laser, transform.position + new Vector3(RandomX, -4, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_laser_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_RandomX_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_9, (-4.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_11, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// break;
		return;
	}

IL_007c:
	{
		// Instantiate(laser2, transform.position + new Vector3(RandomX, -4, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_laser2_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_RandomX_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_18, (-4.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_15, L_20, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// break;
		return;
	}

IL_00b9:
	{
		// Instantiate(laser3, transform.position + new Vector3(RandomX, 4.72f, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_laser3_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_RandomX_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), L_27, (4.71999979f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_28, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31;
		L_31 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_24, L_29, L_31, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// break;
		return;
	}

IL_00f6:
	{
		// Instantiate(laser4, transform.position + new Vector3(RandomX, 4.72f, 0), transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_laser4_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = __this->get_RandomX_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_36, (4.71999979f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_35, L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40;
		L_40 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_33, L_38, L_40, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner__ctor_mD103BAD86ABBCFC5726513C071E31158C1A150D3 (ObjectSpawner_tF3A67BD2E71567BED1D0B7E4E8756B9C92D4E388 * __this, const RuntimeMethod* method)
{
	{
		// private float timeOffCoin = 2;
		__this->set_timeOffCoin_15((2.0f));
		// private float timeOffMissile = 6;
		__this->set_timeOffMissile_17((6.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UICoins::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICoins_Start_m6D84A48EFD9F2A099A14F590E4C1C695F1FB3A46 (UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textComp = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_textComp_4(L_0);
		// }
		return;
	}
}
// System.Void UICoins::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICoins_Update_m5511A0F1570BF9D2045C2BC297FF914CF4177804 (UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F71B24EA2E5451BD3C26748262E8046A44FD46C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textComp.text = $"{CharacterController2D.coinsUI} coins";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textComp_4();
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_coinsUI_4();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4F71B24EA2E5451BD3C26748262E8046A44FD46C, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void UICoins::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICoins__ctor_m84948FEB17C61AA7F350B9F01CEA42C7BBBF04DA (UICoins_t7165E7407796051A26AC3EF8BAF743A3F8C8F651 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIDistance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance_Start_m55498D0657FC93899E138D3254C605830D7F8306 (UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerStartX = player.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_playerStartX_7(L_3);
		// textComp = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_textComp_6(L_4);
		// }
		return;
	}
}
// System.Void UIDistance::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance_Update_mD71588AA162A763C14268E469998156291E52F7D (UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D4999486114FC9252665845E0B2D8E4140076D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9150854E20960D7C4FF22DA43731C86836B37759);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F19D72B6FC236B040D8D07A377D8AAC5C8571C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC391C7F65B84B17D2E9B0B73C83A64A82E844FAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reset) resetVar();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		bool L_0 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_reset_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (reset) resetVar();
		UIDistance_resetVar_m87C59E96205C8F24CFEE440166EAE648F050DCA3(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// distance = (int)(player.transform.position.x - playerStartX);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_playerStartX_7();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->set_distance_8(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5))));
		// if (distance < 10) textComp.text = $"000{distance} m";
		int32_t L_6 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0058;
		}
	}
	{
		// if (distance < 10) textComp.text = $"000{distance} m";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_textComp_6();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_8 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB2F19D72B6FC236B040D8D07A377D8AAC5C8571C, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_11);
		return;
	}

IL_0058:
	{
		// else if (distance < 100) textComp.text = $"00{distance} m";
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_12 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)100))))
		{
			goto IL_0081;
		}
	}
	{
		// else if (distance < 100) textComp.text = $"00{distance} m";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_textComp_6();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_14 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralC391C7F65B84B17D2E9B0B73C83A64A82E844FAC, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		return;
	}

IL_0081:
	{
		// else if (distance < 1000) textComp.text = $"0{distance} m";
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_18 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_00ad;
		}
	}
	{
		// else if (distance < 1000) textComp.text = $"0{distance} m";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_textComp_6();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_20 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3D4999486114FC9252665845E0B2D8E4140076D2, L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_23);
		return;
	}

IL_00ad:
	{
		// else textComp.text = $"{distance} m";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_textComp_6();
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_25 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9150854E20960D7C4FF22DA43731C86836B37759, L_27, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_28);
		// }
		return;
	}
}
// System.Void UIDistance::resetVar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance_resetVar_m87C59E96205C8F24CFEE440166EAE648F050DCA3 (UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerStartX = player.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_playerStartX_7(L_3);
		// reset = false;
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->set_reset_5((bool)0);
		// }
		return;
	}
}
// System.Void UIDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance__ctor_mFFDC683ED43EE855A8F6E1422FDE6D0136967655 (UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDistance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDistance__cctor_m586D8F0DD70642B93308E90EDB08DFA069A6C3A1 (const RuntimeMethod* method)
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
// System.Void UIEndgame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEndgame_OnEnable_m84A4DBE73EAD01B4BBB2B5E7A4F954FA3BE33510 (UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_6(L_0);
		// score = (int)(UIDistance.distance + 10*CharacterController2D.coins);
		IL2CPP_RUNTIME_CLASS_INIT(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_StaticFields*)il2cpp_codegen_static_fields_for(UIDistance_tD38A3A9809834CCBB4FBC46DCACA6493753B806F_il2cpp_TypeInfo_var))->get_distance_8();
		IL2CPP_RUNTIME_CLASS_INIT(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var);
		int32_t L_2 = ((CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_StaticFields*)il2cpp_codegen_static_fields_for(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A_il2cpp_TypeInfo_var))->get_coins_5();
		__this->set_score_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)10), (int32_t)L_2)))));
		// message.text = $"{score}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_message_4();
		int32_t L_4 = __this->get_score_5();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// }
		return;
	}
}
// System.Void UIEndgame::Voltar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEndgame_Voltar_m4CE9DAF27BDF6B7FF56F492223FD55CC1CFCC7EF (UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E * __this, const RuntimeMethod* method)
{
	{
		// gm.ChangeState(GameManager.GameState.GAME);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_6();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIEndgame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIEndgame__ctor_m3F9A2BF6543273CE3A5C2E09AD67BB9FA63989B9 (UIEndgame_t1E27B700BC13871D646F16EC61E9336030FC784E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIMenu::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_OnEnable_m5056B815196007F40D74F9540242080E2A2C1449 (UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA * __this, const RuntimeMethod* method)
{
	{
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_4(L_0);
		// }
		return;
	}
}
// System.Void UIMenu::Comecar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_Comecar_m93CF9C385FF196AE185EDCFB796C1A2F0610859C (UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA * __this, const RuntimeMethod* method)
{
	{
		// gm.ChangeState(GameManager.GameState.GAME);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu__ctor_m956FF63C48958713397F80F3B5304FB2312478A6 (UIMenu_t44000DC242D813A3E665E6868ABCFD4D8B270EDA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIPause::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_OnEnable_mBAECD083E51D69429451D804CA9442968716F334 (UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384 * __this, const RuntimeMethod* method)
{
	{
		// gm = GameManager.GetInstance();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_GetInstance_m379E163F7FCA897C49E009A068C85C8CE2D8E05E(/*hidden argument*/NULL);
		__this->set_gm_4(L_0);
		// }
		return;
	}
}
// System.Void UIPause::Retornar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Retornar_mD5EC4283A2662D7EC8BA1CF553D4D0B239259CE1 (UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384 * __this, const RuntimeMethod* method)
{
	{
		// gm.ChangeState(GameManager.GameState.GAME);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_0, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Inicio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Inicio_mA22337593576E5EF405915722A6E122BA1D86BDB (UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384 * __this, const RuntimeMethod* method)
{
	{
		// gm.ChangeState(GameManager.GameState.MENU);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gm_4();
		GameManager_ChangeState_m95313233AD692F28A4655C55F185334FA1A3C2D5(L_0, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause__ctor_m981DFA0A2EF057F93BFCF63670B41BA9E71357CB (UIPause_tD6B0F16BBC5F644A072EC5D89059AF619C5A0384 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/ChangeStateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeStateDelegate__ctor_m18130C68204F7496DE9E0CC6C2C4D07A402E0FCB (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GameManager/ChangeStateDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeStateDelegate_Invoke_mB975547BF2665701D31699A358D0E7490E7F8DA1 (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult GameManager/ChangeStateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangeStateDelegate_BeginInvoke_m7C8AC736BE819752C608C4727A5653325437D32D (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void GameManager/ChangeStateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeStateDelegate_EndInvoke_m18DF6DF4B6321AF94C8FE07A7FB51BB5FA23137A (ChangeStateDelegate_tCAC56B2B60A9E5D28F788A1000F7A7C837C09748 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_gameState_m786B621AAA5E0BDD291AEAE74CE88DF973C1E381_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public GameState gameState {get; private set;}
		int32_t L_0 = __this->get_U3CgameStateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_gameState_m9D5C18300C41280FA334BA6BD883933588A54B81_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public GameState gameState {get; private set;}
		int32_t L_0 = ___value0;
		__this->set_U3CgameStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
