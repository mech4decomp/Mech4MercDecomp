/*
 * FUN_100178a0 (28 B) - __stdcall. Compares 4 dwords at [arg2] against a
 * static table at 0x10021418; returns 1 if equal.
 *
 * __stdcall (2 args, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_10021418;

__declspec(naked) void __cdecl FUN_100178a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, offset g_10021418
        xor     eax, eax
        repe    cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
