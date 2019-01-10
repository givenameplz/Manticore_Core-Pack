class CfgPatches
{
	class Manticore_RHS_Heli
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"RHS_US_A2_AirImport",
			"rhsusf_c_ch53"
		};
	};
};

class CfgVehicles
{
	class RHS_MELB_H6M;
	class RHS_MELB_MH6M;
	class RHS_MELB_AH6M;
	class RHS_CH_47F;
	class RHS_UH60M;
	class RHS_UH60M2;
	class RHS_UH60M_ESSS2;
	class RHS_UH60M_ESSS;
	class RHS_UH60M_MEV2;
	class RHS_UH60M_MEV;
	class RHS_AH64D;
	class rhsusf_CH53E_USMC;
	class RHS_UH1Y;
	class RHS_UH1Y_FFAR;
	class RHS_UH1Y_UNARMED;
	class RHS_AH1Z;

	class Manticore_RHS_Heli_OH6M : RHS_MELB_H6M
	{
		displayName = "OH-6M";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
	};
	class Manticore_RHS_Heli_MH6M : RHS_MELB_MH6M
	{
		displayName = "MH-6M";
		scope = 2;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
	};
	class Manticore_RHS_Heli_AH6M : RHS_MELB_AH6M
	{
		displayName = "AH-6M";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
			"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
		};
	};

	class Manticore_RHS_Heli_CH47F : RHS_CH_47F
	{
		displayName = "CH-47F";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
		};
		class TextureSources
		{
			class RHS_Standard
			{
				displayName = "Standard";
				textures[] =
				{
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Desert
			{
				displayName = "Desert";
				textures[] =
				{
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
					"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Standard",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Heli_UH60M : RHS_UH60M
	{
		displayName = "UH-60M";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH60M2 : RHS_UH60M2
	{
		displayName = "UH-60M (Unarmed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH60M_EWS : RHS_UH60M_ESSS2
	{
		displayName = "UH-60M (EWS)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH60M_ESSS : RHS_UH60M_ESSS
	{
		displayName = "UH-60M (ESSS)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};

	class Manticore_RHS_Heli_UH60M_MEV : RHS_UH60M_MEV2
	{
		displayName = "UH-60M MEV";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_mev_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_mev_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH60M_ESSS_MEV : RHS_UH60M_MEV
	{
		displayName = "UH-60M MEV (ESSS)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_mev_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_mev_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
	};

	class Manticore_RHS_Heli_AH64D : RHS_AH64D
	{
		displayName = "AH-64D";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa"
		};
		class TextureSources
		{
			class RHS_Green
			{
				displayName = "Green";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
			class RHS_Grey
			{
				displayName = "Grey";
				textures[] =
				{
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_g_body_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_g_details_co.paa",
					"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa"
				};
				factions[] = { "Manticore_Faction" };
			};
		};
		textureList[] = { "RHS_Standard",0,"RHS_Desert",0 };
	};

	class Manticore_RHS_Heli_CH53E : rhsusf_CH53E_USMC
	{
		displayName = "CH-53E";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa",
			"rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa",
			"rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa"
		};
	};

	class Manticore_RHS_Heli_UH1Y : RHS_UH1Y
	{
		displayName = "UH-1Y";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa",
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH1Y_FFAR : RHS_UH1Y_FFAR
	{
		displayName = "UH-1Y (FFAR)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa",
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"
		};
	};
	class Manticore_RHS_Heli_UH1Y_Unarmed : RHS_UH1Y_UNARMED
	{
		displayName = "UH-1Y (Unarmed)";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa",
			"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"
		};
	};

	class Manticore_RHS_Heli_AH1Z : RHS_AH1Z
	{
		displayName = "AH-1Z";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";

		hiddenSelectionsTextures[] =
		{
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_co.paa",
			"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa"
		};
	};
};