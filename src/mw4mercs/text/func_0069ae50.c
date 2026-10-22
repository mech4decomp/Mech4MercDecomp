/*
 * FUN_0069ae50 (17 B) - HUD helper: if DAT_008058ac == param_1, tail-jump
 * to FUN_00649150; else RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;   /* DAT_008058ac */
extern void __cdecl FUN_00649150(void);

__declspec(naked) void FUN_0069ae50(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, dword ptr [esp + 0x4]
        jnz     LAE60
        jmp     FUN_00649150
LAE60:
        ret
    }
}
