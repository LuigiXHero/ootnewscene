#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "scenetest_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd scenetest_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_ROOM_LIST(1, scenetest_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&scenetest_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x01, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(scenetest_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, scenetest_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, scenetest_scene_header00_lightSettings),
    SCENE_CMD_END(),
};

RomFile scenetest_scene_roomList[] = {
    { (u32)_scenetest_room_0SegmentRomStart, (u32)_scenetest_room_0SegmentRomEnd },
};

ActorEntry scenetest_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, 0, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn scenetest_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings scenetest_scene_header00_lightSettings[4] = {
    // Dawn Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Day Lighting
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        ((1 << 10) | 996),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Dusk Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((1 << 10) | 995),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Night Lighting
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((1 << 10) | 992),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

Vec3s scenetest_camPosData[3] = {
	{ 0, 0, 0 },
	{ 5127, 44743, 65199 },
	{ 3960, -1, -1 },
};

BgCamInfo scenetest_camData[1] = {
	{ CAM_SET_NORMAL0, 3, &scenetest_camPosData[0] },
};

SurfaceType scenetest_polygonTypes[] = {
	{ 0x00000000, 0x00000008 },
	{ 0x00000000, 0x00000000 },
};

CollisionPoly scenetest_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-1.6292068494294654e-07), 0x0000 },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-1.6292068494294654e-07), 0x0000 },
	{ 0x0001, 0x0004, 0x0005, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-1.6292068494294654e-07), 0xfff9 },
	{ 0x0001, 0x0004, 0x0006, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-1.6292068494294654e-07), 0xfff9 },
	{ 0x0001, 0x0008, 0x0009, 0x0004, COLPOLY_SNORMAL(-0.583436906337738), COLPOLY_SNORMAL(0.8121584057807922), COLPOLY_SNORMAL(-1.32317410361793e-07), 0xffe1 },
	{ 0x0001, 0x0008, 0x0004, 0x0007, COLPOLY_SNORMAL(-0.583436906337738), COLPOLY_SNORMAL(0.8121585249900818), COLPOLY_SNORMAL(-1.32317410361793e-07), 0xffe1 },
	{ 0x0001, 0x000a, 0x0008, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.812157928943634), COLPOLY_SNORMAL(-0.5834376811981201), 0x00bf },
	{ 0x0001, 0x000a, 0x0007, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.8121579885482788), COLPOLY_SNORMAL(-0.5834376215934753), 0x00bf },
	{ 0x0001, 0x0009, 0x000b, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.8121580481529236), COLPOLY_SNORMAL(0.5834373831748962), 0xff04 },
	{ 0x0001, 0x0009, 0x0005, 0x0004, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.8121581077575684), COLPOLY_SNORMAL(0.5834373235702515), 0xff04 },
	{ 0x0001, 0x000b, 0x000a, 0x0006, COLPOLY_SNORMAL(0.583436906337738), COLPOLY_SNORMAL(0.8121584057807922), COLPOLY_SNORMAL(-1.32317410361793e-07), 0xffe2 },
	{ 0x0001, 0x000b, 0x0006, 0x0005, COLPOLY_SNORMAL(0.583436906337738), COLPOLY_SNORMAL(0.8121585249900818), COLPOLY_SNORMAL(-1.32317410361793e-07), 0xffe2 },
};

Vec3s scenetest_vertices[12] = {
	{ -591, 0, 591 },
	{ 591, 0, 591 },
	{ 591, 0, -591 },
	{ -591, 0, -591 },
	{ -44, 7, 423 },
	{ 42, 7, 423 },
	{ 42, 7, 337 },
	{ -44, 7, 337 },
	{ -53, 0, 328 },
	{ -53, 0, 432 },
	{ 51, 0, 328 },
	{ 51, 0, 432 },
};

CollisionHeader scenetest_collisionHeader = {
	-591,
	0,
	-591,
	591,
	7,
	591,
	12,
	scenetest_vertices,
	12,
	scenetest_polygons,
	scenetest_polygonTypes,
	scenetest_camData,
	0,
	0
};

