/*
 * FUN_004DB240 (8 B) — __fastcall vcall: call vtable[0x20](0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004db240(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        push 0
        call dword ptr [eax + 0x20]
        ret
    }
}
