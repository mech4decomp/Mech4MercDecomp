/*
 * FUN_0074de50 (57 B) — __cdecl, RET 4. Switch on (arg-1) in 0..3 returning
 * a pointer constant; default returns 0x79e7f8.
 *
 * Jump table (4 dword entries) lives at 0x74de8c, OUTSIDE this function.
 * Dispatch uses FF 24 85 [eax*4 + imm32]; the imm32 base is referenced via
 * an extern symbol so MSVC6 emits the correct SIB+disp32 form.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_jumptable_74de8c[];

__declspec(naked) void __cdecl FUN_0074de50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        dec     eax
        cmp     eax, 0x3
        ja      default_case
        jmp     dword ptr [eax*4 + g_jumptable_74de8c]
case0:
        mov     eax, 0x7abeac
        ret     0x4
case1:
        mov     eax, 0x7abea4
        ret     0x4
case2:
        mov     eax, 0x7abe98
        ret     0x4
case3:
        mov     eax, 0x7abe88
        ret     0x4
default_case:
        mov     eax, 0x79e7f8
        ret     0x4
    }
}
