/*
 * FUN_0072D100 (30 B) — Returns 0 if [0x008825c8]==0x3b5 and
 * [0x00882464] is non-zero, otherwise returns 1.
 *
 * Match: target 100%
 */

extern int  g_8825c8;   /* 0x008825c8 */
extern char g_882464;   /* 0x00882464 */

__declspec(naked) int FUN_0072D100(void)
{
    __asm {
        cmp     dword ptr [g_8825c8], 0x3b5
        jnz     L_d118
        mov     al, byte ptr [g_882464]
        test    al, al
        jz      L_d118
        xor     eax, eax
        ret
    L_d118:
        mov     eax, 1
        ret
    }
}
