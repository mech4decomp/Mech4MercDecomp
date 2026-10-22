/*
 * FUN_10018710 (21 B) - calls virtual method at [*param+0x40], then FUN_1001e150.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001e150(void);

__declspec(naked) void __cdecl FUN_10018710(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x40]
        push    esi
        call    FUN_1001e150
        pop     esi
        ret     0x4
    }
}
