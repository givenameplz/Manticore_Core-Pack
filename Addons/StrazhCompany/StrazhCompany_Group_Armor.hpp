class StrazhCompany_Faction_G_Armor
{
	name = "Armor";
	aliveCategory = "Armor";

	class StrazhCompany_Faction_G_Tank_Platoon
	{
		name = "Tank Platoon";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "SRT_MBT_T140K_Angara";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "SRT_MBT_T140_Angara";
			rank = "CORPORAL";
			position[] = { 0,0,0 };
		};
		class Unit2
		{
			side = 0;
			vehicle = "SRT_MBT_T140_Angara";
			rank = "PRIVATE";
			position[] = { 5,0,0 };
		};
		class Unit3
		{
			side = 0;
			vehicle = "SRT_MBT_T140_Angara";
			rank = "PRIVATE";
			position[] = { 10,0,0 };
		};
	};
	class StrazhCompany_Faction_G_Tank_Section
	{
		name = "Tank Section";
		faction = "StrazhCompany_Faction";
		side = 0;
		rarityGroup = 0.75;

		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		class Unit0
		{
			side = 0;
			vehicle = "SRT_MBT_T140K_Angara";
			rank = "SERGEANT";
			position[] = { -5,0,0 };
		};
		class Unit1
		{
			side = 0;
			vehicle = "SRT_MBT_T140_Angara";
			rank = "CORPORAL";
			position[] = { 0,0,0 };
		};
	};
};