class CfgPatches
{
	class Manticore_Loadout_Vanila
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {
			Manticore_Loadout_RHS_Humvee_M1043A2,
			Manticore_Loadout_RHS_Humvee_M1043A2_M2,
			Manticore_Loadout_RHS_Humvee_M1043A2_M19,
			Manticore_Loadout_RHS_Humvee_M1045A2_TOW,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Open,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Half,
			Manticore_Loadout_RHS_Humvee_M1123_2D_Full,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Open,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Half,
			Manticore_Loadout_RHS_Humvee_M1123_4D_Full,
			Manticore_Loadout_RHS_Mrap_Cat1A2,
			Manticore_Loadout_RHS_Mrap_Cat1A2_M2,
			Manticore_Loadout_RHS_Mrap_Cat1A2_Mk19,
			Manticore_Loadout_RHS_Mrap_M1220,
			Manticore_Loadout_RHS_Mrap_M1220_M2,
			Manticore_Loadout_RHS_Mrap_M1220_M2CROW,
			Manticore_Loadout_RHS_Mrap_M1220_M19,
			Manticore_Loadout_RHS_Mrap_M1230_M2,
			Manticore_Loadout_RHS_Mrap_M1230_M19,
			Manticore_Loadout_RHS_Mrap_M1220A1_Medical,
			Manticore_Loadout_RHS_APC_M113A3_Unarmed,
			Manticore_Loadout_RHS_APC_M113A3_M2,
			Manticore_Loadout_RHS_APC_M113A3_M19,
			Manticore_Loadout_RHS_APC_M113A3_M240,
			Manticore_Loadout_RHS_APC_M113A3_Ammo,
			Manticore_Loadout_RHS_APC_M113A3_Medical,
			Manticore_Loadout_RHS_IFV_M2A3,
			Manticore_Loadout_RHS_IFV_M2A3_BUSKI,
			Manticore_Loadout_RHS_IFV_M2A3_BUSKIII,
			Manticore_Loadout_RHS_IFV_M6A2,
			Manticore_Loadout_RHS_Truck_M1083A1P2,
			Manticore_Loadout_RHS_Truck_M1083A1P2_B,
			Manticore_Loadout_RHS_Truck_M1083A1P2_B_M2,
			Manticore_Loadout_RHS_Truck_M1083A1P2_Flatbed,
			Manticore_Loadout_RHS_Truck_M1083A1P2_B_Flatbed,
			Manticore_Loadout_RHS_Truck_M1083A1P2_B_M2_Flatbed,
			Manticore_Loadout_RHS_Truck_M977A4,
			Manticore_Loadout_RHS_Truck_M977A4_B,
			Manticore_Loadout_RHS_Truck_M977A4_B_M2,
			Manticore_Loadout_RHS_Truck_M977A4_Repair,
			Manticore_Loadout_RHS_Truck_M977A4_B_M2_Repair,
			Manticore_Loadout_RHS_Truck_M977A4_Ammo,
			Manticore_Loadout_RHS_Truck_M977A4_B_M2_Ammo,
			Manticore_Loadout_RHS_Truck_M978A4,
			Manticore_Loadout_RHS_Truck_M978A4_B,
			Manticore_Loadout_RHS_Artillery_M142,
			Manticore_Loadout_RHS_Artillery_M109A6,
			Manticore_Loadout_RHS_Heli_OH6M,
			Manticore_Loadout_RHS_Heli_MH6M,
			Manticore_Loadout_RHS_Heli_AH6M,
			Manticore_Loadout_RHS_Heli_CH47F,
			Manticore_Loadout_RHS_Heli_UH60M,
			Manticore_Loadout_RHS_Heli_UH60M2,
			Manticore_Loadout_RHS_Heli_UH60M_EWS,
			Manticore_Loadout_RHS_Heli_UH60M_ESSS,
			Manticore_Loadout_RHS_Heli_UH60M_MEV,
			Manticore_Loadout_RHS_Heli_UH60M_ESSS_MEV,
			Manticore_Loadout_RHS_Heli_AH64D,
			Manticore_Loadout_RHS_Heli_CH53E,
			Manticore_Loadout_RHS_Heli_UH1Y,
			Manticore_Loadout_RHS_Heli_UH1Y_FFAR,
			Manticore_Loadout_RHS_Heli_UH1Y_Unarmed,
			Manticore_Loadout_RHS_Heli_AH1Z,
			Manticore_Loadout_RHS_Naval_MkVSOC
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"Manticore_RHS_HUMVEE",
			"Manticore_RHS_MRAP",
			"Manticore_RHS_APC",
			"Manticore_RHS_Artillery",
			"Manticore_RHS_Heli",
			"Manticore_RHS_IFV",
			"Manticore_RHS_Naval",
			"Manticore_RHS_Truck"
		};
	};
};

class CfgVehicles
{
#include "RHSInport.hpp"
#include "../LoadoutMacro.hpp"

#include "Humvee.hpp"
#include "MRAP.hpp"
#include "APC.hpp"
#include "IFV.hpp"
#include "Truck.hpp"
#include "Artillery.hpp"
#include "Heli.hpp"
#include "Naval.hpp"
};

