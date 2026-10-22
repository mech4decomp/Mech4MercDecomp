/*
 * FUN_10031af0 (16 B) - __fastcall. Computes (param_1 != 4 ? param_1 : 0)
 * and tail-jumps to FUN_10034490.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10034490(void);   /* rel32 jmp */

__declspec(naked) void FUN_10031af0(void)
{
    __asm {
        lea     eax, [ecx - 4]
        neg     eax
        sbb     eax, eax
        and     eax, ecx
        mov     ecx, eax
        jmp     FUN_10034490
    }
}
