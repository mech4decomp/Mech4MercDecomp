/*
 * FUN_100381e9 (41 B) - __cdecl. Scans a 16-bit word array (param_1)
 * for the first element equal to param_2 (or a zero terminator),
 * returning the matching element's address, else 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100381e9(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
    L_loop:
        mov     cx, word ptr [eax]
        test    cx, cx
        jz      L_found
        cmp     cx, word ptr [esp + 0x8]
        jz      L_found
        inc     eax
        inc     eax
        jmp     L_loop
    L_found:
        mov     cx, word ptr [eax]
        sub     cx, word ptr [esp + 0x8]
        neg     cx
        sbb     ecx, ecx
        not     ecx
        and     eax, ecx
        ret
    }
}
