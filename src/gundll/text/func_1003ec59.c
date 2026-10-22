/*
 * FUN_1003ec59 (27 B) - __stdcall, RET 0x4. Calls FUN_1003786e with
 * (*(param_1+0x18), *(param_1+0x1c)). (EBP holds a dead load of *param_1.)
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003786e(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1003ec59(void)
{
    __asm {
        push    ebp
        mov     ecx, dword ptr [esp + 8]
        mov     ebp, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x1c]
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    eax
        call    FUN_1003786e
        add     esp, 8
        pop     ebp
        ret     4
    }
}
