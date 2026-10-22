/* FUN_00450b10 - MLR material base ctor (__thiscall, RET 0x4) */

extern void __cdecl FUN_00458560(void);

__declspec(naked) void* func_00450b10(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        push eax
        call FUN_00458560
        lea eax, [esi + 0x64]
        mov dword ptr [eax], 0x0
        mov dword ptr [esi + 0x6c], eax
        mov dword ptr [eax + 0x4], 0x0
        mov dword ptr [esi], 0x76ea60
        mov eax, esi
        pop esi
        ret 0x4
    }
}
