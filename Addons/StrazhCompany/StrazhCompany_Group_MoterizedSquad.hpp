class StrazhCompany_Faction_G_Moterized
{
	name = "Moterized";
	aliveCategory = "Moterized";

	class StrazhCompany_Faction_G_Moterized_Squad
	{
		name = "Moterized Squad";
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
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 0,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 2,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 4,0,0 };
		};
		class Unit5
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { -2,-2,0 };
		};
		class Unit6
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "PRIVATE";
			position[] = { 0,-2,0 };
		};
		class Unit7
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_CLS";
			rank = "PRIVATE";
			position[] = { 2,-2,0 };
		};
		class Unit8
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 4,-2,0 };
		};
		class Unit9
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { -2,-4,0 };
		};
		class Unit10
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Marksman";
			rank = "PRIVATE";
			position[] = { 0,-4,0 };
		};
		class Unit11
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_Machinegunner";
			rank = "PRIVATE";
			position[] = { 2,-4,0 };
		};
		class Unit12
		{
			side = 0;
			vehicle = "SRT_Typhoon_transport_Cover";
			rank = "PRIVATE";
			position[] = { 7,-2,0 };
		};
	};
	class StrazhCompany_Faction_G_Moterized_Patrol
	{
		name = "Moterized Patrol";
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
			vehicle = "StrazhCompany_Unit_Soldier_Rifleman";
			rank = "CORPORAL";
			position[] = { -2,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_AutoRifleman";
			rank = "PRIVATE";
			position[] = { 0,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "StrazhCompany_Unit_Soldier_ATSpesialist";
			rank = "PRIVATE";
			position[] = { 2,0,0 };
		};
		class Unit4
		{
			side = 0;
			vehicle = "SRT_GAZ_233114";
			rank = "PRIVATE";
			position[] = { 5,-2,0 };
		};
	};
	
};