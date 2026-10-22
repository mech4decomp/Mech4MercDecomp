/*
 * MW4Stats.dll - FUN_10002f90 (0x10002F90, 13 B, __thiscall)
 * Assign wide string via FUN_10001680 (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001680(void);

__declspec(naked) void FUN_10002f90(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push eax
        call FUN_10001680
        ret 0x4
    }
}
