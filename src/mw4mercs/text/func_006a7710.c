/*
 * FUN_006A7710 (672 B) — __thiscall animation frame update.
 *
 * Computes per-frame values and appends entries to a dynamic array,
 * growing it as needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a75c0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00419f10(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_005cbb20(void);
extern void __cdecl FUN_005b8a00(void);
extern float g_799e24;
extern float g_76d064;
extern float g_76c5b0;

__declspec(naked) void FUN_006a7710(void)
{
    __asm {
        sub     esp, 0xa0
        mov     edx, dword ptr [esp + 0xa4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [esi + 0x8]
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x68]
        push    eax
        call    FUN_006a75c0
        fld     dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x28], ecx
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [g_76d064]
        mov     eax, edx
        mov     dword ptr [esp + 0x4c], eax
        mov     eax, dword ptr [esp + 0xc0]
        fstp    dword ptr [esp + 0x44]
        add     esp, 0x10
        test    eax, eax
        fld     dword ptr [g_799e24]
        fadd    st(0), st(0)
        mov     dword ptr [esp + 0x20], edx
        fdiv    dword ptr [esi + 0x18]
        fstp    dword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x14]
        fst     dword ptr [esp + 0x14]
        jle     L_78aa
L_7783:
        dec     eax
        fmul    dword ptr [esi + 0x1c]
        jnz     L_7783
        fstp    dword ptr [esp + 0x14]
L_778d:
        call    FUN_00415020
        fmul    dword ptr [g_799e24]
        mov     dword ptr [esp + 0x4], 0
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [g_799e24]
        fadd    st(0), st(0)
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jnz     L_79a6
        mov     esi, dword ptr [esp + 0xac]
        push    ebx
        push    ebp
        push    edi
L_77c7:
        fld     dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        fstp    dword ptr [esp + 0x54]
        lea     ecx, [esp + 0x54]
        fld     dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x58], 0
        fsub    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_0040ca40
        fld     dword ptr [esp + 0x10]
        lea     eax, [esp + 0x74]
        fadd    dword ptr [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x84]
        mov     dword ptr [esp + 0x7c], 0
        fstp    dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x80], 0
        call    FUN_00419f10
        lea     ecx, [esp + 0x80]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        lea     ecx, [esp + 0x70]
        call    FUN_0041c680
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x6c]
        push    ecx
        lea     ecx, [esp + 0x70]
        call    FUN_0040c9e0
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0x60]
        call    FUN_0040c5d0
        mov     eax, dword ptr [esp + 0x5c]
        mov     edi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esi + 0x8]
        cmp     edi, eax
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x58], eax
        jz      L_78b1
        test    edi, edi
        jz      L_789f
        mov     eax, dword ptr [esp + 0x5c]
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [edi + 0x4], ecx
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [edi + 0x8], edx
L_789f:
        add     edi, 0xc
        mov     dword ptr [esi + 0x4], edi
        jmp     L_7980
L_78aa:
        fstp    st(0)
        jmp     L_778d
L_78b1:
        mov     esi, dword ptr [esi]
        mov     ecx, edi
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x18], edx
        lea     eax, [esp + 0x1c]
        jc      L_78e0
        lea     eax, [esp + 0x18]
L_78e0:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        jz      L_78fd
        lea     ecx, [eax + eax*2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_78ff
L_78fd:
        xor     ebp, ebp
L_78ff:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    ebp
        push    edi
        push    esi
        call    FUN_005b8a30
        mov     ebx, eax
        lea     eax, [esp + 0x40]
        push    eax
        push    ebx
        call    FUN_005cbb20
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        add     ebx, 0xc
        push    ebx
        push    edi
        push    edi
        call    FUN_005b8a30
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x80]
        sub     eax, esi
        mov     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        mov     ecx, dword ptr [esp + 0xe0]
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     esp, 0x28
        add     edx, eax
        push    edx
        push    esi
        mov     dword ptr [esp + 0x24], esi
        lea     esi, [ecx + 0x8]
        mov     ecx, esi
        call    FUN_005b8a00
        mov     eax, dword ptr [esp + 0xb8]
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x4], edi
        mov     eax, dword ptr [esp + 0x18]
        lea     edx, [eax + eax*2]
        lea     eax, [ebp + edx*4]
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0xb8]
L_7980:
        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x14]
        fst     dword ptr [esp + 0x10]
        fld     dword ptr [g_799e24]
        fadd    st(0), st(0)
        fxch
        fcompp
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_77c7
        pop     edi
        pop     ebp
        pop     ebx
L_79a6:
        pop     esi
        add     esp, 0xa0
        ret     0xc
    }
}
