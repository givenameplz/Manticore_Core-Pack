class StrazhCompany_Uniform_Soldier : Uniform_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company Uniform Soldier";
	picture = "\StrazhCompany\Data\Icon\SCG_Logo_Defult_Icon.paa";
	//model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
	};

	class ItemInfo : UniformItem
	{
		/*uniformModel = "-";*/
		uniformClass = "StrazhCompany_Unit_Soldier_Base";
		containerClass = Supply40;
		mass = 40;
	};
};

class StrazhCompany_Uniform_Officer : Uniform_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company Uniform Officer";
	picture = "\StrazhCompany\Data\Icon\SCG_Logo_Defult_Icon.paa";
	//model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
	};

	class ItemInfo : UniformItem
	{
		/*uniformModel = "-";*/
		uniformClass = "StrazhCompany_Unit_Officer_Base";
		containerClass = Supply40;
		mass = 40;
	};
};

class StrazhCompany_Uniform_Spetsnaz : Uniform_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company Uniform Spetsnaz";
	picture = "\A3\characters_f_exp\OPFOR\data\ui\icon_U_O_Soldier_Viper_ghex_F_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		"\A3\Characters_F_Exp\OPFOR\Data\ViperOp_Suit_hexgreen_co.paa"
	};
	DLC = "Expansion";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "StrazhCompany_Unit_Spetsnaz_Base";
		containerClass = "Supply20";
		mass = 120;
	};
};