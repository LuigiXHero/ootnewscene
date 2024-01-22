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
#define LENGTH_SCENETEST_ROOM_0_HEADER00_OBJECTLIST 2
#define LENGTH_SCENETEST_ROOM_0_HEADER00_ACTORLIST 7
SceneCmd scenetest_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 10),
    SCENE_CMD_ROOM_SHAPE(&scenetest_room_0_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_SCENETEST_ROOM_0_HEADER00_OBJECTLIST, scenetest_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_SCENETEST_ROOM_0_HEADER00_ACTORLIST, scenetest_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 scenetest_room_0_header00_objectList[LENGTH_SCENETEST_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_DEKUBABA,
    OBJECT_BOX,
};

ActorEntry scenetest_room_0_header00_actorList[LENGTH_SCENETEST_ROOM_0_HEADER00_ACTORLIST] = {
    // Deku Baba
    {
        /* Actor ID   */ ACTOR_EN_DEKUBABA,
        /* Position   */ { -41, 0, 277 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Collectable Item
    {
        /* Actor ID   */ ACTOR_EN_ITEM00,
        /* Position   */ { -68, 0, -60 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Deku Baba
    {
        /* Actor ID   */ ACTOR_EN_DEKUBABA,
        /* Position   */ { 43, 0, 277 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Collectable Item
    {
        /* Actor ID   */ ACTOR_EN_ITEM00,
        /* Position   */ { -68, 0, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Collectable Item
    {
        /* Actor ID   */ ACTOR_EN_ITEM00,
        /* Position   */ { -68, 0, -30 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0002
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 0, 7, 384 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x1120
    },

    // Deku Baba
    {
        /* Actor ID   */ ACTOR_EN_DEKUBABA,
        /* Position   */ { 0, 0, 277 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal scenetest_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(scenetest_room_0_shapeDListEntry),
    scenetest_room_0_shapeDListEntry,
    scenetest_room_0_shapeDListEntry + ARRAY_COUNT(scenetest_room_0_shapeDListEntry)
};

RoomShapeDListsEntry scenetest_room_0_shapeDListEntry[1] = {
    { scenetest_room_0_entry_0_opaque, NULL },
};

Gfx scenetest_room_0_entry_0_opaque[] = {
	gsSPDisplayList(scenetest_dl_Ground_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 scenetest_dl_badgrass_ci8[] = {
	0x0001000203040506, 0x0307070806030908, 0x0a090b0808080508, 0x09090c00020d0406, 0x0e00090708030f10, 0x111205080e0e070c, 0x1012020604131408, 0x0708081515100007, 
	0x0807080204111300, 0x1208050203081202, 0x0808160f0d100f08, 0x100e021603020808, 0x12080008040c0203, 0x1502020708031503, 0x010407080407120b, 0x0208080700080908, 
	0x0e08081008070b14, 0x0815070408020208, 0x0707160307020209, 0x0808170312070b07, 0x100e06070109020b, 0x07080c0800040408, 0x080702020103080c, 0x0908080302001302, 
	0x08080f180404100e, 0x0d12030209070804, 0x1005020802021604, 0x0804030b0e100008, 0x190202041211080b, 0x04040b0b07080806, 0x020208080b161008, 0x151a080e0c000703, 
	0x020003000806080c, 0x07081b12020e0902, 0x0c0e100808070d07, 0x0916011409021013, 0x0612030806070f03, 0x0208061001071617, 0x1c00080e0f080f08, 0x0d00160809061508, 
	0x0816130e04000808, 0x0908080015081102, 0x090615030e08020f, 0x08050e02080d080e, 0x15080810030b080f, 0x1005090302081308, 0x1208080308000c09, 0x1609070002160808, 
	0x0f12020e07000800, 0x0803080904020808, 0x0803080f05070810, 0x1310080813061708, 0x02080a0306160314, 0x0810150713090808, 0x050e080800080009, 0x0708010708080816, 
	0x08131107130c0208, 0x0e011604000e0815, 0x060e081203080208, 0x15040b0804031604, 0x090e10000e080808, 0x1609070308080e08, 0x0815020c03070406, 0x0408020214081605, 
	0x081303010e090300, 0x0209031308030703, 0x1603080708080708, 0x1d13070108120308, 0x161208161b080103, 0x020c1b0812001508, 0x06161e0406000219, 0x170708080a051506, 
	0x080909021f160202, 0x1d0205020902080f, 0x100808120b080f09, 0x04080e0e030d1000, 0x0b12030708020813, 0x16030d0816071508, 0x040b160800070602, 0x140f08070e120802, 
	0x080e02080e190007, 0x0409080003000902, 0x1b08030808111508, 0x160313160b08131b, 0x160e091508071615, 0x04080201080f0c04, 0x1720150821160a09, 0x0513030816220e02, 
	0x0903160413040c02, 0x080b080403000709, 0x0808070304090703, 0x1b00030316030804, 0x2303000108080207, 0x0209080816030005, 0x120201030f081904, 0x130f040600090b06, 
	0x08080a1204100e02, 0x0b13080407020800, 0x0308080203081008, 0x0805150204060404, 0x030808100a060208, 0x0908030808080407, 0x09020f0811060800, 0x0307082413110805, 
	0x1003080b1b100b0e, 0x0808080c08080804, 0x08080f0b02110905, 0x0f07030803120413, 0x08040808031d0408, 0x0124081206101307, 0x16100b0a09080702, 0x081310120703090b, 
	0x08000407030e0000, 0x16081c1608090502, 0x16000e0412250808, 0x160e130408000316, 0x0002080c020b0704, 0x1602082304090208, 0x081b1502100e0202, 0x16080e161604081b, 
	0x0404000808100e06, 0x081407081f000208, 0x0808082616050608, 0x0810080802100702, 0x081407070809071b, 0x070302151d030b08, 0x0e0d160d07030807, 0x080909090a0f0807, 
	
};

u64 scenetest_dl_badgrass_pal_rgba16[] = {
	0x67c76fc7478157c3, 0x3f4167c547415fc5, 0x4fc16fc926415fc3, 0x77c97fcd2ec177cb, 0x3f011e414f8157c1, 0x87cf268137017fcb, 0x8fd187cd0d8136c1, 0x16010dc1054115c1, 
	0x97d38fcf05011e01, 0x2e81058197d10000
};

u64 scenetest_dl_badstone_i8[] = {
	0x90817c8582858e85, 0x7a7a868c727e857a, 0x798284798388877d, 0x8783818281807785, 0x7e84867b7882747b, 0x819081818185868d, 0x8b8284817a858480, 0x77827d7e82807f7d, 
	0x816e857d7a7c878a, 0x7e787f7a70798594, 0x7e8681817d7d8081, 0x7b8181837e86877b, 0x7f80887b7e868181, 0x867f7a7b7f747a83, 0x858c787e84828a85, 0x8283808a8380847b, 
	0x7a6d7e7c7e878984, 0x868273777d788079, 0x797d8685878a7a80, 0x877977827a817b79, 0x847678897d807d7c, 0x7b7d867b7d7e7d81, 0x7a887f8181828680, 0x8483858183827a88, 
	0x8a80847c7f7f7c7a, 0x777c7887787d787f, 0x7e82857c858e8584, 0x718080787f828b7f, 0x837d897e7f82827d, 0x7e80797d7b757b88, 0x7e868484867d807e, 0x72837a7e80808083, 
	0x7e7f84857e787978, 0x7b7c7c8277888084, 0x7d80847f8474847e, 0x768477797c8f7981, 0x82877e8688847f72, 0x7a7f76807e7f857e, 0x7584888c868f7c80, 0x8479828b83857d72, 
	0x8685808780837f78, 0x867f7e8483857d80, 0x7e80887f79857f82, 0x8a8291827a8a7c84, 0x7480877e8686887b, 0x897b817b77847985, 0x7b7d7288797c7b83, 0x827d837b897b8373, 
	0x7d7881867a7b737e, 0x807c798582808285, 0x7a8182787d7f8681, 0x83807e7e80868082, 0x80837985867c8882, 0x80848d8a7f89867b, 0x83807f84867b857e, 0x8185858b807d8580, 
	0x7e88877b88767e77, 0x7f847e7d82818081, 0x857a7d7876837b7f, 0x887e86707c7e7e7e, 0x7788857477897a82, 0x83737d7d7a7d797e, 0x877c8b8084738081, 0x7c8578817b75817d, 
	0x7e81867f7a8b8177, 0x8082807b7b848378, 0x7e847983807b8477, 0x807e847d807d7a81, 0x757c7b807f837a86, 0x80867e8a867b8477, 0x7e778c8a867f7f74, 0x82877a8286827c83, 
	0x7d7c768881798081, 0x8a847d85867a8082, 0x8b7c8b7885788787, 0x80837e868d84757f, 0x73827980817b877d, 0x777f797d827d7a86, 0x7b7d878089857f7f, 0x7d7f7d817e7e817e, 
	0x7c8278807a808479, 0x8480837c7c83857d, 0x837f847e7d827f8a, 0x85808280807a8279, 0x7b847e7780868685, 0x80817e85807a7e82, 0x827085827e838786, 0x78848a81777d8483, 
	0x8a848683837d8b84, 0x827d79807e7b7479, 0x8672827a807c8a84, 0x877e86777d74797a, 0x7c7e797e7b7d8379, 0x8185808b7a8b7f82, 0x7d7b89858d778a81, 0x7485838180837f84, 
	0x7d7e8a8c7a837d7d, 0x7c78848587757a8c, 0x747a877c7a838678, 0x8b828c8074837c85, 0x877a7d7c84807486, 0x7c8489827a84877f, 0x867f8b86887a7f75, 0x8283868379808579, 
	0x7a7c838382807a83, 0x7b8684838781777e, 0x838178817f7e8387, 0x8580847f80808680, 0x83787c81867d8673, 0x778482858574777e, 0x81738783837e7a83, 0x7f8e70777983767d, 
	0x81787e81837c8080, 0x7d8983857484817e, 0x76897d82877f787d, 0x86837e7c827e7a8b, 0x7891837e7d807b80, 0x838185838488837c, 0x887b827e84848480, 0x767d85867c7f8c83, 
	0x77787c7f8a877a8d, 0x75837b8181838873, 0x7e88817c787e7777, 0x83817b86847d827c, 0x7f82828783828384, 0x7d897f8284878782, 0x7c7d89787a828089, 0x868583797b877786, 
	
};

Vtx scenetest_dl_Ground_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-591, 0, 591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-591, 7, 591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-591, 7, -591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-591, 0, -591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {591, 0, 591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {591, 7, 591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {591, 7, -591}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {591, 0, -591}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx scenetest_dl_Ground_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-591, 0, 591}, 0, {7342, -6350}, {0, 127, 0, 255} }},
	{{ {591, 0, 591}, 0, {-6350, -6350}, {0, 127, 0, 255} }},
	{{ {591, 0, -591}, 0, {-6350, 7342}, {0, 127, 0, 255} }},
	{{ {-591, 0, -591}, 0, {7342, 7342}, {0, 127, 0, 255} }},
};

Gfx scenetest_dl_Ground_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(scenetest_dl_Ground_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx scenetest_dl_Ground_mesh_layer_Opaque_vtx_1[20] = {
	{{ {-44, 7, 423}, 0, {-734, -729}, {0, 127, 0, 255} }},
	{{ {42, 7, 423}, 0, {-723, 1713}, {0, 127, 0, 255} }},
	{{ {42, 7, 337}, 0, {1719, 1721}, {0, 127, 0, 255} }},
	{{ {-44, 7, 337}, 0, {1708, -721}, {0, 127, 0, 255} }},
	{{ {-53, 0, 328}, 0, {2039, -1040}, {182, 103, 0, 255} }},
	{{ {-53, 0, 432}, 0, {-1055, -1062}, {182, 103, 0, 255} }},
	{{ {-44, 7, 423}, 0, {-734, -729}, {182, 103, 0, 255} }},
	{{ {-44, 7, 337}, 0, {1708, -721}, {182, 103, 0, 255} }},
	{{ {51, 0, 328}, 0, {2039, 2054}, {0, 103, 182, 255} }},
	{{ {-53, 0, 328}, 0, {2039, -1040}, {0, 103, 182, 255} }},
	{{ {-44, 7, 337}, 0, {1708, -721}, {0, 103, 182, 255} }},
	{{ {42, 7, 337}, 0, {1719, 1721}, {0, 103, 182, 255} }},
	{{ {-53, 0, 432}, 0, {-1055, -1062}, {0, 103, 74, 255} }},
	{{ {51, 0, 432}, 0, {-1055, 2032}, {0, 103, 74, 255} }},
	{{ {42, 7, 423}, 0, {-723, 1713}, {0, 103, 74, 255} }},
	{{ {-44, 7, 423}, 0, {-734, -729}, {0, 103, 74, 255} }},
	{{ {51, 0, 432}, 0, {-1055, 2032}, {74, 103, 0, 255} }},
	{{ {51, 0, 328}, 0, {2039, 2054}, {74, 103, 0, 255} }},
	{{ {42, 7, 337}, 0, {1719, 1721}, {74, 103, 0, 255} }},
	{{ {42, 7, 423}, 0, {-723, 1713}, {74, 103, 0, 255} }},
};

Gfx scenetest_dl_Ground_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(scenetest_dl_Ground_mesh_layer_Opaque_vtx_1 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSPEndDisplayList(),
};

Gfx mat_scenetest_dl_ground_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, scenetest_dl_badgrass_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 38),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, scenetest_dl_badgrass_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_scenetest_dl_stone_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, scenetest_dl_badstone_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx scenetest_dl_Ground_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(scenetest_dl_Ground_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_scenetest_dl_ground_layerOpaque),
	gsSPDisplayList(scenetest_dl_Ground_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_scenetest_dl_stone_layerOpaque),
	gsSPDisplayList(scenetest_dl_Ground_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

