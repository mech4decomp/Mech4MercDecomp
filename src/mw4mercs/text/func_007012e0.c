/*
 * FUN_007012e0 (65 B) - __stdcall, RET 8. Dispatches on [param_2+8]:
 * 0x1300 -> DAT_00856864=2, 0x1301 -> 0, 0x1302 -> 4. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856864;   /* DAT_00856864 */

__declspec(naked) int __stdcall FUN_007012e0(int a, int b)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax + 0x8]
        sub     eax, 0x1300
        jz      L1312
        dec     eax
        jz      L1303
        dec     eax
        jnz     L131C
        mov     dword ptr [g_00856864], 0x4
        xor     eax, eax
        ret     0x8
L1303:
        mov     dword ptr [g_00856864], 0x0
        xor     eax, eax
        ret     0x8
L1312:
        mov     dword ptr [g_00856864], 0x2
L131C:
        xor     eax, eax
        ret     0x8
    }
}
