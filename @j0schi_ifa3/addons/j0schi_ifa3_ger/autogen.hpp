//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 218.152405 on Stable branch
// Generated with ALiVE version 2.1.6.2410071
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class B_j0schiifa3ger_fraction {
        displayName = "joschi";
        side = 1;
        flag = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\Germany_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class WEST {

        class B_j0schiifa3ger_fraction {
            name = "joschi";

            class Infantry {
                name = "Infantry";

                class b_bj0schiifa3gerfraction_infantry_assault_squad {
                    name = "assault_squad";
                    side = 1;
                    faction = "B_j0schiifa3ger_fraction";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa3_gunner_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa3_pt_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa3_sniper_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa3_assault_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "B_Bj0schiifa3gerfraction_joschi_ger_ifa3_assault_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class LIB_GER_medic;
    class LIB_GER_medic_OCimport_01 : LIB_GER_medic { scope = 0; class EventHandlers; };
    class LIB_GER_medic_OCimport_02 : LIB_GER_medic_OCimport_01 { class EventHandlers; };


    class B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01 : LIB_GER_medic_OCimport_02 {
        author = "j0sch";
        scope = 2;
        scopeCurator = 2;
        displayName = "joschi_ger_ifa_medic";
        side = 1;
        faction = "B_j0schiifa3ger_fraction";

        identityTypes[] = {"Head_Euro","Language_LIB_GER","LIB_Glasses"};

        uniformClass = "U_LIB_GER_MG_schutze";

        linkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};

        weapons[] = {"LIB_MP44","WBK_Katana","LIB_Binocular_GER"};
        respawnWeapons[] = {"LIB_MP44","WBK_Katana","LIB_Binocular_GER"};

        magazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33"};
        respawnMagazines[] = {"LIB_30Rnd_792x33","LIB_30Rnd_792x33"};

        backpack = "B_LIB_GER_Tonister34_cowhide";

        ALiVE_orbatCreator_loadout[] = {{"LIB_MP44","","","",{"LIB_30Rnd_792x33",30},{},""},{},{"WBK_Katana","","","",{},{},""},{"U_LIB_GER_MG_schutze",{{"LIB_ACC_K98_Bayo",1},{"PiR_bint",1},{"LIB_30Rnd_792x33",1,30}}},{"V_LIB_WP_OfficerVest",{{"PiR_bint",7},{"LIB_30Rnd_792x33",2,30}}},{"B_LIB_GER_Tonister34_cowhide",{{"PiR_bint",5},{"PiR_apteka",1},{"LIB_30Rnd_792x33",3,30}}},"H_LIB_GER_Helmet_Glasses","CUP_RUS_Balaclava_blk",{"LIB_Binocular_GER","","","",{},{},""},{"ItemMap","","","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Bj0schiifa3gerfraction_joschi_ger_ifa3_gunner_01 : B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01 {
        author = "j0sch";
        scope = 2;
        scopeCurator = 2;
        displayName = "joschi_ger_ifa3_gunner";
        side = 1;
        faction = "B_j0schiifa3ger_fraction";

        identityTypes[] = {"Head_Euro","Language_LIB_GER","LIB_Glasses"};

        uniformClass = "U_LIB_GER_MG_schutze";

        linkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};

        weapons[] = {"LIB_MG42","WBK_survival_weapon_4","LIB_Binocular_GER"};
        respawnWeapons[] = {"LIB_MG42","WBK_survival_weapon_4","LIB_Binocular_GER"};

        magazines[] = {"LIB_50Rnd_792x57","LIB_50Rnd_792x57"};
        respawnMagazines[] = {"LIB_50Rnd_792x57","LIB_50Rnd_792x57"};

        backpack = "B_LIB_GER_Tonister34_cowhide";

        ALiVE_orbatCreator_loadout[] = {{"LIB_MG42","","","",{"LIB_50Rnd_792x57",50},{},""},{},{"WBK_survival_weapon_4","","","",{},{},""},{"U_LIB_GER_MG_schutze",{{"LIB_ACC_K98_Bayo",1},{"PiR_bint",3}}},{"V_LIB_WP_OfficerVest",{{"PiR_bint",3},{"LIB_50Rnd_792x57",2,50}}},{"B_LIB_GER_Tonister34_cowhide",{{"PiR_bint",5},{"PiR_apteka",1},{"LIB_50Rnd_792x57",2,50}}},"H_LIB_GER_Helmet_Glasses","CUP_RUS_Balaclava_blk",{"LIB_Binocular_GER","","","",{},{},""},{"ItemMap","","","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Bj0schiifa3gerfraction_joschi_ger_ifa3_pt_01 : B_Bj0schiifa3gerfraction_joschi_ger_ifa3_gunner_01 {
        author = "j0sch";
        scope = 2;
        scopeCurator = 2;
        displayName = "joschi_ger_ifa3_pt";
        side = 1;
        faction = "B_j0schiifa3ger_fraction";

        identityTypes[] = {"Head_Euro","Language_LIB_GER","LIB_Glasses"};

        uniformClass = "U_LIB_GER_MG_schutze";

        linkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};

        weapons[] = {"LIB_MP40","LIB_RPzB","Shovel_Russian_Rotated","LIB_Binocular_GER"};
        respawnWeapons[] = {"LIB_MP40","LIB_RPzB","Shovel_Russian_Rotated","LIB_Binocular_GER"};

        magazines[] = {"LIB_32Rnd_9x19","LIB_1Rnd_RPzB","LIB_32Rnd_9x19"};
        respawnMagazines[] = {"LIB_32Rnd_9x19","LIB_1Rnd_RPzB","LIB_32Rnd_9x19"};

        backpack = "B_LIB_GER_Tonister34_cowhide";

        ALiVE_orbatCreator_loadout[] = {{"LIB_MP40","","","",{"LIB_32Rnd_9x19",32},{},""},{"LIB_RPzB","","","",{"LIB_1Rnd_RPzB",1},{},""},{"Shovel_Russian_Rotated","","","",{},{},""},{"U_LIB_GER_MG_schutze",{{"LIB_ACC_K98_Bayo",1},{"PiR_bint",3}}},{"V_LIB_WP_OfficerVest",{{"PiR_bint",3},{"LIB_32Rnd_9x19",6,32}}},{"B_LIB_GER_Tonister34_cowhide",{{"LIB_1Rnd_RPzB",1,1},{"LIB_32Rnd_9x19",7,32}}},"H_LIB_GER_Helmet_Glasses","CUP_RUS_Balaclava_blk",{"LIB_Binocular_GER","","","",{},{},""},{"ItemMap","","","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Bj0schiifa3gerfraction_joschi_ger_ifa3_sniper_01 : B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01 {
        author = "j0sch";
        scope = 2;
        scopeCurator = 2;
        displayName = "joschi_ger_ifa3_sniper";
        side = 1;
        faction = "B_j0schiifa3ger_fraction";

        identityTypes[] = {"Head_Euro","Language_LIB_GER","LIB_Glasses"};

        uniformClass = "U_LIB_GER_MG_schutze";

        linkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};

        weapons[] = {"LIB_K98ZF39","Shovel_Russian","LIB_Binocular_GER"};
        respawnWeapons[] = {"LIB_K98ZF39","Shovel_Russian","LIB_Binocular_GER"};

        magazines[] = {"LIB_5Rnd_792x57","LIB_5Rnd_792x57"};
        respawnMagazines[] = {"LIB_5Rnd_792x57","LIB_5Rnd_792x57"};

        backpack = "B_LIB_GER_Tonister34_cowhide";

        ALiVE_orbatCreator_loadout[] = {{"LIB_K98ZF39","","","",{"LIB_5Rnd_792x57",5},{},""},{},{"Shovel_Russian","","","",{},{},""},{"U_LIB_GER_MG_schutze",{{"LIB_ACC_K98_Bayo",1},{"PiR_bint",2},{"LIB_5Rnd_792x57",3,5}}},{"V_LIB_WP_OfficerVest",{{"PiR_bint",7},{"LIB_5Rnd_792x57",9,5}}},{"B_LIB_GER_Tonister34_cowhide",{{"PiR_bint",9},{"PiR_apteka",1},{"LIB_5Rnd_792x57",3,5}}},"H_LIB_GER_Helmet_Glasses","CUP_RUS_Balaclava_blk",{"LIB_Binocular_GER","","","",{},{},""},{"ItemMap","","","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_Bj0schiifa3gerfraction_joschi_ger_ifa3_assault_01 : B_Bj0schiifa3gerfraction_joschi_ger_ifa_medic_01 {
        author = "j0sch";
        scope = 2;
        scopeCurator = 2;
        displayName = "joschi_ger_ifa3_assault";
        side = 1;
        faction = "B_j0schiifa3ger_fraction";

        identityTypes[] = {"Head_Euro","Language_LIB_GER","LIB_Glasses"};

        uniformClass = "U_LIB_GER_MG_schutze";

        linkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};
        respawnlinkedItems[] = {"V_LIB_WP_OfficerVest","H_LIB_GER_Helmet_Glasses","ItemMap","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch"};

        weapons[] = {"LIB_MP40","Axe","LIB_Binocular_GER"};
        respawnWeapons[] = {"LIB_MP40","Axe","LIB_Binocular_GER"};

        magazines[] = {"LIB_32Rnd_9x19","LIB_32Rnd_9x19"};
        respawnMagazines[] = {"LIB_32Rnd_9x19","LIB_32Rnd_9x19"};

        backpack = "B_LIB_GER_Tonister34_cowhide";

        ALiVE_orbatCreator_loadout[] = {{"LIB_MP40","","","",{"LIB_32Rnd_9x19",32},{},""},{},{"Axe","","","",{},{},""},{"U_LIB_GER_MG_schutze",{{"LIB_ACC_K98_Bayo",1},{"PiR_bint",1},{"LIB_32Rnd_9x19",2,32}}},{"V_LIB_WP_OfficerVest",{{"PiR_bint",7},{"LIB_32Rnd_9x19",2,32}}},{"B_LIB_GER_Tonister34_cowhide",{{"PiR_bint",5},{"PiR_apteka",1},{"LIB_32Rnd_9x19",4,32}}},"H_LIB_GER_Helmet_Glasses","CUP_RUS_Balaclava_blk",{"LIB_Binocular_GER","","","",{},{},""},{"ItemMap","","","LIB_GER_ItemCompass_deg","LIB_GER_ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};