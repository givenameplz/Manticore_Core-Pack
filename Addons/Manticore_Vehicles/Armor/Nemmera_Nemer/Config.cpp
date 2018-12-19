class CfgPatches
{
	class Manticore_Vehicle_Armor_Nemmera_Nemer
	{
		addonRootClass = "Manticore_Vehicle";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vehicle",
			"A3_Armor_F_Beta_APC_Tracked_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	class LandVehicle;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_rcws_F;
	
	#include "ManticoreNemmera.hpp"

	#include "ManticoreNemer.hpp"
};