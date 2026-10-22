/*
 * FUN_00412f80 (5 B) — virtual dispatch thunk: loads the vtable pointer
 * from [ecx] and tail-jumps to the method at vtable offset +8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00412f80(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        jmp     dword ptr [eax + 0x8]
    }
}
