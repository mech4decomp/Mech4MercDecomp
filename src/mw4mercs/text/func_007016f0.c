/*
 * FUN_007016f0 (6 B) - returns global DAT_00856868.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856868;   /* DAT_00856868 */

__declspec(naked) int FUN_007016f0(void)
{
    __asm {
        mov     eax, dword ptr [g_00856868]
        ret
    }
}
