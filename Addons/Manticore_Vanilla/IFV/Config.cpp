class CfgPatches
{
	class Manticore_Vanilla_IFV
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] = 
		{
			"Manticore_Vanilla",
			"A3_Armor_F_Beta_APC_Wheeled_01"
		};
	};
};

class CfgVehicles 
{
	class B_APC_Wheeled_01_cannon_F;

	class Manticore_Vanilla_IFV_Badger : B_APC_Wheeled_01_cannon_F
	{
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";
		displayName = "Badger IFV";
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};

		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_M81.paa",
			"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_M81.paa",
			"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_M81.paa"
		};

		class TextureSources

		{
			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_AOR3.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_AOR3.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2
			{
				displayName = "AOR2";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_AOR2.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_AOR2.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_AOR2.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2_Dark
			{
				displayName = "AOR2 Dark";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_AOR2_Dark.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_AOR2_Dark.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class M81
			{
				displayName = "M81";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_M81.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_M81.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_M81.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Sand
			{
				displayName = "Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_Sand.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_Sand.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_Sand.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Multi_Arid
			{
				displayName = "Multicam Arid";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext01_V1,1_Multi_Arid.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext02_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\IFV\Data\Badger_IFV_ext03_V1,0_Multi_Arid.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"M81",0,"AOR3",0,"AOR2",0,"AOR2_Dark",0,"MD01",0 };
	};
};