/*
 * FUN_005fff00 (19 B) — __thiscall helper: pushes arg, adds 0x2250 to
 * this (ECX), tail-calls FUN_004179b0, returns 4 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_005fff00(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    eax
        add     ecx, 0x2250
        call    FUN_004179b0
        ret     4
    }
}
