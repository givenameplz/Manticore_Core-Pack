class StrazhCompany_Vest_LBV_Harness : V_HarnessO_brn
{
	_ManticoreAuthor
	scope = 2;
	displayName = "Strazh Company LBV Harness";
	//picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
	model = "\A3\Characters_F\OPFOR\equip_o_vest01";
	hiddenSelections[] = { "Camo1","Camo2" };
	hiddenSelectionsTextures[] =
	{
		"StrazhCompany\Data\Uniform\StrazhCompanySoldierUniform_CO.paa",
		"StrazhCompany\Data\Uniform\StrazhCompanyTech_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
		containerClass = "Supply160";
		mass = 30;
		hiddenSelections[]=
		{
		"Camo1",
		"Camo2"
		};
	};
};

class StrazhCompany_Vest_6b13_6sh92_Radio_Base : rhs_6b13_6sh92_radio
{
	_ManticoreAuthor
	scope = 1;
	displayName = "StrazhCompany 6b13 (6sh92/Radio) (Base)";
	//picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";

	/*model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";*/
	hiddenSelections[] = { "Camo1","Camo2" };
	hiddenSelectionsTextures[] =
	{
		"StrazhCompany\Data\Uniform\StrazhCompany_6b13_CO.paa",
		"StrazhCompany\Data\Uniform\StrazhCompany_gearpack1_6sh92_CO.paa"
	};

	/*class ItemInfo : ItemInfo
	{
	uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
	};*/

};
class StrazhCompany_Vest_6b13_6sh92_Radio : StrazhCompany_Vest_6b13_6sh92_Radio_Base
{
	_ManticoreAuthor
	scope = 2;
	displayName = "StrazhCompany 6b13 (6sh92/Radio)";
	//picture = "\rhsafrf\addons\rhs_infantry2\inventory\gear_icon_6b13_ca.paa";
	hiddenSelections[] = { "Camo1","Camo2" };
	hiddenSelectionsTextures[] =
	{
		"StrazhCompany\Data\Uniform\StrazhCompany_6b13_CO.paa",
		"StrazhCompany\Data\Uniform\StrazhCompany_gearpack1_6sh92_CO.paa"
	};

	/*class ItemInfo : ItemInfo
	{
	uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
	};*/
};
class StrazhCompany_Vest_6b13_6sh92_vog : StrazhCompany_Vest_6b13_6sh92_Radio
{
	_ManticoreAuthor
	scope = 2;
	displayName = "StrazhCompany 6b13 (6sh92/VOG)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";

	class ItemInfo : ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
		containerClass = "Supply120";
		mass = 100;
	};
};

class StrazhCompany_Vest_6b23_6sh92_headset : StrazhCompany_Vest_6b13_6sh92_Radio
{
	_ManticoreAuthor
	scope = 2;
	displayName = "StrazhCompany 6b23 (6sh92/Headset)";

	model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";

	hiddenSelections[] = { "Camo1","Camo2" };
	hiddenSelectionsTextures[] =
	{
		"StrazhCompany\Data\Uniform\StrazhCompany_6b23_CO.paa",
		"StrazhCompany\Data\Uniform\StrazhCompany_gearpack1_6sh92_CO.paa"
	};

	class ItemInfo : ItemInfo
	{
		uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b23_6sh92_headset";
		containerClass = "Supply120";
		mass = 80; // +15 +5
	};
};