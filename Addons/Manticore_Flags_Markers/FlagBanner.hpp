
class Banner_01_base_F;
class Manticore_BANNER_NATO : Banner_01_base_F
{
	author = "$STR_A3_Bohemia_Interactive";
	class SimpleObject
	{
		eden = 0;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.46900001;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Banner_01_NATO_F.jpg";
	_generalMacro = "Banner_01_NATO_F";
	scope = 2;
	scopeCurator = 2;
	vehicleClass = "Signs";
	editorCategory = "Manticore_Flag";
	editorSubcategory = "Manticore_Flag_Banner";
	displayName = "Banner NATO";
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Flags_Markers\data\banner\flag_nato_co.paa"
	};
};
class Manticore_BANNER_WHITE : Manticore_BANNER_NATO
{
	author = "$STR_A3_Bohemia_Interactive";
	displayName = "Banner White";
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Flags_Markers\data\banner\flag_white_co.paa"
	};
};
class Manticore_BANNER_MANTICORE : Manticore_BANNER_NATO
{
	author = "Mattress";
	displayName = "Banner Manticore";
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Flags_Markers\data\banner\Flag_Banner_Manticore_CO.paa"
	};
};
class Manticore_BANNER_sTs : Manticore_BANNER_NATO
{
	author = "Mattress";
	displayName = "Banner sTs";
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Flags_Markers\data\banner\Flag_Banner_sTs_CO.paa"
	};
};
class Manticore_BANNER_TexMex : Manticore_BANNER_NATO
{
	author = "Mattress";
	displayName = "Banner Tex-Mex";
	hiddenSelectionsTextures[] =
	{
		"\Manticore_Flags_Markers\data\banner\Flag_Banner_TexMex_CO.paa"
	};
};
