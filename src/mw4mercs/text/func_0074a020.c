/*
 * FUN_0074A020 (67 B) — Lock wrapper.
 *
 * Calls virtual method [vtable+0xC] with (param_1, param_2, param_3,
 * param_4). If result < 0, formats an error via FUN_006FABF0 and
 * breaks (INT3) if the format call returns nonzero.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) int __stdcall FUN_0074A020(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xC]
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0xC]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AA544
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
