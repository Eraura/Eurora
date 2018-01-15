/*
Copyright 2018 Eurora Technologies, all rights reserved
Author: Samuel Alonso
Contact: somethingghanging@gmail.com
Date: 15/01/2018(dd/mm/yyyy)
Version: 1
*/
#pragma once

#include <Eurora\Core\Process.h>

namespace Eurora
{
	template<class Function, class... Arguments>
	class Thread
	{
	public:
		//Creates a Thread on the Process specified
		Thread(const Process*, Function&& function, Arguments&&... arguments);
		//Sleep this Thread
		void Sleep(const U32);
		//Abort this Thread
		void Abort();
		//Exit this Thread
		void Exit();
	};
}