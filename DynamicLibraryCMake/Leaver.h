#pragma once 
#ifdef DINAMICLIBRARY_EXPORTS
#define DINAMICLIBRARY_API __declspec(dllexport)
#else
#define DINAMICLIBRARY_API __declspec(dllimport)
#endif 

#include <iostream>  
using namespace std;

namespace Leaver {

	class Leaver {
		string name;
	public:
		DINAMICLIBRARY_API void leave();
	};
}
