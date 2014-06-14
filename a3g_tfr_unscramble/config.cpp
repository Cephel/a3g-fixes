class CfgPatches {
    class a3g_tfr_unscramble {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "Extended_EventHandlers", "task_force_radio" };
        author[] = { "Cephei" };
    };
};

class Extended_PostInit_EventHandlers {
    class a3g_tfr_unscramble {
        init = "if(isServer) then { tf_same_sw_frequencies_for_side = true; publicVariable 'tf_same_sw_frequencies_for_side' }";
    };
};
