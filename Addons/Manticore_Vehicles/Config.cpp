class CfgPatches 
{
	class Manticore_Vehicle 
	{
		units[] = 
		{
			//Manticore_Vehicle_Leopard,
			//Manticore_Vehicle_Badger_IFV,
			//Manticore_Vehicle_Nemmera,
			//Manticore_Vehicle_Namer,
			//Manticore_Vehicle_Bardelas,
			//Manticore_Vehicle_speedboat_Minigun
		};
		weapons[] = {};
		version = "0.3.0";
		requiredAddons[] = 
		{
			"A3_Armor_F_EPB_MBT_03",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_data_f",
			"A3_boat_f_Boat_Armed_01",
			"A3_boat_f_beta_Boat_Armed_01"
		};
		author = "Mattress";
		authorUrl = "http://steamcommunity.com/id/MR_Mattress/";
	};


};
class cfgFactionClasses 
{   
	class Manticore_Faction 
	{	
        displayName = "Manticore"; 
        priority = 3; 
        side = 1;  
        icon = ""; 
    };  
};