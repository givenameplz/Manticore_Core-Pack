//Loadout Array




class StrazhCompany_Unit_Officer_Base : O_Soldier_base_F
{
	_ManticoreAuthor
	expansion = 1;
	identityTypes[] =
	{
		"LanguagePER_F",
		"Head_TK",
		"G_IRAN_default"
	};
	side = 0;
	faction = "StrazhCompany_Faction";
	genericNames = "StrazhCompany_GenericNames_Russian";
	accuracy = 2.3;
	threat[] = { 1,0.1,0.1 };
	camouflage = 1.4;
	minFireTime = 7;
	cost = 40000;
	canCarryBackPack = 1;
	scope = 1;
	armorStructural = 4;
	explosionShielding = 0.40000001;
	model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
	uniformClass = "StrazhCompany_Uniform_Officer";
	hiddenSelections[] =
	{
		"Camo"
	};
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompanyOfficerUniform_CO.paa",
	};
	weapons[] = { "Throw","Put"};
	respawnWeapons[] = { "Throw","Put"};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

};

class StrazhCompany_Unit_Officer : StrazhCompany_Unit_Officer_Base
{
	_ManticoreAuthor
	editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Soldier_F.jpg";
	scope = 2;
	displayName = "Strazh Company Officer";
	cost = 100000;
	role = "Officer";

	weapons[] = { "Throw","Put","hlc_rifle_aku12","hgun_Rook40_F" };
	respawnWeapons[] = { "Throw","Put","hlc_rifle_aku12","hgun_Rook40_F" };
	magazines[] = { "Chemlight_green","Chemlight_green" };
	respawnMagazines[] = { "Chemlight_green","Chemlight_green" };
	linkedItems[] = { _vdvBeretSpawn,"rhs_vest_commander",_CommenItem,_CommenBinocular };
	respawnLinkedItems[] = { _vdvBeretSpawn,"rhs_vest_commander",_CommenItem,_CommenBinocular };
	backpack = "B_LegStrapBag_black_f";
};
