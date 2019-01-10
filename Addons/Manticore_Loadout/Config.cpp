class CfgPatches
{
	class Manticore_Loadout
	{ //test
		units[] =
		{
		};
		weapons[] =
		{
		};
		version = "1.0";
		requiredAddons[] =
		{
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
		priority = 3; // Position in list. 
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = ""; //Custom Icon 
	};
};

class CfgEditorCategories
{
	class Manticore_Categories
	{
		displayName = "Manticore";
	};
};

class CfgEditorSubcategories
{
	class Manticore_Categories_Supply
	{
		displayName = "Supply";
	};
};

class CfgVehicles
{
	///Macros
	#include "LoadoutMacro.hpp"
};	
