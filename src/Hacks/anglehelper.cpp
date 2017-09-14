#include "airstuck.h"


bool Settings::angleHelper::enabled = false;
ButtonCode_t Settings::angleHelper::key = ButtonCode_t::KEY_K;
ButtonCode_t Settings::angleHelper::key2 = ButtonCode_t::KEY_K;
ButtonCode_t Settings::angleHelper::key3 = ButtonCode_t::KEY_K;
ButtonCode_t Settings::angleHelper::key4 = ButtonCode_t::KEY_K;

void angleHelper::CreateMove(CUserCmd* cmd)
{
	// Sumone fix this im too lazy for it, everything is already se up in settings.h and settings.cpp (the costum keys)
	if(Settings::angleHelper::enabled){
		
		if (inputSystem->IsButtonDown(KEY_RIGHT)){ 
		Settings::AntiAim::Yaw::typeFake = AntiAimType_Y::STATICSIDEWAYSRIGHT;
		Settings::AntiAim::Yaw::type = AntiAimType_Y::STATICSIDEWAYSLEFT;
		}

		if (inputSystem->IsButtonDown(KEY_LEFT)){ 
		Settings::AntiAim::Yaw::typeFake = AntiAimType_Y::STATICSIDEWAYSLEFT;
		Settings::AntiAim::Yaw::type = AntiAimType_Y::STATICSIDEWAYSRIGHT;
		}

		if (inputSystem->IsButtonDown(KEY_UP)){ 
		Settings::AntiAim::Yaw::typeFake = AntiAimType_Y::STATICBACKWARDS;
		Settings::AntiAim::Yaw::type = AntiAimType_Y::STATICFORWARDS;
		}

		if (inputSystem->IsButtonDown(KEY_DOWN)){ 
		Settings::AntiAim::Yaw::typeFake = AntiAimType_Y::STATICFORWARDS;
		Settings::AntiAim::Yaw::type = AntiAimType_Y::STATICBACKWARDS;
		}


}
}
