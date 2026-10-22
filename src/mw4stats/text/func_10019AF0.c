/*
 * FUN_10019af0 (28 B) - __stdcall. Compares 4 dwords at [arg2] against a
 * static table at 0x100213f8; returns 1 if equal.
 *
 * __stdcall (2 args, RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_100213f8;

__declspec(naked) void __cdecl FUN_10019af0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, offset g_100213f8
        xor     eax, eax
        repe    cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
