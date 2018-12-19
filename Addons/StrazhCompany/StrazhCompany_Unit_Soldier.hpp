class StrazhCompany_Unit_Officer_Base : O_Soldier_base_F
{
	_ManticoreAuthor
		expansion = 1;
	identityTypes[] =
	{
		"LanguageRUS",
		"Head_Russian",
		"Head_Euro",
		"Head_Russian_camo_semiarid"
	};
	side = 0;
	faction = "StrazhCompany_Faction";
	genericNames = "StrazhCompany_GenericNames_Russian";
	accuracy = 2.3;
	threat[] = { 1,0.1,0.1 };
	camouflage = 1.4;
	minFireTime = 7;
	cost = 40000;
	canCarryBackPack = 1;
	scope = 1;
	armorStructural = 4;
	explosionShielding = 0.40000001;
	model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
	uniformClass = "StrazhCompany_Uniform_Officer";
	hiddenSelections[] =
	{
		"Camo"
	};
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompanyOfficerUniform_CO.paa",
	};
	weapons[] = { "Throw","Put" };
	respawnWeapons[] = { "Throw","Put" };
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};

};
class StrazhCompany_Unit_Soldier_Base : O_Soldier_base_F
{
	_ManticoreAuthor
	expansion = 1;
	identityTypes[] =
	{
		"LanguageRUS",
		"Head_Russian",
		"Head_Euro",
		"Head_Russian_camo_semiarid"
	};
	side = 0;
	faction = "StrazhCompany_Faction";
	genericNames = "StrazhCompany_GenericNames_Russian";
	accuracy = 2.3;
	threat[] = { 1,0.1,0.1 };
	camouflage = 1.4;
	minFireTime = 7;
	cost = 40000;
	canCarryBackPack = 1;
	scope = 1;
	armorStructural = 4;
	explosionShielding = 0.40000001;
	model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
	uniformClass = "StrazhCompany_Uniform_Soldier";
	hiddenSelections[] =
	{
		"Camo1",
		"Camo2",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"\StrazhCompany\Data\Uniform\StrazhCompanySoldierUniform_CO.paa",
		"\StrazhCompany\Data\Uniform\StrazhCompanyTech_CO.paa"
	};
	weapons[] = { "Throw","Put"};
	respawnWeapons[] = { "Throw","Put"};
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = {};
	respawnLinkedItems[] = {};
	
};


class StrazhCompany_Unit_Officer : StrazhCompany_Unit_Officer_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "Officer";
	cost = 100000;
	role = "Officer";

	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_aku12","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_aku12","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17" };
	respawnMagazines[] = { "hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17" };
	linkedItems[] = { "rhs_beret_vdv3", "rhs_vest_commander",_CommenItem };
	respawnLinkedItems[] = { "rhs_beret_vdv3", "rhs_vest_commander",_CommenItem };
	backpack = "StrazhCompany_B_LegStrapBag_black_f_SGC_Officer";
};

class StrazhCompany_Unit_Soldier_Rifleman : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
		
	scope=2;
	displayName="Rifleman";
	cost=100000;
	role="Rifleman";
	weapons[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","Throw","Put","Rangefinder" };
	respawnWeapons[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","Throw","Put","Rangefinder" };
	Items[] = 
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] = 
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = 
	{
		"hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5"
	};
	respawnMagazines[] = 
	{ 
		"hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5"
	};
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_AssaultPack_Rifleman";
};

class StrazhCompany_Unit_Soldier_SquadLeader : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "Squad Leader";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12GL","rhs_weap_pya","Laserdesignator_01_khk_F" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12GL","rhs_weap_pya","Laserdesignator_01_khk_F" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","hlc_VOG25_AK","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo",mag_2("rhs_mag_plamyam"),mag_2("rhs_mag_rgd5"),"rhs_mag_9x19_17","Laserbatteries" };
	respawnMagazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","hlc_VOG25_AK","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo",mag_2("rhs_mag_plamyam"),mag_2("rhs_mag_rgd5"),"rhs_mag_9x19_17","Laserbatteries" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_vog",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_vog",_CommenItem, };
	backpack = "StrazhCompany_Bag_AssaultPack_SquadLeader";
};

class StrazhCompany_Unit_Soldier_AutoRifleman : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Auto Rifleman";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_RPK12","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_RPK12","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "hlc_60Rnd_545x39_t_rpk","rhs_mag_9x19_17",mag_2("hlc_45Rnd_545x39_m_rpk"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5","rhs_mag_9x19_17","rhs_mag_nspn_red","rhs_mag_nspn_green","rhs_mag_rdg2_black" };
	respawnMagazines[] = { "hlc_60Rnd_545x39_t_rpk","rhs_mag_9x19_17",mag_2("hlc_45Rnd_545x39_m_rpk"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5","rhs_mag_9x19_17","rhs_mag_nspn_red","rhs_mag_nspn_green","rhs_mag_rdg2_black" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_AssaultPack_AutoRifleman";
};

class StrazhCompany_Unit_Soldier_Grenadier : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Grenadier";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12GL","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12GL","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","hlc_VOG25_AK","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5","rhs_mag_9x19_17",mag_5("hlc_VOG25_AK") };
	respawnMagazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","hlc_VOG25_AK","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5","rhs_mag_9x19_17",mag_5("hlc_VOG25_AK") };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_vog",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_vog",_CommenItem };
	backpack = "StrazhCompany_Bag_AssaultPack_Grenadier";
};

class StrazhCompany_Unit_Soldier_Marksman : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Marksman";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_rhs_weap_svds_npz","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_rhs_weap_svds_npz","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
		,"ACE_Tripod","ACE_RangeCard","ACE_Kestrel4500"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
		,"ACE_Tripod","ACE_RangeCard","ACE_Kestrel4500"
	};
	magazines[] = { "rhs_10Rnd_762x54mmR_7N14","rhs_mag_9x19_17",mag_4("rhs_10Rnd_762x54mmR_7N14"), mag_2("rhs_mag_9x19_17") };
	respawnMagazines[] = { "rhs_10Rnd_762x54mmR_7N14","rhs_mag_9x19_17",mag_4("rhs_10Rnd_762x54mmR_7N14"), mag_2("rhs_mag_9x19_17") };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_AssaultPack_Marksman";
};

class StrazhCompany_Unit_Soldier_Machinegunner : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "Machinegunner";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_rhs_weap_pkp","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_rhs_weap_pkp","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "rhs_100Rnd_762x54mmR","rhs_mag_9x19_17","rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5",mag_3("rhs_mag_9x19_17") };
	respawnMagazines[] = { "rhs_100Rnd_762x54mmR","rhs_mag_9x19_17","rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5",mag_3("rhs_mag_9x19_17") };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_Carryall_Machinegunner";
};

class StrazhCompany_Unit_Soldier_Crewman : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Crewman";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_aku12","rhs_weap_pya","Laserdesignator_01_khk_F" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_aku12","rhs_weap_pya","Laserdesignator_01_khk_F" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgd5","rhs_mag_plamyam",mag_4("rhs_mag_rdg2_white"),"rhs_mag_rdg2_black","rhs_mag_nspn_red","Laserbatteries" };
	respawnMagazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_mag_9x19_17",mag_4("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgd5","rhs_mag_plamyam",mag_4("rhs_mag_rdg2_white"),"rhs_mag_rdg2_black","rhs_mag_nspn_red","Laserbatteries" };
	linkedItems[] = { "rhs_tsh4_ess_bala","StrazhCompany_Vest_6b23_6sh92_headset",_CommenItem };
	respawnLinkedItems[] = { "rhs_tsh4_ess_bala","StrazhCompany_Vest_6b23_6sh92_headset",_CommenItem };
	backpack = "B_LegStrapBag_black_f";
};

class StrazhCompany_Unit_Soldier_CLS : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Combat Life Saver";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_mag_9x19_17",mag_3("hlc_30Rnd_545x39_B_AK"),"rhs_mag_9x19_17",mag_3("rhs_mag_rdg2_white"),"rhs_mag_rdg2_black","rhs_mag_nspn_red","rhs_mag_rgo","rhs_mag_plamyam" };
	respawnMagazines[] = { "StrazhCompany_AK12_hlc_rifle_ak12","rhs_mag_9x19_17",mag_3("hlc_30Rnd_545x39_B_AK"),"rhs_mag_9x19_17",mag_3("rhs_mag_rdg2_white"),"rhs_mag_rdg2_black","rhs_mag_nspn_red","rhs_mag_rgo","rhs_mag_plamyam" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_Carryall_CLS";
};

class StrazhCompany_Unit_Soldier_ATSpesialist : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "AT-Spesialist";
	cost = 100000;
	role = "AT";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","StrazhCompany_Launch_RPG32_Black","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","StrazhCompany_Launch_RPG32_Black","Rangefinder" };
	Items[] =
	{
#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "RPG32_F","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	respawnMagazines[] = { "RPG32_F","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_Carryall_ATSpesialist";
};

class StrazhCompany_Unit_Soldier_HATSpesialist : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "Heavy AT-Spesialist";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","launch_O_Vorona_brown_F","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","launch_O_Vorona_brown_F","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "Vorona_HEAT","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	respawnMagazines[] = { "Vorona_HEAT","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_Carryall_HATSpesialist";
};

class StrazhCompany_Unit_Soldier_AASpesialist : StrazhCompany_Unit_Soldier_Base
{
	_ManticoreAuthor

	scope = 2;
	displayName = "Anti-Air Spesialist";
	cost = 100000;
	role = "Rifleman";
	weapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","launch_B_Titan_F","Rangefinder" };
	respawnWeapons[] = { "Throw","Put","StrazhCompany_AK12_hlc_rifle_ak12","rhs_weap_pya","launch_B_Titan_F","Rangefinder" };
	Items[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	RespawnItems[] =
	{
		#include "StrazhCompany_Unit_Soldier_Loadout_Medical.hpp"
	};
	magazines[] = { "Titan_AA","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	respawnMagazines[] = { "Titan_AA","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17","hlc_30Rnd_545x39_B_AK","rhs_mag_9x19_17", mag_5("hlc_30Rnd_545x39_B_AK"),"rhs_mag_rgo","rhs_mag_plamyam","rhs_mag_rgd5" };
	linkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	respawnLinkedItems[] = { "rhs_altyn_novisor_bala","StrazhCompany_Vest_6b13_6sh92_Radio",_CommenItem };
	backpack = "StrazhCompany_Bag_Carryall_AASpesialist";
};
