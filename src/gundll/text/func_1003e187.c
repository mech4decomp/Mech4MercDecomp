/*
 * FUN_1003e187 (28 B) - __cdecl.  Rounds arg1 up to 16; if result <= 0x780,
 * stores it in DAT_10053f94 and returns 1, else returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10053f94;   /* DAT_10053f94 */

__declspec(naked) void FUN_1003e187(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     eax, 0xf
        and     al, 0xf0
        cmp     eax, 0x780
        ja      L_e1a0
        push    1
        mov     dword ptr [g_10053f94], eax
        pop     eax
        ret
L_e1a0:
        xor     eax, eax
        ret
    }
}
