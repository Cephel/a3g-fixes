class CfgPatches {
  class a3g_tfr_unscramble {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.60;
    requiredAddons[] = {Extended_EventHandlers, task_force_radio};
    version = "0.9";
    versionStr = "0.9";
    versionAr[] = {0,9,0};
    author[] = {"Cephei"};
    authorUrl = "https://github.com/Cephel";
  };
};

class Extended_PostInit_EventHandlers {
  class a3g_tfr_unscramble {
    init = "tf_same_sw_frequencies_for_side = true; publicVariable 'tf_same_sw_frequencies_for_side'";
  };
};