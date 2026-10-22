/*
 * FUN_0074e670 (56 B) — __cdecl, RET 4. Switch on arg (0..3) returning a
 * pointer constant; default returns 0x79e7f8.
 *
 * Jump table (4 dword entries) lives at 0x74e6a8, OUTSIDE this function.
 * Dispatch uses FF 24 85 [eax*4 + imm32]; the imm32 base is referenced via
 * an extern symbol so MSVC6 emits the correct SIB+disp32 form.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_jumptable_74e6a8[];

__declspec(naked) void __cdecl FUN_0074e670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x3
        ja      default_case
        jmp     dword ptr [eax*4 + g_jumptable_74e6a8]
case0:
        mov     eax, 0x7abf18
        ret     0x4
case1:
        mov     eax, 0x7ac250
        ret     0x4
case2:
        mov     eax, 0x7ac248
        ret     0x4
case3:
        mov     eax, 0x7ac240
        ret     0x4
default_case:
        mov     eax, 0x79e7f8
        ret     0x4
    }
}
