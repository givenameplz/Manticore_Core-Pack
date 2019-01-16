class CfgPatches
{
	class Manticore_Vanilla_Drone
	{
		addonRootClass = "Manticore_Vanilla";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Vanilla",
			"A3_Drones_F_Air_F_Gamma_UAV_01",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Air_F_Exp_UAV_03",
			"A3_Air_F_Jets_UAV_05",
		};
	};
};

class CfgVehicles
{
	class B_UAV_05_F;
	class B_T_UAV_03_dynamicLoadout_F;
	class B_UAV_01_F;
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;

	class Manticore_Vanilla_Drone_UCAV : B_UAV_05_F
	{
		displayName = "UCAV Sentinel";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class Manticore_Vanilla_Drone_Falcon : B_T_UAV_03_dynamicLoadout_F
	{
		displayName = "MQ-12 Falcon";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class Manticore_Vanilla_Drone_AR2Darter : B_UAV_01_F
	{
		displayName = "AR-2 Darter";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class Manticore_Vanilla_Drone_Stomper : B_UGV_01_F
	{
		displayName = "UGV Stomper";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
	class Manticore_Vanilla_Drone_Stomper_RCWS : B_UGV_01_rcws_F
	{
		displayName = "UGV Stomper RCWS";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
	};
};