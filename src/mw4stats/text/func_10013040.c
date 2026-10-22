/*
 * FUN_10013040 (7 B) - stores vtable pointer 0x10021688 into [ECX].
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10013040(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10021688
        ret
    }
}
