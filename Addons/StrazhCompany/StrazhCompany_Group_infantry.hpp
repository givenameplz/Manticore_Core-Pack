class StrazhCompany_Faction_G_infantry
{
	name = "infantry";
	aliveCategory = "Infantry";

	class StrazhCompany_Faction_G_infantry_COMPANY_HQ
	{
		name = "COMPANY HQ";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Officer";
			rank = "CAPTAIN";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Officer";
			rank = "LIEUTENANT";
			position[] = { -5,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Officer";
			rank = "LIEUTENANT";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "SERGEANT";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_RifleSquad
	{
		name = "Rifle Squad";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Marksman";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_WeaposnSquad
	{
		name = "Weaposn Squad";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_HATSpesialist";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Machinegunner";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Marksman";
			rank = "PRIVATE";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_AssaultSquad
	{
		name = "Assault Squad";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "SERGEANT";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 7,0,0 };
		};
		class Unit5
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Marksman";
			rank = "PRIVATE";
			position[] = { 9,0,0 };
		};
		class Unit6
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { 11,0,0 };
		};
		class Unit7
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 13,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_FireTeam
	{
		name = "Fire Team";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_Sentry
	{
		name = "Sentry";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_AirDefenceTeam
	{
		name = "Air-Defence Team";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AASpesialist";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AASpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_AntiArmorTeam
	{
		name = "Anti-Armor Team";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_AntiArmorTeamHeavy
	{
		name = "Anti-Armor Team (Heavy)";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_HATSpesialist";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_HATSpesialist";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_SupportTeamMedical
	{
		name = "Support Team (Medical)";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	class StrazhCompany_Faction_G_infantry_MachinegunnerTeam
	{
		name = "Machinegunner Team";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_SquadLeader";
			rank = "CORPORAL";
			position[] = { 0,5,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Machinegunner";
			rank = "PRIVATE";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Machinegunner";
			rank = "PRIVATE";
			position[] = { 3,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
	};
	
};