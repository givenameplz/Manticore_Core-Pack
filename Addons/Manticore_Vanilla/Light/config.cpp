class CfgPatches
{
	class Manticore_Vanilla_Light
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Vanilla",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Soft_F_Quadbike_01"
		};
	};
};

class CfgVehicles
{
	class B_Quadbike_01_F;
	class B_LSV_01_unarmed_F;
	class B_LSV_01_armed_F;
	class B_LSV_01_AT_F;
	class B_CTRG_LSV_01_light_F;

	class Manticore_Vanilla_Light_Quadbike : B_Quadbike_01_F
	{
		displayName = "Quadbike";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		class TransportWeapons
		{
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

		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
		};
		class TextureSources
		{
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa",
					"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Black
			{
				displayName = "Black";
				textures[] =
				{
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class White
			{
				displayName = "White";
				textures[] =
				{
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa",
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class CIV_Blue
			{
				displayName = "CIV Blue";
				textures[] =
				{
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa",
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class CIV_Red
			{
				displayName = "CIV Red";
				textures[] =
				{
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa",
					"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"Black",0,"White",0,"CIV_Blue",0,"CIV_Red",0 };
	};
	class Manticore_Vanilla_Light_Polaris_Unarmed : B_LSV_01_unarmed_F
	{
		displayName = "Polaris DAGOR";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Black
			{
				displayName = "Black";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Dazzle
			{
				displayName = "Dazzle";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
	};
	class Manticore_Vanilla_Light_Polaris_Armed : B_LSV_01_armed_F
	{
		displayName = "Polaris DAGOR (XM312)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Black
			{
				displayName = "Black";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Dazzle
			{
				displayName = "Dazzle";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
	};
	class Manticore_Vanilla_Light_Polaris_AT : B_LSV_01_AT_F
	{
		displayName = "Polaris DAGOR (Mini-Spike AT)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
			"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa",
					"\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa",
					"\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Black
			{
				displayName = "Black";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Dazzle
			{
				displayName = "Dazzle";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa",
					"\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
	};
	class Manticore_Vanilla_Light_Polaris_Light : B_CTRG_LSV_01_light_F
	{
		displayName = "Polaris DAGOR (Light)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
			"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Black
			{
				displayName = "Black";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Dazzle
			{
				displayName = "Dazzle";
				textures[] =
				{
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
					"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
	};
};