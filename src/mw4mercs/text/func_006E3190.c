/*
 * FUN_006E3190 (42 B) — If arg2 non-zero, zeroes the word at arg1 and
 * calls the IAT function at 0x76b130(arg1, arg2, -1, arg3, 0, 0),
 * returning arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b130;   /* IAT slot DAT_0076b130 */

__declspec(naked) void *FUN_006E3190(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jne     L_6e3199
        ret
L_6e3199:
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    ecx
        push    esi
        push    -1
        push    eax
        push    0
        push    0
        mov     word ptr [esi], 0
        call    dword ptr [g_76b130]
        mov     eax, esi
        pop     esi
        ret
    }
}
