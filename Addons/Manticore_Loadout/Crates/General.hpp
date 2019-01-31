class Manticore_Loadout_Crate_General : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (General) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		_aceXDrink(80, 0, 0, 0, 0);
		_aceXFood(20, 20, 0, 20, 0, 0, 0, 20, 0, 0);

	};
	class TransportBackpacks
	{
		_standardKitBag(1);
	};
};
class Manticore_Loadout_Crate_Medical : Box_NATO_Equip_F
{
	displayName = "Equipment Crate (Medical) (TFM)";
	scope = 2;
	editorCategory = "Manticore_Categories";
	editorSubcategory = "Manticore_Categories_Supply";

	class TransportWeapons
	{
	};
	class TransportMagazines
	{
	};
	class TransportItems
	{
		_medicalBandage(70, 70, 70, 70);
		_medicalInjector(30, 30, 15, 15);
		_medicalSelin(20, 30, 20);
		_medicalAdv(2, 40, 2);
		_medicalMics(40, 20, 0);
		_aceXDrink(0, 20, 5, 5, 5);
		_aceXFood(10, 0, 10, 0, 0, 0, 0, 0, 10, 0);
	};
	class TransportBackpacks
	{
		_standardKitBag(1);
	};
};
