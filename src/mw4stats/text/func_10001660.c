/*
 * MW4Stats.dll - FUN_10001660 (0x10001660, 24 B, __thiscall)
 * Reset + assign: calls FUN_100011a0 (clear) then FUN_10001680 (set string).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_10001680(void);

__declspec(naked) void FUN_10001660(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_100011a0
        mov eax, dword ptr [esp + 0x8]
        push eax
        mov ecx, esi
        call FUN_10001680
        pop esi
        ret 0x4
    }
}
