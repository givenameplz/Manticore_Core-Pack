class Manticore_Loadout_Vanila_Polaris_Unarmed : B_LSV_01_unarmed_F
{
	displayName = "Polaris DAGOR";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Black
		{
			displayName = "Black";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Dazzle
		{
			displayName = "Dazzle";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
};
class Manticore_Loadout_Vanila_Polaris_Armed : B_LSV_01_armed_F
{
	displayName = "Polaris DAGOR (XM312)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Black
		{
			displayName = "Black";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Dazzle
		{
			displayName = "Dazzle";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
};
class Manticore_Loadout_Vanila_Polaris_AT : B_LSV_01_AT_F
{
	displayName = "Polaris DAGOR (Mini-Spike AT)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" 
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa","\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa","\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class Black
		{
			displayName = "Black";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class Dazzle
		{
			displayName = "Dazzle";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
};
class Manticore_Loadout_Vanila_Polaris_Light : B_CTRG_LSV_01_light_F
{
	displayName = "Polaris DAGOR (Light)";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

	#include "../Loadout/LoadoutBasic.hpp"
	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
	};
	class TextureSources
	{
		class Olive
		{
			displayName = "Olive";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Black
		{
			displayName = "Black";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Dazzle
		{
			displayName = "Dazzle";
			textures[] =
			{
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
};
