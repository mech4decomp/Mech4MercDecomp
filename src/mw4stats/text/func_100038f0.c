/*
 * FUN_100038f0 (23 B) - forwards 3 args to FUN_10009520.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100038f0 (23 B) -- __stdcall 3-arg wrapper tail-calling FUN_10009520.
 * RET 0xC. Pure argument relay.
 */

extern void __cdecl FUN_10009520(void);

__declspec(naked) void __cdecl FUN_100038f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    ecx
        push    edx
        call    FUN_10009520
        ret     0xc
    }
}
