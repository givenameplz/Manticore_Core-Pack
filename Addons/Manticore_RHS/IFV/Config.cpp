class CfgPatches
{
	class Manticore_RHS_IFV
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"RHS_US_A2Port_Armor"
		};
	};
};

class CfgVehicles
{
	class RHS_M2A3;
	class RHS_M2A3_BUSKI;
	class RHS_M2A3_BUSKIII;
	class RHS_M6;

	class Manticore_RHS_IFV_M2A3 : RHS_M2A3
	{
		displayName = "M2A3";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_IFV_M2A3_BUSKI : RHS_M2A3_BUSKI
	{
		displayName = "M2A3 (BUSK I)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_buski_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_IFV_M2A3_BUSKIII : RHS_M2A3_BUSKIII
	{
		displayName = "M2A3 (BUSK III)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
			"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\base_buskiii_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\M2A2_Bradley\data\woodland\a3_buskiii_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa",
					"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_IFV_M6A2 : RHS_M6
	{
		displayName = "M6A2 (AA)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
			"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\a3_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa",
					"\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\base_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
};