/*
 * FUN_10039497 (22 B) - __cdecl, 1 arg. If *(*arg1) == 0xe06d7363
 * (magic), tail-jumps to FUN_1003990c; else returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003990c(void);   /* rel32 jmp target */

__declspec(naked) void __cdecl FUN_10039497(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     eax, dword ptr [eax]
        cmp     dword ptr [eax], 0xe06d7363
        je      L_jmp
        xor     eax, eax
        ret
L_jmp:
        jmp     FUN_1003990c
    }
}
