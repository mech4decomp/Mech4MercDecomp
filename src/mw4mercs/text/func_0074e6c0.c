/*
 * FUN_0074e6c0 (89 B) — __stdcall, RET 4 (one param).
 *
 * Switch on param (1..8) returning a string constant; default "Unknown".
 * Uses a jump table at 0x74e71c (in .rdata, outside the compared bytes).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0074e6c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        dec     eax
        cmp     eax, 0x7
        ja      def
        jmp     dword ptr [eax*4 + 0x74e71c]
case1:
        mov     eax, 0x7ac290
        ret     0x4
case2:
        mov     eax, 0x7ac288
        ret     0x4
case3:
        mov     eax, 0x7ac280
        ret     0x4
case4:
        mov     eax, 0x7ac278
        ret     0x4
case5:
        mov     eax, 0x7ac270
        ret     0x4
case6:
        mov     eax, 0x7ac268
        ret     0x4
case7:
        mov     eax, 0x7ac260
        ret     0x4
case8:
        mov     eax, 0x7ac258
        ret     0x4
def:
        mov     eax, 0x79e7f8
        ret     0x4
    }
}
