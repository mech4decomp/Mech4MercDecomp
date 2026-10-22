/*
 * FUN_007016e0 (6 B) - returns global DAT_00856864.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856864;   /* DAT_00856864 */

__declspec(naked) int FUN_007016e0(void)
{
    __asm {
        mov     eax, dword ptr [g_00856864]
        ret
    }
}
