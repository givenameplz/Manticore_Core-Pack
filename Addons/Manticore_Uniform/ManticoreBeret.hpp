
class Manticore_Beret_01 : H_Beret_Colonel
{
	author = "Mattress TFM";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "Beret (Manticore)";
	//picture = "";
	model = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
	hiddenSelections[] = { "Camo" };
	hiddenSelectionsTextures[] = { "\Manticore_Uniform\Data\headgear_skin_beret01.paa" };
	class ItemInfo : HeadgearItem
	{
		mass = 5;
		allowedSlots[] = { 901,605 };
		uniformModel = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
		modelSides[] = { 3,2,1 };
		hiddenSelections[] = { "Camo" };
		armor = 0.1;
		passThrough = 0.65;
	};
};