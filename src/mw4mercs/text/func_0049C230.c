/*
 * FUN_0049C230 (939 B) — __thiscall (this in ecx), 1 arg, ret 4.
 * MLR object update: allocates/reallocates a 0x58-byte element array,
 * initializes each element, and does heavy FPU vector math (normalize,
 * lerp) writing results back into the array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_770264;
extern float g_76d064;
extern float g_7b8d18;
extern float g_7b8d1c;
extern float g_7b8d20;
extern int g_7da884;

extern void __cdecl FUN_004941d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0049d380(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00495e30(void);

__declspec(naked) void FUN_0049C230(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_004941d0
        mov     ebx, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [ebx + 0x190]
        test    ecx, ecx
        lea     eax, [ebx + 0x190]
        je      L_49c34f
        mov     ecx, dword ptr [ebx + 0x174]
        test    ecx, ecx
        jne     L_49c34f
        mov     ecx, dword ptr [g_7da884]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ebx
        call    dword ptr [edx + 8]
        mov     esi, dword ptr [ebx + 0x174]
        cmp     esi, dword ptr [edi + 0xa4]
        je      L_49c34f
        test    esi, esi
        jbe     L_49c32a
        lea     eax, [esi + esi*4]
        lea     ecx, [esi + eax*2]
        shl     ecx, 3
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        add     esp, 4
        test    ebp, ebp
        je      L_49c2bb
        push    0x49d370
        push    esi
        push    0x58
        push    ebp
        call    FUN_00406c90
        mov     dword ptr [esp + 0x30], ebp
        jmp     L_49c2c7
L_49c2bb:
        mov     dword ptr [esp + 0x30], 0
        mov     ebp, dword ptr [esp + 0x30]
L_49c2c7:
        mov     ecx, dword ptr [edi + 0xa0]
        test    ecx, ecx
        je      L_49c322
        mov     eax, dword ptr [edi + 0xa4]
        cmp     esi, eax
        jae     L_49c2dd
        mov     eax, esi
L_49c2dd:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_49c30f
        lea     edx, [eax + eax*4]
        lea     edx, [eax + edx*2]
        sub     ecx, ebp
        lea     esi, [ebp + edx*8]
        mov     dword ptr [esp + 0x18], ecx
        lea     ebp, [eax + 1]
        jmp     L_49c2fd
L_49c2f9:
        mov     ecx, dword ptr [esp + 0x18]
L_49c2fd:
        add     ecx, esi
        push    ecx
        mov     ecx, esi
        call    FUN_0049d380
        dec     ebp
        sub     esi, 0x58
        test    ebp, ebp
        ja      L_49c2f9
L_49c30f:
        mov     eax, dword ptr [edi + 0xa0]
        push    eax
        call    FUN_004084e0
        mov     ebp, dword ptr [esp + 0x34]
        add     esp, 4
L_49c322:
        mov     dword ptr [edi + 0xa0], ebp
        jmp     L_49c343
L_49c32a:
        mov     eax, dword ptr [edi + 0xa0]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0xa0], 0
L_49c343:
        mov     eax, dword ptr [ebx + 0x174]
        mov     dword ptr [edi + 0xa4], eax
L_49c34f:
        mov     eax, dword ptr [edi + 0xa4]
        xor     ecx, ecx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], ecx
        jle     L_49c5d1
        mov     eax, dword ptr [edi + 0xa0]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        lea     ebp, [eax + 0x50]
        jmp     L_49c37e
L_49c37a:
        mov     eax, dword ptr [esp + 0x18]
L_49c37e:
        mov     edi, eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        mov     ecx, dword ptr [ebx + 0x178]
        add     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_0040d030
        mov     edx, dword ptr [ebx + 0x188]
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + edi*4]
        push    0
        push    0
        lea     ecx, [ebx + 0xa0]
        mov     dword ptr [ebp - 0x20], 0
        mov     dword ptr [ebp - 0x18], eax
        call    FUN_00495e60
        mov     al, byte ptr [ebx + 0xc0]
        fstp    dword ptr [esp + 0x10]
        test    al, al
        je      L_49c3ee
        fld     dword ptr [ebp - 0x18]
        push    0
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebx + 0xac]
        call    FUN_00495e10
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_49c3ee:
        fld     dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_770264]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6            /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        je      L_49c40b
        fstp    st(0)
        fld     dword ptr [g_770264]
L_49c40b:
        fld     dword ptr [g_76d064]
        mov     edx, dword ptr [esp + 0x14]
        fdiv    st(0), st(1)
        mov     eax, dword ptr [ebx + 0x178]
        add     eax, edx
        fstp    dword ptr [ebp - 0x1c]
        fstp    st(0)
        fld     dword ptr [eax]
        fsub    dword ptr [ebx + 0x164]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [ebx + 0x168]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [ebx + 0x16c]
        fstp    dword ptr [esp + 0x28]
        call    FUN_00415020
        fld     dword ptr [g_76d064]
        lea     esi, [ebx + 0x80]
        fsub    st(0), st(1)
        push    0
        mov     ecx, esi
        fmul    dword ptr [ebx + 0x64]
        fld     dword ptr [ebx + 0x6c]
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fstp    st(1)
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [g_7b8d18]
        fmul    st(0), st(1)
        fadd    dword ptr [g_7b8d18]
        fstp    dword ptr [ebp - 8]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [g_7b8d1c]
        fmul    st(0), st(1)
        fadd    dword ptr [g_7b8d1c]
        fstp    dword ptr [ebp - 4]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [g_7b8d20]
        fmul    st(0), st(1)
        fadd    dword ptr [g_7b8d20]
        fstp    dword ptr [ebp]
        fstp    st(0)
        fld     dword ptr [ebp]
        fld     dword ptr [ebp - 4]
        fld     dword ptr [ebp - 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 8]
        fld     st(0)
        fmul    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 4]
        fmul    dword ptr [ebp]
        fstp    dword ptr [ebp]
        call    FUN_00495e30
        mov     edx, dword ptr [esi + 4]
        lea     ecx, [eax + eax*2]
        fld     dword ptr [edx + ecx*4 + 4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax]
        fsubr   dword ptr [eax + 8]
        mov     al, byte ptr [ebx + 0x98]
        test    al, al
        fst     dword ptr [esp + 0x10]
        je      L_49c52a
        fstp    st(0)
        push    0
        fld     dword ptr [ebp - 0x18]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebx + 0x8c]
        call    FUN_00495e60
        fmul    dword ptr [esp + 0x10]
L_49c52a:
        mov     eax, dword ptr [ebx + 0x150]
        fld     st(0)
        fmul    dword ptr [ebp - 8]
        mov     dword ptr [esp + 0x30], eax
        mov     al, byte ptr [ebx + 0x160]
        test    al, al
        fstp    dword ptr [ebp - 8]
        fld     st(0)
        fmul    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 4]
        fmul    dword ptr [ebp]
        fstp    dword ptr [ebp]
        je      L_49c56b
        fld     dword ptr [ebx + 0x15c]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebx + 0x158]
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
L_49c56b:
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [g_76d064]
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [ebp - 0x14]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [g_76d064]
        fmul    dword ptr [esp + 0x30]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00415020
        mov     esi, dword ptr [esp + 0x18]
        fadd    st(0), st(0)
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        fsub    dword ptr [g_76d064]
        inc     edi
        add     esi, 0x58
        add     ecx, 0xc
        fmul    dword ptr [esp + 0x30]
        add     ebp, 0x58
        cmp     edi, eax
        fstp    dword ptr [ebp - 0x64]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x14], ecx
        jl      L_49c37a
L_49c5d1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
