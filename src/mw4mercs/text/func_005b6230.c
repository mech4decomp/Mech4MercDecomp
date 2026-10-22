/*
 * FUN_005b6230 (1377 B) — __thiscall (ECX = this), RET 4 (one float param).
 * Complex physics/rotation update with heavy FPU math and several helper
 * calls plus virtual method dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *param);
extern float __stdcall FUN_005f2b10(void *a, void *b);
extern void __stdcall FUN_0040ca10(void *a, void *b);
extern void __stdcall FUN_0041c830(void *a, void *b);
extern void __stdcall FUN_0040ca40(void *a, float b);
extern void __stdcall FUN_0041c6e0(void *a, void *b);
extern void __stdcall FUN_00419460(void *param);
extern float __stdcall FUN_005b4d30(void *a, void *b);
extern void __stdcall FUN_0041a070(void *param);
extern void __stdcall FUN_004daa20(void *param);

__declspec(naked) void __stdcall FUN_005b6230(void)
{
    

extern int DAT_007866d4;
extern int DAT_007822e8;
extern int DAT_00775c18;
extern int DAT_0077a198;
extern int DAT_0076c5b0;
extern int DAT_007b220c;
extern int DAT_0077d094;
extern int DAT_0077d090;
extern int DAT_0076d064;
extern int DAT_007866d0;
extern int DAT_007866cc;
extern int DAT_00770168;
extern int DAT_007748c8;
extern int DAT_0076d070;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        push    edi
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00419480
        lea     edi, [esi + 0x584]
        push    esi
        push    edi
        call    FUN_005f2b10
        fcom dword ptr [DAT_007866d4]
        add     esp, 0x8
        fnstsw ax
        test    ah, 0x40
        jz      L_6278
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    st(0)
        mov     dword ptr [ebp - 0x4], ecx
        jmp     L_6281
L_6278:
        fadd    dword ptr [esi + 0x540]
        fstp    dword ptr [ebp - 0x4]
L_6281:
        lea     edx, [ebp - 0x1c]
        push    edx
        push    edi
        lea     ecx, [ebp - 0x10]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x4]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x4]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x20], eax
        fld     dword ptr [ebp - 0x20]
        fcomp dword ptr [DAT_007822e8]
        fnstsw ax
        test    ah, 0x1
        jz      L_633a
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        fld     dword ptr [ebp - 0x4]
        fmul dword ptr [DAT_00775c18]
        fmulp   st(1), st
        fmul dword ptr [DAT_0077a198]
        fstp    dword ptr [esi + 0x590]
        fld     dword ptr [esi + 0x59c]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [esi + 0x59c]
        fnstsw ax
        test    ah, 0x1
        jz      L_632f
        fchs
L_632f:
        fstp    dword ptr [esi + 0x438]
        jmp     L_6487
L_633a:
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [eax + 0x2d4]
        fadd    dword ptr [esi + 0x590]
        fst     dword ptr [esi + 0x590]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x1
        jz      L_6371
        mov     dword ptr [esi + 0x590], 0x0
        jmp     L_63a4
L_6371:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        fmul dword ptr [DAT_0077a198]
        fcomp   dword ptr [esi + 0x590]
        fnstsw ax
        test    ah, 0x1
        jz      L_63a4
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul dword ptr [DAT_0077a198]
        fstp    dword ptr [esi + 0x590]
L_63a4:
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        push    edi
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x34]
        fmul    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebp - 0x3c]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x38]
        fmul    dword ptr [ebp - 0x38]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x24], eax
        fld     dword ptr [ebp - 0x24]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jz      L_645e
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x24], ecx
        mov     eax, dword ptr [ebp - 0x24]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x20], eax
        fld     dword ptr [ebp - 0x20]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jz      L_645e
        fld     dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x34]
        fpatan
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x1
        jz      L_645e
        fld     dword ptr [esi + 0x59c]
        fcomp dword ptr [DAT_0077d094]
        fnstsw ax
        test    ah, 0x1
        jz      L_6452
        mov     dword ptr [esi + 0x438], 0x3f000000
        jmp     L_6487
L_6452:
        mov     dword ptr [esi + 0x438], 0xbdcccccd
        jmp     L_6487
L_645e:
        fld     dword ptr [esi + 0x59c]
        fcomp dword ptr [DAT_0077d090]
        fnstsw ax
        test    ah, 0x41
        jnz     L_647d
        mov     dword ptr [esi + 0x438], 0xbf000000
        jmp     L_6487
L_647d:
        mov     dword ptr [esi + 0x438], 0x3dcccccd
L_6487:
        fld     dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fadd    dword ptr [ebp - 0x4]
        fabs
        fstp    st(2)
        fstp    st(0)
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw ax
        test    ah, 0x1
        jz      L_6789
        fld     dword ptr [ebp - 0x8]
        push    ebx
        fmul    dword ptr [ebp - 0x8]
        push    ecx
        fld     dword ptr [ebp - 0xc]
        lea     edx, [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        lea     ecx, [ebp - 0x10]
        faddp   st(1), st
        fadd    dword ptr [ebp - 0x4]
        fsqrt
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x8]
        fmul    st, st(1)
        fstp    dword ptr [ebp - 0x8]
        fstp    st(0)
        fld     dword ptr [esi + 0x590]
        fstp    dword ptr [esp]
        push    edx
        call    FUN_0040ca40
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x8]
        lea     edi, [esi + 0x198]
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        mov     dword ptr [edi + 0x4], ecx
        push    edi
        lea     ecx, [esi + 0x168]
        mov     dword ptr [edi + 0x8], edx
        call    FUN_0041c6e0
        mov     ecx, dword ptr [esi + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp + 0xffffff7c]
        call    FUN_00419460
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [edi]
        mov     edx, dword ptr [esi + 0x78]
        lea     ebx, [esi + 0x594]
        fadd    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [edi + 0x4]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [edi + 0x8]
        lea     edi, [esi + 0x78]
        mov     ecx, edi
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp + 0x8]
        fmul    dword ptr [esi + 0x430]
        fadd    dword ptr [ebx]
        fstp    dword ptr [ebx]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x2b4]
        mov     eax, dword ptr [edi]
        fmul    dword ptr [esi + 0x434]
        mov     ecx, edi
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [esi + 0x598]
        fstp    dword ptr [esi + 0x598]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x2b4]
        fmul    dword ptr [ebp + 0x8]
        fmul    dword ptr [esi + 0x438]
        fadd    dword ptr [esi + 0x59c]
        fstp    dword ptr [esi + 0x59c]
        fld     dword ptr [esi + 0x59c]
        fcomp dword ptr [DAT_0077d090]
        fnstsw ax
        test    ah, 0x1
        jz      L_65ea
        mov     dword ptr [esi + 0x59c], 0xbe4ccccd
        jmp     L_6607
L_65ea:
        fld     dword ptr [esi + 0x59c]
        fcomp dword ptr [DAT_0077d094]
        fnstsw ax
        test    ah, 0x41
        jnz     L_6607
        mov     dword ptr [esi + 0x59c], 0x3e4ccccd
L_6607:
        fld     dword ptr [esi + 0x598]
        fcomp dword ptr [DAT_007866d0]
        fnstsw ax
        test    ah, 0x1
        jz      L_6626
        mov     dword ptr [esi + 0x598], 0xbeb33333
        jmp     L_6643
L_6626:
        fld     dword ptr [esi + 0x598]
        fcomp dword ptr [DAT_007866cc]
        fnstsw ax
        test    ah, 0x41
        jnz     L_6643
        mov     dword ptr [esi + 0x598], 0x3eb33333
L_6643:
        mov     edx, dword ptr [esi]
        lea     eax, [ebp - 0x48]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        lea     ecx, [ebp - 0x54]
        push    ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x164]
        fld     dword ptr [ebp - 0x54]
        fadd    dword ptr [ebp - 0x1c]
        lea     ecx, [ebp - 0x30]
        push    esi
        push    ecx
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x50]
        fadd    dword ptr [ebp - 0x18]
        fst     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x4c]
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x48]
        fadd    dword ptr [ebx]
        fstp    dword ptr [ebx]
        fld     dword ptr [ebp - 0x44]
        fadd    dword ptr [esi + 0x598]
        fstp    dword ptr [esi + 0x598]
        fld     dword ptr [ebp - 0x40]
        fadd    dword ptr [esi + 0x59c]
        fstp    dword ptr [esi + 0x59c]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x1c]
        fadd dword ptr [DAT_00770168]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x14]
        fadd dword ptr [DAT_00770168]
        fstp    dword ptr [ebp - 0x28]
        call    FUN_005b4d30
        fstp    dword ptr [ebp - 0x24]
        lea     edx, [ebp - 0x30]
        fld     dword ptr [ebp - 0x30]
        push    esi
        fsub dword ptr [DAT_007748c8]
        push    edx
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x28]
        fsub dword ptr [DAT_007748c8]
        fstp    dword ptr [ebp - 0x28]
        call    FUN_005b4d30
        fadd    dword ptr [ebp - 0x24]
        mov     eax, dword ptr [edi]
        add     esp, 0x10
        mov     ecx, edi
        fmul dword ptr [DAT_0076d070]
        fadd    dword ptr [esi + 0x540]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x4]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [ebp - 0x4]
        mov     ecx, eax
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ebp + 0x8]
        fnstsw ax
        test    ah, 0x41
        jnz     L_671f
        fmul    dword ptr [ecx + 0x318]
        jmp     L_6725
L_671f:
        fmul    dword ptr [ecx + 0x31c]
L_6725:
        fld     st(0)
        fchs
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ebp + 0x8]
        fnstsw ax
        test    ah, 0x1
        jz      L_6743
        mov     ecx, dword ptr [ebp + 0x8]
        fstp    st(0)
        mov     dword ptr [ebp - 0x4], ecx
        jmp     L_6756
L_6743:
        fld     dword ptr [ebp - 0x4]
        fcomp
        fnstsw ax
        test    ah, 0x41
        jnz     L_6754
        fstp    dword ptr [ebp - 0x4]
        jmp     L_6756
L_6754:
        fstp    st(0)
L_6756:
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x1c]
        fadd    dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x14]
        push    ebx
        lea     ecx, [ebp + 0xffffff7c]
        fst     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x78], edx
        fstp    dword ptr [ebp - 0x68]
        mov     dword ptr [ebp - 0x58], eax
        call    FUN_0041a070
        lea     ecx, [ebp + 0xffffff7c]
        push    ecx
        mov     ecx, esi
        call    FUN_004daa20
        pop     ebx
L_6789:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
