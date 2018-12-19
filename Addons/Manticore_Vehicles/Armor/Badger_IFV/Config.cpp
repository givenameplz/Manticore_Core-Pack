class CfgPatches
{
	class Manticore_Vehicle_Armor_Badger_IFV
	{
		addonRootClass = "Manticore_Vehicle";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vehicle",
			"A3_Armor_F_Beta_APC_Wheeled_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	#include "ManticoreBadger.hpp"
};