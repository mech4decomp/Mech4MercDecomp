/*
 * FUN_006E31C0 (48 B) — If arg2 non-zero, zeroes the byte at arg1 and
 * calls the IAT function at 0x76b12c(0,0,arg3,arg1,-1,arg2,0,0),
 * returning arg1. Trailing 4-byte nop pad included.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b12c;   /* IAT slot DAT_0076b12c */

__declspec(naked) void *FUN_006E31C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jne     L_6e31c9
        ret
L_6e31c9:
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    0
        push    0
        push    ecx
        push    esi
        push    -1
        push    eax
        push    0
        push    0
        mov     byte ptr [esi], 0
        call    dword ptr [g_76b12c]
        mov     eax, esi
        pop     esi
        ret
        nop
        nop
        nop
        nop
    }
}
