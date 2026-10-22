/*
 * FUN_1001ab30 (28 B) - __stdcall (2 args, RET 0x8). Compares 4 dwords at
 * [0x100213e8] against the second arg; returns ZF as a bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1001ab30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, 0x100213e8
        xor     eax, eax
        rep     cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     8
    }
}
