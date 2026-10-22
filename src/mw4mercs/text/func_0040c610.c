/*
 * FUN_0040c610 (27 B) — __thiscall dot product of two 3-float vectors:
 * [esp+4] (arg) and ECX (this). Returns the scalar on the FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c610(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [eax+0x8]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [eax+0x4]
        fmul    dword ptr [ecx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [eax]
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        ret     0x4
    }
}
