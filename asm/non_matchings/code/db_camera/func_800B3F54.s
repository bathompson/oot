glabel func_800B3F54
/* B2B0F4 800B3F54 848E0000 */  lh    $t6, ($a0)
/* B2B0F8 800B3F58 448E2000 */  mtc1  $t6, $f4
/* B2B0FC 800B3F5C 00000000 */  nop   
/* B2B100 800B3F60 468021A0 */  cvt.s.w $f6, $f4
/* B2B104 800B3F64 E4A60000 */  swc1  $f6, ($a1)
/* B2B108 800B3F68 848F0002 */  lh    $t7, 2($a0)
/* B2B10C 800B3F6C 448F4000 */  mtc1  $t7, $f8
/* B2B110 800B3F70 00000000 */  nop   
/* B2B114 800B3F74 468042A0 */  cvt.s.w $f10, $f8
/* B2B118 800B3F78 E4AA0004 */  swc1  $f10, 4($a1)
/* B2B11C 800B3F7C 84980004 */  lh    $t8, 4($a0)
/* B2B120 800B3F80 44988000 */  mtc1  $t8, $f16
/* B2B124 800B3F84 00000000 */  nop   
/* B2B128 800B3F88 468084A0 */  cvt.s.w $f18, $f16
/* B2B12C 800B3F8C 03E00008 */  jr    $ra
/* B2B130 800B3F90 E4B20008 */   swc1  $f18, 8($a1)

