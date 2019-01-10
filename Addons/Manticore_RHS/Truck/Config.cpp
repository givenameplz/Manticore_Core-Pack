class CfgPatches
{
	class Manticore_RHS_Truck
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_fmtv",
			"rhsusf_c_HEMTT_A4",
		};
	};
};

class CfgVehicles
{
	class rhsusf_M1083A1P2_WD_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_WD_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy;
	class rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy;
	class rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy;
	class rhsusf_M977A4_usarmy_wd;
	class rhsusf_M977A4_BKIT_usarmy_wd;
	class rhsusf_M977A4_BKIT_M2_usarmy_wd;
	class rhsusf_M977A4_REPAIR_usarmy_wd;
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;
	class rhsusf_M977A4_AMMO_usarmy_wd;
	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;
	class rhsusf_M978A4_usarmy_wd;
	class rhsusf_M978A4_BKIT_usarmy_wd;

	class Manticore_RHS_Truck_M1083A1P2 : rhsusf_M1083A1P2_WD_fmtv_usarmy
	{
		displayName = "M1083A1P2";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M1083A1P2_B : rhsusf_M1083A1P2_B_WD_fmtv_usarmy
	{
		displayName = "M1083A1P2-B";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M1083A1P2_B_M2 : rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy
	{
		displayName = "M1083A1P2-B (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Truck_M1083A1P2_Flatbed : rhsusf_M1083A1P2_WD_flatbed_fmtv_usarmy
	{
		displayName = "M1083A1P2 (flatbed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M1083A1P2_B_Flatbed : rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy
	{
		displayName = "M1083A1P2-B (flatbed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M1083A1P2_B_M2_Flatbed : rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy
	{
		displayName = "M1083A1P2-B (M2/flatbed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
			"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
			"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
			"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_wd_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVChassis_WD_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVCab_W_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_WD_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Cab_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_wheel_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_25TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_BKIT_D_CO.paa",
					"rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis1_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRear_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Canvas2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Shelter_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Hospital_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_5TRearLHC_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_Chassis2_D_CO.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_co.paa",
					"rhsusf\addons\rhsusf_fmtv\data\FMTV_SOVKit_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Truck_M977A4 : rhsusf_M977A4_usarmy_wd
	{
		displayName = "M977A4";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_B : rhsusf_M977A4_BKIT_usarmy_wd
	{
		displayName = "M977A4-B";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_B_M2 : rhsusf_M977A4_BKIT_M2_usarmy_wd
	{
		displayName = "M977A4-B (M2)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_d_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_Repair : rhsusf_M977A4_REPAIR_usarmy_wd
	{
		displayName = "M977A4 (Repair)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_B_M2_Repair : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd
	{
		displayName = "M977A4-B (M2/Repair)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_d_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_Ammo : rhsusf_M977A4_AMMO_usarmy_wd
	{
		displayName = "M977A4 (Ammo)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M977A4_B_M2_Ammo : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd
	{
		displayName = "M977A4-B (M2/Ammo)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
			"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_d_co.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa",
					"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M978A4 : rhsusf_M978A4_usarmy_wd
	{
		displayName = "M978A4 (Fule)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
	class Manticore_RHS_Truck_M978A4_B : rhsusf_M978A4_BKIT_usarmy_wd
	{
		displayName = "M978A4-B (Fule)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
			"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
		};
		class TextureSources
		{
			class RHS_Woodland
			{
				displayName = "Woodland";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO_Des.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\FUEL_DES_CO.paa",
					"rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_DES_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Woodland",0,"RHS_Desert",0 };
	};
};