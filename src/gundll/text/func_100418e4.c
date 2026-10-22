/*
 * FUN_100418e4 (22 B) - __thiscall. Calls FUN_100418af(this, param_1 & 0xfff7ffff).
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100418af(void);

__declspec(naked) void FUN_100418e4(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        and     eax, 0xfff7ffff
        push    eax
        push    dword ptr [esp + 0x8]
        call    FUN_100418af
        pop     ecx
        pop     ecx
        ret
    }
}
