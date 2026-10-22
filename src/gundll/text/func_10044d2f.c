/*
 * FUN_10044d2f (41 B) — __cdecl.
 * Calls FUN_10040c8e(param_2), FUN_10044d58(param_2,param_2),
 * FUN_10040ce0(param_2); returns result of FUN_10044d58.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040c8e(void);
extern void __cdecl FUN_10044d58(void);
extern void __cdecl FUN_10040ce0(void);

__declspec(naked) void FUN_10044d2f(void)
{
    __asm {
        push    esi
        push    dword ptr [esp + 0xc]
        call    FUN_10040c8e
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_10044d58
        push    dword ptr [esp + 0x18]
        mov     esi, eax
        call    FUN_10040ce0
        add     esp, 0x10
        mov     eax, esi
        pop     esi
        ret
    }
}
