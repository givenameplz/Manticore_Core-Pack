//Editor Notes
//Nameing: Kit = gun and ammo, Ammo = Ammo, General = Food and Water, Medical = Medical suply, 
//Field Kit = Resuply for a size of a group



///General
class Manticore_Loadout_Crate_General : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (General) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		class _xx_ACE_Canteen
		{
			name = "ACE_Canteen";
			count = 80;
		};
		class _xx_ACE_MRE_BeefStew
		{
			name = "ACE_MRE_BeefStew";
			count = 20;
		};
		class _xx_ACE_MRE_CreamChickenSoup
		{
			name = "ACE_MRE_CreamChickenSoup";
			count = 20;
		};
		class _xx_ACE_MRE_CreamTomatoSoup
		{
			name = "ACE_MRE_CreamTomatoSoup";
			count = 20;
		};
		class _xx_ACE_MRE_MeatballsPasta
		{
			name = "ACE_MRE_MeatballsPasta";
			count = 20;
		};
	};
	class TransportBackpacks
	{
	};
};

///Medical
class Manticore_Loadout_Crate_Medical : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (Medical) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		class _xx_ACE_atropine
		{
			name = "ACE_atropine";
			count = 20;
		};
		class _xx_adv_aceCPR_AED
		{
			name = "adv_aceCPR_AED";
			count = 4;
		};
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 100;
		};
		class _xx_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 100;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 100;
		};
		class _xx_ACE_quikclot
		{
			name = "ACE_quikclot";
			count = 100;
		};
		class _xx_ACE_bodyBag
		{
			name = "ACE_bodyBag";
			count = 20;
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 40;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 40;
		};
		class _xx_ACE_salineIV
		{
			name = "ACE_salineIV";
			count = 30;
		};
		class _xx_ACE_salineIV_250
		{
			name = "ACE_salineIV_250";
			count = 20;
		};
		class _xx_ACE_salineIV_500
		{
			name = "ACE_salineIV_500";
			count = 40;
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 60;
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 4;
		};
		class _xx_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 40;
		};
		class _xx_ACE_MRE_CreamTomatoSoup
		{
			name = "ACE_MRE_CreamTomatoSoup";
			count = 30;
		};
		class _xx_ACE_WaterBottle
		{
			name = "ACE_WaterBottle";
			count = 60;
		};
		class _xx_ACE_Banana
		{
			name = "ACE_Banana";
			count = 30;
		};
	};
	class TransportBackpacks
	{
	};
};

///Ammo
class Manticore_Loadout_Crate_Ammo_HK416 : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (HK416) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			count = 50;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
		{
			magazine = "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";
			count = 50;
		};
		class _xx_3Rnd_UGL_FlareGreen_F
		{
			magazine = "3Rnd_UGL_FlareGreen_F";
			count = 10;
		};
		class _xx_3Rnd_UGL_FlareRed_F
		{
			magazine = "3Rnd_UGL_FlareRed_F";
			count = 10;
		};
		class _xx_3Rnd_SmokeRed_Grenade_shell
		{
			magazine = "3Rnd_SmokeRed_Grenade_shell";
			count = 10;
		};
		class _xx_3Rnd_SmokeYellow_Grenade_shell
		{
			magazine = "3Rnd_SmokeYellow_Grenade_shell";
			count = 10;
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
			magazine = "3Rnd_HE_Grenade_shell";
			count = 10;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};

///Kit's
//Launcher
class Manticore_Loadout_Crate_Kit_MAAWS_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (MAAWS) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_launch_MRAWS_green_F
		{
			weapon = "launch_MRAWS_green_F";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 10;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 4;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_Metis_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Metis-M) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_launch_O_Vorona_green_F
		{
			weapon = "launch_O_Vorona_green_F";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_Vorona_HEAT
		{
			magazine = "Vorona_HEAT";
			count = 8;
		};
		class _xx_Vorona_HE
		{
			magazine = "Vorona_HE";
			count = 2;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_Stinger_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Stinger) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_fim92
		{
			weapon = "rhs_weap_fim92";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_fim92_mag
		{
			magazine = "rhs_fim92_mag";
			count = 8;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Kit_M136_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (M136) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_M136
		{
			weapon = "rhs_weap_M136";
			count = 2;
		};
		class _xx_rhs_weap_M136_hedp
		{
			weapon = "rhs_weap_M136_hedp";
			count = 4;
		};
		class _xx_rhs_weap_M136_hp
		{
			weapon = "rhs_weap_M136_hp";
			count = 2;
		};
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
//Rifle
class Manticore_Loadout_Crate_Kit_HKh16_RHS : Box_NATO_Wps_F
{
	displayName = "Launcher Crate (HK416) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_hk416d145
		{
			weapon = "rhs_weap_hk416d145";
			count = 2;
		};
		class _xx_rhs_weap_hk416d145_m320
		{
			weapon = "rhs_weap_hk416d145_m320";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			count = 30;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
		{
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
			count = 30;
		};
		class _xx_3Rnd_UGL_FlareGreen_F
		{
			magazine = "3Rnd_UGL_FlareGreen_F";
			count = 10;
		};
		class _xx_3Rnd_UGL_FlareRed_F
		{
			magazine = "3Rnd_UGL_FlareRed_F";
			count = 10;
		};
		class _xx_3Rnd_SmokeOrange_Grenade_shell
		{
			magazine = "3Rnd_SmokeOrange_Grenade_shell";
			count = 10;
		};
		class _xx_3Rnd_SmokeRed_Grenade_shell
		{
			magazine = "3Rnd_SmokeRed_Grenade_shell";
			count = 10;
		};
		class _xx_3Rnd_SmokeYellow_Grenade_shell
		{
			magazine = "3Rnd_SmokeYellow_Grenade_shell";
			count = 10;
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
			magazine = "3Rnd_HE_Grenade_shell";
			count = 10;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 3;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 3;
		};
	};
	class TransportBackpacks
	{
	};
};

///Field Kit
class Manticore_Loadout_Crate_Field_1 : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit 1) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_hk416d145
		{
			weapon = "rhs_weap_hk416d145";
			count = 1;
		};
		class _xx_rhs_weap_hk416d145_m320
		{
			weapon = "rhs_weap_hk416d145_m320";
			count = 1;
		};
		class _xx_hlc_lmg_mk46
		{
			weapon = "hlc_lmg_mk46";
			count = 1;
		};
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "hlc_rifle_m14sopmod";
			count = 1;
		};
		class _xx_rhs_weap_m27iar
		{
			weapon = "rhs_weap_m27iar";
			count = 1;
		};
		class _xx_rhs_weap_M136_hedp
		{
			weapon = "rhs_weap_M136_hedp";
			count = 1;
		};
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 3;
		};
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 6;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 6;
		};
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 5;
		};
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 4;
		};
		class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
		{
			magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			count = 60;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
		{
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
			count = 60;
		};
		class _xx_3Rnd_UGL_FlareRed_F
		{
			magazine = "3Rnd_UGL_FlareRed_F";
			count = 5;
		};
		class _xx_3Rnd_UGL_FlareGreen_F
		{
			magazine = "3Rnd_UGL_FlareGreen_F";
			count = 5;
		};
		class _xx_3Rnd_UGL_FlareYellow_F
		{
			magazine = "3Rnd_UGL_FlareYellow_F";
			count = 5;
		};
		class _xx_3Rnd_SmokeRed_Grenade_shell
		{
			magazine = "3Rnd_SmokeRed_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_SmokeYellow_Grenade_shell
		{
			magazine = "3Rnd_SmokeYellow_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_SmokeGreen_Grenade_shell
		{
			magazine = "3Rnd_SmokeGreen_Grenade_shell";
			count = 5;
		};
		class _xx_3Rnd_HE_Grenade_shell
		{
			magazine = "3Rnd_HE_Grenade_shell";
			count = 10;
		};
	};
	class TransportItems
	{
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 1;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 5;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 5;
		};
		class _xx_rhsusf_acc_ACOG_RMR
		{
			name = "rhsusf_acc_ACOG_RMR";
			count = 1;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
		class _xx_ACE_EntrenchingTool
		{
			name = "ACE_EntrenchingTool";
			count = 2;
		};
		class _xx_ACE_Fortify
		{
			name = "ACE_Fortify";
			count = 2;
		};
		class _xx_ACE_RangeCard
		{
			name = "1";
			count = 0;
		};
		class _xx_ACE_IR_Strobe_Item
		{
			name = "ACE_IR_Strobe_Item";
			count = 5;
		};
		class _xx_ACE_CableTie
		{
			name = "ACE_CableTie";
			count = 10;
		};
		class _xx_ACE_UAVBattery
		{
			name = "ACE_UAVBattery";
			count = 1;
		};
		class _xx_Laserbatteries
		{
			name = "Laserbatteries";
			count = 1;
		};
		class _xx_ACE_salineIV_500
		{
			name = "ACE_salineIV_500";
			count = 4;
		};
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 10;
		};
		class _xx_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 10;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 10;
		};
		class _xx_ACE_Canteen
		{
			name = "ACE_Canteen";
			count = 10;
		};
		class _xx_ACE_MRE_BeefStew
		{
			name = "ACE_MRE_BeefStew";
			count = 10;
		};
		class _xx_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 10;
		};
	};
	class TransportBackpacks
	{
		class _xx_VSM_OGA_OD_Backpack_Kitbag
		{
			backpack = "VSM_OGA_OD_Backpack_Kitbag";
			count = 2;
		};
	};
};