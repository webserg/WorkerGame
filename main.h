#ifndef __MAIN_H_INCLUDED__   // if x.h hasn't been included yet...
#define __MAIN_H_INCLUDED__   //   #define this so the compiler knows it has been included
#define _SCL_SECURE_NO_WARNINGS
#pragma once

#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>
#include<exception>
#include<time.h>
#include <fstream>
#include <Windows.h>
#include "BaseGameEntity.h"
#include "StateMachine.h"
#include "WorkerStates.h"



using namespace std;
inline void keep_window_open()
{
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}

#endif
