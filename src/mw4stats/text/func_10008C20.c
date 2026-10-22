/*
 * MW4Stats.dll - FUN_10008c20 (0x10008C20, 20 B, __thiscall)
 * Calls FUN_10008be0(this, param+8, param+0x14).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10008be0(void);

__declspec(naked) void FUN_10008c20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        lea     edx, [eax + 0x14]
        add     eax, 8
        push    edx
        push    eax
        call    FUN_10008be0
        ret     4
    }
}
