/*
 * FUN_100345a0 (17 B) - __thiscall, RET 0x4.
 * FUN_10033750(param_1, this + 0x1c).
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033750(void);   /* rel32 call */

__declspec(naked) void FUN_100345a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        add     ecx, 0x1c
        push    ecx
        push    eax
        call    FUN_10033750
        ret     4
    }
}
