/*
 * FUN_005e6750 (20 B) — __thiscall (ECX=this, RET 4). Calls FUN_00707e70(0)
 * which returns a double in ST0, stores it at [this+0xec].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_005e6750(void)
{
    __asm {
        push    esi
        push    0x0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        pop     esi
        ret     0x4
    }
}
