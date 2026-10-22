/*
 * FUN_10034db0 (19 B) - __fastcall.
 * If ECX nonzero, jumps to FUN_100349e0(ECX+4); else FUN_100349e0(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100349e0(void);   /* rel32 jmp */

__declspec(naked) void FUN_10034db0(void)
{
    __asm {
        test    ecx, ecx
        jz      lbl
        add     ecx, 4
        jmp     FUN_100349e0
lbl:
        xor     ecx, ecx
        jmp     FUN_100349e0
    }
}
