glabel func_809872A8
/* 026C8 809872A8 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 026CC 809872AC AFBF001C */  sw      $ra, 0x001C($sp)           
/* 026D0 809872B0 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 026D4 809872B4 0C261406 */  jal     func_80985018              
/* 026D8 809872B8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 026DC 809872BC 0C261418 */  jal     func_80985060              
/* 026E0 809872C0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 026E4 809872C4 0C2612F8 */  jal     func_80984BE0              
/* 026E8 809872C8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 026EC 809872CC 0C261C19 */  jal     func_80987064              
/* 026F0 809872D0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 026F4 809872D4 0C261C4A */  jal     func_80987128              
/* 026F8 809872D8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 026FC 809872DC 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 02700 809872E0 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 02704 809872E4 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 02708 809872E8 03E00008 */  jr      $ra                        
/* 0270C 809872EC 00000000 */  nop
