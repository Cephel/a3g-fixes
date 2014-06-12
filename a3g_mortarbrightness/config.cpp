class CfgPatches {
	class a3g_mortarbrightness {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Weapons_F_EPA_Acc"
		};
		author[]=
		{
			"akp", "Cephei"
		};
	};
};
class CfgAmmo {
	class FlareCore;
	class Flare_82mm_AMOS_White : FlareCore {
		brightness = 24;
	};
};