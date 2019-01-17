class CfgPatches
{
	class Manticore_Loadout_Crates
	{
		addonRootClass = "Manticore_Loadout";
		units[] = {

			Manticore_Loadout_Crate_Kit_UnguidedATLauncher,
			Manticore_Loadout_Crate_Kit_GuidedATLauncher,
			Manticore_Loadout_Crate_Kit_GuidedAALauncher,
			Manticore_Loadout_Crate_Kit_DisposableATLauncher,
			Manticore_Loadout_Crate_Kit_StandardRifle,
			Manticore_Loadout_Crate_Kit_Mk46_HLC,
			Manticore_Loadout_Crate_Kit_Mk48_HLC,
			Manticore_Loadout_Crate_Kit_M14_HLC,
			Manticore_Loadout_Crate_Kit_Mk11_RHS,
			Manticore_Loadout_Crate_Kit_M27_RHS,
			Manticore_Loadout_Crate_Field_Fireteam,
			Manticore_Loadout_Crate_Field_Squad,
			Manticore_Loadout_Crate_Ammo_StandardRifle,
			Manticore_Loadout_Crate_Ammo_UnguidedATLauncher,
			Manticore_Loadout_Crate_Ammo_GuidedATLauncher,
			Manticore_Loadout_Crate_Ammo_GuidedAALauncher,
			Manticore_Loadout_Crate_Ammo_Mk46_HLC,
			Manticore_Loadout_Crate_Ammo_Mk48_HLC,
			Manticore_Loadout_Crate_Ammo_M14_HLC,
			Manticore_Loadout_Crate_Ammo_Mk11_RHS,
			Manticore_Loadout_Crate_Ammo_M27_RHS,
			Manticore_Loadout_Crate_Demo_Demo,
			Manticore_Loadout_Crate_Demo_Mine,
			Manticore_Loadout_Crate_Demo_DemoMine,
			Manticore_Loadout_Crate_Grenade_Grenade,
			Manticore_Loadout_Crate_Grenade_FlareChem,
			Manticore_Loadout_Crate_Grenade_SmokFlareChem,
			Manticore_Loadout_Crate_Grenade_Smok,
			Manticore_Loadout_Crate_Static_M2_RHS,
			Manticore_Loadout_Crate_Static_Mk19_RHS,
			Manticore_Loadout_Crate_Static_TOW_RHS,
			Manticore_Loadout_Crate_Static_Mk6_Vanila,
			Manticore_Loadout_Crate_General,
			Manticore_Loadout_Crate_Medical
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"Manticore_Loadout",
			"A3_Supplies_F_Exp_Ammoboxes",
			"A3_Supplies_F_Exp",
			"A3_Weapons_F_Ammoboxes",
			"A3_Supplies_F_Heli_Slingload",
			"A3_Supplies_F_Heli_CargoNets"
		};
	};
};

class CfgVehicles
{
#include "CratesInport.hpp"
#include "../LoadoutMacro.hpp"

#include "Kit.hpp"
#include "FieldKit.hpp"
#include "Ammo.hpp"
#include "Demo.hpp"
#include "GrenadesSmokFlare.hpp"
#include "Static.hpp"
#include "General.hpp"

};