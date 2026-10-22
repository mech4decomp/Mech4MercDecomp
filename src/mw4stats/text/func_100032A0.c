/*
 * MW4Stats.dll - FUN_100032a0 (0x100032A0, 12 B, __fastcall)
 * Calls FUN_10003820, returns this (ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10003820(void);

__declspec(naked) void __cdecl FUN_100032a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003820
        mov     eax, esi
        pop     esi
        ret
    }
}
