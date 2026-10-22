/*
 * FUN_00412e70 (16 B) — __stdcall thunk (RET 0x4): calls FUN_00412d50 with
 * arg+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412d50(void);

__declspec(naked) void FUN_00412e70(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     eax, 0x10
        push    eax
        call    FUN_00412d50
        ret     0x4
    }
}
