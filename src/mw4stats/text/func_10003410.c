/*
 * MW4Stats.dll - FUN_10003410 (0x10003410, 4 B, __fastcall)
 * Getter: return *(byte*)(this + 0x1c).
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void __cdecl FUN_10003410(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1c]
        ret
    }
}
