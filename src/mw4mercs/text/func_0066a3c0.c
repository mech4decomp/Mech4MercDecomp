/*
 * FUN_0066a3c0 (1771 B) — GameData field setter/validator. Dispatches on
 * param_2[4] via a 21-entry jump table (0x66aaac), sets a default value
 * through a virtual call when the incoming string is empty, then validates
 * the resulting field and emits an _snprintf error message on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0079666c;                 /* _DAT_0079666c */
extern float g_00796af0;                 /* _DAT_00796af0 */
extern float g_00770168;                 /* _DAT_00770168 */
extern float g_00796668;                 /* _DAT_00796668 */
extern float g_0076c5b0;                 /* _DAT_0076c5b0 */
extern int   g_jt_66aaac[];              /* jump table @ 0x66aaac */
extern void __cdecl FUN_0062efa0(void);
extern int (__cdecl *g_0076b424)(const char *, ...);  /* _snprintf IAT */

__declspec(naked) void FUN_0066a3c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_0062efa0
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x1e
        add     esp, 0x14
        cmp     eax, 0x14
        ja      L_aaa2
        jmp     dword ptr [eax*4 + g_jt_66aaac]

        /* case 0x1e: FullStopTurnRate */
        test    bl, bl
        jnz     L_428
        fld     dword ptr [g_0079666c]
        mov     eax, dword ptr [edi]
        fmul    dword ptr [g_00796af0]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        fstp    dword ptr [esp + 0x14]
        call    dword ptr [eax + 0x4]
        mov     cl, 1
L_428:
        fld     dword ptr [esi + 0x2b4]
        fld     dword ptr [g_0079666c]
        fmul    dword ptr [g_00770168]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_aaa2
        fld     dword ptr [esi + 0x2b4]
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        fmul    dword ptr [g_00796668]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796ab8
        push    edx
        push    ecx
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x1f: TopSpeedTurnRate */
        test    bl, bl
        jnz     L_49f
        fld     dword ptr [g_0079666c]
        mov     edx, dword ptr [edi]
        fmul    dword ptr [g_00796af0]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        fstp    dword ptr [esp + 0x14]
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_49f:
        fld     dword ptr [esi + 0x2b0]
        fld     dword ptr [g_0079666c]
        fmul    dword ptr [g_00770168]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_aaa2
        mov     ecx, dword ptr [esi + 0x2b0]
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    0x796a80
        push    edx
        push    ecx
        call    dword ptr [g_0076b424]
        add     esp, 0x10
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x20: MaxReverseSpeed */
        test    bl, bl
        jnz     L_503
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_503:
        fld     dword ptr [esi + 0x2bc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2bc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796a50
        jmp     L_aa8d

        /* case 0x21: MinReverseSpeed */
        test    bl, bl
        jnz     L_54d
        mov     ecx, dword ptr [esi + 0x2bc]
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        mov     dword ptr [esp + 0x10], ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_54d:
        fld     dword ptr [esi + 0x2c8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2c8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796a20
        jmp     L_aa8d

        /* case 0x22: MaxSpeed */
        test    bl, bl
        jnz     L_595
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_595:
        fld     dword ptr [esi + 0x2b8]
        fcomp   dword ptr [esi + 0x2bc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_aaa2
        fld     dword ptr [esi + 0x2bc]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fld     dword ptr [esi + 0x2b8]
        fstp    qword ptr [esp]
        push    0x7969e8
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x1c
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x23: MinMaxSpeed */
        test    bl, bl
        jnz     L_602
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0xbf800000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_602:
        fld     dword ptr [esi + 0x2c4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_aaa2
        fld     dword ptr [esi + 0x2c4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7969b4
        jmp     L_aa8d

        /* case 0x24: MinSpeed */
        test    bl, bl
        jnz     L_64a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_64a:
        fld     dword ptr [esi + 0x2c0]
        fcomp   dword ptr [esi + 0x2c4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2c0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796970
        jmp     L_aa8d

        /* case 0x25: Acceleration */
        test    bl, bl
        jnz     L_692
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_692:
        fld     dword ptr [esi + 0x2d4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2d4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79693c
        jmp     L_aa8d

        /* case 0x26: Decceleration */
        test    bl, bl
        jnz     L_6da
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_6da:
        fld     dword ptr [esi + 0x2d8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2d8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796908
        jmp     L_aa8d

        /* case 0x27: ReverseAccelerationMultiplier */
        test    bl, bl
        jnz     L_722
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_722:
        fld     dword ptr [esi + 0x2dc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2dc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7968c4
        jmp     L_aa8d

        /* case 0x28: ReverseDeccelerationMultiplier */
        test    bl, bl
        jnz     L_76a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_76a:
        fld     dword ptr [esi + 0x2e0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2e0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796880
        jmp     L_aa8d

        /* case 0x29: TargetLockTime */
        test    bl, bl
        jnz     L_7b2
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x40400000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_7b2:
        fld     dword ptr [esi + 0x2e4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2e4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x79684c
        jmp     L_aa8d

        /* case 0x2a: MaxGimpSpeed */
        test    bl, bl
        jnz     L_7fa
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_7fa:
        fld     dword ptr [esi + 0x2d0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2d0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796810
        jmp     L_aa8d

        /* case 0x2b: MinStandTransitionSpeed */
        test    bl, bl
        jnz     L_842
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_842:
        fld     dword ptr [esi + 0x2cc]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2cc]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7967e0
        jmp     L_aa8d

        /* case 0x2c: MaxSlope */
        test    bl, bl
        jnz     L_88a
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x425c0000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_88a:
        fld     dword ptr [esi + 0x29c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8b3
        fld     dword ptr [esi + 0x29c]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7967b0
        jmp     L_aa8d
L_8b3:
        fld     dword ptr [g_0079666c]
        mov     al, cl
        fmul    dword ptr [esi + 0x29c]
        fstp    dword ptr [esi + 0x29c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x2d: StartSlopeDeceleration */
        test    bl, bl
        jnz     L_8e9
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x42200000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_8e9:
        fld     dword ptr [esi + 0x2a0]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_912
        fld     dword ptr [esi + 0x2a0]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796774
        jmp     L_aa8d
L_912:
        fld     dword ptr [g_0079666c]
        mov     al, cl
        fmul    dword ptr [esi + 0x2a0]
        fstp    dword ptr [esi + 0x2a0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x2e: SlopeDecel1 */
        test    bl, bl
        jnz     L_948
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x41a00000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_948:
        fld     dword ptr [esi + 0x2a4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2a4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796744
        jmp     L_aa8d

        /* case 0x2f: SlopeDecel2 */
        test    bl, bl
        jnz     L_990
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x42200000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_990:
        fld     dword ptr [esi + 0x2a8]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2a8]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796714
        jmp     L_aa8d

        /* case 0x30: SlopeDecel3 */
        test    bl, bl
        jnz     L_9d8
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x42700000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_9d8:
        fld     dword ptr [esi + 0x2ac]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_aaa2
        fld     dword ptr [esi + 0x2ac]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x7966e4
        jmp     L_aa8d

        /* case 0x31: AttackType */
        test    bl, bl
        jnz     L_aa20
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_aa20:
        mov     esi, dword ptr [esi + 0x2f0]
        test    esi, esi
        jge     L_aaa2
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    esi
        push    0x7966b4
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x10
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

        /* case 0x32: TreadLength */
        test    bl, bl
        jnz     L_aa69
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x40c00000
        call    dword ptr [edx + 0x4]
        mov     cl, 1
L_aa69:
        fld     dword ptr [esi + 0x2f4]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_aaa2
        fld     dword ptr [esi + 0x2f4]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    0x796684
L_aa8d:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        xor     cl, cl
L_aaa2:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
