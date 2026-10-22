/*
 * FUN_1003791a (29 B) - __cdecl.
 * Scans a zero-terminated short array starting at arg+2, returns
 * (index of terminator) - 1.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003791a(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        cmp     word ptr [ecx], 0
        lea     eax, [ecx+2]
        jz      L2
L1:
        mov     dx, word ptr [eax]
        inc     eax
        inc     eax
        test    dx, dx
        jnz     L1
L2:
        sub     eax, ecx
        sar     eax, 1
        dec     eax
        ret
    }
}
