/*
 * FUN_007354A0 (80 B) — small wrapper. Calls virtual method [vtable+0x64]
 * on this (EDI = param1) with 4 args (param2..param5). If the result (ESI)
 * is negative, formats an error string via FUN_00750BA0 / FUN_0073E160 /
 * FUN_006FABF0 and asserts (INT3) on failure. Returns the virtual call result.
 *
 * __stdcall, RET 0x14 (5 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00750BA0(void);
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) void __stdcall FUN_007354A0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xC]
        push    ebx
        push    edx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x64]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        call    FUN_00750BA0
        push    eax
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7A6478
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
        ret     0x14
    }
}
