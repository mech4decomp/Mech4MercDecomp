/*
 * FUN_005b003f (20 B) — thunk that stores ST0 (double) on the stack and
 * calls FUN_005b0100 with ECX = ESI. RET 8 (__stdcall, 2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b0100(void);

__declspec(naked) void __stdcall FUN_005b003f(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005b0100
        pop     esi
        add     esp, 0xC
        ret     8
    }
}
