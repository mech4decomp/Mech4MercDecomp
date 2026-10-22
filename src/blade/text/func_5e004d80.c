/*
 * FUN_5e004d80 (198 B) — DirectDraw wrapper helper.
 *
 * __stdcall, RET 0x8 (2 params: param_1, param_2).
 * Compares param_1[10] and param_2[10] (floats, offset 0x28) against a
 * constant; calls FUN_5e0042c0 and copies 13 dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern void __cdecl FUN_5e0042c0(void);

__declspec(naked) void __stdcall FUN_5e004d80(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    esi
        mov     ebx, dword ptr [esp + 0x48]
        push    edi
        mov     edi, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [ebx + 0x28]
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0xc], eax
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_5e035aa0]
        fld     dword ptr [esp + 0x48]
        fnstsw ax
        fcomp   dword ptr [g_5e035aa0]
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        les eax, dword ptr [ecx]
        fnstsw ax
        jz      L_e04
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_dc9
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x38
        ret     0x8
    L_dc9:
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x48]
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1000
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    edi
        push    ebx
        call    FUN_5e0042c0
        mov     ecx, 0xd
        lea     esi, [esp + 0x10]
        rep movsd
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x38
        ret     0x8
    L_e04:
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_e38
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x1000
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        push    ebx
        push    edi
        call    FUN_5e0042c0
        mov     ecx, 0xd
        lea     esi, [esp + 0x10]
        mov     edi, ebx
        rep movsd
    L_e38:
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x38
        ret     0x8
    }
}
