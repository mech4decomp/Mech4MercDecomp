/* FUN_004a3b10 - MLR (MidLevelRenderer) constructor, __thiscall, RET 0xc */
extern void __cdecl FUN_004940a0(void);

__declspec(naked) int func_004a3b10(void)
{
    __asm {
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0xc]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_004940a0
        xor eax, eax
        mov dword ptr [esi + 0xa0], eax
        mov dword ptr [esi + 0xa4], eax
        mov eax, 0xbf800000
        mov dword ptr [esi + 0xdc], eax
        mov dword ptr [esi + 0xd8], eax
        mov dword ptr [esi + 0xd4], eax
        mov dword ptr [esi + 0xe0], eax
        mov eax, esi
        pop esi
        ret 0xc
    }
}
