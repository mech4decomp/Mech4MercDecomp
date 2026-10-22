/*
 * FUN_00691080 (17 B) — __thiscall dispatcher: if byte at +0x27 is
 * non-zero, tail-jumps to FUN_00690840, else to FUN_0068fbf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00690840(void);
extern void __cdecl FUN_0068fbf0(void);

__declspec(naked) void FUN_00691080(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x27]
        test    al, al
        jz      other
        jmp     FUN_00690840
other:
        jmp     FUN_0068fbf0
    }
}
