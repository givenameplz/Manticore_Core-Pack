class CfgPatches {

	class Manticore_Insignia
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		version = "0.1.0";
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
	
	};


};

class CfgUnitInsignia
{
	//    NATO Marine insignia   Red 

	#include "NATOMarineInsignia.hpp"

	//   NATO Fleat Air Arm Insignia    Blue

	//#include "NATOFleatInsignia.hpp"
	
	//   NATO Field Badge Insignia    Grey
	
	#include "NATOFieldInsignia.hpp"
};