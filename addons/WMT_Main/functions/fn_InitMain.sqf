/*
 	Name: WMT_fnc_InitMain
 	
 	Author(s):
		Ezhuk

 	Description:
		Initialize general variables 
*/

if(!isDedicated) then {
	waitUntil{player==player};
	waitUntil{alive player};
	waitUntil{local player};
			
	[] call WMT_fnc_HideSideMarkers;

	if(isNil "WMT_Local_PlayerName") then {
		WMT_Local_PlayerName = name player;
		player setVariable ["WMT_PlayerName",WMT_Local_PlayerName,true];
	};

	if(isNil "WMT_Local_PlayerSide") then {
		WMT_Local_PlayerSide = side player;
		player setVariable ["WMT_PlayerSide",WMT_Local_PlayerSide,true];
	};

};