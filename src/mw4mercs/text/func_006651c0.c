/*
 * FUN_006651c0 (12 B) — virtual thunk: jmp [vtable+0x9c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006651c0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax + 0x9c]
    }
}
