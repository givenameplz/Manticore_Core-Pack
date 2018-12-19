

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

	1 x Standard rifle
	15 x magasin standard rifle (10 normal mags, 3 tracer mags, 2 IR Tracer mags)
	2 x HEDP Tube
	1 x Toolkit
	10 x smok (3 green smoke, 2 blue smoke, 1 purple smok, 5 white smoke, 2 Red Smoke)
	2 x Hand Flare Green
	4 x Cable Tie
	1 x Defusalkit
	5 x IR Strobe
	5 x EarPlugs
	1 x EntrenchingTool
	1 x kitbag


	Medical loadout

	40 x bandaged ( 10 quik, 10 basic, 10 x elastic, 10 pakning )
	6 x morphin
	2 x 250 ml saline
	4 x 500 ml saline
	2 x Bodybag
	3 x Tourniqute
	5 x splints
	4 x epinefrin
	1 x diffrobelater
	*/

										//Normal supply

				addItem SMA_HK416afgOD;   					// HK416 [SMA]
				addItem MA_30Rnd_556x45_M855A1;   			// M855A1 556 [SMA]
				addItem SMA_30Rnd_556x45_M855A1_Tracer;		// M855A1 556 Tracer [SMA]
				addItem SMA_30Rnd_556x45_M855A1_IR;			// M855A1 556 ID [SMA]    
				addItem rhs_m136_hedp_mag;   				// HEDP Tube [RHS USAF]
				addItem ToolKit;   							// Toolkit [Vanila]
				addItem SmokeShell;   						// Smoke White
				addItem SmokeShellGreen;   					// Smoke Green
				addItem SmokeShellPurple;   				// Smoke Purple
				addItem SmokeShellBlue;   					// Smoke Blue
				addItem SmokeShellRed;   					// Smoke Red
				addItem										// Kitbag [VSM All in one]
				addItem B_IR_Grenade;   					// IR Granade[Vanila]

										//Ace mics

				addItem ACE_HandFlare_Green;    			//Flare green
				addItem ACE_DefusalKit;   					//Defusalkit
				addItem ACE_CableTie;   					//Cable Tie
				addItem ACE_IR_Strobe_Item;   				//IR Strobe
				addItem ACE_EarPlugs;   					//EarPlugs
				addItem ACE_EntrenchingTool;   				//EntrenchingTool

										//Ace Medical

				addItem ACE_bodyBag;   						//Bodybag
				addItem ACE_quikclot;    					//Quik Bandage
				addItem ACE_fieldDressing;    				//Basic bandage
				addItem ACE_elasticBandage;   				//Elastic Bandage
				addItem ACE_packingBandage;   				//Paking bandage
				addItem ACE_morphine;   					//Morphin
				addItem ACE_bloodIV_250;   					//250 ml Saline    
				addItem ACE_bloodIV_500;   					//500 ml Saline
				addItem ACE_epinephrine;   					//Epinefrin
				addItem ACE_tourniquet;    					//Tourniqute

										//Ace medicale expansejon Splints and CPR [ADV - ACE CPR] [ADV - ACE Splint]

				addItem adv_aceSplint_splint;   			//Splints
				addItem adv_aceCPR_AED;   					//Diffrobelater


			};
		};
	};
};