/*
 * FUN_10014860 (28 B, __stdcall, 2 params) - Compares 4 dwords of the
 * argument against the static GUID/constant at 0x10021458. Returns
 * nonzero if equal.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10014860(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, 0x10021458
        xor     eax, eax
        repe cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
