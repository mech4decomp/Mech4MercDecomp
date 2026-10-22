/*
 * MW4Stats.dll - FUN_100043E0 (0x100043E0, 12 B, __fastcall)
 * Constructor wrapper: calls FUN_10004480(ecx), returns esi.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10004480(void);

__declspec(naked) void FUN_100043E0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004480
        mov     eax, esi
        pop     esi
        ret
    }
}
