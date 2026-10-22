/*
 * FUN_00755280 (81 B) — small wrapper. Calls IAT 0x8AAD74 with 5 args
 * (param1..param5). If the result (ESI) is zero, formats an error string via
 * FUN_00750780 / FUN_0073E160 / FUN_006FABF0 and asserts (INT3) on failure.
 * Returns the IAT call result.
 *
 * __stdcall, RET 0x14 (5 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8AAD74;   /* IAT */
extern void __cdecl FUN_00750780(void);
extern void __cdecl FUN_0073E160(void);
extern void __cdecl FUN_006FABF0(void);

__declspec(naked) void __stdcall FUN_00755280(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        push    edi
        push    ebx
        push    edx
        call    dword ptr [g_8AAD74]
        mov     esi, eax
        test    esi, esi
        jz      done
        push    edi
        call    FUN_00750780
        push    eax
        push    ebx
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7AE158
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
