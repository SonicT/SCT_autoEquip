class CfgPatches
{
	class SCT_VEST_EQUIP{
		author="SonicT";
		name="Give units plate";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3Data",
			"A3_Characters_F",
			"A3_Data_F_Patrol",
			"A3_Characters_F_Patrol",
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_Data_F_Exp",
			"A3_Characters_F_Exp",
			"SonicT_Items"
		};
		requiredVersion=1.550000;
		units[]={};
		weapons[]={};
	};
};

class SCT_equipvest_base {
	init = "[_this select 0]execVM '\SCT\addons\SonicT_vestEquip\scripts\autoequipcheck.sqf';";
};

class DefaultEventHandlers{
	class SCT_equipvest : SCT_equipvest_base{};
};


//Now define equipping these lads
class CfgVehicles
{
	class Land;
	class Man;
	class CAManBase: Man
	{
		class EventHandlers{
			class SCT_equipvest : SCT_equipvest_base{};
		};
	};
	class Civilian;
	class Civilian_F;
	class SoldierEB;
	class SoldierWB;
	class SoldierGB;
	class VirtualMan_F;
	class HeadlessClient_F;
	class ContainerSupply;

	class B_Soldier_base_F: SoldierWB
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};

	};
	class B_Soldier_02_f; //extern. no item changes
	class B_Soldier_03_f; // extern. no item changes
	class B_Soldier_04_f; // extern. no item changes
	class B_Soldier_05_f; // extern. no item changes
	class B_RangeMaster_F; // extern. he has no armor plate.
	class B_Soldier_lite_F;
	class B_soldier_AR_F: B_Soldier_02_f
	{
		weapons[]=
		{
			"arifle_MX_SW_pointer_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MX_SW_pointer_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};

		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_medic_F: B_Soldier_02_f
	{
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",

			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",

			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};

		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"Chemlight_green",
			"Chemlight_green"
		};

	};
	class B_soldier_exp_F: B_Soldier_base_F
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",

			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",

			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};

		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
		
	};
	class B_Helipilot_F; //helipilots don't have plate carriers.
	class B_Soldier_A_F: B_Soldier_base_F
	{
		
		weapons[]=
		{
			"arifle_MX_ACO_pointer_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MX_ACO_pointer_F",
			"Throw",
			"Put"
		};

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		Items[]=
		{
			"FirstAidKit"
		};


		RespawnItems[]=
		{
			"FirstAidKit"
		};
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Titan_AT",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Titan_AT",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Titan_AA",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"Titan_AA",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_engineer_F; //extern. this engineer guy wears chestrig.
	class B_crew_F; // extern. crew does not have vest
	class B_Competitor_F; // extern. as default
	class B_helicrew_F;
	class B_soldier_PG_F: B_Soldier_base_F
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	class B_soldier_UAV_F: B_Soldier_base_F
	{

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};

	};
	class B_Soldier_universal_F;
	class B_Soldier_F;
	class B_Survivor_F;
	class B_Soldier_unarmed_F; // unarmed guys wear plate carriers, but they are not ready to fight.
	class B_Soldier_diver_base_F;
	class B_diver_F;
	class B_diver_TL_F;
	class B_diver_exp_F;
	class B_Soldier_recon_base;
	class B_recon_F: B_Soldier_recon_base //these guys now will rig plate carriers.
	{
	
		weapons[]=
		{
			"arifle_MX_ACO_pointer_snds_F",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_MX_ACO_pointer_snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};

	};
	class B_recon_LAT_F; //pcml guys will not have armors
	class B_recon_exp_F: B_Soldier_recon_base //this guy also have no armor. reducing ammo
	{
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class B_recon_medic_F: B_Soldier_recon_base //medic needs armor
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
				
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
		
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
	};
	class B_recon_M_F;
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
	};
	class B_Soldier_sniper_base_F;
	class B_spotter_F;
	class B_sniper_F;
	class B_Story_SF_Captain_F: B_Soldier_02_f
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
	};
	class B_Story_Protagonist_F: B_Soldier_02_f
	{

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
	};
	class B_Story_Engineer_F;
	class B_Story_Colonel_F;
	class B_Story_Pilot_F;
	class B_Story_Tank_Commander_F;
	class b_soldier_survival_F; // you know, esapi should not go underwater.
	class B_CTRG_soldier_GL_LAT_F: B_Soldier_base_F
	{
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"HandGrenade",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"NLAW_F",
			"HandGrenade",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell"
		};

		linkedItems[]=
		{
			"V_PlateCarrierH_CTRG",
			"H_HelmetB_light_snakeskin",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierH_CTRG",
			"H_HelmetB_light_snakeskin",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};

	};
	class B_CTRG_soldier_engineer_exp_F: B_Soldier_02_f
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",

			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};


	};
	class B_CTRG_soldier_M_medic_F: B_Soldier_03_f
	{

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};


	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_03_f
	{
		weapons[]=
		{
			"arifle_MX_SW_Black_Hamr_pointer_F",

			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MX_SW_Black_Hamr_pointer_F",

			"Throw",
			"Put"
		};
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",

			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",

			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	
	};
	class B_Soldier_support_base_F;
	class B_soldier_AAR_F;
	class B_soldier_AAT_F;
	class B_soldier_AAA_F;
	class B_support_MG_F;
	class B_support_GMG_F;
	class B_support_Mort_F;
	class B_support_AMG_F;
	class B_support_AMort_F;
	
	
//greenback guys
	class I_G_Soldier_base_F; //chestrig
	
	class I_G_Soldier_F;
	class I_G_Soldier_lite_F;
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		linkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_Watchcap_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
				
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};

	};
	class I_G_Soldier_TL_F;
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{

		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Bandanna_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Bandanna_khk",
			"DefaultManGuerillaLinkedItems"
		};

	};
	class I_G_medic_F: I_G_Soldier_base_F
	{

		linkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_blk_POLICE",
			"H_Cap_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};

	};
	class I_G_engineer_F;
	class I_G_Soldier_exp_F;
	class I_G_Soldier_M_F;
	class I_G_Soldier_LAT_F;
	class I_G_Soldier_A_F;
	class I_G_officer_F: I_G_Soldier_base_F
	{
		
		linkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_Watchcap_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_Watchcap_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class I_G_Story_Protagonist_F;
	class B_G_Soldier_F;
	class I_G_Story_SF_Captain_F: B_G_Soldier_F
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		linkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};

	};
	class I_G_resistanceLeader_F;
	class I_G_resistanceCommander_F;
	
	
		
	//now real greenback regulars
	class I_Soldier_base_F: SoldierGB
	{
		weapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		linkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_HelmetIA",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_HelmetIA",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
	};
	class I_Soldier_02_F;
	class I_Soldier_03_F;
	class I_Soldier_04_F;
	class I_soldier_F;
	class I_Soldier_lite_F;

	class I_Soldier_A_F: I_Soldier_02_F
	{

		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		
		linkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_HelmetIA_net",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA1_dgtl",
			"H_HelmetIA_net",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		weapons[]=
		{
			"arifle_Mk20_GL_ACO_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_GL_ACO_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",

			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",

			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell"
		};
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		
		linkedItems[]=
		{
			"V_PlateCarrierIAGL_dgtl",
			"H_HelmetIA_net",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIAGL_dgtl",
			"H_HelmetIA_net",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP",
		};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{

		weapons[]=
		{
			"LMG_Mk200_LP_BI_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"LMG_Mk200_LP_BI_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		
		linkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
		};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{

		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"I_IR_Grenade",
			"I_IR_Grenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"I_IR_Grenade",
			"I_IR_Grenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		linkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"
			
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles_INDEP"

		};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{

		weapons[]=
		{
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_GL_MRCO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",

			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",

			"MiniGrenade",
			"MiniGrenade",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{

		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		weapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"launch_NLAW_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"launch_NLAW_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"NLAW_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"NLAW_F",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};

	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{

		weapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"launch_I_Titan_short_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"launch_I_Titan_short_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"Titan_AT",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"Titan_AT",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		weapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"launch_I_Titan_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"launch_I_Titan_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"Titan_AA",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"Titan_AA",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_medic_F: I_Soldier_02_F
	{

		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		weapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		weapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	
	};
	class I_engineer_F: I_Soldier_base_F
	{
		weapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20C_ACO_pointer_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",

			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"Chemlight_green",
			"Chemlight_green"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
	};
	class I_crew_F;
	class I_helipilot_F;
	class I_pilot_F;
	class I_helicrew_F;
	class I_officer_F: I_Soldier_base_F
	{
	
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};
		
		linkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_MilCap_dgtl",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
			
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_MilCap_dgtl",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
			
		};
	};
	class I_Story_Colonel_F;
	class I_soldier_UAV_F: I_Soldier_base_F
	{

		linkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"I_UavTerminal",
			"NVGoggles_INDEP"
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierIA2_dgtl",
			"H_HelmetIA_camo",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"I_UavTerminal",
			"NVGoggles_INDEP"
			
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_steel_ar5001", "Vest"};
		};

	};
	class I_Soldier_universal_F;
	class I_Survivor_F;
	class I_Soldier_unarmed_F;
	class I_Soldier_diver_base_F;
	class I_diver_F;
	class I_diver_exp_F;
	class I_diver_TL_F;
	class I_Soldier_sniper_base_F;
	class I_Spotter_F;
	class I_Sniper_F;
	class I_Soldier_support_base_F;
	class I_Soldier_AAR_F;
	class I_Soldier_AAT_F;
	class I_Soldier_AAA_F;
	class I_support_MG_F;
	class I_support_GMG_F;
	class I_support_Mort_F;
	class I_support_AMG_F;
	class I_support_AMort_F;

//marksman dlc
	
	class B_Sharpshooter_F: B_Soldier_base_F
	{

		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"HandGrenade",
			"HandGrenade"
		};
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
		
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
	};
	class B_Recon_Sharpshooter_F; //chestrig
	class B_CTRG_Sharphooter_F: B_Soldier_base_F
	{
	
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
		linkedItems[]=
		{
			"V_PlateCarrierL_CTRG",
			"H_HelmetB_light_snakeskin",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrierL_CTRG",
			"H_HelmetB_light_snakeskin",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
	};
	class B_HeavyGunner_F: B_Soldier_base_F
	{
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
		
		respawnWeapons[]=
		{
			"MMG_02_sand_RCO_LP_F",
			"hgun_P07_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"130Rnd_338_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
		respawnLinkedItems[]=
		{
			"V_PlateCarrier1_rgr",
			"H_HelmetB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
			
		};
	};

	class I_G_Sharpshooter_F;
	class B_G_Sharpshooter_F;
	class O_G_Sharpshooter_F;
	class Item_Base_F;
	class Weapon_Base_F;
//Long enough shit... Now Weapon Crates!
	class NATO_Box_Base;
	class ReammoBox_F;
	class Box_NATO_Support_F: NATO_Box_Base
	{
		
		maximumLoad = 1800;
		class TransportItems
		{

			class _xx_NVGogglesB_gry_F
			{
				name = "NVGogglesB_gry_F";
				count = 2;
			};
			class _xx_SCT_plate_ceramic_esapi{
				name = "SCT_plate_ceramic_esapi";
				count = 6;
			};
			class _xx_SCT_plate_poly_DFNDR{
				name = "SCT_plate_poly_DFNDR";
				count = 2;
			};
		};

	};

	class B_supplyCrate_F: ReammoBox_F
	{
		maximumLoad = 4250;

		class TransportItems
		{
			class _xx_SCT_plate_ceramic_esapi{
				name = "SCT_plate_ceramic_esapi";
				count = 6;
			};
			class _xx_SCT_plate_poly_DFNDR{
				name = "SCT_plate_poly_DFNDR";
				count = 2;
			};
		};

	};
	//greenback boxes
	class IND_Box_Base;
	class IG_supplyCrate_F: ReammoBox_F{
		maximumLoad = 4300;
		class TransportItems
		{
			class _xx_SCT_plate_steel_ar5001{
				name = "SCT_plate_steel_ar5001";
				count = 6;
			};

		};
	};
	class C_supplyCrate_F: ReammoBox_F{ //No green. CTRG
		maximumLoad = 4300;
		class TransportItems
		{
			class _xx_SCT_plate_ceramic_esapi{
				name = "SCT_plate_ceramic_esapi";
				count = 4;
			};
			class _xx_SCT_plate_poly_DFNDR{
				name = "SCT_plate_poly_DFNDR";
				count = 6;
			};
		};

	};
	
	class I_supplyCrate_F: B_supplyCrate_F{
		maximumLoad = 4300;
		class TransportItems
		{
			class _xx_SCT_plate_steel_ar5001{
				name = "SCT_plate_steel_ar5001";
				count = 8;
			};

		};
	
	};
	
	//Blufor patrol operations : a3\A3_Characters_F_Patrol
	
	class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
	{

		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};
	
	class B_Patrol_Soldier_M_F: B_soldier_M_F
	{
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};

	class B_Patrol_Medic_F: B_medic_F
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
	};

	class B_Patrol_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[]=
		{
			"B_Patrol_Soldier_Autorifleman_weapon_F",
			"B_Patrol_Soldier_Pistol_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"B_Patrol_Soldier_Autorifleman_weapon_F",
			"B_Patrol_Soldier_Pistol_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};
	
		class B_Patrol_Soldier_MG_F: B_soldier_AR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Patrol_Soldier_MG_F.jpg";
		_generalMacro="B_Patrol_Soldier_MG_F";
		displayName="$STR_A3_CfgVehicles_B_Patrol_Soldier_MG_F0";
		editorSubcategory="EdSubcat_Personnel_CombatPatrol";
		uniformClass="U_B_CombatUniform_mcam_vest";
		backpack="";

		magazines[]=
		{
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
		
	};

	class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
	{

		magazines[]=
		{
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};
	
	class B_Patrol_Soldier_A_F: B_Soldier_A_F
	{

		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};

	class B_Patrol_Soldier_AT_F: B_soldier_AT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_Patrol_Soldier_AT_F.jpg";
		_generalMacro="B_Patrol_Soldier_AT_F";
		editorSubcategory="EdSubcat_Personnel_CombatPatrol";
		uniformClass="U_B_CombatUniform_mcam_vest";
		backpack="B_Patrol_launcher_bag_F";
		weapons[]=
		{
			"B_Patrol_Soldier_Specialist_weapon_F",
			"B_Patrol_Soldier_Pistol_F",
			"launch_B_Titan_short_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"B_Patrol_Soldier_Specialist_weapon_F",
			"B_Patrol_Soldier_Pistol_F",
			"launch_B_Titan_short_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Titan_AP",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"Titan_AP",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};

	};

		class B_Patrol_Engineer_F: B_engineer_F
	{
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
		
	};

	
	
	//Apex NATO units
	
	class B_T_Soldier_A_F: B_Soldier_A_F{
		
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_ceramic_esapi", "Vest"};
		};
	};
	
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_plate_poly_DFNDR", "Vest"};
		};
		
		linkedItems[]=
		{
			"H_HelmetB_TI_tna_F",
			"V_PlateCarrierL_CTRG",
			"G_Balaclava_TI_G_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGogglesB_grn_F"
		};
		respawnLinkedItems[]=
		{
			"H_HelmetB_TI_tna_F",
			"V_PlateCarrierL_CTRG",
			"G_Balaclava_TI_G_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGogglesB_grn_F"
		};

	};

	//CSAT Units : Item added thanks to V.Berlioz
	class O_Soldier_base_F: SoldierEB{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_uniform_kevlarinsert1", "Uniform"};
		};
	
	};
	
	class O_Soldier_lite_F: O_Soldier_base_F{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {};
		};
	};

	class O_Story_Colonel_F: O_Soldier_base_F{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {};
		};
	};
	
	class O_officer_F: O_Soldier_base_F{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {};
		};
	};
	
	// Apex DLC
	class O_V_Soldier_Viper_F: O_Soldier_base_F{
		class SCT_Soldier_DefaultPlate{
			defaultset[] = {"SCT_uniform_kevlarinsert1", "Uniform"};
		};
	};
	
};
