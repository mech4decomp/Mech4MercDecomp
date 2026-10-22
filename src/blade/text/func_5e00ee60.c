/*
 * FUN_5e00ee60 (16 B) — __stdcall (RET 0x4), 1 arg.
 * Increments the refcount at [arg+0x18] and returns the new value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e00ee60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x18]
        inc     ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     eax, ecx
        ret     4
    }
}
