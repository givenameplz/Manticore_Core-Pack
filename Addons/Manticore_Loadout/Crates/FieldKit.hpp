class Manticore_Loadout_Crate_Field_Fireteam : B_supplyCrate_F
{
	displayName = "Supply Crate (Field Kit Fireteam) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
		_standardRifle(1, 1, 0);
		_StandardAutoRifle(1);
		_standardMarksmanRifle(1);
		_standardATTub(0, 1, 0);
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
		_standardMag(20, 20);
		_standardAutoRifleAmmo(5);
		_standardMarksmanRifleAmmo(6, 6);
		_standardUnguidedATLauncherAmmo(4);
		_UGLFlare(10, 10, 0, 0, 0);
		_UGLSmoke(10, 0, 10, 10, 0, 0, 0);
		_UGLHE(20);
		_UGLMics(3);
		_GrenadeSmoke(5, 20, 5, 5, 0, 2, 0);
	};
	class TransportItems
	{
		_aceMics(5, 2, 2, 10, 2, 2, 2, 4);
		_medicalBandage(10, 10, 10, 10);
		_medicalSelin(0, 4, 0);
		_medicalInjector(5, 5, 0, 0);
		_medicalMics(5, 5, 0);
		_aceXDrink(10, 0, 0, 0, 0);
		_aceXFood(4, 0, 0, 4, 0, 0, 4, 0, 0, 0);

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
		class _xx_ACE_RangeCard
		{
			name = "ACE_RangeCard";
			count = 1;
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
	};
	class TransportBackpacks
	{
		_standardKitBag(1);
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
		_standardRifle(1, 1, 0);
		_standardATTub(1, 1, 0);
		_standardMG1(1);
		_standardMarksmanRifle(1);
		_StandardAutoRifle(1);
		class _xx_Laserdesignator_03
		{
			weapon = "Laserdesignator_03";
			count = 1;
		};
	};
	class TransportMagazines
	{
		_standardMag(60, 60);
		_UGLSmoke(20, 0, 20, 20, 0, 0, 0);
		_UGLHE(40);
		_UGLMics(6);
		_standardMG1Ammo(3, 1);
		_standardMarksmanRifleAmmo(6, 6);
		_standardAutoRifleAmmo(5);
		_standardUnguidedATLauncherAmmo(5, 0);
		_UGLFlare(10, 5, 10, 10, 0);
		_UGLSmoke(15, 15, 5, 10, 10, 0, 0);
		_UGLHE(30);
		_GrenadeSmoke(10, 30, 10, 5, 0, 2, 2);
	};
	class TransportItems
	{
		_aceMics(10, 2, 2, 12, 2, 2, 2, 12);
		_medicalBandage(20, 20, 20, 20);
		_medicalSelin(0, 8, 0);
		_medicalInjector(5, 5, 0, 0);
		_medicalMics(10, 15, 0);
		_aceXDrink(20, 0, 0, 0, 0);
		_aceXFood(8, 0, 0, 8, 0, 0, 8, 0, 0, 0);
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
		class _xx_ACE_RangeCard
		{
			name = "ACE_RangeCard";
			count = 1;
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
	};
	class TransportBackpacks
	{
		_standardKitBag(2);
	};
};