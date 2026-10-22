/*
 * FUN_007019e0 (34 B) — gosScript shutdown sequence. If the g_008aaac1
 * flag is set, calls FUN_00717f30; then runs FUN_00701790, FUN_006f8a30,
 * FUN_006f8ee0 and tail-jumps to FUN_00717ea0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008aaac1;
extern void __cdecl FUN_00717f30(void);
extern void __cdecl FUN_00701790(void);
extern void __cdecl FUN_006f8a30(void);
extern void __cdecl FUN_006f8ee0(void);
extern void __cdecl FUN_00717ea0(void);

__declspec(naked) void FUN_007019e0(void)
{
    __asm {
        mov     al, byte ptr [g_008aaac1]
        test    al, al
        jz      L_skip
        call    FUN_00717f30
L_skip:
        call    FUN_00701790
        call    FUN_006f8a30
        call    FUN_006f8ee0
        jmp     FUN_00717ea0
    }
}
