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

// bgmove
struct bgmove_t2904137110;
// Bomb
struct Bomb_t2076354;
// CreateGround
struct CreateGround_t1354632643;
// GroundPart
struct GroundPart_t3222237754;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// destroyafter
struct destroyafter_t2981777954;
// runner
struct runner_t3375161136;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Collision
struct Collision_t2494107688;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_bgmove2904137110.h"
#include "AssemblyU2DCSharp_bgmove2904137110MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "AssemblyU2DCSharp_Bomb2076354.h"
#include "AssemblyU2DCSharp_Bomb2076354MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_CreateGround1354632643.h"
#include "AssemblyU2DCSharp_CreateGround1354632643MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_Int321153838500.h"
#include "AssemblyU2DCSharp_GroundPart3222237754.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "AssemblyU2DCSharp_destroyafter2981777954.h"
#include "AssemblyU2DCSharp_destroyafter2981777954MethodDeclarations.h"
#include "AssemblyU2DCSharp_GroundPart3222237754MethodDeclarations.h"
#include "AssemblyU2DCSharp_runner3375161136.h"
#include "AssemblyU2DCSharp_runner3375161136MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Collision2494107688.h"
#include "UnityEngine_UnityEngine_Collision2494107688MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<GroundPart>()
#define GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(__this, method) ((  GroundPart_t3222237754 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<bgmove>()
#define GameObject_GetComponent_Tisbgmove_t2904137110_m116062983(__this, method) ((  bgmove_t2904137110 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Bomb>()
#define GameObject_GetComponent_TisBomb_t2076354_m3421854171(__this, method) ((  Bomb_t2076354 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3133387403_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3133387403(__this /* static, unused */, p0, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t3674682005_m3917608929(__this /* static, unused */, p0, method) ((  GameObject_t3674682005 * (*) (Il2CppObject * /* static, unused */, GameObject_t3674682005 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3133387403_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, method) ((  Rigidbody_t3346577219 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CreateGround>()
#define GameObject_GetComponent_TisCreateGround_t1354632643_m696389946(__this, method) ((  CreateGround_t1354632643 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bgmove::.ctor()
extern "C"  void bgmove__ctor_m2025238469 (bgmove_t2904137110 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((3.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void bgmove::Start()
extern "C"  void bgmove_Start_m972376261 (bgmove_t2904137110 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void bgmove::Update()
extern "C"  void bgmove_Update_m84745192 (bgmove_t2904137110 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_2();
		Transform_Translate_m2900276092(L_0, ((float)((float)((float)((float)L_1*(float)L_2))*(float)(-1.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		if ((!(((float)L_5) < ((float)(-38.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2926210380(&L_7, (276.0f), (-12.0f), (38.0f), /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void Bomb::.ctor()
extern "C"  void Bomb__ctor_m3133888025 (Bomb_t2076354 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((3.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Bomb::Start()
extern "C"  void Bomb_Start_m2081025817 (Bomb_t2076354 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Bomb::Update()
extern "C"  void Bomb_Update_m93143060 (Bomb_t2076354 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_2();
		Transform_Translate_m2900276092(L_0, ((float)((float)((float)((float)L_1*(float)L_2))*(float)(-1.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		if ((!(((float)L_5) < ((float)(-15.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		Bomb_Destroythis_m2606896719(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Bomb::Destroythis()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Bomb_Destroythis_m2606896719_MetadataUsageId;
extern "C"  void Bomb_Destroythis_m2606896719 (Bomb_t2076354 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Bomb_Destroythis_m2606896719_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreateGround::.ctor()
extern "C"  void CreateGround__ctor_m4219056184 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	{
		__this->set_Speed_13((2.0f));
		__this->set_bgSpeed_14((1.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreateGround::Start()
extern const MethodInfo* GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057506695;
extern Il2CppCodeGenString* _stringLiteral2962773294;
extern const uint32_t CreateGround_Start_m3166193976_MetadataUsageId;
extern "C"  void CreateGround_Start_m3166193976 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_Start_m3166193976_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObjectU5BU5D_t2662109048* V_0 = NULL;
	GameObject_t3674682005 * V_1 = NULL;
	GameObjectU5BU5D_t2662109048* V_2 = NULL;
	int32_t V_3 = 0;
	GroundPart_t3222237754 * V_4 = NULL;
	GameObjectU5BU5D_t2662109048* V_5 = NULL;
	GameObject_t3674682005 * V_6 = NULL;
	GameObjectU5BU5D_t2662109048* V_7 = NULL;
	int32_t V_8 = 0;
	bgmove_t2904137110 * V_9 = NULL;
	{
		__this->set_speedChangeDif_11((20.0f));
		GameObjectU5BU5D_t2662109048* L_0 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3057506695, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObjectU5BU5D_t2662109048* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_003c;
	}

IL_001f:
	{
		GameObjectU5BU5D_t2662109048* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		GameObject_t3674682005 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		GameObject_t3674682005 * L_6 = V_1;
		GroundPart_t3222237754 * L_7 = GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(L_6, /*hidden argument*/GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var);
		V_4 = L_7;
		GroundPart_t3222237754 * L_8 = V_4;
		float L_9 = __this->get_Speed_13();
		L_8->set_speed_2(L_9);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_11 = V_3;
		GameObjectU5BU5D_t2662109048* L_12 = V_2;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_12)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_13 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2962773294, /*hidden argument*/NULL);
		V_5 = L_13;
		GameObjectU5BU5D_t2662109048* L_14 = V_5;
		V_7 = L_14;
		V_8 = 0;
		goto IL_0080;
	}

IL_005d:
	{
		GameObjectU5BU5D_t2662109048* L_15 = V_7;
		int32_t L_16 = V_8;
		int32_t L_17 = L_16;
		GameObject_t3674682005 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_6 = L_18;
		GameObject_t3674682005 * L_19 = V_6;
		bgmove_t2904137110 * L_20 = GameObject_GetComponent_Tisbgmove_t2904137110_m116062983(L_19, /*hidden argument*/GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var);
		V_9 = L_20;
		bgmove_t2904137110 * L_21 = V_9;
		float L_22 = __this->get_bgSpeed_14();
		L_21->set_speed_2(L_22);
		int32_t L_23 = V_8;
		V_8 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_24 = V_8;
		GameObjectU5BU5D_t2662109048* L_25 = V_7;
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_25)->max_length)))))))
		{
			goto IL_005d;
		}
	}
	{
		return;
	}
}
// System.Void CreateGround::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t4291918972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057506695;
extern Il2CppCodeGenString* _stringLiteral2962773294;
extern Il2CppCodeGenString* _stringLiteral1919855414;
extern Il2CppCodeGenString* _stringLiteral3029666;
extern const uint32_t CreateGround_Update_m3668584917_MetadataUsageId;
extern "C"  void CreateGround_Update_m3668584917 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_Update_m3668584917_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObjectU5BU5D_t2662109048* V_0 = NULL;
	GameObject_t3674682005 * V_1 = NULL;
	GameObjectU5BU5D_t2662109048* V_2 = NULL;
	int32_t V_3 = 0;
	GroundPart_t3222237754 * V_4 = NULL;
	GameObjectU5BU5D_t2662109048* V_5 = NULL;
	GameObject_t3674682005 * V_6 = NULL;
	GameObjectU5BU5D_t2662109048* V_7 = NULL;
	int32_t V_8 = 0;
	bgmove_t2904137110 * V_9 = NULL;
	GameObjectU5BU5D_t2662109048* V_10 = NULL;
	GameObject_t3674682005 * V_11 = NULL;
	GameObjectU5BU5D_t2662109048* V_12 = NULL;
	int32_t V_13 = 0;
	GroundPart_t3222237754 * V_14 = NULL;
	GameObjectU5BU5D_t2662109048* V_15 = NULL;
	GameObject_t3674682005 * V_16 = NULL;
	GameObjectU5BU5D_t2662109048* V_17 = NULL;
	int32_t V_18 = 0;
	Bomb_t2076354 * V_19 = NULL;
	GameObjectU5BU5D_t2662109048* V_20 = NULL;
	GameObject_t3674682005 * V_21 = NULL;
	GameObjectU5BU5D_t2662109048* V_22 = NULL;
	int32_t V_23 = 0;
	bgmove_t2904137110 * V_24 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_1 = __this->get_gameoverb_16();
		if (!L_1)
		{
			goto IL_00a4;
		}
	}
	{
		CreateGround_Gamerestart_m214899763(__this, /*hidden argument*/NULL);
		__this->set_gameoverb_16((bool)0);
		GameObjectU5BU5D_t2662109048* L_2 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3057506695, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObjectU5BU5D_t2662109048* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0055;
	}

IL_0038:
	{
		GameObjectU5BU5D_t2662109048* L_4 = V_2;
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		GameObject_t3674682005 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		GameObject_t3674682005 * L_8 = V_1;
		GroundPart_t3222237754 * L_9 = GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(L_8, /*hidden argument*/GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var);
		V_4 = L_9;
		GroundPart_t3222237754 * L_10 = V_4;
		float L_11 = __this->get_Speed_13();
		L_10->set_speed_2(L_11);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_13 = V_3;
		GameObjectU5BU5D_t2662109048* L_14 = V_2;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))))))
		{
			goto IL_0038;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_15 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2962773294, /*hidden argument*/NULL);
		V_5 = L_15;
		GameObjectU5BU5D_t2662109048* L_16 = V_5;
		V_7 = L_16;
		V_8 = 0;
		goto IL_0099;
	}

IL_0076:
	{
		GameObjectU5BU5D_t2662109048* L_17 = V_7;
		int32_t L_18 = V_8;
		int32_t L_19 = L_18;
		GameObject_t3674682005 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		GameObject_t3674682005 * L_21 = V_6;
		bgmove_t2904137110 * L_22 = GameObject_GetComponent_Tisbgmove_t2904137110_m116062983(L_21, /*hidden argument*/GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var);
		V_9 = L_22;
		bgmove_t2904137110 * L_23 = V_9;
		float L_24 = __this->get_bgSpeed_14();
		L_23->set_speed_2(L_24);
		int32_t L_25 = V_8;
		V_8 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_26 = V_8;
		GameObjectU5BU5D_t2662109048* L_27 = V_7;
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length)))))))
		{
			goto IL_0076;
		}
	}

IL_00a4:
	{
		bool L_28 = __this->get_gameoverb_16();
		if (L_28)
		{
			goto IL_0237;
		}
	}
	{
		float L_29 = __this->get_gameTime_2();
		float L_30 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_gameTime_2(((float)((float)L_29+(float)L_30)));
		float L_31 = __this->get_gameTime_2();
		float L_32 = __this->get_lastgametime_10();
		float L_33 = __this->get_speedChangeDif_11();
		if ((!(((float)((float)((float)L_31-(float)L_32))) > ((float)L_33))))
		{
			goto IL_0207;
		}
	}
	{
		float L_34 = __this->get_gameTime_2();
		__this->set_lastgametime_10(L_34);
		float L_35 = __this->get_speedChangeDif_11();
		float L_36 = L_35;
		Il2CppObject * L_37 = Box(Single_t4291918972_il2cpp_TypeInfo_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral1919855414, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		float L_39 = __this->get_speedChangeDif_11();
		__this->set_speedChangeDif_11(((float)((float)L_39/(float)(1.2f))));
		float L_40 = __this->get_Speed_13();
		__this->set_Speed_13(((float)((float)L_40*(float)(1.2f))));
		float L_41 = __this->get_Speed_13();
		__this->set_bgSpeed_14(((float)((float)L_41/(float)(2.0f))));
		GameObjectU5BU5D_t2662109048* L_42 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3057506695, /*hidden argument*/NULL);
		V_10 = L_42;
		GameObjectU5BU5D_t2662109048* L_43 = V_10;
		V_12 = L_43;
		V_13 = 0;
		goto IL_0170;
	}

IL_014d:
	{
		GameObjectU5BU5D_t2662109048* L_44 = V_12;
		int32_t L_45 = V_13;
		int32_t L_46 = L_45;
		GameObject_t3674682005 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_11 = L_47;
		GameObject_t3674682005 * L_48 = V_11;
		GroundPart_t3222237754 * L_49 = GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(L_48, /*hidden argument*/GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var);
		V_14 = L_49;
		GroundPart_t3222237754 * L_50 = V_14;
		float L_51 = __this->get_Speed_13();
		L_50->set_speed_2(L_51);
		int32_t L_52 = V_13;
		V_13 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_0170:
	{
		int32_t L_53 = V_13;
		GameObjectU5BU5D_t2662109048* L_54 = V_12;
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_54)->max_length)))))))
		{
			goto IL_014d;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_55 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3029666, /*hidden argument*/NULL);
		V_15 = L_55;
		GameObjectU5BU5D_t2662109048* L_56 = V_15;
		V_17 = L_56;
		V_18 = 0;
		goto IL_01b6;
	}

IL_0193:
	{
		GameObjectU5BU5D_t2662109048* L_57 = V_17;
		int32_t L_58 = V_18;
		int32_t L_59 = L_58;
		GameObject_t3674682005 * L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_16 = L_60;
		GameObject_t3674682005 * L_61 = V_16;
		Bomb_t2076354 * L_62 = GameObject_GetComponent_TisBomb_t2076354_m3421854171(L_61, /*hidden argument*/GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var);
		V_19 = L_62;
		Bomb_t2076354 * L_63 = V_19;
		float L_64 = __this->get_Speed_13();
		L_63->set_speed_2(L_64);
		int32_t L_65 = V_18;
		V_18 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_01b6:
	{
		int32_t L_66 = V_18;
		GameObjectU5BU5D_t2662109048* L_67 = V_17;
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_67)->max_length)))))))
		{
			goto IL_0193;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_68 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2962773294, /*hidden argument*/NULL);
		V_20 = L_68;
		GameObjectU5BU5D_t2662109048* L_69 = V_20;
		V_22 = L_69;
		V_23 = 0;
		goto IL_01fc;
	}

IL_01d9:
	{
		GameObjectU5BU5D_t2662109048* L_70 = V_22;
		int32_t L_71 = V_23;
		int32_t L_72 = L_71;
		GameObject_t3674682005 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_21 = L_73;
		GameObject_t3674682005 * L_74 = V_21;
		bgmove_t2904137110 * L_75 = GameObject_GetComponent_Tisbgmove_t2904137110_m116062983(L_74, /*hidden argument*/GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var);
		V_24 = L_75;
		bgmove_t2904137110 * L_76 = V_24;
		float L_77 = __this->get_bgSpeed_14();
		L_76->set_speed_2(L_77);
		int32_t L_78 = V_23;
		V_23 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01fc:
	{
		int32_t L_79 = V_23;
		GameObjectU5BU5D_t2662109048* L_80 = V_22;
		if ((((int32_t)L_79) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_80)->max_length)))))))
		{
			goto IL_01d9;
		}
	}

IL_0207:
	{
		float L_81 = __this->get_gameTime_2();
		float L_82 = __this->get_lastTileTime_12();
		float L_83 = __this->get_Speed_13();
		if ((!(((float)((float)((float)L_81-(float)L_82))) > ((float)((float)((float)(7.0f)/(float)L_83))))))
		{
			goto IL_0237;
		}
	}
	{
		float L_84 = __this->get_gameTime_2();
		__this->set_lastTileTime_12(L_84);
		CreateGround_newground_m1732565085(__this, /*hidden argument*/NULL);
	}

IL_0237:
	{
		return;
	}
}
// System.Void CreateGround::newground()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var;
extern const uint32_t CreateGround_newground_m1732565085_MetadataUsageId;
extern "C"  void CreateGround_newground_m1732565085 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_newground_m1732565085_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	GroundPart_t3222237754 * V_1 = NULL;
	GameObject_t3674682005 * V_2 = NULL;
	Bomb_t2076354 * V_3 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_groundpart_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_1 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_1;
		GameObject_t3674682005 * L_2 = V_0;
		GroundPart_t3222237754 * L_3 = GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(L_2, /*hidden argument*/GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var);
		V_1 = L_3;
		GroundPart_t3222237754 * L_4 = V_1;
		float L_5 = __this->get_Speed_13();
		L_4->set_speed_2(L_5);
		int32_t L_6 = Random_Range_m75452833(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)3)))
		{
			goto IL_004b;
		}
	}
	{
		GameObject_t3674682005 * L_7 = __this->get_bombObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_8 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_2 = L_8;
		GameObject_t3674682005 * L_9 = V_2;
		Bomb_t2076354 * L_10 = GameObject_GetComponent_TisBomb_t2076354_m3421854171(L_9, /*hidden argument*/GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var);
		V_3 = L_10;
		Bomb_t2076354 * L_11 = V_3;
		float L_12 = __this->get_Speed_13();
		L_11->set_speed_2(L_12);
	}

IL_004b:
	{
		return;
	}
}
// System.Void CreateGround::OnGUI()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral32;
extern const uint32_t CreateGround_OnGUI_m3714454834_MetadataUsageId;
extern "C"  void CreateGround_OnGUI_m3714454834 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_OnGUI_m3714454834_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_gameTime_2();
		V_0 = L_0;
		Rect_t4241904616  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Rect__ctor_m3291325233(&L_1, (40.0f), (40.0f), (450.0f), (400.0f), /*hidden argument*/NULL);
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_RoundToInt_m3163545820(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral32, L_5, /*hidden argument*/NULL);
		GUIStyle_t2990928826 * L_7 = __this->get_gstyle_9();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m4283747336(NULL /*static, unused*/, L_1, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreateGround::Gameover()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3057506695;
extern Il2CppCodeGenString* _stringLiteral3029666;
extern Il2CppCodeGenString* _stringLiteral2962773294;
extern const uint32_t CreateGround_Gameover_m1070071506_MetadataUsageId;
extern "C"  void CreateGround_Gameover_m1070071506 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_Gameover_m1070071506_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	GameObjectU5BU5D_t2662109048* V_1 = NULL;
	GameObject_t3674682005 * V_2 = NULL;
	GameObjectU5BU5D_t2662109048* V_3 = NULL;
	int32_t V_4 = 0;
	GroundPart_t3222237754 * V_5 = NULL;
	GameObjectU5BU5D_t2662109048* V_6 = NULL;
	GameObject_t3674682005 * V_7 = NULL;
	GameObjectU5BU5D_t2662109048* V_8 = NULL;
	int32_t V_9 = 0;
	Bomb_t2076354 * V_10 = NULL;
	GameObjectU5BU5D_t2662109048* V_11 = NULL;
	GameObject_t3674682005 * V_12 = NULL;
	GameObjectU5BU5D_t2662109048* V_13 = NULL;
	int32_t V_14 = 0;
	bgmove_t2904137110 * V_15 = NULL;
	{
		bool L_0 = __this->get_gameoverb_16();
		if (L_0)
		{
			goto IL_00f7;
		}
	}
	{
		GameObject_t3674682005 * L_1 = __this->get_gameOver_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		GameObject_t3674682005 * L_2 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		__this->set_gameOverscreen_15(L_2);
		GameObject_t3674682005 * L_3 = __this->get_explosion_7();
		GameObject_t3674682005 * L_4 = Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		V_0 = L_4;
		__this->set_gameoverb_16((bool)1);
		GameObjectU5BU5D_t2662109048* L_5 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3057506695, /*hidden argument*/NULL);
		V_1 = L_5;
		GameObjectU5BU5D_t2662109048* L_6 = V_1;
		V_3 = L_6;
		V_4 = 0;
		goto IL_0063;
	}

IL_0044:
	{
		GameObjectU5BU5D_t2662109048* L_7 = V_3;
		int32_t L_8 = V_4;
		int32_t L_9 = L_8;
		GameObject_t3674682005 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		GameObject_t3674682005 * L_11 = V_2;
		GroundPart_t3222237754 * L_12 = GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035(L_11, /*hidden argument*/GameObject_GetComponent_TisGroundPart_t3222237754_m2002040035_MethodInfo_var);
		V_5 = L_12;
		GroundPart_t3222237754 * L_13 = V_5;
		L_13->set_speed_2((0.0f));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_15 = V_4;
		GameObjectU5BU5D_t2662109048* L_16 = V_3;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length)))))))
		{
			goto IL_0044;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_17 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3029666, /*hidden argument*/NULL);
		V_6 = L_17;
		GameObjectU5BU5D_t2662109048* L_18 = V_6;
		V_8 = L_18;
		V_9 = 0;
		goto IL_00a7;
	}

IL_0085:
	{
		GameObjectU5BU5D_t2662109048* L_19 = V_8;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		GameObject_t3674682005 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_7 = L_22;
		GameObject_t3674682005 * L_23 = V_7;
		Bomb_t2076354 * L_24 = GameObject_GetComponent_TisBomb_t2076354_m3421854171(L_23, /*hidden argument*/GameObject_GetComponent_TisBomb_t2076354_m3421854171_MethodInfo_var);
		V_10 = L_24;
		Bomb_t2076354 * L_25 = V_10;
		L_25->set_speed_2((0.0f));
		int32_t L_26 = V_9;
		V_9 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_27 = V_9;
		GameObjectU5BU5D_t2662109048* L_28 = V_8;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length)))))))
		{
			goto IL_0085;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_29 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2962773294, /*hidden argument*/NULL);
		V_11 = L_29;
		GameObjectU5BU5D_t2662109048* L_30 = V_11;
		V_13 = L_30;
		V_14 = 0;
		goto IL_00ec;
	}

IL_00ca:
	{
		GameObjectU5BU5D_t2662109048* L_31 = V_13;
		int32_t L_32 = V_14;
		int32_t L_33 = L_32;
		GameObject_t3674682005 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		GameObject_t3674682005 * L_35 = V_12;
		bgmove_t2904137110 * L_36 = GameObject_GetComponent_Tisbgmove_t2904137110_m116062983(L_35, /*hidden argument*/GameObject_GetComponent_Tisbgmove_t2904137110_m116062983_MethodInfo_var);
		V_15 = L_36;
		bgmove_t2904137110 * L_37 = V_15;
		L_37->set_speed_2((0.0f));
		int32_t L_38 = V_14;
		V_14 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_39 = V_14;
		GameObjectU5BU5D_t2662109048* L_40 = V_13;
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length)))))))
		{
			goto IL_00ca;
		}
	}

IL_00f7:
	{
		return;
	}
}
// System.Void CreateGround::Gamerestart()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3029666;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern Il2CppCodeGenString* _stringLiteral2236776276;
extern Il2CppCodeGenString* _stringLiteral2985818806;
extern const uint32_t CreateGround_Gamerestart_m214899763_MetadataUsageId;
extern "C"  void CreateGround_Gamerestart_m214899763 (CreateGround_t1354632643 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CreateGround_Gamerestart_m214899763_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObjectU5BU5D_t2662109048* V_0 = NULL;
	GameObject_t3674682005 * V_1 = NULL;
	GameObjectU5BU5D_t2662109048* V_2 = NULL;
	int32_t V_3 = 0;
	GameObjectU5BU5D_t2662109048* V_4 = NULL;
	GameObject_t3674682005 * V_5 = NULL;
	GameObjectU5BU5D_t2662109048* V_6 = NULL;
	int32_t V_7 = 0;
	{
		GameObjectU5BU5D_t2662109048* L_0 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral3029666, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObjectU5BU5D_t2662109048* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0022;
	}

IL_0014:
	{
		GameObjectU5BU5D_t2662109048* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		GameObject_t3674682005 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		GameObject_t3674682005 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_8 = V_3;
		GameObjectU5BU5D_t2662109048* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_10 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2393081601, /*hidden argument*/NULL);
		V_4 = L_10;
		GameObjectU5BU5D_t2662109048* L_11 = V_4;
		V_6 = L_11;
		V_7 = 0;
		goto IL_0057;
	}

IL_0043:
	{
		GameObjectU5BU5D_t2662109048* L_12 = V_6;
		int32_t L_13 = V_7;
		int32_t L_14 = L_13;
		GameObject_t3674682005 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		GameObject_t3674682005 * L_16 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_7;
		V_7 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_18 = V_7;
		GameObjectU5BU5D_t2662109048* L_19 = V_6;
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		GameObject_t3674682005 * L_20 = __this->get_gameRunner_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t3674682005_m3917608929(NULL /*static, unused*/, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_t3674682005_m3917608929_MethodInfo_var);
		__this->set_gameTime_2((0.0f));
		__this->set_lastgametime_10((0.0f));
		__this->set_speedChangeDif_11((20.0f));
		__this->set_lastTileTime_12((0.0f));
		__this->set_Speed_13((2.0f));
		GameObject_t3674682005 * L_21 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral2236776276, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_22 = GameObject_FindWithTag_m3162815092(NULL /*static, unused*/, _stringLiteral2985818806, /*hidden argument*/NULL);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void destroyafter::.ctor()
extern "C"  void destroyafter__ctor_m525002425 (destroyafter_t2981777954 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void destroyafter::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t destroyafter_Start_m3767107513_MetadataUsageId;
extern "C"  void destroyafter_Start_m3767107513 (destroyafter_t2981777954 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (destroyafter_Start_m3767107513_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m2260435093(NULL /*static, unused*/, L_0, (5.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GroundPart::.ctor()
extern "C"  void GroundPart__ctor_m2308966305 (GroundPart_t3222237754 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_2((3.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GroundPart::Start()
extern "C"  void GroundPart_Start_m1256104097 (GroundPart_t3222237754 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GroundPart::Update()
extern "C"  void GroundPart_Update_m290373516 (GroundPart_t3222237754 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_speed_2();
		Transform_Translate_m2900276092(L_0, ((float)((float)((float)((float)L_1*(float)L_2))*(float)(-1.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = (&V_0)->get_x_1();
		if ((!(((float)L_5) < ((float)(-25.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		GroundPart_Destroythis_m1149075927(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void GroundPart::Destroythis()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t GroundPart_Destroythis_m1149075927_MetadataUsageId;
extern "C"  void GroundPart_Destroythis_m1149075927 (GroundPart_t3222237754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GroundPart_Destroythis_m1149075927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void runner::.ctor()
extern "C"  void runner__ctor_m3689585515 (runner_t3375161136 * __this, const MethodInfo* method)
{
	{
		__this->set_grounded_2((bool)1);
		__this->set_jumpPower_3((3000.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void runner::Star()
extern "C"  void runner_Star_m916337227 (runner_t3375161136 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void runner::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2320462;
extern const uint32_t runner_Update_m139896066_MetadataUsageId;
extern "C"  void runner_Update_m139896066 (runner_t3375161136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (runner_Update_m139896066_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_grounded_2();
		if (L_0)
		{
			goto IL_003b;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		if ((!(((double)(((double)((double)L_3)))) < ((double)(-1.2)))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_grounded_2((bool)1);
		__this->set_doublejump_5((bool)0);
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_4 = Input_GetButtonDown_m1879002085(NULL /*static, unused*/, _stringLiteral2320462, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		bool L_5 = __this->get_grounded_2();
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		bool L_6 = __this->get_gameover_6();
		if (L_6)
		{
			goto IL_0067;
		}
	}
	{
		__this->set_hasJumped_4((bool)1);
	}

IL_0067:
	{
		bool L_7 = __this->get_gameover_6();
		if (L_7)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_8 = Input_GetButtonDown_m1879002085(NULL /*static, unused*/, _stringLiteral2320462, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_9 = __this->get_grounded_2();
		if (L_9)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_10 = __this->get_doublejump_5();
		if (L_10)
		{
			goto IL_00c7;
		}
	}
	{
		Rigidbody_t3346577219 * L_11 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		Vector3_t4282066566  L_12 = Rigidbody_get_velocity_m2696244068(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_y_2();
		if ((!(((double)(((double)((double)L_13)))) < ((double)(-0.1)))))
		{
			goto IL_00c7;
		}
	}
	{
		__this->set_hasJumped_4((bool)1);
		__this->set_doublejump_5((bool)1);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void runner::FixedUpdate()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var;
extern const uint32_t runner_FixedUpdate_m479132838_MetadataUsageId;
extern "C"  void runner_FixedUpdate_m479132838 (runner_t3375161136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (runner_FixedUpdate_m479132838_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_hasJumped_4();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Rigidbody_t3346577219 * L_1 = Component_GetComponent_TisRigidbody_t3346577219_m2174365699(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3346577219_m2174365699_MethodInfo_var);
		Transform_t1659122786 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_3 = Transform_get_up_m297874561(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_jumpPower_3();
		Vector3_t4282066566  L_5 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Rigidbody_AddForce_m3682301239(L_1, L_5, /*hidden argument*/NULL);
		__this->set_grounded_2((bool)0);
		__this->set_hasJumped_4((bool)0);
	}

IL_003a:
	{
		return;
	}
}
// System.Void runner::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCreateGround_t1354632643_m696389946_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3029666;
extern Il2CppCodeGenString* _stringLiteral2002165045;
extern Il2CppCodeGenString* _stringLiteral1982636638;
extern const uint32_t runner_OnCollisionEnter_m2949837113_MetadataUsageId;
extern "C"  void runner_OnCollisionEnter_m2949837113 (runner_t3375161136 * __this, Collision_t2494107688 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (runner_OnCollisionEnter_m2949837113_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	CreateGround_t1354632643 * V_1 = NULL;
	{
		Collision_t2494107688 * L_0 = ___col0;
		GameObject_t3674682005 * L_1 = Collision_get_gameObject_m4245316464(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m211612200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral3029666, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2002165045, /*hidden argument*/NULL);
		__this->set_gameover_6((bool)1);
		GameObject_t3674682005 * L_4 = GameObject_FindGameObjectWithTag_m2635560165(NULL /*static, unused*/, _stringLiteral1982636638, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t3674682005 * L_5 = V_0;
		CreateGround_t1354632643 * L_6 = GameObject_GetComponent_TisCreateGround_t1354632643_m696389946(L_5, /*hidden argument*/GameObject_GetComponent_TisCreateGround_t1354632643_m696389946_MethodInfo_var);
		V_1 = L_6;
		CreateGround_t1354632643 * L_7 = V_1;
		CreateGround_Gameover_m1070071506(L_7, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_8 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
