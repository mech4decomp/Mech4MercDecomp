/*
 * FUN_00664b10 (9 B) — virtual thunk: jmp [vtable+0x60].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00664b10(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax + 0x60]
    }
}
