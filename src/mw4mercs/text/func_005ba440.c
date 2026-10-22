/*
 * FUN_005ba440 (51 B) — __thiscall (ECX = this), RET 4.
 * Computes squared distance: (dx)^2 + (dy)^2 where
 *   dx = *(float*)(*(int*)(param+0xd8)+0x8c) - *(float*)(this+0x1c8)
 *   dy = *(float*)(*(int*)(param+0xd8)+0xac) - *(float*)(this+0x1d0)
 * Returns result on FPU stack (ST0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba440(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        fsub    dword ptr [ecx + 0x1c8]
        fld     dword ptr [eax + 0xac]
        fsub    dword ptr [ecx + 0x1d0]
        fld     st(0)
        fmul    st(0), st(1)
        fld st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp st(2)
        fstp    st(0)
        ret     4
    }


}
