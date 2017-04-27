#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// runner
struct  runner_t3375161136  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean runner::grounded
	bool ___grounded_2;
	// System.Single runner::jumpPower
	float ___jumpPower_3;
	// System.Boolean runner::hasJumped
	bool ___hasJumped_4;
	// System.Boolean runner::doublejump
	bool ___doublejump_5;
	// System.Boolean runner::gameover
	bool ___gameover_6;

public:
	inline static int32_t get_offset_of_grounded_2() { return static_cast<int32_t>(offsetof(runner_t3375161136, ___grounded_2)); }
	inline bool get_grounded_2() const { return ___grounded_2; }
	inline bool* get_address_of_grounded_2() { return &___grounded_2; }
	inline void set_grounded_2(bool value)
	{
		___grounded_2 = value;
	}

	inline static int32_t get_offset_of_jumpPower_3() { return static_cast<int32_t>(offsetof(runner_t3375161136, ___jumpPower_3)); }
	inline float get_jumpPower_3() const { return ___jumpPower_3; }
	inline float* get_address_of_jumpPower_3() { return &___jumpPower_3; }
	inline void set_jumpPower_3(float value)
	{
		___jumpPower_3 = value;
	}

	inline static int32_t get_offset_of_hasJumped_4() { return static_cast<int32_t>(offsetof(runner_t3375161136, ___hasJumped_4)); }
	inline bool get_hasJumped_4() const { return ___hasJumped_4; }
	inline bool* get_address_of_hasJumped_4() { return &___hasJumped_4; }
	inline void set_hasJumped_4(bool value)
	{
		___hasJumped_4 = value;
	}

	inline static int32_t get_offset_of_doublejump_5() { return static_cast<int32_t>(offsetof(runner_t3375161136, ___doublejump_5)); }
	inline bool get_doublejump_5() const { return ___doublejump_5; }
	inline bool* get_address_of_doublejump_5() { return &___doublejump_5; }
	inline void set_doublejump_5(bool value)
	{
		___doublejump_5 = value;
	}

	inline static int32_t get_offset_of_gameover_6() { return static_cast<int32_t>(offsetof(runner_t3375161136, ___gameover_6)); }
	inline bool get_gameover_6() const { return ___gameover_6; }
	inline bool* get_address_of_gameover_6() { return &___gameover_6; }
	inline void set_gameover_6(bool value)
	{
		___gameover_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
