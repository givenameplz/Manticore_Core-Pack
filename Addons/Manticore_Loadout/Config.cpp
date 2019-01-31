class CfgPatches
{
	class Manticore_Loadout
	{
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
		authorUrl = "https://github.com/Mattress237/Manticore_Core-Pack";
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
