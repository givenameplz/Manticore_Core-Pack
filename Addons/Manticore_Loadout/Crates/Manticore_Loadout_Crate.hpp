//Editor Notes
//Nameing: Kit = gun and ammo, Ammo = Ammo, General = Food, Water and Medical suply, 
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
class Manticore_Loadout_Crate_Ammo_MAAWS_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (MAAWS) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_MRAWS_HEAT_F
		{
			magazine = "MRAWS_HEAT_F";
			count = 12;
		};
		class _xx_MRAWS_HE_F
		{
			magazine = "MRAWS_HE_F";
			count = 6;
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
class Manticore_Loadout_Crate_Ammo_Metis_Vanila : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Metis-M) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_Vorona_HEAT
		{
			magazine = "Vorona_HEAT";
			count = 10;
		};
		class _xx_Vorona_HE
		{
			magazine = "Vorona_HE";
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
class Manticore_Loadout_Crate_Ammo_Stinger_RHS : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Stinger) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhs_fim92_mag
		{
			magazine = "rhs_fim92_mag";
			count = 12;
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
class Manticore_Loadout_Crate_Ammo_Mk46_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk46) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 16;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_Mk48_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk48) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_100Rnd_762x51_Mdim_M60E4
		{
			magazine = "hlc_100Rnd_762x51_Mdim_M60E4";
			count = 10;
		};
		class _xx_hlc_100Rnd_762x51_M_M60E4
		{
			magazine = "hlc_100Rnd_762x51_M_M60E4";
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
class Manticore_Loadout_Crate_Ammo_M14_HLC : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Troy M14) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 20;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 20;
		};
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Ammo_Mk11_RHS : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (Mk 11 Mod 0) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhsusf_20Rnd_762x51_SR25_m993_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count = 10;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m62_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m62_Mag";
			count = 10;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m118_special_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count = 10;
		};
		class _xx_ACE_10Rnd_762x51_M118LR_Mag
		{
			magazine = "ACE_10Rnd_762x51_M118LR_Mag";
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
class Manticore_Loadout_Crate_Ammo_M27_RHS : Box_NATO_Ammo_F
{
	displayName = "Ammocrate (M27 IAR) (Ammo) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 20;
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
	displayName = "Weapons Crate (HK416) (Kit) (TFM)";
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
class Manticore_Loadout_Crate_Kit_Mk46_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (mk46) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_lmg_mk46
		{
			weapon = "hlc_lmg_mk46";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_200rnd_556x45_M_SAW
		{
			magazine = "hlc_200rnd_556x45_M_SAW";
			count = 12;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
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
class Manticore_Loadout_Crate_Kit_Mk48_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk48) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_lmg_mk48
		{
			weapon = "hlc_lmg_mk48";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_100Rnd_762x51_Mdim_M60E4
		{
			magazine = "hlc_100Rnd_762x51_Mdim_M60E4";
			count = 10;
		};
		class _xx_hlc_100Rnd_762x51_M_M60E4
		{
			magazine = "hlc_100Rnd_762x51_M_M60E4";
			count = 10;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
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
class Manticore_Loadout_Crate_Kit_M14_HLC : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Troy M14) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "hlc_rifle_m14sopmod";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_hlc_20Rnd_762x51_T_M14
		{
			magazine = "hlc_20Rnd_762x51_T_M14";
			count = 12;
		};
		class _xx_hlc_20Rnd_762x51_B_M14
		{
			magazine = "hlc_20Rnd_762x51_B_M14";
			count = 12;
		};
	};
	class TransportItems
	{
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_ACOG_RMR
		{
			name = "rhsusf_acc_ACOG_RMR";
			count = 2;
		};
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Kit_Mk11_RHS : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk 11 Mod 0) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_hlc_rifle_m14sopmod
		{
			weapon = "rhs_weap_sr25";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_rhsusf_20Rnd_762x51_SR25_m993_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m993_Mag";
			count = 5;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m62_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m62_Mag";
			count = 5;
		};
		class _xx_rhsusf_20Rnd_762x51_SR25_m118_special_Mag
		{
			magazine = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
			count = 5;
		};
		class _xx_ACE_10Rnd_762x51_M118LR_Mag
		{
			magazine = "ACE_10Rnd_762x51_M118LR_Mag";
			count = 5;
		};
	};
	class TransportItems
	{
		class _xx_bipod_01_F_blk
		{
			name = "bipod_01_F_blk";
			count = 2;
		};
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_optic_ams
		{
			name = "optic_ams";
			count = 2;
		};
	};
	class TransportBackpacks
	{
	};
};
class Manticore_Loadout_Crate_Kit_M27_RHS : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (M27 IAR) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		class _xx_rhs_weap_m27iar
		{
			weapon = "rhs_weap_m27iar";
			count = 2;
		};
	};
	class TransportMagazines
	{
		class _xx_rhs_mag_100Rnd_556x45_M855A1_cmag_mixed
		{
			magazine = "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed";
			count = 16;
		};
	};
	class TransportItems
	{
		class _xx_acc_pointer_IR
		{
			name = "acc_pointer_IR";
			count = 2;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 2;
		};
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
//Demo
class Manticore_Loadout_Crate_Kit_Demo : Box_NATO_Support_F
{
	displayName = "Weapons Crate (Demo) (Kit) (TFM)";
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
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 10;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 5;
		};
		class _xx_ACE_Clacker
		{
			name = "ACE_Clacker";
			count = 1;
		};
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
class Manticore_Loadout_Crate_Kit_Mine : Box_NATO_Support_F
{
	displayName = "Weapons Crate (Mine) (Kit) (TFM)";
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
		class _xx_SLAMDirectionalMine_Wire_Mag
		{
			name = "SLAMDirectionalMine_Wire_Mag";
			count = 5;
		};
		class _xx_ATMine_Range_Mag
		{
			name = "ATMine_Range_Mag";
			count = 7;
		};
		class _xx_APERSMineDispenser_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 3;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_blue_mag
		{
			name = "rhs_mine_msk40p_blue_mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_red_mag
		{
			name = "rhs_mine_msk40p_red_mag";
			count = 5;
		};
		class _xx_APERSMine_Range_Mag
		{
			name = "APERSMine_Range_Mag";
			count = 10;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 4;
		};
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
class Manticore_Loadout_Crate_Kit_DemoMine : Box_NATO_Support_F
{
	displayName = "Weapons Crate (Demo and mine) (Kit) (TFM)";
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
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = 5;
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			name = "SatchelCharge_Remote_Mag";
			count = 2;
		};
		class _xx_ACE_Clacker
		{
			name = "ACE_Clacker";
			count = 1;
		};
		class _xx_SLAMDirectionalMine_Wire_Mag
		{
			name = "SLAMDirectionalMine_Wire_Mag";
			count = 5;
		};
		class _xx_ATMine_Range_Mag
		{
			name = "ATMine_Range_Mag";
			count = 4;
		};
		class _xx_APERSMineDispenser_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 2;
		};
		class _xx_APERSMine_Range_Mag
		{
			name = "APERSMine_Range_Mag";
			count = 10;
		};
		class _xx_APERSBoundingMine_Range_Mag
		{
			name = "APERSBoundingMine_Range_Mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_blue_mag
		{
			name = "rhs_mine_msk40p_blue_mag";
			count = 5;
		};
		class _xx_rhs_mine_msk40p_red_mag
		{
			name = "rhs_mine_msk40p_red_mag";
			count = 5;
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = 5;
		};
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

///Static
class Manticore_Loadout_Crate_Static_M2_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (M2) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_RHS_M2_Gun_Bag
		{
			backpack = "RHS_M2_Gun_Bag";
			count = 2;
		};
		class _xx_RHS_M2_Tripod_Bag
		{
			backpack = "RHS_M2_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_Mk19_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (Mk19) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_RHS_Mk19_Gun_Bag
		{
			backpack = "RHS_M2_Gun_Bag";
			count = 2;
		};
		class _xx_RHS_Mk19_Tripod_Bag
		{
			backpack = "RHS_M2_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_TOW_RHS : Box_NATO_Support_F
{
	displayName = "Support Crate (TOW) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_rhs_Tow_Gun_Bag
		{
			backpack = "rhs_Tow_Gun_Bag";
			count = 2;
		};
		class _xx_rhs_TOW_Tripod_Bag
		{
			backpack = "rhs_TOW_Tripod_Bag";
			count = 2;
		};
	};
};
class Manticore_Loadout_Crate_Static_Mk6_Vanila : Box_NATO_Support_F
{
	displayName = "Support Crate (Mk6 Mortar) (Static) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		class _xx_B_Mortar_01_support_F
		{
			backpack = "B_Mortar_01_support_F";
			count = 2;
		};
		class _xx_B_Mortar_01_weapon_F
		{
			backpack = "B_Mortar_01_weapon_F";
			count = 2;
		};
	};
};

///Field Kit
class Manticore_Loadout_Crate_Field_Fireteam : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit Fireteam) (TFM)";
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
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
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
			count = 20;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
		{
			magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
			count = 20;
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
		class _xx_3Rnd_SmokeRed_Grenade_shell
		{
			magazine = "3Rnd_SmokeRed_Grenade_shell";
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
			count = 4;
		};
		class _xx_rhsusf_acc_g33_xps3
		{
			name = "rhsusf_acc_g33_xps3";
			count = 4;
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
			name = "ACE_RangeCard";
			count = 1;
		};
		class _xx_ACE_IR_Strobe_Item
		{
			name = "ACE_IR_Strobe_Item";
			count = 4;
		};
		class _xx_ACE_CableTie
		{
			name = "ACE_CableTie";
			count = 5;
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
			count = 1;
		};
	};
};
class Manticore_Loadout_Crate_Field_Squad : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit Squad) (TFM)";
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
			name = "ACE_RangeCard";
			count = 1;
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