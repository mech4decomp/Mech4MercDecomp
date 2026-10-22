/*
 * FUN_00755230 (68 B) — DirectInputCreate wrapper.
 *
 * Calls the IAT function pointer at 0x8AAD78 with (param_1, param_2,
 * param_3, param_4). If result != 0, formats an error via FUN_006FABF0
 * and breaks (INT3) if the format call returns nonzero.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_008aad78;
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_00755230(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xC]
        push    eax
        push    ecx
        push    edi
        push    edx
        call    dword ptr [g_008aad78]
        mov     esi, eax
        test    esi, esi
        jz      done
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AE128
        call    FUN_006FABF0
        add     esp, 0x10
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x10
    }
}
