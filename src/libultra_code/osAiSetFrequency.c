#include <global.h>
#include <ultra64/hardware.h>

s32 osAiSetFrequency(u32 frequency) {
    u32 dacRate;
    u8 bitrate;
    f32 dacRateF;

    dacRateF = ((f32)osViClock / frequency) + 0.5f;
    dacRate = dacRateF;

    if (dacRate < 132) {
        return -1;
    }

    bitrate = (dacRate / 66);
    if (bitrate > 16) {
        bitrate = 16;
    }

    HW_REG(AI_DACRATE_REG, u32) = dacRate - 1;
    HW_REG(AI_BITRATE_REG, u32) = bitrate - 1;
    return osViClock / (s32)dacRate;
}
