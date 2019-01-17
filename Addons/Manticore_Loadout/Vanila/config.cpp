class CfgPatches
{
	class Manticore_Loadout_Vanila
	{
		addonRootClass = "Manticore_Loadout";
		units[] = 
		{
			Manticore_Loadout_Vanila_Wildcat_dynamicLoadout,
			Manticore_Loadout_Vanila_Wildcat,
			Manticore_Loadout_Vanila_Merlin,
			Manticore_Loadout_Vanila_Wiesel2_Cannon,
			Manticore_Loadout_Vanila_Wiesel2_AT,
			Manticore_Loadout_Vanila_Wiesel2_Scout,
			Manticore_Loadout_Vanila_LittleBird_AH6,
			Manticore_Loadout_Vanila_LittleBird_MH6,
			Manticore_Loadout_Vanila_LittleBird_MH6_Stripped,
			Manticore_Loadout_Vanila_Drone_UCAV,
			Manticore_Loadout_Vanila_Drone_Falcon,
			Manticore_Loadout_Vanila_Drone_AR2,
			Manticore_Loadout_Vanila_Drone_Stomper,
			Manticore_Loadout_Vanila_Drone_Stomper_RCWS,
			Manticore_Loadout_Vanila_Badger,
			Manticore_Loadout_Vanila_Namer,
			Manticore_Loadout_Vanila_Nemmera,
			Manticore_Loadout_Vanila_Bardelas,
			Manticore_Loadout_Vanila_Leopard,
			Manticore_Loadout_Vanila_Speedboat,
			Manticore_Loadout_Vanila_Artillery_Sholef,
			Manticore_Loadout_Vanila_Artillery_Seara,
			Manticore_Loadout_Vanila_Polaris_Unarmed,
			Manticore_Loadout_Vanila_Polaris_Armed,
			Manticore_Loadout_Vanila_Polaris_AT,
			Manticore_Loadout_Vanila_Polaris_Light,
			Manticore_Loadout_Vanila_Quadbike,
			Manticore_Loadout_Vanila_Rooikat,
			Manticore_Loadout_Vanila_Rooikat_UP
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"Manticore_Vanilla_Tank",
			"Manticore_Vanilla_IFV",
			"Manticore_Vanilla_AA",
			"Manticore_Vanilla_APC",
			"Manticore_Vanilla_Boats",
			"Manticore_Vanilla_Artillery",
			"Manticore_Vanilla_Drone",
			"Manticore_Vanilla_Heli",
			"Manticore_Vanilla_Light"
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
	#include "Merlin.hpp"
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