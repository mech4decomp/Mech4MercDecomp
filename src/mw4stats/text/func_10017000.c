/*
 * FUN_10017000 (28 B) - __stdcall, RET 8. Compares 4 dwords of the
 * second arg against the constant table at 0x10021428; returns 1 if
 * all match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10017000(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 0x4
        mov     edi, 0x10021428
        xor     eax, eax
        repe cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
