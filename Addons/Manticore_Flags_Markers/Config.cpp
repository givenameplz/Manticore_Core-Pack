class CfgPatches
{
	class Manticore_Flags_Core
	{
		units[] = 
		{	
			#include "UnitsList.hpp"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Structures_F_Mil_Flags",
			"A3_Signs_F",
			"A3_Structures_F_Orange_Signs_Special",
			"A3_Structures_F_Orange_Humanitarian_Flags"
		};
		version = "1.0.0";
		versionDesc = "Manticore Flags and Markers";
		author[] =
		{
			"[TFM]Mattress",
			"Siege - A"
		};
		authorUrl = "";
	};
};

//Editor Categories

#include "CfgEditorCategories.hpp"

class CfgVehicles
{
	// Flag Pole

	#include "FlagPole.hpp"

	// Flag Carrier

	#include "FlagCarrier.hpp"

	//Flag Carrier Smale
	
	#include "FlagCarrierSmale.hpp"

	//Flag Banner
	
	#include "FlagBanner.hpp"

};

class CfgMarkerClasses
{
	class Manticore_Markers
	{
		displayName = "Manticore Markers";
	};
};
class CfgMarkers
{
	#include "ManticoreMarker.hpp"
};