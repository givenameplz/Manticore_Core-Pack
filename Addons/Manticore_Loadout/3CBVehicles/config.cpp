class CfgPatches
{
	class Manticore_Loadout_3CBVehicles
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {
			Manticore_Loadout_3CBVehicles_LandRoverHMG,
			Manticore_Loadout_3CBVehicles_LandRoverMilan,
			Manticore_Loadout_3CBVehicles_LandRoverGPMG,
			Manticore_Loadout_3CBVehicles_LandRoverGMG,
			Manticore_Loadout_3CBVehicles_LandRoverSoftTop,
			Manticore_Loadout_3CBVehicles_LandRoverHardTop,
			Manticore_Loadout_3CBVehicles_LandRoverSnatch,
			Manticore_Loadout_3CBVehicles_LandRoverAmbulance,
			Manticore_Loadout_3CBVehicles_LandRoverSoftTop_Med,
			Manticore_Loadout_3CBVehicles_LandRoverHardTop_Med,
			Manticore_Loadout_3CBVehicles_Coyote_Logistics_HMG,
			Manticore_Loadout_3CBVehicles_Coyote_Logistics_GMG,
			Manticore_Loadout_3CBVehicles_Coyote_Passenger_HMG,
			Manticore_Loadout_3CBVehicles_Coyote_Passenger_GMG,
			Manticore_Loadout_3CBVehicles_Jackal2_HMG,
			Manticore_Loadout_3CBVehicles_Jackal2_GMG,
			Manticore_Loadout_3CBVehicles_Panther_GPMG,
			Manticore_Loadout_3CBVehicles_Buldog_RWS,
			Manticore_Loadout_3CBVehicles_Buldog_GPMG,
			Manticore_Loadout_3CBVehicles_RHIB_HMG,
			Manticore_Loadout_3CBVehicles_RHIB_GPMG,
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
			Manticore_Loadout_3CBVehicles_Apache_AH1_JS
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
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
			"uk3cb_baf_vehicles_weapons"
		};
	};
};

class CfgVehicles
{
#include "../LoadoutMacro.hpp"
#include "3CBVehiclesInport.hpp"
	//Light Atack
#include "LandRover.hpp"
#include "Coyotejackal.hpp"
	//Car
#include "Panther.hpp"
	//APC
#include "Buldog.hpp"
	//Heli
#include "Wildcat.hpp"
#include "Merlin.hpp"
#include "Apache.hpp"
	//Naval
#include "RHIB.hpp"
};