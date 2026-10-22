/*
 * FUN_00664b20 (17 B) — virtual thunk: call [vtable+0x6c](0x40800000,0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00664b20(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    0
        push    0x40800000
        call    dword ptr [eax + 0x6c]
        ret
    }
}
