class CfgPatches
{
	class Manticore_Vanilla_Tank
	{
		addonRootClass = "Manticore_Vanilla";
		requiredVersion = 1.8;
		requiredAddons[] = 
		{
			"Manticore_Vanilla",
			"A3_Armor_F_EPB_MBT_03",
			"A3_armor_f_tank_lt_01"
		};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles 
{
	class LandVehicle;
	class I_MBT_03_cannon_F;
	class I_LT_01_cannon_F;
	class I_LT_01_AT_F;
	class I_LT_01_scout_F;

	class Manticore_Vanilla_Tank_Leopard : I_MBT_03_cannon_F
	{
		side = 1;
		scope = 1;
		//crew = "";
		faction = "Manticore_Faction";
		displayName = "Leopard";

		//TFAR - BLUFOR
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";

		hiddenSelections[] =
		{
			"Camo1", 
			"Camo2", 
			"Camo3"  
		};
		hiddenSelectionsTextures[] =
		{
			"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_M81.paa",
			"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_M81.paa",
			"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_M81.paa"
		};

		class TextureSources
		{
			class AOR3
			{
				displayName = "AOR3 [NWU Type-1]";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_AOR3.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_AOR3.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2
			{
				displayName = "AOR2";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_AOR2.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_AOR2.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_AOR2.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AOR2_Dark
			{
				displayName = "AOR2 Dark";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_AOR2_Dark.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_AOR2_Dark.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class M81
			{
				displayName = "M81";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_M81.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_M81.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_M81.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_digital
			{
				displayName = "AAF Digital";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_AAF_digital.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_AAF_digital.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_AAF_digital.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class Sand
			{
				displayName = "Sand";
				author = "Nightmare515";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_Sand.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_Sand.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_Sand.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class Multi_Arid
			{
				displayName = "Multicam Arid";
				author = "Mattress";
				textures[] =
				{
					"\Manticore_Vanilla\Tank\Data\Leopard_ext01_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext02_V1,0_Multi_Arid.paa",
					"\Manticore_Vanilla\Tank\Data\Leopard_ext03_V1,0_Multi_Arid.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "Sand",0,"AAF_digital",0,"M81",0,"AOR3",0,"AOR2",1,"AOR2_Dark",0 };
	};

	class Manticore_Vanilla_Tank_Wiesel2_Cannon : I_LT_01_cannon_F
	{
		displayName = "Wiesel 2 (MK20)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		//TFAR - BLUFOR
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";


		hiddenSelectionsTextures[] = 
		{ 
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa" 
		};
		class TextureSources

		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};


			class AAF_Digital
			{
				displayName = "AFF Digital";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_D
			{
				displayName = "AFF Digital (Desert Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa" 
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_J
			{
				displayName = "AFF Digital (Jungle Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"AAF_Digital",0,"AAF_Digital_D",0,"AAF_Digital_J",0 };
	};
	class Manticore_Vanilla_Tank_Wiesel2_AT : I_LT_01_AT_F
	{
		displayName = "Wiesel 2 (ATGM)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		//TFAR - BLUFOR
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";

		hiddenSelectionsTextures[] = 
		{ 
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa" 
		};
		class TextureSources

		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};


			class AAF_Digital
			{
				displayName = "AFF Digital";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_D
			{
				displayName = "AFF Digital (Desert Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa" 
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_J
			{
				displayName = "AFF Digital (Jungle Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"AAF_Digital",0,"AAF_Digital_D",0,"AAF_Digital_J",0 };
	};
	class Manticore_Vanilla_Tank_Wiesel2_Scout : I_LT_01_scout_F
	{
		displayName = "Wiesel 2 (Scout)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		//TFAR - BLUFOR
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";

		hiddenSelectionsTextures[] = 
		{ 
			"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
			"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
			"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
			"A3\armor_f\data\cage_olive_co.paa" 
		};
		class TextureSources

		{
			class Olive
			{
				displayName = "Olive";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_olive_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};


			class AAF_Digital
			{
				displayName = "AFF Digital";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
					"A3\armor_f\data\cage_aaf_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_D
			{
				displayName = "AFF Digital (Desert Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa",
					"A3\armor_f\data\cage_G3_co.paa" 
				};
				factions[] = { "Manticore_Faction" };
			};

			class AAF_Digital_J
			{
				displayName = "AFF Digital (Jungle Camo Net)";
				textures[] =
				{
					"A3\armor_f_tank\lt_01\data\lt_01_main_co.paa",
					"A3\armor_f_tank\lt_01\data\lt_01_radar_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Jungle_CO.paa",
					"A3\armor_f\data\cage_G1_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};

		};
		textureList[] = { "Olive",0,"AAF_Digital",0,"AAF_Digital_D",0,"AAF_Digital_J",0 };
	};
};