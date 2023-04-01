#pragma once 
#pragma once 
#ifdef DYAMICLIBRARYCMAKE_EXPORTS
#define DYNAMICLIBRARYCMAKE_API __declspec(dllexport)
#else
#define DYNAMICLIBRARYCMAKE_API __declspec(dllimport)
#endif 

#include <iostream>  
using namespace std;

namespace Leaver {

	class Leaver {
		string name;
	public:
		DYNAMICLIBRARYCMAKE_API void leave();
	};
}
