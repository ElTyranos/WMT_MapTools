class ArgumentsBaseUnits;
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
//=======================================================================================
//									MAIN MODULE
//=======================================================================================
	class WMT_Main: Module_F
	{
		scope = 2;
		author = "Ezhuk";
		displayName = "Main";
		category = "WMT";
		function = "WMT_fnc_initModuleMain";
		icon = "\WMT_main\pic\main.paa"
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class MaxViewDistance 
			{
				displayName = "$STR_WMT_ViewDistance";
				description = "$STR_WMT_ViewDistance_Desc";
				typeName = "NUMBER";
				defaultValue = 2500;
			};
			class TI 
			{
				displayName = "$STR_WMT_TI";
				description = "";
				typeName = "NUMBER";
				class values
				{
					class Enable		{name = "$STR_WMT_TI_Enable"; value = 0; default = 1;};
					class DisableInVehs	{name = "$STR_WMT_TI_DisableInVehicle"; value = 1;};
					class Disable 		{name = "$STR_WMT_TI_Disable"; value = 2;};
				};
			};
			class NameTag
			{
				displayName = "$STR_WMT_NameTag";
				description = "";
				typeName = "BOOL";
				defaultValue = true;
			};
		};
	};
//=======================================================================================
//									TIME MODULE
//=======================================================================================
	class WMT_Time: Module_F
	{
		scope = 2;
		author = "Ezhuk";
		displayName = "Time";
		category = "WMT";
		function = "WMT_fnc_initModuleTime";
		icon = "\WMT_main\pic\time.paa"
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		class Arguments: ArgumentsBaseUnits
		{
			class MissionTime
  			{
				displayName = "$STR_WMT_MissionTime";
				typeName = "NUMBER"; 
				defaultValue = 60;
			};
			class WinnerByTime
  			{
				displayName = "$STR_WMT_WinnerSide";
				description = "$STR_WMT_WinnerSide_Desc";
				typeName = "NUMBER";
				class values
				{
					class Empty	{name = "$STR_WMT_Nobody"; value = 0; default = 1;};
					class West	{name = "$STR_WMT_West"; value = 1;};
					class East 	{name = "$STR_WMT_East"; value = 2;};
					class Guer 	{name = "$STR_WMT_Resistance"; value = 3;};
					class Civ 	{name = "$STR_WMT_Civilian"; value = 4;};
				};
			};
			class WinnerByTimeText 
			{
				displayName = "$STR_WMT_Message";
				description = "$STR_WMT_Message_Desc";
				typeName = "STRING";
				defaultValue = "End time";
			};
			class PrepareTime 
			{
				displayName = "$STR_WMT_PrepareTime";
				description = "";
				typeName = "NUMBER";
				defaultValue = 3;
			};
			class StartZone 
			{
				displayName = "$STR_WMT_StartZone";
				description = "";
				typeName = "NUMBER";
				defaultValue = 100;
			};
			class RemoveBots
			{
				displayName = "$STR_WMT_RemoveBots";
				description = "";
				typeName = "NUMBER";
				defaultValue = 0;
			};
		};
	};
};