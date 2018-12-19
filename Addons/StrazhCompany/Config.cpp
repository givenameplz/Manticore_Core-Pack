class CfgPatches
{
	class StrazhCompany
	{
		units[] =
		{
			StrazhCompany_Unit_Officer,
			StrazhCompany_Unit_Soldier_Rifleman,
			StrazhCompany_Unit_Soldier_SquadLeader,
			StrazhCompany_Unit_Soldier_AutoRifleman,
			StrazhCompany_Unit_Soldier_Grenadier,
			StrazhCompany_Unit_Soldier_Marksman,
			StrazhCompany_Unit_Soldier_Machinegunner,
			StrazhCompany_Unit_Soldier_Crewman,
			StrazhCompany_Unit_Soldier_CLS,
			StrazhCompany_Unit_Soldier_ATSpesialist,
			StrazhCompany_Unit_Soldier_HATSpesialist,
			StrazhCompany_Unit_Soldier_AASpesialist,
			StrazhCompany_Unit_Spetsnaz_SO,
			SRT_Typhoon_transport,
			SRT_Typhoon_ammo,
			SRT_Typhoon_device,
			SRT_Typhoon_transport_Cover,
			SRT_Typhoon_transport_medical,
			SRT_Typhoon_fuel,
			SRT_Typhoon_repair,
			SRT_LSV_AT,
			SRT_LSV_armed,
			SRT_LSV_unarmed,
			SRT_GAZ_233011,
			SRT_GAZ_233114,
			SRT_Heli_KA60_Kasatka_unarmed,
			SRT_Heli_KA60_Kasatka_armed,
			SRT_MBT_T140_Angara,
			SRT_MBT_T140K_Angara,
			SRT_Heli_Mi48_Kajman, 
			SRT_Heli_Mi290_Taru_transport, 
			SRT_Heli_Mi290_Taru_bench,

		};
		weapons[] =
		{
			StrazhCompany_Vest_LBV_Harness,
			StrazhCompany_Vest_6b13_6sh92_Radio_Base,
			StrazhCompany_Vest_6b13_6sh92_Radio,
			StrazhCompany_Vest_6b13_6sh92_vog,
			StrazhCompany_Vest_6b23_6sh92_headset,
			StrazhCompany_Unit_Soldier_Rifleman,
			StrazhCompany_Unit_Soldier_SquadLeader,
			StrazhCompany_Unit_Soldier_ATSpesialist,
			StrazhCompany_Unit_Officer,
			StrazhCompany_Uniform_Soldier,
			StrazhCompany_Uniform_Officer,
			StrazhCompany_Launch_RPG32_Base,
			StrazhCompany_arifle_ARX_blk_F_ARCOb_Sup_Perst1ik

		};
		version = "0.3";
		requiredAddons[] =
		{
			"A3_Characters_F",
			"A3_Weapons_F",
			"rhs_c_troops",
			"hlcweapons_aks",
			"A3_Weapons_F_Exp_Rifles_ARX",
			"A3_Supplies_F_Orange_Bags",
			"A3_Soft_F_EPC_Truck_03",
			"A3_Soft_F_Exp_LSV_02",
			"rhs_c_cars",
			"A3_Armor_F_Tank_MBT_04",
			"A3_Air_F_Heli_Light_02",
			"A3_Armor_F_Exp_APC_Tracked_02",
			"A3_Armor_F_Exp_MBT_02"

		};
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
	};
};

class cfgFactionClasses
{
	class StrazhCompany_Faction
	{
		displayName = "Strazhovaja Rota Tatar";
		priority = 4; // Position in list. 
		side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = "\StrazhCompany\Data\Icon\SCG_Logo_Defult_Icon.paa"; 
	};
	class StrazhCompany_Faction_Spetsnaz
	{
		displayName = "(SRT) Spetsnaz";
		priority = 4; // Position in list. 
		side = 0; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = "\StrazhCompany\Data\Icon\SCG_Logo_Defult_Icon.paa"; 
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_Trucks
	{
		displayName = "Trucks";
	};
};

class CfgWorlds
{
	class GenericNames
	{
		#include "StrazhCompany_GenericNames.hpp"
	};
};

class CfgVehicles
{
	// _Macro
		#include "StrazhCompany_CfgVehicles_Macro.hpp"

	//Import class
		#include "cfgVehiclesClassDefinition.hpp"

	//Strazh Company
		#include "StrazhCompany_CfgVehicles.hpp"

	// Unit
		#include "StrazhCompany_Unit_Soldier.hpp"
		//#include "StrazhCompany_Unit_Officer.hpp"
		#include "StrazhCompany_Unit_Spetsnaz.hpp"
	
	// Bags
		#include "StrazhCompany_Bag.hpp"
};

class cfgWeapons
{
	// _Macro
		#include "StrazhCompany_CfgWeapons_Macro.hpp"
		
	//Import class
		#include "cfgWaponsClassDefinition.hpp"

	//Strazh Company
		#include "StrazhCompany_CfgWeapons.hpp"

	// Uniform
		#include "StrazhCompany_Uniform.hpp"
		#include "StrazhCompany_Vest.hpp"
		#include "StrazhCompany_Headgear.hpp"
	
	// Weapons
		#include "StrazhCompany_Launch.hpp"
		#include "StrazhCompany_Weapons.hpp"

};

class CfgGroups
{
	class East
	{
		class StrazhCompany_Faction_G
		{
			name = "Strazh Company";
			#include "StrazhCompany_Group_infantry.hpp"
			#include "StrazhCompany_Group_MoterizedSquad.hpp"
			#include "StrazhCompany_Group_MechanizedGroup.hpp"
			#include "StrazhCompany_Group_Armor.hpp"
			#include "StrazhCompany_Group_SpecialForces.hpp"
			#include "StrazhCompany_Group_Crew.hpp"

		};
	};
};