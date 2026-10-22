/*
 * FUN_0060AC60 (15 B) — __stdcall (RET 0x8). Thunk: calls FUN_0060ac70(0, param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060ac70(void);

__declspec(naked) void __stdcall FUN_0060AC60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        push    0x0
        call    FUN_0060ac70
        ret     0x8
    }
}
