/*
 * FUN_5e004f80 (204 B) — DirectDraw wrapper helper.
 *
 * __stdcall, RET 0x8 (2 params: param_1, param_2).
 * Compares param_1[0xc]-param_1[10] and param_2[0xc]-param_2[10] (floats)
 * against a constant; calls FUN_5e0042c0 and copies 13 dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern void __cdecl FUN_5e0042c0(void);

__declspec(naked) void __stdcall FUN_5e004f80(void)
{
    __asm {
        sub     esp, 0x38
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x48]
        mov     ebx, dword ptr [esp + 0x4c]
        fld     dword ptr [edi + 0x30]
        fsub    dword ptr [edi + 0x28]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [ebx + 0x30]
        fsub    dword ptr [ebx + 0x28]
        fstp    dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [g_5e035aa0]
        fld     dword ptr [esp + 0x48]
        fnstsw ax
        fcomp   dword ptr [g_5e035aa0]
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        les eax, dword ptr [ecx]
        fnstsw ax
        jz      L_500a
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_4fcf
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x38
        ret     0x8
    L_4fcf:
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0xc]
        lea     eax, [esp + 0x10]
        push    eax
        push    0x2000
        push    ecx
        mov     ecx, dword ptr [esp + 0x54]
        fstp    dword ptr [esp]
        push    ecx
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
    L_500a:
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_503e
        fld     dword ptr [esp + 0xc]
        fsub    dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0xc]
        lea     edx, [esp + 0x10]
        push    edx
        push    0x2000
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        push    ebx
        push    edi
        call    FUN_5e0042c0
        mov     ecx, 0xd
        lea     esi, [esp + 0x10]
        mov     edi, ebx
        rep movsd
    L_503e:
        pop     edi
        pop     esi
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x38
        ret     0x8
    }
}
