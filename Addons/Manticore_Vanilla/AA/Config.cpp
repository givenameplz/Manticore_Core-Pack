class CfgPatches
{
	class Manticore_Vanilla_AA
	{
		addonRootClass = "Manticore_Vanilla";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vanilla",
			"A3_Armor_F_Beta_APC_Tracked_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	class B_APC_Tracked_01_AA_F;

	class Manticore_Vanilla_AA_Bardelas : B_APC_Tracked_01_AA_F
	{
		displayName = "Bardelas AA";
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";

		hiddenSelections[] =
		{
			"Camo1", 
			"Camo2", 
			"Camo3"  
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_M81.paa",
			"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
			"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_M81.paa"
		};

		class TextureSources
		{
			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_AOR3.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR3.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2
			{
				displayName = "AOR2";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_AOR2.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_AOR2.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2_Dark
			{
				displayName = "AOR2 Dark";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_AOR2_Dark.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class M81
			{
				displayName = "M81";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_M81.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_M81.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Sand
			{
				displayName = "Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_Sand.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Sand.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_Sand.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Multi_Arid
			{
				displayName = "Multicam Arid";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext01_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\AA\Data\Bardelas_AA_ext03_V1,0_Multi_Arid.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"M81",0,"AOR3",0,"AOR2",1,"AOR2_Dark",0 };
	};
};