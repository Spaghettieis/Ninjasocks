class CfgPatches
{
	class NinjaSocks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class NinjaSocks
	{
		dir = "NinjaSocks";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NinjaSocks";
		credits = "Spaghettieis";
		author = "Spaghettieis";
		authorID = "76561199363100280";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"NinjaSocks/Scripts/4_World"
				};
			};
		};
	};
};