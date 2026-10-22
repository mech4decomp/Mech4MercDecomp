/*
 * FUN_10003D80 (8 B, __fastcall) - tail-jump thunk: add 4 to ECX, jmp FUN_10001190.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_10003D80(void)
{
    __asm {
        add     ecx, 0x4
        jmp     FUN_10001190
    }
}
