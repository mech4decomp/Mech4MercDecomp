/*
 * FUN_10031250 (16 B) — __fastcall.
 * Computes (param_1 & -(param_1 != 4)) and tail-jumps to FUN_10034490.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10034490(void);

__declspec(naked) void FUN_10031250(void)
{
    __asm {
        lea     eax, [ecx - 0x4]
        neg     eax
        sbb     eax, eax
        and     eax, ecx
        mov     ecx, eax
        jmp     FUN_10034490
    }
}
