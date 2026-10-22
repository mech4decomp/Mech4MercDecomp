/*
 * MW4Stats.dll - FUN_10001fe0 (0x10001FE0, 24 B, __thiscall)
 * this in ECX; calls FUN_100011a0(this) then FUN_10002000(this, param_1).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10002000(void);

__declspec(naked) void FUN_10001fe0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_100011a0
        mov eax, dword ptr [esp+0x8]
        push eax
        mov ecx, esi
        call FUN_10002000
        pop esi
        ret 0x4
    }
}
