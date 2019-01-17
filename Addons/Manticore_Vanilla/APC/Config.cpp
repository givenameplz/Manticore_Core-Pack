class CfgPatches
{
	class Manticore_Vanilla_APC
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = {};
		weapons[] = {};
		requiredAddons[] = 
		{
			"Manticore_Vanilla",
			"A3_Armor_F_Beta_APC_Tracked_01"
		};
	};
};

class CfgVehicles 
{
	class LandVehicle;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_rcws_F;
	
	class Manticore_Vanilla_APC_Namer : B_APC_Tracked_01_rcws_F
	{
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";
		displayName = "Namer APC";

		hiddenSelections[] =
		{
			"Camo1", 
			"Camo2", 
			"Camo3"  
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_M81.paa",
			"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
			"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_M81.paa"
		};
		class TextureSources
		{
			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR3.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2
			{
				displayName = "AOR2";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR2.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR2.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2_Dark
			{
				displayName = "AOR2 Dark";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR2_Dark.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class M81
			{
				displayName = "M81";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_M81.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_M81.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Sand
			{
				displayName = "Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_Sand.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Sand.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Sand.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Multi_Arid
			{
				displayName = "Multicam Arid";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Multi_Arid.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"M81",0,"AOR3",0,"AOR2",0,"AOR2_Dark",0 };
	};
	class Manticore_Vanilla_APC_Nemmera : B_APC_Tracked_01_CRV_F
	{
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";
		displayName = "Nemmera CRV";

		hiddenSelections[] =
		{
			"Camo1", 
			"Camo2", 
			"Camo3", 
			"Camo4"  
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_M81.paa",
			"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
			"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_M81.paa",
			"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_M81.paa"
		};
		class TextureSources
		{
			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR3.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR3.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2
			{
				displayName = "AOR2";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR2.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR2.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_AOR2.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2_Dark
			{
				displayName = "AOR2 Dark";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_AOR2_Dark.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class M81
			{
				displayName = "M81";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_M81.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_M81.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_M81.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_M81.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Sand
			{
				displayName = "Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_Sand.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Sand.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Sand.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_Sand.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Multi_Arid
			{
				displayName = "Multicam Arid";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext01_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\APC\Data\MBT_01_body_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\Data\Texture\CROWE_Turret_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\APC\Data\Nemmera_CRV_ext04_V1,0_Multi_Arid.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"M81",0,"AOR3",0,"AOR2",0,"AOR2_Dark",0 };
	};
};