/*
 * FUN_007422A0 (66 B) — UnregisterApplication wrapper.
 *
 * Calls virtual method [vtable+0x44] with (param_1, param_2, param_3).
 * If result < 0, formats an error via FUN_006FABF0 and breaks (INT3)
 * if the format call returns nonzero.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_007422A0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x44]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        push    ebx
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A9A80
        call    FUN_006FABF0
        add     esp, 0x14
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xC
    }
}
