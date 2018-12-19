
class Manticore_Navy_O_Uniform : Uniform_Base
{
	author = "Mattress";
	scope = 2;
	displayName = "Navy Uniform O [NWU type-1]";
	//picture = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	/* hiddenSelections[] = {"camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
	"\Manticore_Uniform\Data\officer_spc_co.paa",
	"\Manticore_Uniform\Data\Independent_Pants_AOR3_v0,1.paa"
	}; */

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "Manticore_Navy_Uniform_O_Soldier";
		containerClass = Supply40;
		mass = 40;
	};
};

class Manticore_Navy_S_Uniform : Uniform_Base
{
	author = "Mattress";
	scope = 2;
	displayName = "Navy Uniform S [NWU type-1]";
	//picture = "";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	/* hiddenSelections[] = {"camo1","Camo2"};
	hiddenSelectionsTextures[] =
	{
	"\Manticore_Uniform\Data\officer_spc_co.paa",
	"\Manticore_Uniform\Data\Independent_Pants_AOR3_v0,1.paa"
	}; */

	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "Manticore_Navy_Uniform_S_Soldier";
		containerClass = Supply40;
		mass = 40;
	};
};