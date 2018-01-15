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
	//Returns 1 if left-button of the mouse is pressed
	Bit LeftButton();
	//Returns 1 if mid-button of the mouse is pressed
	Bit MidButton();
	//Returns 1 if right-button of the mouse is pressed
	Bit RightButton();
	//Returns mouse position on screen coordinates
	[2]U16 MousePosition();
}