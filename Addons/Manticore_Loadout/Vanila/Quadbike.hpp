class Manticore_Loadout_Vanila_Quadbike : B_Quadbike_01_F
{
	displayName = "Quadbike";
	scope = 2;
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
		"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa" 
	};
	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};
		class Black
		{
			displayName = "Black";
			textures[] =
			{
				"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class White
		{
			displayName = "White";
			textures[] =
			{
				"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class CIV_Blue
		{
			displayName = "CIV Blue";
			textures[] =
			{
				"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa" 
			};
			factions[] = { "Manticore_Faction" };
		};
		class CIV_Red
		{
			displayName = "CIV Red";
			textures[] =
			{
				"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "Olive",0,"Sand",0,"Black",0,"Dazzle",0 };
};