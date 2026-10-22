/*
 * FUN_00701330 (28 B) - __stdcall, RET 8. If [param_2+8] == 0x2307,
 * clears global DAT_00856868. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856868;   /* DAT_00856868 */

__declspec(naked) int __stdcall FUN_00701330(int a, int b)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     dword ptr [eax + 0x8], 0x2307
        jnz     L1347
        mov     dword ptr [g_00856868], 0x0
L1347:
        xor     eax, eax
        ret     0x8
    }
}
