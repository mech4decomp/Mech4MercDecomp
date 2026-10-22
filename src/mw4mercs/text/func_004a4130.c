/* FUN_004a4130 - MLR (MidLevelRenderer) constructor, __thiscall, RET 0x8 */
extern void __cdecl FUN_004a9720(void);

extern int g_dword_7da984;   /* 0x007da984 */

__declspec(naked) void func_004a4130(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x8]
        mov edx, dword ptr [g_dword_7da984]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0x8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call FUN_004a9720
        mov dword ptr [esi], 0x77032c
        mov eax, esi
        pop esi
        ret 0x8
    }
}
