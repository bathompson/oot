/*
 * File: z_bg_bombwall.c
 * Overlay: ovl_Bg_Bombwall
 * Description: 2D Bombable Wall
 */

#include "z_bg_bombwall.h"

#define FLAGS 0x00400000

#define THIS ((BgBombwall*)thisx)

extern UNK_TYPE D_050041b0;
extern UNK_TYPE D_5004088;
extern UNK_TYPE D_05003FC0;
extern UNK_TYPE D_05003FC0;
extern UNK_TYPE D_8086F010;
extern UNK_TYPE D_8086F03A;

void BgBombwall_Init(Actor* thisx, GlobalContext* globalCtx);
void BgBombwall_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgBombwall_Update(Actor* thisx, GlobalContext* globalCtx);
void BgBombwall_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_8086E7D0(BgBombwall* this, GlobalContext* globalCtx);
void func_8086EAC0(BgBombwall* this, GlobalContext* globalCtx);
void func_8086EB5C(BgBombwall* this, GlobalContext* globalCtx);
void func_8086ED50(BgBombwall* this, GlobalContext* globalCtx);
void func_8086ED70(BgBombwall* this, GlobalContext* globalCtx);
void func_8086EDFC(BgBombwall* this, GlobalContext* globalCtx);
void func_8086EE40(BgBombwall* this, GlobalContext* globalCtx);
void func_8086EE94(BgBombwall* this, GlobalContext* globalCtx);

/*
const ActorInit Bg_Bombwall_InitVars = {
    ACTOR_BG_BOMBWALL,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(BgBombwall),
    (ActorFunc)BgBombwall_Init,
    (ActorFunc)BgBombwall_Destroy,
    (ActorFunc)BgBombwall_Update,
    (ActorFunc)BgBombwall_Draw,
};
*/
//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086E7D0.s")
void func_8086E7D0(BgBombwall *this, GlobalContext *globalCtx) {
    u8 padding;
    u32 temp_v0;
    s32 sp1C;
    sp1C = 0;
    DynaPolyInfo_SetActorMove((DynaPolyActor *) this, 0);
    DynaPolyInfo_Alloc((void *)&D_050041b0, (void *) &sp1C);
    temp_v0 = DynaPolyInfo_RegisterActor(globalCtx, &globalCtx->colCtx.dyna, (Actor *) this, sp1C);
    this->dyna.dynaPolyId = temp_v0;
    if (temp_v0 == 0x32) {
        osSyncPrintf((const char *) "Warning : move BG 登録失敗(%s %d)(arg_data 0x%04x)\n", "../z_bg_bombwall.c", 0xF3, this->dyna.actor.params);
    }
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086E850.s")
void func_8086E850(f32 *arg0, f32 *arg1, f32 arg2, f32 arg3) {
    arg0[0] = (f32) ((arg1[0] * arg3) + (arg1[2] * arg2));
   arg0[1] = (f32) arg1[1];
   arg0[2] = (f32) ((arg1[2] * arg3) - (arg1[0] * arg2));
}

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/BgBombwall_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086EAC0.s")

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/BgBombwall_Destroy.s")
void BgBombwall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    func_8086EAC0((BgBombwall *) thisx, globalCtx);
}

#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086EB5C.s")
// void func_8086EB5C(BgBombwall *this, GlobalContext *globalCtx) {
//     f32 sp90;
//     f32 sp8C;
//     f32 sp88;
//     PosRot *temp_s1;
//     f32 *temp_s5;
//     f32 temp_f0;
//     f32 temp_f0_2;
//     f32 temp_f18;
//     f32 temp_f22;
//     f32 temp_f2;
//     s32 temp_s2;
//     void *temp_s0;
//     f32 *phi_s0;

//     temp_f22 = Math_Sins(this->dyna.actor.shape.rot.y);
//     temp_f0 = Math_Coss(this->dyna.actor.shape.rot.y);
//     temp_s1 = &this->dyna.actor.posRot;
//     temp_s5 = &sp88;
//     phi_s0 = &D_8086F010;
//     do{
//     temp_f2 = (f32) phi_s0[0];
//     temp_f0_2 = (f32) phi_s0[1];
//     temp_f18 = temp_f2 * temp_f0;
//     sp88 = ((temp_f2 * temp_f22) + (temp_f0_2 * temp_f0)) + temp_s1->pos.x;
//     sp8C = (f32) phi_s0[3] + temp_s1->pos.y;
//     sp90 = (temp_f18 - (temp_f0_2 * temp_f22)) + temp_s1->pos.z;
//     temp_s2 = (s32) ((((s32) ((s32) (Math_Rand_ZeroOne() * 120.0f) << 0x10) >> 0x10) + 0x14) << 0x10) >> 0x10;
//     func_80033480(globalCtx, (Vec3f *) temp_s5, 50.0f, 2, temp_s2, ((s32) ((s32) (Math_Rand_ZeroOne() * 240.0f) << 0x10) >> 0x10) + 0x14, 1);
//     temp_s0 = phi_s0 + 6;
//     phi_s0 = temp_s0;
//     }
//     while (temp_s0 != &D_8086F03A);
//     sp88 = temp_s1->pos.x;
//     sp8C = temp_s1->pos.y + 90.0f;
//     sp90 = temp_s1->pos.z + 15.0f;
//     func_80033480(globalCtx, (Vec3f *) temp_s5, 40.0f, 4, 0xA, 0x32, 1);
// }

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086ED50.s")
void func_8086ED50(BgBombwall *this, GlobalContext *globalCtx) {
    this->unk_29C = (void *)&D_05003FC0;
    this->actionFunc = (void (*)(struct BgBombwall *, GlobalContext *)) &func_8086ED70;
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086ED70.s")
void func_8086ED70(BgBombwall *this, GlobalContext *globalCtx) {
    if ((this->unk_164[0x11] & 2) != 0) {
        this->unk_164[0x11] = (u8) (this->unk_164[0x11] & 0xFFFD);
        this = this;
        func_8086EDFC(this, globalCtx);
        Flags_SetSwitch(globalCtx, (s32) (this->dyna.actor.params & 0x3F));
        return;
    }
    if (this->dyna.actor.xzDistFromLink < 600.0f) {
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) this->unk_164);
    }
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086EDFC.s")
void func_8086EDFC(BgBombwall *this, GlobalContext *globalCtx) {
    this->unk_29C = (void *)&D_05003FC0;
    this->unk_2A0 = (u16)1;
    func_8086EB5C(this, globalCtx);
    this->actionFunc = (void (*)(struct BgBombwall *, GlobalContext *)) &func_8086EE40;
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086EE40.s")
void func_8086EE40(BgBombwall *this, GlobalContext *globalCtx) {
    if ((s32) this->unk_2A0 > 0) {
        this->unk_2A0 = (s16) (this->unk_2A0 - 1);
        return;
    }
    func_8086EE94(this, globalCtx);
    if ((((s32) this->dyna.actor.params >> 0xF) & 1) != 0) {
        func_80078884((u16)0x4802U);
    }
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/func_8086EE94.s")
void func_8086EE94(BgBombwall *this, GlobalContext *globalCtx) {
    this->unk_29C = (void *)&D_5004088;
    func_8086EAC0(this, globalCtx);
    this->actionFunc = NULL;
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/BgBombwall_Update.s")
void BgBombwall_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgBombwall *this = THIS;
    if (this->actionFunc != 0) {
        this->actionFunc(thisx, globalCtx);
    }
}

//#pragma GLOBAL_ASM("asm/non_matchings/overlays/actors/ovl_Bg_Bombwall/BgBombwall_Draw.s")q
void BgBombwall_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgBombwall *this = THIS;
    Gfx_DrawDListOpa(globalCtx, this->unk_29C);
}
