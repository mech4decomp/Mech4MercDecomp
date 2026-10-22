/*
 * FUN_5e004990 (198 B) — DirectDraw wrapper helper.
 *
 * __stdcall, RET 0x8 (2 params: param_1, param_2).
 * Compares param_1[9] and param_2[9] (floats) against a constant;
 * depending on ordering calls FUN_5e0042c0 and copies 13 dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern void __cdecl FUN_5e0042c0(void);

__declspec(naked) void __stdcall FUN_5e004990(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    esi
        mov     ebx, dword ptr [esp + 0x48]
        push    edi
        mov     edi, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [ebx + 0x24]
        mov     eax, dword ptr [edi + 0x24]
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
        jz      L_a14
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_49d9
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x38
        ret     0x8
    L_49d9:
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x48]
        lea     edx, [esp + 0x10]
        push    edx
        push    0x400
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
    L_a14:
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_a48
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x400
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
    L_a48:
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x38
        ret     0x8
    }
}
