/*
 * FUN_5e011bd0 (18 B) — COM method wrapper: forwards 2 stack params to
 * FUN_5e011bf0.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e011bf0(void);

__declspec(naked) void __stdcall FUN_5e011bd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    edx
        call    FUN_5e011bf0
        ret     0x8
    }
}
