/*
 * FUN_5e004e50 (289 B) — DirectDraw wrapper helper (loop over param array).
 *
 * __stdcall, RET 0x14 (5 params).
 * Iterates over param_1[], comparing float fields (0x30 - 0x28) against a
 * constant and calling FUN_5e0042c0 to build an output list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;              /* DAT_5e035aa0 (float constant) */
extern void __cdecl FUN_5e0042c0(void);

__declspec(naked) int __stdcall FUN_5e004e50(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ebp + eax*4 - 4]
        xor     edx, edx
        mov     ebx, dword ptr [esi]
        fld     dword ptr [ecx + 0x30]
        fsub    dword ptr [ecx + 0x28]
        test    eax, eax
        fstp    dword ptr [esp + 0x18]
        jle     L_f66
        lea     esi, [ebx + ebx*2]
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x10], eax
        lea     esi, [ebx + esi*4]
        lea     esi, [edi + esi*4]
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x20], ebp
    L_e94:
        mov     eax, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [eax]
        fld     dword ptr [ebp + 0x30]
        fsub    dword ptr [ebp + 0x28]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01); MSVC6 rejects test ah,imm8 */
        les eax, dword ptr [ecx]
        jz      L_eeb
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6          /* __emit: TEST AH,0x1 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jnz     L_f32
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x1c]
        push    esi
        inc     edx
        push    0x2000
        push    ecx
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    edx
        mov     dword ptr [edi], esi
        push    ecx
        add     edi, 4
        push    ebp
        jmp     L_f25
    L_eeb:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [edi], ecx
        inc     edx
        add     edi, 4
        fnstsw ax
        test ah, 0x41
        jz      L_f32
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        push    0x2000
        push    ecx
        inc     edx
        mov     dword ptr [edi], esi
        fstp    dword ptr [esp]
        push    eax
        push    ebp
        mov     dword ptr [esp + 0x38], edx
        add     edi, 4
        push    ecx
    L_f25:
        call    FUN_5e0042c0
        inc     ebx
        add     esi, 0x34
        mov     edx, dword ptr [esp + 0x24]
    L_f32:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 4
        dec     eax
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x10], eax
        jnz     L_e94
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], ebx
        mov     eax, edx
        pop     ebx
        pop     ecx
        ret     0x14
    L_f66:
        mov     dword ptr [esi], ebx
        pop     esi
        pop     ebp
        mov     eax, edx
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
