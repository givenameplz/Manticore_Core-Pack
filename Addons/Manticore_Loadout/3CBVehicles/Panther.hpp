class Manticore_Loadout_3CBVehicles_Panther_GPMG : UK3CB_BAF_Panther_GPMG_Green_A
{
	displayName = "Panther GPMG";
	scope = 2;
	side = 1;
	faction = "Manticore_Faction";
	//crew = "";

#include "../Loadout/LoadoutBasic.hpp"
	class TextureSources

	{
		class bf_Green
		{
			displayName = "Green";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherCab_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherCanvas_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherFrontEnd_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc1_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc8_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherParts_w_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\huskyTyre_w_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

		class bf_Sand
		{
			displayName = "Sand";
			textures[] =
			{
				"","","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherCab_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherCanvas_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherFrontEnd_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc1_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc8_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherParts_co.paa","\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\huskyTyre_co.paa"
			};
			factions[] = { "Manticore_Faction" };
		};

	};
	textureList[] = { "bf_Green",0,"bf_Sand",0 };
};