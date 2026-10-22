/*
 * FUN_1003765e (37 B) — __cdecl.
 * SEH-style handler: forwards args to FUN_100390a4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100390a4(void);

__declspec(naked) void FUN_1003765e(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cld
        mov     eax, dword ptr [ebp + 0xc]
        push    0
        push    eax
        push    dword ptr [eax + 0x10]
        push    dword ptr [eax + 0x8]
        push    0
        push    dword ptr [ebp + 0x10]
        push    dword ptr [eax + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_100390a4
        add     esp, 0x20
        pop     ebp
        ret
    }
}
