/*
 * FUN_1002b6d0 (18 B) - __stdcall, RET 0xc.
 * Calls FUN_10001d60([ESP+8]) and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002b6d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    eax
        call    FUN_10001d60
        add     esp, 4
        xor     eax, eax
        ret     0xc
    }
}
