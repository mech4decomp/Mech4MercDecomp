/*
 * FUN_1003834f (45 B) — __stdcall.
 * Calls an optional function pointer, then two cleanup helpers.
 *
 * CFLAGS: /O1
 */

extern void *g_100518a8;
extern void __cdecl FUN_10038473(void);

__declspec(naked) void __stdcall FUN_1003834f(void)
{
    __asm {
        mov     eax, dword ptr [g_100518a8]
        test    eax, eax
        jz      skip
        call    eax
    skip:
        push    0x10050020
        push    0x10050010
        call    FUN_10038473
        push    0x1005000c
        push    0x10050000
        call    FUN_10038473
        add     esp, 0x10
        ret
    }
}
