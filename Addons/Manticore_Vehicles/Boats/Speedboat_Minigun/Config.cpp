class CfgPatches
{
	class Manticore_Vehicle_Boats_Speedboat_Minigun
	{
		addonRootClass = "Manticore_Vehicle";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vehicle",
			"A3_boat_f_Boat_Armed_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	#include "ManticoreSpeedboatMinigun.hpp"
};