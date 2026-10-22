/*
 * FUN_10003fa0 (11 B, __fastcall) - copies [ecx+0x24] to [ecx+0x28],
 * tail-jumps to FUN_10004070.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10004070(void);

__declspec(naked) void FUN_10003fa0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x24]
        mov     dword ptr [ecx+0x28], eax
        jmp     FUN_10004070
    }
}
