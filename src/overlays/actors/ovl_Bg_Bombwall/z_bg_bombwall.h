#ifndef _Z_BG_BOMBWALL_H_
#define _Z_BG_BOMBWALL_H_

#include <ultra64.h>
#include <global.h>

struct BgBombwall;

typedef void (*BgBombwallActionFunc)(struct BgBombwall*, GlobalContext*);

typedef struct BgBombwall {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ char unk_164[0x134];
    /* 0x0298 */ BgBombwallActionFunc actionFunc;
    /* 0x029C */ Gfx* unk_29C;
    /* 0x02A0 */ s16 unk_2A0;
    /* 0x02A2 */ s16 unk_2A2;
} BgBombwall; // size = 0x02A4

extern const ActorInit Bg_Bombwall_InitVars;

#endif
