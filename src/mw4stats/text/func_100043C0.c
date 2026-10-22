/*
 * MW4Stats.dll - FUN_100043c0 (0x100043C0, 12 B, __fastcall)
 * Constructor wrapper: calls FUN_10004440(ecx), returns esi.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10004440(void);

__declspec(naked) void FUN_100043c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10004440
        mov     eax, esi
        pop     esi
        ret
    }
}
