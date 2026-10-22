/*
 * FUN_005ef8e0 (28 B) — __thiscall (ECX = this), no stack params, RET.
 *
 * Sets this->1B4 = 1.0f, calls FUN_00707E70(0) and stores the
 * returned double into this->1B8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int param);

__declspec(naked) void __stdcall FUN_005ef8e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x0
        mov     dword ptr [esi + 0x1B4], 0x3F800000
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x1B8]
        pop     esi
        ret
    }
}
