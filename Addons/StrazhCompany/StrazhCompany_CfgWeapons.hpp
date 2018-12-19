
//class StrazhCompany_Helmet_Protector_Base : H_HelmetO_ocamo
//{
//	author = "Mattress";
//	scope = 1;
//	displayName = "Strazh Company Protector Helmet (Base)";
//	picture = "\A3\characters_f\Data\UI\icon_H_HelmetO_ocamo_CA.paa";
//	model = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
//	class ItemInfo : ItemInfo
//	{
//		mass = 40;
//		uniformModel = "\A3\Characters_F\OPFOR\headgear_o_helmet_ballistic";
//		modelSides[] = { 0,3 };
//		class HitpointsProtectionInfo
//		{
//			class Head
//			{
//				hitpointName = "HitHead";
//				armor = 8;
//				passThrough = 0.5;
//			};
//		};
//	};
//};
//class StrazhCompany_Helmet_Protector : StrazhCompany_Helmet_Protector_Base
//{
//	author = "Mattress";
//	scope = 2;
//	displayName = "Strazh Company Protector Helmet";
//	hiddenSelections[] =
//	{
//		"Camo"
//	};
//	hiddenSelectionsTextures[] =
//	{
//		"\StrazhCompany\Data\Uniform\StrazhCompanyTech_CO.paa"
//	};
//};


class StrazhCompany_AK12_hlc_rifle_ak12_Riflman : hlc_rifle_ak12
{
	author = "Maibatsu, Toadie";
	displayName = "StrazhCompany_AK12_hlc_rifle_ak12_Riflman";
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rhs_acc_1p87";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_perst1ik_ris";
		};

		/*class LinkedItemsMuzzle {
		slot = "MuzzleSlot";
		item = "muzzleClassName";
		};

		class LinkedItemsUnder {
		slot = "UnderBarrelSlot";
		item = "bipodClassName";
		};*/
	};
};


// TODO: Rifle need fix wont loade in to game 
class StrazhCompany_Typp115_blk_ARCOb_Sup_Perst1ik : arifle_ARX_blk_F
{
	_ManticoreAuthor
		displayName = "StrazhCompany_Typp115_blk_ARCOb_Sup_Perst1ik";
		scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_Arco_blk_F";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhs_acc_perst1ik_ris";
		};

		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzle_snds_65_TI_blk_F";
		};

		/*class LinkedItemsUnder {
		slot = "UnderBarrelSlot";
		item = "bipodClassName";
		};*/
	};
};