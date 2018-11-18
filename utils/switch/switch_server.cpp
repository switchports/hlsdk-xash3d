#include "switch_defs.h"
#include "extdll.h"
#include "util.h"
#include "cbase.h"

extern "C"
{

void GiveFnptrsToDll( enginefuncs_t *pengfuncsFromEngine, globalvars_t *pGlobals );
int GetEntityAPI( DLL_FUNCTIONS *pFunctionTable, int interfaceVersion );
int GetEntityAPI2( DLL_FUNCTIONS *pFunctionTable, int *interfaceVersion );
int Server_GetPhysicsInterface( int iVersion, server_physics_api_t *pfuncsFromEngine, physics_interface_t *pFunctionTable );

// Autogenerated functions
void env_shake( entvars_t *pev );
void game_text( entvars_t *pev );
void func_door_rotating( entvars_t *pev );
void ammo_9mmbox( entvars_t *pev );
void game_end( entvars_t *pev );
void env_bubbles( entvars_t *pev );
void target_cdaudio( entvars_t *pev );
void trigger_hurt( entvars_t *pev );
void trigger_changelevel( entvars_t *pev );
void weapon_tripmine( entvars_t *pev );
void cine_blood( entvars_t *pev );
void env_debris( entvars_t *pev );
void func_trackautochange( entvars_t *pev );
void func_tankrocket( entvars_t *pev );
void node_viewer_human( entvars_t *pev );
void item_sodacan( entvars_t *pev );
void monster_barney( entvars_t *pev );
void monster_cine_panther( entvars_t *pev );
void env_beverage( entvars_t *pev );
void worldspawn( entvars_t *pev );
void monster_miniturret( entvars_t *pev );
void trigger( entvars_t *pev );
void ammo_gaussclip( entvars_t *pev );
void cycler_prdroid( entvars_t *pev );
void xen_hull( entvars_t *pev );
void monster_babycrab( entvars_t *pev );
void item_longjump( entvars_t *pev );
void game_counter_set( entvars_t *pev );
void monster_cockroach( entvars_t *pev );
void monster_sitting_scientist( entvars_t *pev );
void env_blood( entvars_t *pev );
void env_lightning( entvars_t *pev );
void trigger_push( entvars_t *pev );
void monster_furniture( entvars_t *pev );
void func_plat( entvars_t *pev );
void speaker( entvars_t *pev );
void weapon_9mmhandgun( entvars_t *pev );
void weapon_egon( entvars_t *pev );
void multi_manager( entvars_t *pev );
void env_beam( entvars_t *pev );
void streak_spiral( entvars_t *pev );
void item_healthkit( entvars_t *pev );
void xen_plantlight( entvars_t *pev );
void info_teleport_destination( entvars_t *pev );
void weapon_gauss( entvars_t *pev );
void item_antidote( entvars_t *pev );
void func_ladder( entvars_t *pev );
void xen_tree( entvars_t *pev );
void trigger_counter( entvars_t *pev );
void monster_cine2_scientist( entvars_t *pev );
void env_funnel( entvars_t *pev );
void weapon_glock( entvars_t *pev );
void infodecal( entvars_t *pev );
void item_battery( entvars_t *pev );
void xen_ttrigger( entvars_t *pev );
void game_score( entvars_t *pev );
void ammo_mp5clip( entvars_t *pev );
void func_platrot( entvars_t *pev );
void monster_cine_scientist( entvars_t *pev );
void env_explosion( entvars_t *pev );
void rpg_rocket( entvars_t *pev );
void env_fade( entvars_t *pev );
void trigger_multiple( entvars_t *pev );
void func_pendulum( entvars_t *pev );
void monstermaker( entvars_t *pev );
void monster_barnacle( entvars_t *pev );
void game_player_team( entvars_t *pev );
void node_viewer_fly( entvars_t *pev );
void info_node_air( entvars_t *pev );
void monster_grunt_repel( entvars_t *pev );
void monster_nihilanth( entvars_t *pev );
void monster_flyer_flock( entvars_t *pev );
void env_spark( entvars_t *pev );
void ambient_generic( entvars_t *pev );
void func_tankcontrols( entvars_t *pev );
void fireanddie( entvars_t *pev );
void func_tankmortar( entvars_t *pev );
void trigger_monsterjump( entvars_t *pev );
void monster_apache( entvars_t *pev );
void monster_mortar( entvars_t *pev );
void trigger_camera( entvars_t *pev );
void weapon_mp5( entvars_t *pev );
void cycler( entvars_t *pev );
void func_recharge( entvars_t *pev );
void ammo_9mmclip( entvars_t *pev );
void monster_hevsuit_dead( entvars_t *pev );
void xen_spore_small( entvars_t *pev );
void garg_stomp( entvars_t *pev );
void game_counter( entvars_t *pev );
void light_environment( entvars_t *pev );
void ammo_rpgclip( entvars_t *pev );
void func_water( entvars_t *pev );
void path_track( entvars_t *pev );
void weapon_hornetgun( entvars_t *pev );
void monster_player( entvars_t *pev );
void info_null( entvars_t *pev );
void grenade( entvars_t *pev );
void weapon_shotgun( entvars_t *pev );
void monster_rosenberg( entvars_t *pev );
void item_helmet( entvars_t *pev );
void spark_shower( entvars_t *pev );
void path_corner( entvars_t *pev );
void monster_flyer( entvars_t *pev );
void env_shooter( entvars_t *pev );
void func_monsterclip( entvars_t *pev );
void DelayedUse( entvars_t *pev );
void button_target( entvars_t *pev );
void env_global( entvars_t *pev );
void scripted_sequence( entvars_t *pev );
void ammo_9mmAR( entvars_t *pev );
void trigger_endsection( entvars_t *pev );
void env_smoker( entvars_t *pev );
void env_laser( entvars_t *pev );
void monster_bullchicken( entvars_t *pev );
void light_spot( entvars_t *pev );
void hornet( entvars_t *pev );
void trigger_transition( entvars_t *pev );
void func_wall_toggle( entvars_t *pev );
void func_traincontrols( entvars_t *pev );
void ammo_mp5grenades( entvars_t *pev );
void trigger_changetarget( entvars_t *pev );
void monster_cine3_barney( entvars_t *pev );
void func_guntarget( entvars_t *pev );
void weapon_snark( entvars_t *pev );
void func_conveyor( entvars_t *pev );
void env_sound( entvars_t *pev );
void monster_headcrab( entvars_t *pev );
void player_loadsaved( entvars_t *pev );
void bmortar( entvars_t *pev );
void xen_spore_medium( entvars_t *pev );
void monster_gargantua( entvars_t *pev );
void func_tracktrain( entvars_t *pev );
void monster_tentaclemaw( entvars_t *pev );
void ammo_ARgrenades( entvars_t *pev );
void monster_barney_dead( entvars_t *pev );
void ammo_crossbow( entvars_t *pev );
void monster_rat( entvars_t *pev );
void ammo_357( entvars_t *pev );
void monster_generic( entvars_t *pev );
void info_target( entvars_t *pev );
void monster_tripmine( entvars_t *pev );
void gibshooter( entvars_t *pev );
void monster_alien_slave( entvars_t *pev );
void monster_vortigaunt( entvars_t *pev );
void info_player_deathmatch( entvars_t *pev );
void monster_cine3_scientist( entvars_t *pev );
void monster_sentry( entvars_t *pev );
void trigger_relay( entvars_t *pev );
void env_render( entvars_t *pev );
void item_armorvest( entvars_t *pev );
void scripted_sentence( entvars_t *pev );
void func_mortar_field( entvars_t *pev );
void weapon_9mmAR( entvars_t *pev );
void func_rotating( entvars_t *pev );
void cycler_weapon( entvars_t *pev );
void info_node( entvars_t *pev );
void weapon_satchel( entvars_t *pev );
void xen_spore_large( entvars_t *pev );
void func_tanklaser( entvars_t *pev );
void hvr_rocket( entvars_t *pev );
void monster_alien_controller( entvars_t *pev );
void game_team_master( entvars_t *pev );
void node_viewer_large( entvars_t *pev );
void monster_cine2_hvyweapons( entvars_t *pev );
void info_bigmomma( entvars_t *pev );
void item_airtank( entvars_t *pev );
void world_items( entvars_t *pev );
void monster_hgrunt_dead( entvars_t *pev );
void item_suit( entvars_t *pev );
void info_landmark( entvars_t *pev );
void crossbow_bolt( entvars_t *pev );
void game_team_set( entvars_t *pev );
void cycler_sprite( entvars_t *pev );
void func_tank( entvars_t *pev );
void laser_spot( entvars_t *pev );
void player( entvars_t *pev );
void game_player_equip( entvars_t *pev );
void controller_head_ball( entvars_t *pev );
void item_security( entvars_t *pev );
void func_door( entvars_t *pev );
void ammo_glockclip( entvars_t *pev );
void func_button( entvars_t *pev );
void func_rot_button( entvars_t *pev );
void weapon_rpg( entvars_t *pev );
void monster_scientist_dead( entvars_t *pev );
void multisource( entvars_t *pev );
void weapon_crowbar( entvars_t *pev );
void trigger_once( entvars_t *pev );
void monster_cine_barney( entvars_t *pev );
void squidspit( entvars_t *pev );
void xen_hair( entvars_t *pev );
void func_friction( entvars_t *pev );
void monster_zombie( entvars_t *pev );
void monster_turret( entvars_t *pev );
void func_train( entvars_t *pev );
void monster_bigmomma( entvars_t *pev );
void func_trackchange( entvars_t *pev );
void env_glow( entvars_t *pev );
void monster_houndeye( entvars_t *pev );
void trigger_gravity( entvars_t *pev );
void momentary_rot_button( entvars_t *pev );
void info_intermission( entvars_t *pev );
void trigger_cdaudio( entvars_t *pev );
void monster_gman( entvars_t *pev );
void soundent( entvars_t *pev );
void monster_snark( entvars_t *pev );
void monster_tentacle( entvars_t *pev );
void cycler_wreckage( entvars_t *pev );
void trigger_auto( entvars_t *pev );
void ammo_egonclip( entvars_t *pev );
void weaponbox( entvars_t *pev );
void monster_bloater( entvars_t *pev );
void monster_cine2_slave( entvars_t *pev );
void monster_scientist( entvars_t *pev );
void monster_alien_grunt( entvars_t *pev );
void game_zone_player( entvars_t *pev );
void env_message( entvars_t *pev );
void momentary_door( entvars_t *pev );
void ammo_buckshot( entvars_t *pev );
void trigger_autosave( entvars_t *pev );
void monster_human_grunt( entvars_t *pev );
void trigger_playerfreeze( entvars_t *pev );
void weapon_handgrenade( entvars_t *pev );
void game_player_hurt( entvars_t *pev );
void func_breakable( entvars_t *pev );
void testhull( entvars_t *pev );
void func_wall( entvars_t *pev );
void env_sprite( entvars_t *pev );
void aiscripted_sequence( entvars_t *pev );
void func_illusionary( entvars_t *pev );
void weapon_357( entvars_t *pev );
void bodyque( entvars_t *pev );
void monster_human_assassin( entvars_t *pev );
void light( entvars_t *pev );
void monster_osprey( entvars_t *pev );
void test_effect( entvars_t *pev );
void beam( entvars_t *pev );
void info_player_start( entvars_t *pev );
void env_warpball( entvars_t *pev );
void trigger_teleport( entvars_t *pev );
void weapon_python( entvars_t *pev );
void monster_satchel( entvars_t *pev );
void player_weaponstrip( entvars_t *pev );
void node_viewer( entvars_t *pev );
void monster_leech( entvars_t *pev );
void monster_ichthyosaur( entvars_t *pev );
void weapon_crossbow( entvars_t *pev );
void func_pushable( entvars_t *pev );
void nihilanth_energy_ball( entvars_t *pev );
void func_healthcharger( entvars_t *pev );
void controller_energy_ball( entvars_t *pev );


dllexport_t switch_server_exports[] = {
	{ "GiveFnptrsToDll", (void*)GiveFnptrsToDll },
	{ "GetEntityAPI", (void*)GetEntityAPI },
	{ "GetEntityAPI2", (void*)GetEntityAPI2 },
	{ "Server_GetPhysicsInterface", (void*)Server_GetPhysicsInterface },
	
	// Autogenerated exports
	{ "env_shake", (void*)env_shake },
	{ "game_text", (void*)game_text },
	{ "func_door_rotating", (void*)func_door_rotating },
	{ "ammo_9mmbox", (void*)ammo_9mmbox },
	{ "game_end", (void*)game_end },
	{ "env_bubbles", (void*)env_bubbles },
	{ "target_cdaudio", (void*)target_cdaudio },
	{ "trigger_hurt", (void*)trigger_hurt },
	{ "trigger_changelevel", (void*)trigger_changelevel },
	{ "weapon_tripmine", (void*)weapon_tripmine },
	{ "cine_blood", (void*)cine_blood },
	{ "env_debris", (void*)env_debris },
	{ "func_trackautochange", (void*)func_trackautochange },
	{ "func_tankrocket", (void*)func_tankrocket },
	{ "node_viewer_human", (void*)node_viewer_human },
	{ "item_sodacan", (void*)item_sodacan },
	{ "monster_barney", (void*)monster_barney },
	{ "monster_cine_panther", (void*)monster_cine_panther },
	{ "env_beverage", (void*)env_beverage },
	{ "worldspawn", (void*)worldspawn },
	{ "monster_miniturret", (void*)monster_miniturret },
	{ "trigger", (void*)trigger },
	{ "ammo_gaussclip", (void*)ammo_gaussclip },
	{ "cycler_prdroid", (void*)cycler_prdroid },
	{ "xen_hull", (void*)xen_hull },
	{ "monster_babycrab", (void*)monster_babycrab },
	{ "item_longjump", (void*)item_longjump },
	{ "game_counter_set", (void*)game_counter_set },
	{ "monster_cockroach", (void*)monster_cockroach },
	{ "monster_sitting_scientist", (void*)monster_sitting_scientist },
	{ "env_blood", (void*)env_blood },
	{ "env_lightning", (void*)env_lightning },
	{ "trigger_push", (void*)trigger_push },
	{ "monster_furniture", (void*)monster_furniture },
	{ "func_plat", (void*)func_plat },
	{ "speaker", (void*)speaker },
	{ "weapon_9mmhandgun", (void*)weapon_9mmhandgun },
	{ "weapon_egon", (void*)weapon_egon },
	{ "multi_manager", (void*)multi_manager },
	{ "env_beam", (void*)env_beam },
	{ "streak_spiral", (void*)streak_spiral },
	{ "item_healthkit", (void*)item_healthkit },
	{ "xen_plantlight", (void*)xen_plantlight },
	{ "info_teleport_destination", (void*)info_teleport_destination },
	{ "weapon_gauss", (void*)weapon_gauss },
	{ "item_antidote", (void*)item_antidote },
	{ "func_ladder", (void*)func_ladder },
	{ "xen_tree", (void*)xen_tree },
	{ "trigger_counter", (void*)trigger_counter },
	{ "monster_cine2_scientist", (void*)monster_cine2_scientist },
	{ "env_funnel", (void*)env_funnel },
	{ "weapon_glock", (void*)weapon_glock },
	{ "infodecal", (void*)infodecal },
	{ "item_battery", (void*)item_battery },
	{ "xen_ttrigger", (void*)xen_ttrigger },
	{ "game_score", (void*)game_score },
	{ "ammo_mp5clip", (void*)ammo_mp5clip },
	{ "func_platrot", (void*)func_platrot },
	{ "monster_cine_scientist", (void*)monster_cine_scientist },
	{ "env_explosion", (void*)env_explosion },
	{ "rpg_rocket", (void*)rpg_rocket },
	{ "env_fade", (void*)env_fade },
	{ "trigger_multiple", (void*)trigger_multiple },
	{ "func_pendulum", (void*)func_pendulum },
	{ "monstermaker", (void*)monstermaker },
	{ "monster_barnacle", (void*)monster_barnacle },
	{ "game_player_team", (void*)game_player_team },
	{ "node_viewer_fly", (void*)node_viewer_fly },
	{ "info_node_air", (void*)info_node_air },
	{ "monster_grunt_repel", (void*)monster_grunt_repel },
	{ "monster_nihilanth", (void*)monster_nihilanth },
	{ "monster_flyer_flock", (void*)monster_flyer_flock },
	{ "env_spark", (void*)env_spark },
	{ "ambient_generic", (void*)ambient_generic },
	{ "func_tankcontrols", (void*)func_tankcontrols },
	{ "fireanddie", (void*)fireanddie },
	{ "func_tankmortar", (void*)func_tankmortar },
	{ "trigger_monsterjump", (void*)trigger_monsterjump },
	{ "monster_apache", (void*)monster_apache },
	{ "monster_mortar", (void*)monster_mortar },
	{ "trigger_camera", (void*)trigger_camera },
	{ "weapon_mp5", (void*)weapon_mp5 },
	{ "cycler", (void*)cycler },
	{ "func_recharge", (void*)func_recharge },
	{ "ammo_9mmclip", (void*)ammo_9mmclip },
	{ "monster_hevsuit_dead", (void*)monster_hevsuit_dead },
	{ "xen_spore_small", (void*)xen_spore_small },
	{ "garg_stomp", (void*)garg_stomp },
	{ "game_counter", (void*)game_counter },
	{ "light_environment", (void*)light_environment },
	{ "ammo_rpgclip", (void*)ammo_rpgclip },
	{ "func_water", (void*)func_water },
	{ "path_track", (void*)path_track },
	{ "weapon_hornetgun", (void*)weapon_hornetgun },
	{ "monster_player", (void*)monster_player },
	{ "info_null", (void*)info_null },
	{ "grenade", (void*)grenade },
	{ "weapon_shotgun", (void*)weapon_shotgun },
	{ "monster_rosenberg", (void*)monster_rosenberg },
	{ "item_helmet", (void*)item_helmet },
	{ "spark_shower", (void*)spark_shower },
	{ "path_corner", (void*)path_corner },
	{ "monster_flyer", (void*)monster_flyer },
	{ "env_shooter", (void*)env_shooter },
	{ "func_monsterclip", (void*)func_monsterclip },
	{ "DelayedUse", (void*)DelayedUse },
	{ "button_target", (void*)button_target },
	{ "env_global", (void*)env_global },
	{ "scripted_sequence", (void*)scripted_sequence },
	{ "ammo_9mmAR", (void*)ammo_9mmAR },
	{ "trigger_endsection", (void*)trigger_endsection },
	{ "env_smoker", (void*)env_smoker },
	{ "env_laser", (void*)env_laser },
	{ "monster_bullchicken", (void*)monster_bullchicken },
	{ "light_spot", (void*)light_spot },
	{ "hornet", (void*)hornet },
	{ "trigger_transition", (void*)trigger_transition },
	{ "func_wall_toggle", (void*)func_wall_toggle },
	{ "func_traincontrols", (void*)func_traincontrols },
	{ "ammo_mp5grenades", (void*)ammo_mp5grenades },
	{ "trigger_changetarget", (void*)trigger_changetarget },
	{ "monster_cine3_barney", (void*)monster_cine3_barney },
	{ "func_guntarget", (void*)func_guntarget },
	{ "weapon_snark", (void*)weapon_snark },
	{ "func_conveyor", (void*)func_conveyor },
	{ "env_sound", (void*)env_sound },
	{ "monster_headcrab", (void*)monster_headcrab },
	{ "player_loadsaved", (void*)player_loadsaved },
	{ "bmortar", (void*)bmortar },
	{ "xen_spore_medium", (void*)xen_spore_medium },
	{ "monster_gargantua", (void*)monster_gargantua },
	{ "func_tracktrain", (void*)func_tracktrain },
	{ "monster_tentaclemaw", (void*)monster_tentaclemaw },
	{ "ammo_ARgrenades", (void*)ammo_ARgrenades },
	{ "monster_barney_dead", (void*)monster_barney_dead },
	{ "ammo_crossbow", (void*)ammo_crossbow },
	{ "monster_rat", (void*)monster_rat },
	{ "ammo_357", (void*)ammo_357 },
	{ "monster_generic", (void*)monster_generic },
	{ "info_target", (void*)info_target },
	{ "monster_tripmine", (void*)monster_tripmine },
	{ "gibshooter", (void*)gibshooter },
	{ "monster_alien_slave", (void*)monster_alien_slave },
	{ "monster_vortigaunt", (void*)monster_vortigaunt },
	{ "info_player_deathmatch", (void*)info_player_deathmatch },
	{ "monster_cine3_scientist", (void*)monster_cine3_scientist },
	{ "monster_sentry", (void*)monster_sentry },
	{ "trigger_relay", (void*)trigger_relay },
	{ "env_render", (void*)env_render },
	{ "item_armorvest", (void*)item_armorvest },
	{ "scripted_sentence", (void*)scripted_sentence },
	{ "func_mortar_field", (void*)func_mortar_field },
	{ "weapon_9mmAR", (void*)weapon_9mmAR },
	{ "func_rotating", (void*)func_rotating },
	{ "cycler_weapon", (void*)cycler_weapon },
	{ "info_node", (void*)info_node },
	{ "weapon_satchel", (void*)weapon_satchel },
	{ "xen_spore_large", (void*)xen_spore_large },
	{ "func_tanklaser", (void*)func_tanklaser },
	{ "hvr_rocket", (void*)hvr_rocket },
	{ "monster_alien_controller", (void*)monster_alien_controller },
	{ "game_team_master", (void*)game_team_master },
	{ "node_viewer_large", (void*)node_viewer_large },
	{ "monster_cine2_hvyweapons", (void*)monster_cine2_hvyweapons },
	{ "info_bigmomma", (void*)info_bigmomma },
	{ "item_airtank", (void*)item_airtank },
	{ "world_items", (void*)world_items },
	{ "monster_hgrunt_dead", (void*)monster_hgrunt_dead },
	{ "item_suit", (void*)item_suit },
	{ "info_landmark", (void*)info_landmark },
	{ "crossbow_bolt", (void*)crossbow_bolt },
	{ "game_team_set", (void*)game_team_set },
	{ "cycler_sprite", (void*)cycler_sprite },
	{ "func_tank", (void*)func_tank },
	{ "laser_spot", (void*)laser_spot },
	{ "player", (void*)player },
	{ "game_player_equip", (void*)game_player_equip },
	{ "controller_head_ball", (void*)controller_head_ball },
	{ "item_security", (void*)item_security },
	{ "func_door", (void*)func_door },
	{ "ammo_glockclip", (void*)ammo_glockclip },
	{ "func_button", (void*)func_button },
	{ "func_rot_button", (void*)func_rot_button },
	{ "weapon_rpg", (void*)weapon_rpg },
	{ "monster_scientist_dead", (void*)monster_scientist_dead },
	{ "multisource", (void*)multisource },
	{ "weapon_crowbar", (void*)weapon_crowbar },
	{ "trigger_once", (void*)trigger_once },
	{ "monster_cine_barney", (void*)monster_cine_barney },
	{ "squidspit", (void*)squidspit },
	{ "xen_hair", (void*)xen_hair },
	{ "func_friction", (void*)func_friction },
	{ "monster_zombie", (void*)monster_zombie },
	{ "monster_turret", (void*)monster_turret },
	{ "func_train", (void*)func_train },
	{ "monster_bigmomma", (void*)monster_bigmomma },
	{ "func_trackchange", (void*)func_trackchange },
	{ "env_glow", (void*)env_glow },
	{ "monster_houndeye", (void*)monster_houndeye },
	{ "trigger_gravity", (void*)trigger_gravity },
	{ "momentary_rot_button", (void*)momentary_rot_button },
	{ "info_intermission", (void*)info_intermission },
	{ "trigger_cdaudio", (void*)trigger_cdaudio },
	{ "monster_gman", (void*)monster_gman },
	{ "soundent", (void*)soundent },
	{ "monster_snark", (void*)monster_snark },
	{ "monster_tentacle", (void*)monster_tentacle },
	{ "cycler_wreckage", (void*)cycler_wreckage },
	{ "trigger_auto", (void*)trigger_auto },
	{ "ammo_egonclip", (void*)ammo_egonclip },
	{ "weaponbox", (void*)weaponbox },
	{ "monster_bloater", (void*)monster_bloater },
	{ "monster_cine2_slave", (void*)monster_cine2_slave },
	{ "monster_scientist", (void*)monster_scientist },
	{ "monster_alien_grunt", (void*)monster_alien_grunt },
	{ "game_zone_player", (void*)game_zone_player },
	{ "env_message", (void*)env_message },
	{ "momentary_door", (void*)momentary_door },
	{ "ammo_buckshot", (void*)ammo_buckshot },
	{ "trigger_autosave", (void*)trigger_autosave },
	{ "monster_human_grunt", (void*)monster_human_grunt },
	{ "trigger_playerfreeze", (void*)trigger_playerfreeze },
	{ "weapon_handgrenade", (void*)weapon_handgrenade },
	{ "game_player_hurt", (void*)game_player_hurt },
	{ "func_breakable", (void*)func_breakable },
	{ "testhull", (void*)testhull },
	{ "func_wall", (void*)func_wall },
	{ "env_sprite", (void*)env_sprite },
	{ "aiscripted_sequence", (void*)aiscripted_sequence },
	{ "func_illusionary", (void*)func_illusionary },
	{ "weapon_357", (void*)weapon_357 },
	{ "bodyque", (void*)bodyque },
	{ "monster_human_assassin", (void*)monster_human_assassin },
	{ "light", (void*)light },
	{ "monster_osprey", (void*)monster_osprey },
	{ "test_effect", (void*)test_effect },
	{ "beam", (void*)beam },
	{ "info_player_start", (void*)info_player_start },
	{ "env_warpball", (void*)env_warpball },
	{ "trigger_teleport", (void*)trigger_teleport },
	{ "weapon_python", (void*)weapon_python },
	{ "monster_satchel", (void*)monster_satchel },
	{ "player_weaponstrip", (void*)player_weaponstrip },
	{ "node_viewer", (void*)node_viewer },
	{ "monster_leech", (void*)monster_leech },
	{ "monster_ichthyosaur", (void*)monster_ichthyosaur },
	{ "weapon_crossbow", (void*)weapon_crossbow },
	{ "func_pushable", (void*)func_pushable },
	{ "nihilanth_energy_ball", (void*)nihilanth_energy_ball },
	{ "func_healthcharger", (void*)func_healthcharger },
	{ "controller_energy_ball", (void*)controller_energy_ball },

	{ NULL, NULL },
};

int switch_installdll_server( void )
{
	return dll_register( "server", switch_server_exports );
}

}