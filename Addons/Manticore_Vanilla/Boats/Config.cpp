class CfgPatches
{
	class Manticore_Vanilla_Boats
	{
		addonRootClass = "Manticore_Vanilla";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vanilla",
			"A3_boat_f_Boat_Armed_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	class B_Boat_Armed_01_minigun_F;

	class Manticore_Vanilla_Boats_Speedboat_Minigun : B_Boat_Armed_01_minigun_F
	{
		displayName = "Speedboat Minigun";
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";

		hiddenSelections[] =
		{
			"Camo",   //Base
			"Camo2",  //Interior
			"Camo3"   //COREW Turret
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_Base_V1,0_Dazzal_Grey.paa",
			"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_ine_V1,0_Dazzal_Gray.paa",
			"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Dazal_Grey.paa"
		};

		class TextureSources

		{
			class Digital_Grey
			{
				displayName = "Digital Grey";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_Base_V1,0_Digital_Grey.paa",
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_ine_V1,0_Didital_Gray.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Digetal_Grey.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Dazzle_Grey
			{
				displayName = "Dazzle Grey";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_Base_V1,0_Dazzal_Grey.paa",
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_ine_V1,0_Dazzal_Gray.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Dazal_Grey.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_Base_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_ine_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR3_Light
			{
				displayName = "AOR3 Light [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_Base_V1,0_AOR3_Light.paa",
					"\Manticore_Vanilla\Boats\Data\Speedboat_Minigun_ine_V1,0_AOR3_Light.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR3_Light.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "AOR3_Light",0,"Digital_Grey",0,"Dazzle_Grey",0,"AOR3",0 };
	};
};