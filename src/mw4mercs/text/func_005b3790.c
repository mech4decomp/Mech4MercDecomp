/*
 * FUN_005b3790 (22 B) — __thiscall, RET 0.
 *
 * Walks [ECX+0x35c]->[+0xe0], calls virtual method (vtable+0x4) with
 * args (1, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b3790(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x35c]
        mov     ecx, dword ptr [ecx + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 0x4]
        ret
    }
}
