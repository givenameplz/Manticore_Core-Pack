
//RPG32					- launch_RPG32_F
//_Mag					- RPG32_F, RPG32_HE_F
class StrazhCompany_Launch_RPG32_Base : launch_RPG32_F
{
	_ManticoreAuthor
	scope = 0;
	displayName = "RPG32 (Base)";
};
class StrazhCompany_Launch_RPG32_Black : StrazhCompany_Launch_RPG32_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "RPG-32 (Black)";
	hiddenSelections[] = { "Camo_1","Camo_2" };
	hiddenSelectionsTextures[] =
	{
		"StrazhCompany\Data\Weapons\RPG_32_body_Black_CO.paa",
		"\a3\weapons_f\launchers\rpg32\data\rpg_32_optics_co.paa"
	};
};

//TITAN AA				- launch_B_Titan_F
//_Mag					- Titan_AA

//Vorona AT				- launch_O_Vorona_brown_F
//_Mag					- Vorona_HEAT, Vorona_HE