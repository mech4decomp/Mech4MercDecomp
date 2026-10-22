/*
 * FUN_0048a8c0 (7 B) — Set vtable pointer.
 *
 * __fastcall (ECX = this). Sets *this = 0x76d3f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0048a8c0(void *param1)
{
    __asm {
        mov     dword ptr [ecx], 0x0076d3f0
        ret
    }
}
