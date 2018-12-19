

if(isClass(configfile >> "CfgPatches" >> "SMA_Weapons"))
Then
{
	if (isClass(configfile >> "CfgPatches" >> "ace_medical"))
		Then
	{
		

				removeAllAssignedItems this;
	// Item List

	/*
	Standard loadout

	1 x Standard rifle
	15 x magasin standard rifle (10 normal mags, 3 tracer mags, 2 IR Tracer mags)
	2 x HEDP Tube
	1 x Toolkit
	10 x smok (3 green smoke, 3 blue smoke, 5 white smoke, 2 Red Smoke)
	2 x Hand Flare Green
	4 x Cable Tie
	1 x Defusalkit
	5 x IR Strobe
	5 x EarPlugs
	1 x EntrenchingTool
	1 x kitbag


	Medical loadout

	40 x bandaged ( 10 quik, 10 basic, 10 x elastic, 10 pakning )
	4 x morphin
	2 x 250 ml saline
	4 x 500 ml saline
	2 x Bodybag
	4 x Tourniqute
	5 x splints
	4 x epinefrin
	1 x diffrobelater
	*/

										//Normal supply

				addItemCargo ["SMA_HK416afgOD",1];   					// HK416 [SMA]
				addItemCargo ["MA_30Rnd_556x45_M855A1",10];   			// M855A1 556 [SMA]
				addItemCargo ["SMA_30Rnd_556x45_M855A1_Tracer",3];		// M855A1 556 Tracer [SMA]
				addItemCargo ["SMA_30Rnd_556x45_M855A1_IR",2];			// M855A1 556 ID [SMA]    
				addItemCargo ["rhs_m136_hedp_mag",2];   				// HEDP Tube [RHS USAF]
				addItemCargo ["ToolKit",1];   							// Toolkit [Vanila]
				addItemCargo ["SmokeShell",5];   						// Smoke White
				addItemCargo ["SmokeShellGreen",3];   					// Smoke Green
				addItemCargo ["SmokeShellBlue",3];   					// Smoke Blue
				addItemCargo ["SmokeShellRed",2];   					// Smoke Red
				//addItemCargo											// Kitbag [VSM All in one]
				addItemCargo ["B_IR_Grenade",1];   						// IR Granade[Vanila]

										//Ace mics

				addItemCargo ["ACE_HandFlare_Green",2];    				//Flare green
				addItemCargo ["ACE_DefusalKit",1];   					//Defusalkit
				addItemCargo ["ACE_CableTie",4];   						//Cable Tie
				addItemCargo ["ACE_IR_Strobe_Item",5];   				//IR Strobe
				addItemCargo ["ACE_EarPlugs",5];   						//EarPlugs
				addItemCargo ["ACE_EntrenchingTool",1];   				//EntrenchingTool

										//Ace Medical

				addItemCargo ["ACE_bodyBag",2];   						//Bodybag
				addItemCargo ["ACE_quikclot",10];    					//Quik Bandage
				addItemCargo ["ACE_fieldDressing",10];    				//Basic bandage
				addItemCargo ["ACE_elasticBandage",10];   				//Elastic Bandage
				addItemCargo ["ACE_packingBandage",10];   				//Paking bandage
				addItemCargo ["ACE_morphine",4];   						//Morphin
				addItemCargo ["ACE_bloodIV_250",2];   					//250 ml Saline    
				addItemCargo ["ACE_bloodIV_500",4];   					//500 ml Saline
				addItemCargo ["ACE_epinephrine",1];   					//Epinefrin
				addItemCargo ["ACE_tourniquet",4];    					//Tourniqute

										//Ace medicale expansejon Splints and CPR [ADV - ACE CPR] [ADV - ACE Splint]

				addItemCargo ["adv_aceSplint_splint",5];   				//Splints
				addItemCargo ["adv_aceCPR_AED",1];   					//Diffrobelater



	};
};
