class CfgPatches
{
	class Manticore_RHS_MRAP
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_Cougar",
			"rhsusf_c_Caiman",
		};
	};
};

class CfgVehicles
{
	class rhsusf_CGRCAT1A2_usmc_wd;
	class rhsusf_CGRCAT1A2_M2_usmc_wd;
	class rhsusf_CGRCAT1A2_Mk19_usmc_wd;
	class rhsusf_M1220_usarmy_wd;
	class rhsusf_M1220_M2_usarmy_wd;
	class rhsusf_M1220_M153_M2_usarmy_wd;
	class rhsusf_M1220_MK19_usarmy_wd;
	class rhsusf_M1230_M2_usarmy_wd;
	class rhsusf_M1230_MK19_usarmy_wd;
	class rhsusf_M1230a1_usarmy_wd;

	class Manticore_RHS_Mrap_Cat1A2 : rhsusf_CGRCAT1A2_usmc_wd
	{
		displayName = "CGR CAT1A2";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa" };
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_Cat1A2_M2 : rhsusf_CGRCAT1A2_M2_usmc_wd
	{
		displayName = "CGR CAT1A2 (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa" };
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_Cat1A2_Mk19 : rhsusf_CGRCAT1A2_Mk19_usmc_wd
	{
		displayName = "CGR CAT1A2 (Mk19)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa" };
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa","rhsusf\addons\rhsusf_cougar\data\CGR_Labels_CA.paa","rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Mrap_M1220 : rhsusf_M1220_usarmy_wd
	{
		displayName = "M1220";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_M1220_M2 : rhsusf_M1220_M2_usarmy_wd
	{
		displayName = "M1220 (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_M1220_M2CROW : rhsusf_M1220_M153_M2_usarmy_wd
	{
		displayName = "M1220 (M2 CROW)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_M1220_M19 : rhsusf_M1220_MK19_usarmy_wd
	{
		displayName = "M1220 (M19)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Mrap_M1230_M2 : rhsusf_M1230_M2_usarmy_wd
	{
		displayName = "M1230 (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_M1230_M19 : rhsusf_M1230_MK19_usarmy_wd
	{
		displayName = "M1230 (M19)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Mrap_M1220A1_Medical : rhsusf_M1230a1_usarmy_wd
	{
		displayName = "M1230A1 (Medical)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa","rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa","rhsusf\addons\rhsusf_caiman\data\M153_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
};