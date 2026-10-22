/*
 * FUN_00637a20 (10 B) — __thiscall array element getter: returns
 * (float)[this + index*4] on the FPU stack. RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00637a20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     dword ptr [ecx + eax*4]
        ret     0x4
    }
}
