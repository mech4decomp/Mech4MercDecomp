/*
 * FUN_0074EB30 (129 B) — __stdcall, RET 4 (one int param).
 *
 * Switch on param_1 (1..13) returning a string literal address.
 * Uses a jump table at 0x74EBB4 (outside this function's byte range,
 * so not part of the diff). Returns "Unknown" (0x79e7f8) by default.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_74ebb4[];

__declspec(naked) void __stdcall FUN_0074EB30(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        dec     eax
        cmp     eax, 0xc
        ja      default_case
        jmp     dword ptr [eax * 4 + g_74ebb4]
        mov     eax, 0x7ac288
        ret     4
        mov     eax, 0x7ac484
        ret     4
        mov     eax, 0x7ac478
        ret     4
        mov     eax, 0x7ac46c
        ret     4
        mov     eax, 0x7ac460
        ret     4
        mov     eax, 0x7ac454
        ret     4
        mov     eax, 0x7ac448
        ret     4
        mov     eax, 0x7ac438
        ret     4
        mov     eax, 0x7ac42c
        ret     4
        mov     eax, 0x7ac41c
        ret     4
        mov     eax, 0x7ac410
        ret     4
        mov     eax, 0x7ac400
        ret     4
        mov     eax, 0x7ac3e4
        ret     4
default_case:
        mov     eax, 0x79e7f8
        ret     4
    }
}
