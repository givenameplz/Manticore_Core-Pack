
//HPP for Falgcarrier normal size

class FlagChecked_F;
class Manticore_FlagCarrier_WHITE : FlagChecked_F
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Withe)";
	icon = "iconObject_circle";
	vehicleClass = "Signs";
	editorCategory = "Manticore_Flag";
	editorSubcategory = "Manticore_Flag_Carrier";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_White_CO.paa';";
	};
};

//Flag markers for Ares/Achilis expansion. ##NEED ARES/ACHILIS to work properly##. Designd to be placet as falg on topp of vehicles.

#include "CarFlagMarker.hpp"

//Flagcarrier FACTIONS

class Manticore_FlagCarrier_NATO : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (NATO)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_NATO_CO.paa';";
	};
};
class Manticore_FlagCarrier_MANTICORE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (Manticore)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Manticore_CO.paa';";
	};
};
class Manticore_FlagCarrier_sTs : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (sTs)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_sTs_CO.paa';";
	};
};
class Manticore_FlagCarrier_NORWAY : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (Norway)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Norway_CO.paa';";
	};
};
class Manticore_FlagCarrier_DENMARK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (Denmark)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Denmark_CO.paa';";
	};
};
class Manticore_FlagCarrier_UNITED_KINGDOM : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (UK)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_United_Kingdom_CO.paa';";
	};
};
class Manticore_FlagCarrier_GERMANY : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (Germany)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Germany_CO.paa';";
	};
};
class Manticore_FlagCarrier_ROYAL_SCOTLAND : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Faction (Royal Scotland)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Royal_Scotland_CO.paa';";
	};
};

//Flagcarrier BLUE

class Manticore_FlagCarrier_BLUE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_CO.paa';";
	};
};
/*class Manticore_FlagCarrier_BLUE_RED : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_Red_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLUE_GREEN : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue-Green)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_Green_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLUE_YELLOW : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_Yellow_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLUE_WHITE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue-White)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_White_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLUE_BLACK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Blue-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Blue_Black_CO.paa';";
	};
};	*/

//Flagcarrier RED

class Manticore_FlagCarrier_RED : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_CO.paa';";
	};
};
/*class Manticore_FlagCarrier_RED_BLUE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red-Blue)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_Blue_CO.paa';";
	};
};
class Manticore_FlagCarrier_RED_GREEN : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red-Green)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_Green_CO.paa';";
	};
};
class Manticore_FlagCarrier_RED_YELLOW : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red-Yellow)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_Yellow_CO.paa';";
	};
};
class Manticore_FlagCarrier_RED_WHITE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red-White)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_White_CO.paa';";
	};
};
class Manticore_FlagCarrier_RED_BLACK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Red-Black)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Red_Black_CO.paa';";
	};
};	*/


//Flagcarrier GREEN

class Manticore_FlagCarrier_GREEN : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_CO.paa';";
	};
};
/*class Manticore_FlagCarrier_GREEN_RED : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_Red_CO.paa';";
	};
};
class Manticore_FlagCarrier_GREEN_BLUE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green-Blue)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_Blue_CO.paa';";
	};
};
class Manticore_FlagCarrier_GREEN_YELLOW : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green-Yellow)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_Yellow_CO.paa';";
	};
};
class Manticore_FlagCarrier_GREEN_WHITE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green-White)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_White_CO.paa';";
	};
};
class Manticore_FlagCarrier_GREEN_BLACK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Green-Black)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Green_Black_CO.paa';";
	};
};	*/

//Flagcarrier YELLOW

class Manticore_FlagCarrier_YELLOW : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yellow)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_CO.paa';";
	};
};
/*class Manticore_FlagCarrier_YELLOW_RED : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yellow-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_Red_CO.paa';";
	};
};
class Manticore_FlagCarrier_YELLOW_BLUE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yellow-Blue)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_Blue_CO.paa';";
	};
};
class Manticore_FlagCarrier_YELLOW_GREEN : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yellow-Green)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_Green_CO.paa';";
	};
};
class Manticore_FlagCarrier_YELLOW_WHITE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yelllow-White)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_White_CO.paa';";
	};
};
class Manticore_FlagCarrier_YELLOW_BLACK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Yellow-Black)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Yellow_Black_CO.paa';";
	};
};	*/

//Flagcarrier BLACK

class Manticore_FlagCarrier_BLACK : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_CO.paa';";
	};
};
/*class Manticore_FlagCarrier_BLACK_RED : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black-Red)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_Red_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLACK_BLUE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black-Blue)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_Blue_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLACK_YELLOW : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black-Yellow)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_Yellow_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLACK_WHITE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black-White)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_White_CO.paa';";
	};
};
class Manticore_FlagCarrier_BLACK_GREEN : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Black-Green)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Black_Green_CO.paa';";
	};
};	*/

//Flagcarrier SINGLE COLOR

class Manticore_FlagCarrier_ORANGE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Orange)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Orange_CO.paa';";
	};
};
class Manticore_FlagCarrier_PURPLE : Manticore_FlagCarrier_WHITE
{
	author = "Mattress";
	displayName = "Flagcarrier Color (Purple)";
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture '\Manticore_Flags_Markers\data\flagCarrier\Flag_Flagcarrier_Purple_CO.paa';";
	};
};



