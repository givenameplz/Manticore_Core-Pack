class CfgPatches 
{ 
    class Manticore_Uniform 
    { 
		units[] = 
		{
			"Manticore_Navy_S_Uniform",
			"Manticore_Navy_O_Uniform",
			"Manticore_Navy_Uniform_O_Soldier",
			"Manticore_Navy_Uniform_S_Soldier",
			"Manticore_Beret_01",
			//"TFM_rt1523g_big_Test"
		};
		weapons[] = 
		{
			"Manticore_Navy_S_Uniform",
			"Manticore_Navy_O_Uniform",
			"Manticore_Navy_Uniform_O_Soldier",
			"Manticore_Navy_Uniform_S_Soldier",
			"Manticore_Beret_01"

		};
		version = "1.0";
		requiredAddons[] = 
		{
			"A3_Characters_F",
			"A3_Weapons_F",
			"rhs_c_troops",
			//"task_force_radio_items"

		};
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
    }; 
}; 

class cfgFactionClasses 
{   
	class Manticore_Faction 
	{	
        displayName = "Manticore"; 
        priority = 3; 
        side = 1;  
        icon = ""; 
    };
};


class CfgVehicles 
{
	//Import class

	#include "cfgVehiclesClassDefinition.hpp"
	
	//Manticore Navy

	#include "NavyUniformOfficer.hpp"
	#include "NavyUniformSoldier.hpp"

	// Bags
	//#include "Manticore_Bag.hpp"
};
class cfgWeapons 
{
	//Import class

	#include "cfgWaponsClassDefinition.hpp"

	//Manticore Navy

	#include "ManticoreBeret.hpp"
	#include "NavyUniform.hpp"

};
