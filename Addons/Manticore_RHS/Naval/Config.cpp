class CfgPatches
{
	class Manticore_RHS_Naval
	{
		addonRootClass = "Manticore_RHS";
		units[] = 
		{
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_RHS",
			"rhsusf_c_markvsoc"
		};
	};
};

class CfgVehicles
{
	class rhsusf_mkvsoc;

	class Manticore_RHS_Naval_MkVSOC : rhsusf_mkvsoc
	{
		displayName = "Mk. V SOC";
		scope = 1;
		side = 1;
		faction = "Manticore_Faction";
		//crew = "";
	};
};