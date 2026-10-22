/*
 * FUN_007583E0 (68 B) — SetSpeakerConfig wrapper.
 *
 * Calls virtual method [vtable+0x24] with (param_1, param_2). If result
 * < 0, formats an error via FUN_006FABF0 (using FUN_00752680(param_2)
 * for the config name) and breaks (INT3) if the format call returns
 * nonzero.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00752680(void);
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_007583E0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x24]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00752680
        push    eax
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AEAA8
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
        ret     8
    }
}
