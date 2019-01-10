class CfgPatches
{
	class Manticore_Loadout_Vanila
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {

			Manticore_Loadout_Vanila_Wildcat_dynamicLoadout,
			Manticore_Loadout_Vanila_Wildcat_unarmed,
			//Manticore_Loadout_Vanila_Merlin_unarmed,
			Manticore_Loadout_Vanila_Wiesel2_Cannon,
			Manticore_Loadout_Vanila_Wiesel2_AT,
			Manticore_Loadout_Vanila_Wiesel2_Scout,
			Manticore_Loadout_Vanila_LittleBird_AH6,
			Manticore_Loadout_Vanila_LittleBird_MH6,
			Manticore_Loadout_Vanila_LittleBird_MH6_Stripped,
			Manticore_Loadout_Vanila_Drone_UCAV,
			Manticore_Loadout_Vanila_Drone_Falcon,
			Manticore_Loadout_Vanila_Drone_AR2,
			Manticore_Loadout_Vanila_Badger,
			Manticore_Loadout_Vanila_Namer,
			Manticore_Loadout_Vanila_Nemmera,
			Manticore_Loadout_Vanila_Bardelas,
			Manticore_Loadout_Vanila_Leopard,
			Manticore_Loadout_Vanila_Speedboat,
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"Manticore_Vehicle_Armor_Badger_IFV",
			"Manticore_Vehicle_Armor_Bardelas",
			"Manticore_Vehicle_Armor_Leopard",
			"Manticore_Vehicle_Armor_Nemmera_Nemer",
			"Manticore_Vehicle_Boats_Speedboat_Minigun",
			"A3_Air_F_Heli_Light_01",
			"A3_Drones_F_Air_F_Gamma_UAV_01",
			"A3_Air_F_Exp_UAV_03",
			"A3_Air_F_Jets_UAV_05",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Soft_F_Quadbike_01",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_armor_f_tank_lt_01"
		};
	};
};

class CfgVehicles
{
#include "VanilaInport.hpp"
#include "../LoadoutMacro.hpp"

	//Light Attack
#include "Polaris.hpp"
#include "Quadbike.hpp"
	//Heli
#include "Wildcat.hpp"
	//#include "Merlin.hpp"
#include "LittleBird.hpp"
	//APC IFV
#include "Badger.hpp"
#include "Namer.hpp"
#include "Nemmera.hpp"
	//AA
#include "Bardelas.hpp"
	//Tank
#include "Wiesel2.hpp"
#include "Leopard.hpp"
#include "Rooikat.hpp"
	//Atrillery
#include "Artillery.hpp"
	//Naval
#include "Speedboat.hpp"
	//Drone
#include "Drone.hpp"
};