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
	class Process
	{
	public:
		//Assign the PID to ID and create a Window without borders and fullscreen
		Process();
		//Open a process by PID, assign the PID to ID, and create a Window without borders and fullscreen
		Process(U16);
		//Open a process by name, assign the PID to ID, and create a Window without borders and fullscreen
		Process(Word);
		//Abort this process, no cleanup
		void Abort();
		//Exit this process, cleanup
		void Exit();
	private:
		U16 ID;
	};
}
