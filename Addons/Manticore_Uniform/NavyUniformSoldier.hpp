
class Manticore_Navy_Uniform_S_Soldier : B_soldier_F
{
	author = "Mattress";
	scope = 2;
	displayName = "Navy Uniform";
	identityTypes[] = { "Head_NATO", "G_NATO_default" };
	genericNames = "NATOMen";
	faction = "Manticore_Faction";
	model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; //Default NATO 
	uniformClass = "Manticore_Navy_S_Uniform";
	hiddenSelections[] = { "Camo","insignia" };
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Uniform\Data\Independent_Pants_AOR3_v1,1.paa"
	};
	//hiddenSelectionsMaterials[] = {"Custom_Uniform\Data\custom_camo.rvmat"};  
	weapons[] = { "Throw","Put" };
	respawnWeapons[] = { "Throw","Put" };
	magazines[] = {"Chemlight_green","Chemlight_green" };
	respawnMagazines[] = {"Chemlight_green","Chemlight_green" };
	linkedItems[] = { "Manticore_Beret_01","ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	respawnLinkedItems[] = { "Manticore_Beret_01","ItemMap","ItemCompass","ItemWatch","ItemRadio" };
};
