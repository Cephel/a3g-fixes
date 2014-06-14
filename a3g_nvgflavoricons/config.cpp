class CfgPatches {
	class a3g_nvgflavoricons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "A3_Data_F", "A3_Weapons_F", "A3_Weapons_F_EPA_Acc" };
		author[]= { "akp", "Cephei" };
	};
};

class CfgWeapons {
	class NVGoggles;
	class NVGoggles_OPFOR: NVGoggles {
		picture="\a3g_nvgflavoricons\gear_nvg_opf_CA.paa";
	};
	class NVGoggles_INDEP: NVGoggles {
		picture="\a3g_nvgflavoricons\gear_nvg_indp_CA.paa";
	};
};
