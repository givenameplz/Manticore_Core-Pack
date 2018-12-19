


If(isClass(configfile >> "CfgPatches" >> "SMA_Weapons"))
Then
{
	if (isClass(configfile >> "CfgPatches" >> "ace_medical"))
		Then
	{
		if (isClass(configfile >> "cfgPatches" >> /*RHS USAF*/""))
		Then
		{
			if (isclass(configfile >> "cfgPatches" >>/*VSM all in one*/""))
			then
			{

				removeAllAssignedItems this;
	// Item List

	/*
	Standard loadout

	1 x Toolkit
	12 x smok (3 green smoke, 3 blue smoke, 3 purple smok, 3 white smoke)
	1 x IR Granade
	2 x Hand Flare Green
	2 x Hand Flare Red
	4 x Cable Tie
	1 x Defusalkit
	5 x IR Strobe
	5 x EarPlugs
	1 x EntrenchingTool
	2 x kitbag


	Medical loadout

	120 x bandaged ( 30 quik, 30 basic, 30 elastic, 30 pakning )
	10 x morphin
	4 x 250 ml saline
	4 x 500 ml saline
	4 x 1000 ml saline
	6 x Bodybag
	10 x Tourniqute
	20 x splints
	10 x epinefrin
	1 x diffrobelater
	*/


										//Normal supply

				addItem ToolKit;   						// Toolkit [Vanila]
				addItem SmokeShell;   					// Smoke White
				addItem SmokeShellGreen;				// Smoke Green
				addItem SmokeShellPurple;				// Smoke Purple
				addItem SmokeShellBlue;   				// Smoke Blue
				addItem									// Kitbag [VSM All in one]
				addItem B_IR_Grenade;   				// IR Granade[Vanila]

										//Ace mics
				addItem ACE_HandFlare_Green;			//Flare Green
				addItem ACE_HandFlare_Red;				//Flare Red
				addItem ACE_DefusalKit;   				//Defusalkit
				addItem ACE_CableTie;   				//Cable Tie
				addItem ACE_IR_Strobe_Item;				//IR Strobe
				addItem ACE_EarPlugs;   				//EarPlugs
				addItem ACE_EntrenchingTool;			//EntrenchingTool

										//Ace Medical

				addItem ACE_bodyBag;   					//Bodybag
				addItem ACE_quikclot;    				//Quik Bandage
				addItem ACE_fieldDressing;				//Basic bandage
				addItem ACE_elasticBandage;				//Elastic Bandage
				addItem ACE_packingBandage;				//Paking bandage
				addItem ACE_morphine;   				//Morphin
				addItem ACE_bloodIV_250;				//250 ml Saline    
				addItem ACE_bloodIV_500;				//500 ml Saline
				addItem ACE_bloodIV_1000;				//1000 ml Saline
				addItem ACE_epinephrine;				//Epinefrin
				addItem ACE_tourniquet;					//Tourniqute

										//Ace medicale expansejon Splints and CPR

				addItem adv_aceSplint_splint;			//Splints
				addItem adv_aceCPR_AED;   				//Diffrobelater


			};
		};
	};
};
