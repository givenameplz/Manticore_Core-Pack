class CfgPatches
{
	class Manticore_RHS_HUMVEE
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_hmmwv"
		};
	};
};

class CfgVehicles
{
	class rhsusf_m1043_w_s;
	class rhsusf_m1043_w_s_m2;
	class rhsusf_m1043_w_s_mk19;
	class rhsusf_m1045_w_s;
	class rhsusf_m998_w_s_2dr;
	class rhsusf_m998_w_s_2dr_halftop;
	class rhsusf_m998_w_s_2dr_fulltop;
	class rhsusf_m998_w_s_4dr;
	class rhsusf_m998_w_s_4dr_halftop;
	class rhsusf_m998_w_s_4dr_fulltop;


	class Manticore_RHS_Humvee_M1043A2 : rhsusf_m1043_w_s
	{
		displayName = "M1043A2 (Unarmed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Manticam_Winter
			{
				displayName = "Winter";
				textures[] =
				{
					"\Manticore_RHS\HUMVEE\Data\Winter\RHS_Humvee_M998Exterior_00.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1043A2_M2 : rhsusf_m1043_w_s_m2
	{
		displayName = "M1043A2 (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1043A2_M19 : rhsusf_m1043_w_s_mk19
	{
		displayName = "M1043A2 (M19)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1045A2_TOW : rhsusf_m1045_w_s
	{
		displayName = "M1045A2 (TOW)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m1043_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Humvee_M1123_2D_Open : rhsusf_m998_w_s_2dr
	{
		displayName = "M1123 2D (Opentop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1123_2D_Half : rhsusf_m998_w_s_2dr_halftop
	{
		displayName = "M1123 2D (Halftop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1123_2D_Full : rhsusf_m998_w_s_2dr_fulltop
	{
		displayName = "M1123 2D (Fulltop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Humvee_M1123_4D_Open : rhsusf_m998_w_s_4dr
	{
		displayName = "M1123 4D (Opentop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1123_4D_Half : rhsusf_m998_w_s_4dr_halftop
	{
		displayName = "M1123 4D (Halftop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Humvee_M1123_4D_Full : rhsusf_m998_w_s_4dr_fulltop
	{
		displayName = "M1123 4D (Fulltop)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
		};
		class TextureSources
		{
			class RHS_Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_g_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_WD_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_w_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\m998_4drcargo_d_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Olive",0,"RHS_Woodland",0,"RHS_Desert",0 };
	};
};