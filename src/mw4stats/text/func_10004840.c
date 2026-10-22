/*
 * MW4Stats.dll - FUN_10004840 (0x10004840, 19 B, __thiscall)
 * Calls FUN_10002000(this, param), returns this.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10002000(void);

__declspec(naked) void FUN_10004840(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_10002000
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
