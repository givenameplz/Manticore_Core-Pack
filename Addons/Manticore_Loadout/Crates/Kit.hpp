//Launcher
class Manticore_Loadout_Crate_Kit_UnguidedATLauncher : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (MAWS) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardUnguidedATLauncher(1);
	};
	class TransportMagazines
	{
		_standardUnguidedATLauncherAmmo(10, 4);
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Kit_GuidedATLauncher : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Metis-M) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardGuidedATLauncher(1, 0);
	};
	class TransportMagazines
	{
		_standardGuidedATLauncherAmmo(8, 2, 0);
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Kit_GuidedAALauncher : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (Stinger) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardGuidedAALauncher(1);
	};
	class TransportMagazines
	{
		_standardGuidedAALauncherAmmo(8);
	};
	class TransportItems
	{
	};
	class TransportBackpacks
	{
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Kit_DisposableATLauncher : Box_NATO_WpsLaunch_F
{
	displayName = "Launcher Crate (M136) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardATTub(2, 4, 2);
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
class Manticore_Loadout_Crate_Kit_StandardRifle : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (G36k(KSK)) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardRifle(2, 1, 0);
		
	};
	class TransportMagazines
	{
		_standardMag(30, 30);
		_UGLFlare(15, 5, 10, 5, 0);
		_UGLSmoke(15, 10, 5, 5, 15, 0, 5);
		_UGLHE(20);
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
class Manticore_Loadout_Crate_Kit_MachineGunner1 : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (mk46) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardMG1(2);
	};
	class TransportMagazines
	{
		_standardMG1Ammo(10, 2);
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
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Kit_MachineGunner2 : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk48) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardMG2(2);
	};
	class TransportMagazines
	{
		_standardMG2Ammo(10, 10);
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
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Kit_Marksman : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Troy M14) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardMarksmanRifle(2);
	};
	class TransportMagazines
	{
		_standardMarksmanRifleAmmo(12, 12);
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
class Manticore_Loadout_Crate_Kit_Sharpshooter : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (Mk 11 Mod 0) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardSharpshooterRifle(2);
	};
	class TransportMagazines
	{
		_standardSharpshooterRifleAmmo(5, 5, 5, 5);
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
class Manticore_Loadout_Crate_Kit_Autorifle : Box_NATO_Wps_F
{
	displayName = "Weapons Crate (M27 IAR) (Kit) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_StandardAutoRifle(2);
	};
	class TransportMagazines
	{
		_standardAutoRifleAmmo(16);
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
		_standardKitBag(1);
	};
};