/*
 * MW4Stats.dll - FUN_100032b0 (0x100032B0, 18 B, __fastcall)
 * Calls FUN_10003840, sets vtable 0x10021200, returns this.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10003840(void);

__declspec(naked) void __cdecl FUN_100032b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003840
        mov     dword ptr [esi], 0x10021200
        mov     eax, esi
        pop     esi
        ret
    }
}
