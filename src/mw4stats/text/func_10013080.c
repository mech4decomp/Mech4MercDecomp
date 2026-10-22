/*
 * FUN_10013080 (28 B, __stdcall, 2 params) - Compares 4 dwords at
 * 0x10021468 against param_2 using REPE CMPSD. Returns ZF as bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10013080(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     ecx, 4
        mov     edi, 0x10021468
        xor     eax, eax
        repe    cmpsd
        pop     edi
        pop     esi
        setz    al
        ret     0x8
    }
}
