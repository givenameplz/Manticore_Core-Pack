class CfgPatches
{
	class Manticore_Vanilla_Artillery
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Vanilla",
			"A3_Armor_F_Gamma_MBT_01"
		};
	};
};

class CfgVehicles
{
	class B_MBT_01_arty_F;
	class B_MBT_01_mlrs_F;

	class Manticore_Vanilla_Artillery_Sholef : B_MBT_01_arty_F
	{
		displayName = "Sholef";
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
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa",
			"A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa",
					"A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
					"A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa",
					"A3\Data_F\Vehicles\Turret_CO.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0 };
	};
	class Manticore_Vanilla_Artillery_Seara : B_MBT_01_mlrs_F
	{
		displayName = "Seara";
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
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
			"A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
					"A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Sand
			{
				displayName = "Sand";
				textures[] =
				{
					"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa",
					"A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa",
					"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"Sand",0 };
	};
};