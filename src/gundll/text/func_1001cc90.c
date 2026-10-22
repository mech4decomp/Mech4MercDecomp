/*
 * FUN_1001cc90 (7 B) - __fastcall. Stores vtable pointer into [ecx].
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_1001cc90(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a8e0
        ret
    }
}
