/*
 * FUN_100011af (45 B, __stdcall) — calls a stored function pointer if set,
 * then registers two string pairs via FUN_100012b3.
 *
 * Match: target 100%
 */

extern void *g_100058d4;
extern void __cdecl FUN_100012b3(void *, void *);

__declspec(naked) void __stdcall FUN_100011af(void)
{
    __asm {
        mov     eax, dword ptr [g_100058d4]
        test    eax, eax
        jz      label_100011ba
        call    eax
label_100011ba:
        push    0x10005010
        push    0x10005008
        call    FUN_100012b3
        push    0x10005004
        push    0x10005000
        call    FUN_100012b3
        add     esp, 0x10
        ret
    }
}
