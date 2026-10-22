/*
 * FUN_00684150 (452 B) — HUD aim/scan helper: given a HUD element
 * (param_1), iterates a list of candidate elements (via FUN_00684050),
 * computes squared 3D distance to each, and picks the nearest one,
 * storing it back into param_1[4]. Heavy FPU + fnstsw/test ah.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f268c;
extern float g_0076c5b0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005cb4c0(void);
extern void __cdecl FUN_00684050(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00684150(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x10]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      L_68430c
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        xor     ecx, 0x85739531
        cmp     esi, ecx
        jz      L_68430c
        mov     ebx, dword ptr [eax]
        cmp     ebx, edi
        jz      L_68430c
        mov     eax, dword ptr [g_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_68430c
        lea     edx, [esp + 0x1c]
        push    edx
        lea     eax, [esp + 0x17]
        push    eax
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x2c], edi
        mov     dword ptr [esp + 0x24], edi
        call    FUN_005cb4c0
        lea     ecx, [esp + 0x20]
        push    ecx
        add     esi, 0x370
        push    esi
        call    FUN_00684050
        mov     ebp, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x8
        cmp     ebp, eax
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x18], 0x501502f9
        jz      L_6842ff
    L_6841f6:
        mov     esi, dword ptr [ebp]
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_6842db
        mov     edx, eax
        mov     eax, dword ptr [edx + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x2c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    ebx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x34], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_0040ca10
        lea     edi, [ebx + 0xc]
        push    edi
        lea     ecx, [esp + 0x48]
        call    FUN_0040c610
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_684260
        mov     dword ptr [esp + 0x14], 0x0
        jmp     L_684275
    L_684260:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [ebx + 0x18]
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_684275
        mov     edx, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x14], edx
    L_684275:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    edi
        lea     ecx, [esp + 0x58]
        call    FUN_0040ca40
        lea     ecx, [esp + 0x50]
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x40]
        call    FUN_0040cbb0
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x40]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [esp + 0x18]
        __emit 0xDF  /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref needs no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_6842d9
        mov     edx, dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x1c], edx
        jmp     L_6842db
    L_6842d9:
        fstp    st(0)
    L_6842db:
        mov     eax, dword ptr [esp + 0x24]
        add     ebp, 0x4
        cmp     ebp, eax
        jnz     L_6841f6
        mov     eax, dword ptr [esp + 0x1c]
        xor     edi, edi
        cmp     eax, edi
        jz      L_6842fb
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [ecx + 0x10], eax
    L_6842fb:
        mov     ebp, dword ptr [esp + 0x20]
    L_6842ff:
        cmp     ebp, edi
        jz      L_68430c
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    L_68430c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
