/*
 * FUN_007412E0 (80 B) — small wrapper. Calls virtual method [vtable+0x30]
 * on this (EAX = param1) with 4 args (param2..param5). If the result (ESI)
 * is negative, formats an error string via FUN_0074D190 / FUN_0073E160 /
 * FUN_006FABF0 and asserts (INT3) on failure. Returns the virtual call result.
 *
 * __stdcall, RET 0x14 (5 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074D190(void);
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) void __stdcall FUN_007412E0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x18]
        push    edi
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x30]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        push    ebx
        call    FUN_0074D190
        push    eax
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A9160
        call    FUN_006FABF0
        add     esp, 0x10
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x14
    }
}
