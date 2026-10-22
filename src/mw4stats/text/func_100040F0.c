/*
 * MW4Stats.dll - FUN_100040f0 (0x100040F0, 24 B, __thiscall)
 * Calls FUN_100011a0(this), then FUN_10004110(this, arg). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10004110(void);

__declspec(naked) void FUN_100040f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100011a0
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        mov     ecx, esi
        call    FUN_10004110
        pop     esi
        ret     0x4
    }
}
