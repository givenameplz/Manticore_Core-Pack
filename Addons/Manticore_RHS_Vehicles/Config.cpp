class CfgPatches 
{
	class Manticore_RHS_Vehicles
	{
		units[] = 
		{
			
		};
		weapons[] = {};
		version = "0.3.0";
		requiredAddons[] = 
		{
			"rhsusf_c_hmmwv",
			"rhsusf_c_troops",
			"rhsusf_c_heavyweapons",
			"Manticore_Vehicle"
		};
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
	};


};

class cfgFactionClasses
{
	class Manticore_Faction_2
	{
		displayName = "Manticore2";
		priority = 3; // Position in list. 
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = ""; //Custom Icon 
	};
};

class CfgVehicles
{
	class LandVehicle;
	class rhsusf_m1025_d_s;
	class rhsusf_m1025_d_s_m2;
	class rhsusf_m1025_d_s_Mk19;


		//Unarmed
		class Manticore_RHS_Vehicles_m1025_M_s : rhsusf_m1025_d_s
		{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025";
		Icon = "";
		Picture = "";
		crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
		factions = "Manticore_Faction_2";
	//	vehicleClass = "EdSubcat_Cars";
		displayname = "M1025A2 (Unarmed/Snorkel)";
		hiddenSelections[] =
		{
			"exterior",
			"interior",
			"A2",
			"wheels",
			"mainbody",
			"hood gratting",
			"camo1",
			"camo2",
			"unitdecals_1",
			"unitdecals_2",

			//hide rest of stuff
			"ind_wait",
			"ind_brake",
			"ind_highbeam"
		};
		HiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\unitdecals\usmc_210321_ca.paa",
			""
		};
	};


	//M2
	class Manticore_RHS_Vehicles_m1025_M_m2_s : rhsusf_m1025_d_s_m2
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_m2";
		Icon = "";
		Picture = "";
		crew = "B_crew_F";
		factions = "Manticore_Faction";
		displayname = "M1025A2 (M2/Snorkel)";

	};

	//Mk19
	class Manticore_RHS_Vehicles_m1025_M_mk19_s : rhsusf_m1025_d_s_Mk19
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m1025_mk19";
		Icon = "";
		Picture = "";
		crew = "B_crew_F";
		factions[] =
		{
			Manticore_Faction
		};
		displayname = "M1025A2 (Mk19/Snorkel)";
	};

/*

	//M998, 1-1/14 ton, cargo carrier, woodland, open (US Army)
	class Manticore_RHS_Vehicles_M998_M_s_2dr : rhsusf_m998_d_s_2dr
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_2dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (2D/Open/Snorkel)";
	};

	//HALF SOFT TOPS
	class Manticore_RHS_Vehicles_M998_M_s_2dr_halftop : rhsusf_m998_d_s_2dr_halftop
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_2dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (2D/Half/Snorkel)";

	};

	//FULL SOFT TOPS
	class Manticore_RHS_Vehicles_M998_M_s_2dr_fulltop : rhsusf_m998_d_s_2dr_fulltop
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_2dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (2D/Snorkel)";
	};


	//4 D R  C A R G O
	//4 D R  C A R G O / T R O O P  C A R R I E R
	//OPEN
	class Manticore_RHS_Vehicles_m998_M_s_4dr : rhsusf_m998_d_s_4dr
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_4dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (4D/Open/Snorkel)";
	};

	//HALF SOFTTOP
	class Manticore_RHS_Vehicles_m998_M_s_4dr_halftop : rhsusf_m998_d_s_4dr_halftop
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_4dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (4D/Half/Snorkel)";
	};

	//FULL SOFTTOP
	class Manticore_RHS_Vehicles_m998_M_s_4dr_fulltop : rhsusf_m998_d_s_4dr_fulltop
	{
		model = "\rhsusf\addons\rhsusf_hmmwv\rhsusf_m998_4dr";
		Icon = "";
		Picture = "";
		faction = "Manticore_Faction";
		displayname = "M1123 (4D/Snorkel)";
	}; */

};