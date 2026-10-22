/*
 * FUN_10003d60 (19 B, __thiscall) - calls FUN_10001680(this, param), returns this.
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10001680(void);

__declspec(naked) void FUN_10003d60(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_10001680
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
