glabel func_80B537E8
/* 00438 80B537E8 27BDFFB0 */  addiu   $sp, $sp, 0xFFB0           ## $sp = FFFFFFB0
/* 0043C 80B537EC AFBF002C */  sw      $ra, 0x002C($sp)           
/* 00440 80B537F0 AFB20028 */  sw      $s2, 0x0028($sp)           
/* 00444 80B537F4 AFB10024 */  sw      $s1, 0x0024($sp)           
/* 00448 80B537F8 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 0044C 80B537FC 8491008A */  lh      $s1, 0x008A($a0)           ## 0000008A
/* 00450 80B53800 848E0032 */  lh      $t6, 0x0032($a0)           ## 00000032
/* 00454 80B53804 00809025 */  or      $s2, $a0, $zero            ## $s2 = 00000000
/* 00458 80B53808 24060005 */  addiu   $a2, $zero, 0x0005         ## $a2 = 00000005
/* 0045C 80B5380C 022E7823 */  subu    $t7, $s1, $t6              
/* 00460 80B53810 000FC400 */  sll     $t8, $t7, 16               
/* 00464 80B53814 0018CC03 */  sra     $t9, $t8, 16               
/* 00468 80B53818 07200007 */  bltz    $t9, .L80B53838            
/* 0046C 80B5381C 24071838 */  addiu   $a3, $zero, 0x1838         ## $a3 = 00001838
/* 00470 80B53820 24900032 */  addiu   $s0, $a0, 0x0032           ## $s0 = 00000032
/* 00474 80B53824 86080000 */  lh      $t0, 0x0000($s0)           ## 00000032
/* 00478 80B53828 02281023 */  subu    $v0, $s1, $t0              
/* 0047C 80B5382C 00021400 */  sll     $v0, $v0, 16               
/* 00480 80B53830 10000007 */  beq     $zero, $zero, .L80B53850   
/* 00484 80B53834 00021403 */  sra     $v0, $v0, 16               
.L80B53838:
/* 00488 80B53838 26500032 */  addiu   $s0, $s2, 0x0032           ## $s0 = 00000032
/* 0048C 80B5383C 86090000 */  lh      $t1, 0x0000($s0)           ## 00000032
/* 00490 80B53840 02291023 */  subu    $v0, $s1, $t1              
/* 00494 80B53844 00021400 */  sll     $v0, $v0, 16               
/* 00498 80B53848 00021403 */  sra     $v0, $v0, 16               
/* 0049C 80B5384C 00021023 */  subu    $v0, $zero, $v0            
.L80B53850:
/* 004A0 80B53850 264403D0 */  addiu   $a0, $s2, 0x03D0           ## $a0 = 000003D0
/* 004A4 80B53854 00022C00 */  sll     $a1, $v0, 16               
/* 004A8 80B53858 240A0064 */  addiu   $t2, $zero, 0x0064         ## $t2 = 00000064
/* 004AC 80B5385C AFAA0010 */  sw      $t2, 0x0010($sp)           
/* 004B0 80B53860 00052C03 */  sra     $a1, $a1, 16               
/* 004B4 80B53864 0C01E1A7 */  jal     Math_SmoothScaleMaxMinS
              
/* 004B8 80B53868 AFA40030 */  sw      $a0, 0x0030($sp)           
/* 004BC 80B5386C 8FAB0030 */  lw      $t3, 0x0030($sp)           
/* 004C0 80B53870 00112C00 */  sll     $a1, $s1, 16               
/* 004C4 80B53874 240C0064 */  addiu   $t4, $zero, 0x0064         ## $t4 = 00000064
/* 004C8 80B53878 85670000 */  lh      $a3, 0x0000($t3)           ## 00000000
/* 004CC 80B5387C AFAC0010 */  sw      $t4, 0x0010($sp)           
/* 004D0 80B53880 00052C03 */  sra     $a1, $a1, 16               
/* 004D4 80B53884 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000032
/* 004D8 80B53888 0C01E1A7 */  jal     Math_SmoothScaleMaxMinS
              
/* 004DC 80B5388C 24060005 */  addiu   $a2, $zero, 0x0005         ## $a2 = 00000005
/* 004E0 80B53890 860D0000 */  lh      $t5, 0x0000($s0)           ## 00000032
/* 004E4 80B53894 A64D00B6 */  sh      $t5, 0x00B6($s2)           ## 000000B6
/* 004E8 80B53898 8FBF002C */  lw      $ra, 0x002C($sp)           
/* 004EC 80B5389C 8FB20028 */  lw      $s2, 0x0028($sp)           
/* 004F0 80B538A0 8FB10024 */  lw      $s1, 0x0024($sp)           
/* 004F4 80B538A4 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 004F8 80B538A8 03E00008 */  jr      $ra                        
/* 004FC 80B538AC 27BD0050 */  addiu   $sp, $sp, 0x0050           ## $sp = 00000000
