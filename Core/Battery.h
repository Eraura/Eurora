/*
Copyright 2018 Eurora Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 15/01/2018(dd/mm/yyyy)
Version: 1
*/
#pragma once

#include <Eurora\Types.h>

namespace Eurora
{
	//Returns 1 if battery is charging
	Bit IsCharging();
	//Returns the battery left
	U8 BatteryLevel();
}