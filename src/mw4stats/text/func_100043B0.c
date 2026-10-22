/*
 * FUN_100043B0 (12 B, __fastcall) - calls FUN_10004420(ecx), returns ecx.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10004420(void);

__declspec(naked) void FUN_100043B0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004420
        mov     eax, esi
        pop     esi
        ret
    }
}
