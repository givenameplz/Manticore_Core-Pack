class CfgPatches
{
	class Manticore_Vehicle_Armor_Leopard
	{
		addonRootClass = "Manticore_Vehicle";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vehicle",
			"A3_Armor_F_EPB_MBT_03"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	#include "ManticoreLeopard.hpp"
};