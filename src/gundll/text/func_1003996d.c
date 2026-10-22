/*
 * FUN_1003996d (24 B) - Fragment: calls FUN_10038512, and if the returned
 * object has a non-null vtable slot at +0x64, calls it; then tail-jumps to
 * FUN_1003990c. (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038512(void);   /* rel32 call */
extern void __cdecl FUN_1003990c(void);   /* rel32 jmp target */

__declspec(naked) void __cdecl FUN_1003996d(void)
{
    __asm {
        call    FUN_10038512
        cmp     dword ptr [eax + 0x64], 0x0
        je      L_80
        call    FUN_10038512
        call    dword ptr [eax + 0x64]
L_80:
        jmp     FUN_1003990c
    }
}
