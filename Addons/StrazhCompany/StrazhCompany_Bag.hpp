//AssaultPack
class  StrazhCompany_Bag_AssaultPack_Base : B_AssaultPack_khk
{
	_ManticoreAuthor
	scope = 0;
	displayName = "Strazh Company AssaultPack (Base)";
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
	maximumLoad = 160;
	mass = 20;
};
class StrazhCompany_Bag_AssaultPack : StrazhCompany_Bag_AssaultPack_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company AssaultPack";
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompany_Backpack_Compact_CO.paa"
	};
};
//AssaultPack #Loadout
class StrazhCompany_Bag_AssaultPack_Rifleman : StrazhCompany_Bag_AssaultPack
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company AssaultPack (Rifleman)";
	class TransportMagazines
	{
		class _xx_16Rnd_9x21_Mag
		{
			magazine = "16Rnd_9x21_Mag";
			count = 1;
		};
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_30Rnd_545x39_B_AK";
			count = 2;
		};
		class _xx_hlc_30Rnd_545x39_EP_ak
		{
			magazine = "hlc_30Rnd_545x39_EP_ak";
			count = 2;
		};
		class _xx_rhs_mag_rdg2_black
		{
			magazine = "rhs_mag_rdg2_black";
			count = 2;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 4;
		};
		class _xx_rhs_mag_nspn_red
		{
			magazine = "rhs_mag_nspn_red";
			count = 1;
		};
		class _xx_rhs_mag_nspn_green
		{
			magazine = "rhs_mag_nspn_green";
			count = 1;
		};
	};
};
class StrazhCompany_Bag_AssaultPack_Grenadier : StrazhCompany_Bag_AssaultPack
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company AssaultPack (Grenadier)";
	class TransportMagazines
	{
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_30Rnd_545x39_B_AK";
			count = 2;
		};
		class _xx_rhs_mag_rdg2_black
		{
			magazine = "rhs_mag_rdg2_black";
			count = 1;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 2;
		};
		class _xx_rhs_mag_nspn_red
		{
			magazine = "rhs_mag_nspn_red";
			count = 1;
		};
		class _xx_rhs_mag_nspn_green
		{
			magazine = "rhs_mag_nspn_green";
			count = 1;
		};
		class _xx_hlc_VOG25_AK
		{
			magazine = "hlc_VOG25_AK";
			count = 10;
		};
		class _xx_rhs_hlc_GRD_Red
		{
			magazine = "hlc_GRD_Red";
			count = 4;
		};
		class _xx_hlc_GRD_blue
		{
			magazine = "hlc_GRD_blue";
			count = 2;
		};
		class _xx_hlc_GRD_purple
		{
			magazine = "hlc_GRD_purple";
			count = 2;
		};
	};
};
class StrazhCompany_Bag_AssaultPack_SquadLeader : StrazhCompany_Bag_AssaultPack
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company AssaultPack (SquadLeader)";
	class TransportMagazines
	{
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_30Rnd_545x39_B_AK";
			count = 2;
		};
		class _xx_rhs_mag_rdg2_black
		{
			magazine = "rhs_mag_rdg2_black";
			count = 2;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 4;
		};
		class _xx_rhs_mag_nspn_red
		{
			magazine = "rhs_mag_nspn_red";
			count = 2;
		};
		class _xx_rhs_mag_nspn_green
		{
			magazine = "rhs_mag_nspn_green";
			count = 1;
		};
		class _xx_hlc_VOG25_AK
		{
			magazine = "hlc_VOG25_AK";
			count = 7;
		};
		class _xx_rhs_hlc_GRD_Red
		{
			magazine = "hlc_GRD_Red";
			count = 5;
		};
		class _xx_hlc_GRD_blue
		{
			magazine = "hlc_GRD_blue";
			count = 5;
		};
		class _xx_rhs_hlc_GRD_purple
		{
			magazine = "hlc_GRD_purple";
			count = 5;
		};
	};
};
class StrazhCompany_Bag_AssaultPack_AutoRifleman : StrazhCompany_Bag_AssaultPack
{
	_ManticoreAuthor
		scope = 1;
	displayName = "Strazh Company AssaultPack (AutoRifleman)";
	class TransportMagazines
	{
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_45Rnd_545x39_m_rpk";
			count = 2;
		};
		class _xx_hlc_60Rnd_545x39_t_rpk
		{
			magazine = "hlc_60Rnd_545x39_t_rpk";
			count = 4;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 2;
		};
		

	};
};
class StrazhCompany_Bag_AssaultPack_Marksman : StrazhCompany_Bag_AssaultPack
{
	_ManticoreAuthor
		scope = 1;
	displayName = "Strazh Company AssaultPack (Marksman)";
	class TransportMagazines
	{
		class _xx_rhs_10Rnd_762x54mmR_7N1
		{
			magazine = "rhs_10Rnd_762x54mmR_7N1";
			count = 8;
		};
		class _xx_rhs_10Rnd_762x54mmR_7N14
		{
			magazine = "rhs_10Rnd_762x54mmR_7N14";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 4;
		};


	};
};
//Carryall
class StrazhCompany_Bag_Carryall_Base : B_Carryall_khk
{
	_ManticoreAuthor
	scope = 0;
	displayName = "Strazh Company Carryall (Base)";
	picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_hex.paa";
};
class StrazhCompany_Bag_Carryall : StrazhCompany_Bag_Carryall_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company Carryall";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompany_Backpack_Carryall_CO.paa"
	};
	maximumLoad = 320;
	mass = 60;
};
//Carryall #Loadout
class StrazhCompany_Bag_Carryall_CLS : StrazhCompany_Bag_Carryall
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company Carryall (CLS)";
	class TransportMagazines
	{
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_30Rnd_545x39_B_AK";
			count = 2;
		};
		class _xx_rhs_mag_9x19_17
		{
			magazine = "rhs_mag_9x19_17";
			count = 2;
		};
	};
	class TransportItems
	{
		class _xx_ACE_fieldDressing
		{
			name = "ACE_fieldDressing";
			count = 20;
		};
		class _xx_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 20;
		};
		class _xx_ACE_quikclot
		{
			name = "ACE_quikclot";
			count = 20;
		};
		class _xx_ACE_packingBandage
		{
			name = "ACE_packingBandage";
			count = 20;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 5;
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 5;
		};
		class _xx_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 7;
		};
		class _xx_ACE_surgicalKit
		{
			name = "ACE_surgicalKit";
			count = 1;
		};
		class _xx_adv_aceSplint_splint
		{
			name = "adv_aceSplint_splint";
			count = 5;
		};
		class _xx_ACE_bodyBag
		{
			name = "ACE_bodyBag";
			count = 2;
		};
		class _xx_ACE_plasmaIV_500
		{
			name = "ACE_plasmaIV_500";
			count = 5;
		};
		
	};
};
class StrazhCompany_Bag_Carryall_Machinegunner : StrazhCompany_Bag_Carryall
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company Carryall (Machinegunner)";
	class TransportMagazines
	{
		class _xx_rhs_100Rnd_762_54mmR
		{
			magazine = "rhs_100Rnd_762x54mmR";
			count = 3;
		};
		class _xx_rhs_mag_rdg2_black
		{
			magazine = "rhs_mag_rdg2_black";
			count = 1;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 3;
		};
	};
};
class StrazhCompany_Bag_Carryall_ATSpesialist : StrazhCompany_Bag_Carryall
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company Carryall (AT-S)";
	class TransportMagazines
	{
		class _xx_RPG32_F
		{
			magazine = "RPG32_F";
			count = 3;
		};
		class _xx_RPG32_HE_F
		{
			magazine = "RPG32_HE_F";
			count = 1;
		};
	};
};
class StrazhCompany_Bag_Carryall_HATSpesialist : StrazhCompany_Bag_Carryall
{
	_ManticoreAuthor
		scope = 1;
	displayName = "Strazh Company Carryall (Heavy AT-S)";
	class TransportMagazines
	{
		class _xx_RPG32_F
		{
			magazine = "Vorona_HEAT";
			count = 2;
		};
		class _xx_RPG32_HE_F
		{
			magazine = "Vorona_HE";
			count = 1;
		};
	};
};
class StrazhCompany_Bag_Carryall_AASpesialist : StrazhCompany_Bag_Carryall
{
	_ManticoreAuthor
		scope = 1;
	displayName = "Strazh Company Carryall (AA-S)";
	class TransportMagazines
	{
		class _xx_RPG32_F
		{
			magazine = "Titan_AA";
			count = 3;
		};
	};
};


//ViperHarness / Spetsnaz backpack
class StrazhCompany_Bag_ViperHarness_Base : B_ViperHarness_ghex_F
{
	author = "Mattress";
	scope = 1;
	displayName = "Strazh Company Viper Harness";
	picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperHarness_ghex_F_ca.paa";
};
class StrazhCompany_Bag_ViperHarness : StrazhCompany_Bag_ViperHarness_Base
{
	author = "Mattress";
	scope = 2;
	displayName = "Strazh Company Viper Harness";
	picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperHarness_ghex_F_ca.paa";
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompany_Spetsnaz_ViperHarness_CO.paa"
	};
};
//ViperHarness / Spetsnaz backpack #Loadout


//LegStrapBag
//LegStrapBag #Loadout
class StrazhCompany_B_LegStrapBag_black_f_SGC_Officer : B_LegStrapBag_black_f
{
	_ManticoreAuthor
	scope = 1;
	displayName = "Strazh Company Carryall (CLS)";
	class TransportMagazines
	{
		class _xx_rhs_mag_9x19_17
		{
			magazine = "rhs_mag_9x19_17";
			count = 1;
		};
		class _xx_hlc_30Rnd_545x39_B_AK
		{
			magazine = "hlc_30Rnd_545x39_B_AK";
			count = 3;
		};
		class _xx_rhs_mag_rdg2_white
		{
			magazine = "rhs_mag_rdg2_white";
			count = 2;
		};
		class _xx_rhs_mag_nspn_red
		{
			magazine = "rhs_mag_nspn_red";
			count = 1;
		};
	};
};

