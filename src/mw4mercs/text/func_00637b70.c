/*
 * FUN_00637b70 (26 B) — __stdcall float getter. If arg==1, calls
 * FUN_00637a20(0x22) and returns its FPU result; else returns the
 * float at 0x0076d064. RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637a20(void);
extern float g_0076d064;

__declspec(naked) void FUN_00637b70(void)
{
    __asm {
        cmp     byte ptr [esp + 0x4], 0x1
        jnz     L1
        push    0x22
        call    FUN_00637a20
        ret     0x4
L1:
        fld     dword ptr [g_0076d064]
        ret     0x4
    }
}
