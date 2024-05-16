// It is likly this is the Ableton Live api function for actually handling and transforming the sample stream. I found 2 callbacks likly used for feedback.
// It may be impossible to compile this. Help me use this to deobfescute the parmeters.

// Missing functions?
// This will work by first jumping deep into the functions and slowly identifying their functional use.

undefined CalcA(longlong param_1, ulonglong param_2, undefined8 param_3, ulonglong param_4,
    longlong param_5, undefined8 param_6, undefined8 param_7, uint * param_8)

{
    int * piVar1;
    float * pfVar2;
    int iVar3;
    undefined auVar4[16];
    undefined auVar5[16];
    undefined auVar6[16];
    undefined auVar7[16];
    undefined auVar8[16];
    undefined auVar9[16];
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong in_R8;
    bool bVar15;
    float fVar16;
    undefined4 in_XMM1_Da;
    float fVar17;
    undefined4 in_XMM1_Db;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined local_49;
    longlong local_48;
    ulonglong local_40;

    /* 0x1b60  1  CalcA */
    if (param_1 == 0) {
        return 0;
    }
    local_49 = 0;
    FUN_18000d1f0(param_5, CONCAT44(in_XMM1_Db, in_XMM1_Da), param_3, param_4);
    iVar3 = * (int * )( * (longlong * )( * (longlong * )(param_1 + 0xe0028) + 0x98) + 0x3010);
    *(undefined8 * )(param_1 + 0xe0058) = param_7;
    if (param_8 == (uint * ) 0x0) {
        bVar15 = false;
    } else {
        bVar15 = * param_8 != 0;
    }
    local_40 = param_4;
    uVar10 = FUN_1800027e0(param_1, & local_48, param_2 & 0xffffffff, bVar15, & local_49);
    if (iVar3 != 0) {
        if ( * (longlong ** )(param_1 + 8) != (longlong * ) 0x0) {
            ( ** (code ** )( ** (longlong ** )(param_1 + 8) + 0x78))();
        }
        if (0 < (longlong) param_2) {
            fVar17 = 1.0;
            fVar16 = 1.0 / (float) param_2;
            if ((param_2 < 4) || ((in_R8 < param_4 + param_2 * 4 && (param_4 < in_R8 + param_2 * 4)))) {
                uVar11 = 0;
                uVar12 = 0xffffffffffffffff;
            } else {
                uVar11 = param_2 & 0xfffffffffffffffc;
                fVar17 = fVar16 * -0.0 + 1.0;
                fVar18 = fVar16 * -1.0 + 1.0;
                fVar19 = fVar16 * -2.0 + 1.0;
                fVar20 = fVar16 * -3.0 + 1.0;
                uVar12 = (uVar11 - 4 >> 2) + 1;
                if (uVar11 - 4 == 0) {
                    lVar14 = 0;
                } else {
                    fVar21 = fVar16 * 4.0;
                    lVar13 = -(uVar12 & 0xfffffffffffffffe);
                    lVar14 = 0;
                    do {
                        pfVar2 = (float * )(in_R8 + lVar14 * 4);
                        auVar6._4_4_ = pfVar2[1] * fVar18;
                        auVar6._0_4_ = * pfVar2 * fVar17;
                        auVar6._8_4_ = pfVar2[2] * fVar19;
                        auVar6._12_4_ = pfVar2[3] * fVar20;
                        *(undefined( * )[16])(in_R8 + lVar14 * 4) = auVar6;
                        pfVar2 = (float * )(param_4 + lVar14 * 4);
                        auVar7._4_4_ = pfVar2[1] * fVar18;
                        auVar7._0_4_ = * pfVar2 * fVar17;
                        auVar7._8_4_ = pfVar2[2] * fVar19;
                        auVar7._12_4_ = pfVar2[3] * fVar20;
                        *(undefined( * )[16])(param_4 + lVar14 * 4) = auVar7;
                        fVar17 = fVar17 - fVar21;
                        fVar18 = fVar18 - fVar21;
                        fVar19 = fVar19 - fVar21;
                        fVar20 = fVar20 - fVar21;
                        pfVar2 = (float * )(in_R8 + 0x10 + lVar14 * 4);
                        auVar8._4_4_ = pfVar2[1] * fVar18;
                        auVar8._0_4_ = * pfVar2 * fVar17;
                        auVar8._8_4_ = pfVar2[2] * fVar19;
                        auVar8._12_4_ = pfVar2[3] * fVar20;
                        *(undefined( * )[16])(in_R8 + 0x10 + lVar14 * 4) = auVar8;
                        pfVar2 = (float * )(param_4 + 0x10 + lVar14 * 4);
                        auVar9._4_4_ = pfVar2[1] * fVar18;
                        auVar9._0_4_ = * pfVar2 * fVar17;
                        auVar9._8_4_ = pfVar2[2] * fVar19;
                        auVar9._12_4_ = pfVar2[3] * fVar20;
                        *(undefined( * )[16])(param_4 + 0x10 + lVar14 * 4) = auVar9;
                        lVar14 = lVar14 + 8;
                        fVar17 = fVar17 - fVar21;
                        fVar18 = fVar18 - fVar21;
                        fVar19 = fVar19 - fVar21;
                        fVar20 = fVar20 - fVar21;
                        lVar13 = lVar13 + 2;
                    } while (lVar13 != 0);
                }
                if ((uVar12 & 1) != 0) {
                    pfVar2 = (float * )(in_R8 + lVar14 * 4);
                    auVar4._4_4_ = pfVar2[1] * fVar18;
                    auVar4._0_4_ = * pfVar2 * fVar17;
                    auVar4._8_4_ = pfVar2[2] * fVar19;
                    auVar4._12_4_ = pfVar2[3] * fVar20;
                    *(undefined( * )[16])(in_R8 + lVar14 * 4) = auVar4;
                    pfVar2 = (float * )(param_4 + lVar14 * 4);
                    auVar5._4_4_ = pfVar2[1] * fVar18;
                    auVar5._0_4_ = * pfVar2 * fVar17;
                    auVar5._8_4_ = pfVar2[2] * fVar19;
                    auVar5._12_4_ = pfVar2[3] * fVar20;
                    *(undefined( * )[16])(param_4 + lVar14 * 4) = auVar5;
                }
                if (uVar11 == param_2) goto LAB_180001db5;
                fVar17 = 1.0 - (float) uVar11 * fVar16;
                uVar12 = ~uVar11;
            }
            if ((param_2 & 1) != 0) {
                *(float * )(in_R8 + uVar11 * 4) = * (float * )(in_R8 + uVar11 * 4) * fVar17;
                *(float * )(param_4 + uVar11 * 4) = * (float * )(param_4 + uVar11 * 4) * fVar17;
                fVar17 = fVar17 - fVar16;
                uVar11 = uVar11 | 1;
            }
            if (uVar12 + param_2 != 0) {
                do {
                    *(float * )(in_R8 + uVar11 * 4) = * (float * )(in_R8 + uVar11 * 4) * fVar17;
                    *(float * )(param_4 + uVar11 * 4) = * (float * )(param_4 + uVar11 * 4) * fVar17;
                    fVar17 = fVar17 - fVar16;
                    *(float * )(in_R8 + 4 + uVar11 * 4) = * (float * )(in_R8 + 4 + uVar11 * 4) * fVar17;
                    *(float * )(param_4 + 4 + uVar11 * 4) = * (float * )(param_4 + 4 + uVar11 * 4) * fVar17;
                    fVar17 = fVar17 - fVar16;
                    uVar11 = uVar11 + 2;
                } while (param_2 != uVar11);
            }
        }
    }
    LAB_180001db5:
        if ((param_8 != (uint * ) 0x0) && ( * param_8 = (uint) uVar10 & 0xff, (uVar10 & 0xff) != 0)) {
            lVar14 = 0;
            if (0 < (longlong) param_2) {
                do {
                    if (( * (float * )(in_R8 + lVar14 * 4) < -1e-05) || ( * (float * )(param_4 + lVar14 * 4) < -1e-05)) {
                        *(undefined4 * )(param_1 + 0xe04fc) = * (undefined4 * )(param_1 + 0xe04f8);
                        return local_49;
                    }
                    lVar14 = lVar14 + 1;
                } while (lVar14 < (longlong) param_2);
            }
            piVar1 = (int * )(param_1 + 0xe04fc);
            iVar3 = * piVar1;
            * piVar1 = * piVar1 - (int) lVar14;
            if ( * piVar1 == 0 || SBORROW4(iVar3, (int) lVar14) != * piVar1 < 0) {
                * param_8 = 0;
                *(undefined4 * )(param_1 + 0xe04fc) = 0;
            }
        }
    return local_49;
}
