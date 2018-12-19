//class StrazhCompany_Unit_Soldier_Base : O_Soldier_base_F
//{
//	_ManticoreAuthor
//	expansion = 1;
//	identityTypes[] =
//	{
//		"LanguagePER_F",
//		"Head_TK",
//		"G_IRAN_default"
//	};
//	side = 0;
//	faction = "StrazhCompany_Faction";
//	genericNames = "StrazhCompany_GenericNames_Russian";
//	accuracy = 2.3;
//	threat[] = { 1,0.1,0.1 };
//	camouflage = 1.4;
//	minFireTime = 7;
//	cost = 40000;
//	canCarryBackPack = 1;
//	scope = 1;
//	armorStructural = 4;
//	explosionShielding = 0.40000001;
//	model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
//	uniformClass = "StrazhCompany_Uniform_Soldier";
//	hiddenSelections[] =
//	{
//		"Camo1",
//		"Camo2",
//		"insignia"
//	};
//	hiddenSelectionsTextures[] =
//	{
//		"\StrazhCompany\Data\Uniform\StrazhCompanySoldierUniform_CO.paa",
//		"\StrazhCompany\Data\Uniform\StrazhCompanyTech_CO.paa"
//	};
//	weapons[] = { "Throw","Put"};
//	respawnWeapons[] = { "Throw","Put"};
//	Items[] = {};
//	RespawnItems[] = {};
//	magazines[] = {};
//	respawnMagazines[] = {};
//	linkedItems[] = {};
//	respawnLinkedItems[] = {};
//	
//};
//
//class StrazhCompany_Unit_Soldier_Rifleman : StrazhCompany_Unit_Soldier_Base
//{
//	_ManticoreAuthor
//	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_F.jpg";
//		
//	scope=2;
//	displayName="Strazh Company Rifleman";
//	cost=100000;
//	role="Rifleman";
//	weapons[] = { "StrazhCompany_AK12_hlc_rifle_ak12_Riflman","hgun_Rook40_F","Throw","Put",_CommenBinocular };
//	respawnWeapons[] = { "StrazhCompany_AK12_hlc_rifle_ak12_Riflman","hgun_Rook40_F","Throw","Put",_CommenBinocular };
//	Items[] = 
//	{
//		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
//	};
//	RespawnItems[] = 
//	{
//		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
//	};
//	magazines[] = 
//	{
//		"hlc_30Rnd_545x39_B_AK"
//	};
//	respawnMagazines[] = 
//	{ 
//		"hlc_30Rnd_545x39_B_AK"
//	};
//	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
//	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
//	backpack = "StrazhCompany_Bag_AssaultPack_Rifleman";
//};

class StrazhCompany_Unit_Spetsnaz_Base : O_V_Soldier_TL_hex_F
{
	_ManticoreAuthor
	scope = 1;
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_ghex_F.jpg";
	faction = "StrazhCompany_Faction_Spetsnaz";
	/*accuracy = 2.3;
	threat[] = { 1,0.1,0.1 };
	camouflage = 1.4;
	minFireTime = 7;
	cost = 40000;
	canCarryBackPack = 1;
	scope = 1;
	armorStructural = 4;*/
	uniformClass = "StrazhCompany_Uniform_Spetsnaz";
	hiddenSelectionsTextures[] = { "\StrazhCompany\Data\Uniform\StrazhCompany_Spetsnaz_Uniform_CO.paa" };
	weapons[] = { "Throw", "Put" };
	respawnWeapons[] = { "Throw", "Put" };
	linkedItems[] = {  };
	respawnLinkedItems[] = {  };
	backpack = "B_ViperHarness_blk_F";
};

class StrazhCompany_Unit_Spetsnaz_SO : StrazhCompany_Unit_Spetsnaz_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company Spetsnaz Operatives";
	editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_V_Soldier_TL_ghex_F.jpg";
	faction = "StrazhCompany_Faction_Spetsnaz";
	weapons[] = { "StrazhCompany_Typp115_blk_ARCOb_Sup_Perst1ik", "hgun_Rook40_snds_F", "Throw", "Put", "Rangefinder" };
	respawnWeapons[] = { "StrazhCompany_Typp115_blk_ARCOb_Sup_Perst1ik", "hgun_Rook40_snds_F", "Throw", "Put", "Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] =
	{
		"30Rnd_65x39_caseless_green","rhs_mag_9x18_8_57N181S"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_green","rhs_mag_9x18_8_57N181S"
	};
	linkedItems[] = { "StrazhCompany_Headgear_Spetsnaz", "V_LegStrapBag_black_F", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	respawnLinkedItems[] = { "StrazhCompany_Headgear_Spetsnaz", "V_LegStrapBag_black_F", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	backpack = "StrazhCompany_Bag_ViperHarness";
};