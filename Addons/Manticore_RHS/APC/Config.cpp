class CfgPatches
{
	class Manticore_RHS_APC
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_m113"
		};
	};
};

class CfgVehicles
{
	class rhsusf_m113_usarmy_unarmed;
	class rhsusf_m113_usarmy;
	class rhsusf_m113_usarmy_M240;
	class rhsusf_m113_usarmy_MK19;
	class rhsusf_m113_usarmy_supply;
	class rhsusf_m113_usarmy_medical;

	class Manticore_RHS_APC_M113A3_Unarmed : rhsusf_m113_usarmy_unarmed
	{
		displayName = "M113A3";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";
		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_APC_M113A3_M2 : rhsusf_m113_usarmy
	{
		displayName = "M113A3 (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_APC_M113A3_M19 : rhsusf_m113_usarmy_MK19
	{
		displayName = "M113A3 (M19)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_APC_M113A3_M240 : rhsusf_m113_usarmy_M240
	{
		displayName = "M113A3 (M240)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_APC_M113A3_Ammo : rhsusf_m113_usarmy_supply
	{
		displayName = "M113A3 (Ammo)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_APC_M113A3_Medical : rhsusf_m113_usarmy_medical
	{
		displayName = "M113A3 (MEV)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_med_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_med_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_med_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_med_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa",
					"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
};