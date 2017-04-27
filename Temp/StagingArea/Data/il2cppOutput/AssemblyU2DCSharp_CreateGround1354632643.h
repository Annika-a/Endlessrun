#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateGround
struct  CreateGround_t1354632643  : public MonoBehaviour_t667441552
{
public:
	// System.Single CreateGround::gameTime
	float ___gameTime_2;
	// UnityEngine.GameObject CreateGround::groundpart
	GameObject_t3674682005 * ___groundpart_3;
	// UnityEngine.GameObject CreateGround::bombObject
	GameObject_t3674682005 * ___bombObject_4;
	// UnityEngine.GameObject CreateGround::gameOver
	GameObject_t3674682005 * ___gameOver_5;
	// UnityEngine.GameObject CreateGround::gameRunner
	GameObject_t3674682005 * ___gameRunner_6;
	// UnityEngine.GameObject CreateGround::explosion
	GameObject_t3674682005 * ___explosion_7;
	// UnityEngine.GameObject CreateGround::background
	GameObject_t3674682005 * ___background_8;
	// UnityEngine.GUIStyle CreateGround::gstyle
	GUIStyle_t2990928826 * ___gstyle_9;
	// System.Single CreateGround::lastgametime
	float ___lastgametime_10;
	// System.Single CreateGround::speedChangeDif
	float ___speedChangeDif_11;
	// System.Single CreateGround::lastTileTime
	float ___lastTileTime_12;
	// System.Single CreateGround::Speed
	float ___Speed_13;
	// System.Single CreateGround::bgSpeed
	float ___bgSpeed_14;
	// UnityEngine.GameObject CreateGround::gameOverscreen
	GameObject_t3674682005 * ___gameOverscreen_15;
	// System.Boolean CreateGround::gameoverb
	bool ___gameoverb_16;

public:
	inline static int32_t get_offset_of_gameTime_2() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gameTime_2)); }
	inline float get_gameTime_2() const { return ___gameTime_2; }
	inline float* get_address_of_gameTime_2() { return &___gameTime_2; }
	inline void set_gameTime_2(float value)
	{
		___gameTime_2 = value;
	}

	inline static int32_t get_offset_of_groundpart_3() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___groundpart_3)); }
	inline GameObject_t3674682005 * get_groundpart_3() const { return ___groundpart_3; }
	inline GameObject_t3674682005 ** get_address_of_groundpart_3() { return &___groundpart_3; }
	inline void set_groundpart_3(GameObject_t3674682005 * value)
	{
		___groundpart_3 = value;
		Il2CppCodeGenWriteBarrier(&___groundpart_3, value);
	}

	inline static int32_t get_offset_of_bombObject_4() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___bombObject_4)); }
	inline GameObject_t3674682005 * get_bombObject_4() const { return ___bombObject_4; }
	inline GameObject_t3674682005 ** get_address_of_bombObject_4() { return &___bombObject_4; }
	inline void set_bombObject_4(GameObject_t3674682005 * value)
	{
		___bombObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___bombObject_4, value);
	}

	inline static int32_t get_offset_of_gameOver_5() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gameOver_5)); }
	inline GameObject_t3674682005 * get_gameOver_5() const { return ___gameOver_5; }
	inline GameObject_t3674682005 ** get_address_of_gameOver_5() { return &___gameOver_5; }
	inline void set_gameOver_5(GameObject_t3674682005 * value)
	{
		___gameOver_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOver_5, value);
	}

	inline static int32_t get_offset_of_gameRunner_6() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gameRunner_6)); }
	inline GameObject_t3674682005 * get_gameRunner_6() const { return ___gameRunner_6; }
	inline GameObject_t3674682005 ** get_address_of_gameRunner_6() { return &___gameRunner_6; }
	inline void set_gameRunner_6(GameObject_t3674682005 * value)
	{
		___gameRunner_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameRunner_6, value);
	}

	inline static int32_t get_offset_of_explosion_7() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___explosion_7)); }
	inline GameObject_t3674682005 * get_explosion_7() const { return ___explosion_7; }
	inline GameObject_t3674682005 ** get_address_of_explosion_7() { return &___explosion_7; }
	inline void set_explosion_7(GameObject_t3674682005 * value)
	{
		___explosion_7 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_7, value);
	}

	inline static int32_t get_offset_of_background_8() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___background_8)); }
	inline GameObject_t3674682005 * get_background_8() const { return ___background_8; }
	inline GameObject_t3674682005 ** get_address_of_background_8() { return &___background_8; }
	inline void set_background_8(GameObject_t3674682005 * value)
	{
		___background_8 = value;
		Il2CppCodeGenWriteBarrier(&___background_8, value);
	}

	inline static int32_t get_offset_of_gstyle_9() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gstyle_9)); }
	inline GUIStyle_t2990928826 * get_gstyle_9() const { return ___gstyle_9; }
	inline GUIStyle_t2990928826 ** get_address_of_gstyle_9() { return &___gstyle_9; }
	inline void set_gstyle_9(GUIStyle_t2990928826 * value)
	{
		___gstyle_9 = value;
		Il2CppCodeGenWriteBarrier(&___gstyle_9, value);
	}

	inline static int32_t get_offset_of_lastgametime_10() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___lastgametime_10)); }
	inline float get_lastgametime_10() const { return ___lastgametime_10; }
	inline float* get_address_of_lastgametime_10() { return &___lastgametime_10; }
	inline void set_lastgametime_10(float value)
	{
		___lastgametime_10 = value;
	}

	inline static int32_t get_offset_of_speedChangeDif_11() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___speedChangeDif_11)); }
	inline float get_speedChangeDif_11() const { return ___speedChangeDif_11; }
	inline float* get_address_of_speedChangeDif_11() { return &___speedChangeDif_11; }
	inline void set_speedChangeDif_11(float value)
	{
		___speedChangeDif_11 = value;
	}

	inline static int32_t get_offset_of_lastTileTime_12() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___lastTileTime_12)); }
	inline float get_lastTileTime_12() const { return ___lastTileTime_12; }
	inline float* get_address_of_lastTileTime_12() { return &___lastTileTime_12; }
	inline void set_lastTileTime_12(float value)
	{
		___lastTileTime_12 = value;
	}

	inline static int32_t get_offset_of_Speed_13() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___Speed_13)); }
	inline float get_Speed_13() const { return ___Speed_13; }
	inline float* get_address_of_Speed_13() { return &___Speed_13; }
	inline void set_Speed_13(float value)
	{
		___Speed_13 = value;
	}

	inline static int32_t get_offset_of_bgSpeed_14() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___bgSpeed_14)); }
	inline float get_bgSpeed_14() const { return ___bgSpeed_14; }
	inline float* get_address_of_bgSpeed_14() { return &___bgSpeed_14; }
	inline void set_bgSpeed_14(float value)
	{
		___bgSpeed_14 = value;
	}

	inline static int32_t get_offset_of_gameOverscreen_15() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gameOverscreen_15)); }
	inline GameObject_t3674682005 * get_gameOverscreen_15() const { return ___gameOverscreen_15; }
	inline GameObject_t3674682005 ** get_address_of_gameOverscreen_15() { return &___gameOverscreen_15; }
	inline void set_gameOverscreen_15(GameObject_t3674682005 * value)
	{
		___gameOverscreen_15 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverscreen_15, value);
	}

	inline static int32_t get_offset_of_gameoverb_16() { return static_cast<int32_t>(offsetof(CreateGround_t1354632643, ___gameoverb_16)); }
	inline bool get_gameoverb_16() const { return ___gameoverb_16; }
	inline bool* get_address_of_gameoverb_16() { return &___gameoverb_16; }
	inline void set_gameoverb_16(bool value)
	{
		___gameoverb_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
