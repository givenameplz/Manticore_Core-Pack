class CfgPatches
{
	class Manticore_Loadout
	{
		units[] =
		{
			//3CBVehicles
			Manticore_Loadout_3CBVehicles_LandRoverHMG,
			Manticore_Loadout_3CBVehicles_LandRoverMilan,
			Manticore_Loadout_3CBVehicles_LandRoverGPMG,
			Manticore_Loadout_3CBVehicles_LandRoverGMG,
			Manticore_Loadout_3CBVehicles_Coyote_Logistics_HMG,
			Manticore_Loadout_3CBVehicles_Coyote_Logistics_GMG,
			Manticore_Loadout_3CBVehicles_Coyote_Passenger_HMG,
			Manticore_Loadout_3CBVehicles_Coyote_Passenger_GMG,
			Manticore_Loadout_3CBVehicles_Jackal2_HMG,
			Manticore_Loadout_3CBVehicles_Jackal2_GMG,
			Manticore_Loadout_3CBVehicles_Panther_GPMG,
			Manticore_Loadout_3CBVehicles_Buldog_RWS,
			Manticore_Loadout_3CBVehicles_Buldog_GPMG,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_6A,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_6B,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_6C,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_6D,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_HEL_6A,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_8A,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_8B,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_8C,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_CAS_8D,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_HEL_8A,
			Manticore_Loadout_3CBVehicles_Wildcat_AH1_TRN_8A,
			Manticore_Loadout_3CBVehicles_Wildcat_HMA2_TRN_8A,
			Manticore_Loadout_3CBVehicles_Merlin_HC4_18,
			Manticore_Loadout_3CBVehicles_Merlin_HC4_18_GPMG,
			Manticore_Loadout_3CBVehicles_Merlin_HC4_24,
			Manticore_Loadout_3CBVehicles_Merlin_HC4_32,
			Manticore_Loadout_3CBVehicles_Merlin_Cargo,
			Manticore_Loadout_3CBVehicles_Merlin_HC4_CSAR,
			Manticore_Loadout_3CBVehicles_Merlin_HM2_18,
			Manticore_Loadout_3CBVehicles_Apache_AH1_DynamicLoadout,
			Manticore_Loadout_3CBVehicles_Apache_AH1_DynamicLoadoutUnlimited,
			Manticore_Loadout_3CBVehicles_Apache_AH1_AT,
			Manticore_Loadout_3CBVehicles_Apache_AH1_CAS,
			Manticore_Loadout_3CBVehicles_Apache_AH1,
			Manticore_Loadout_3CBVehicles_Apache_AH1_JS,



			//Vanila
			Manticore_Loadout_Vanila_Wildcat_dynamicLoadout,
			Manticore_Loadout_Vanila_Wildcat_unarmed,
			//Manticore_Loadout_Vanila_Merlin_unarmed,
			Manticore_Loadout_Vanila_Wiesel2_Cannon,
			Manticore_Loadout_Vanila_Wiesel2_AT,
			Manticore_Loadout_Vanila_Wiesel2_Scout,

			//Crates
			Manticore_Loadout_Crate_General,
			Manticore_Loadout_Crate_Medical,
			Manticore_Loadout_Crate_Ammo_HK416,
			Manticore_Loadout_Crate_Kit_MAAWS_Vanila,
			Manticore_Loadout_Crate_Kit_Metis_Vanila,
			Manticore_Loadout_Crate_Kit_Stinger_RHS,
			Manticore_Loadout_Crate_Kit_M136_RHS

		};
		weapons[] =
		{
			

		};
		version = "1.0";
		requiredAddons[] =
		{
			"uk3cb_baf_vehicles",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_vehicles_coyote_jackal",
			"uk3cb_baf_vehicles_panther",
			"uk3cb_baf_vehicles_wildcat",
			"UK3CB_BAF_Wildcat",
			"uk3cb_baf_vehicles_merlin",
			"UK3CB_BAF_Merlin",
			"uk3cb_baf_vehicles_bulldog",
			"uk3cb_baf_vehicles_apache",
			"uk3cb_baf_vehicles_rhib",
			"uk3cb_baf_vehicles_weapons",
			"A3_Air_F_EPB_Heli_Light_03",
			"A3_Air_F_Beta_Heli_Transport_02",
			"A3_armor_f_tank_lt_01",
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Supplies_F_Exp",
			"A3_Weapons_F_Ammoboxes",
			"A3_Supplies_F_Heli_Slingload",
			"A3_Supplies_F_Heli_CargoNets"

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
		priority = 3; // Position in list. 
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = ""; //Custom Icon 
	};
};

class CfgEditorCategories
{
	class Manticore_Categories
	{
		displayName = "Manticore";
	};
};

class CfgEditorSubcategories
{
	class Manticore_Categories_Supply
	{
		displayName = "Supply";
	};
};

class CfgVehicles
{
	///Inport
	#include "Inport.hpp"

	///3CBVehicles
	#include "3CBVehicles\Manticore_Loadout_3CBVehicles.hpp"
	

	///Vanila
	#include "Vanila\Manticore_Loadout_Vanila.hpp"
	

	///Crate
	#include "Crates\Manticore_Loadout_Crate.hpp"
};	