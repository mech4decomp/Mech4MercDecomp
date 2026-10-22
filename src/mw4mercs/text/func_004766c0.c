/* FUN_004766c0 - MLR class constructor (33 B, __thiscall, 1 arg) */

extern int g_76f3c0;   /* vtable pointer stored into [this] */

extern void __cdecl FUN_0047a680(void);

__declspec(naked) void func_004766c0(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        push esi
        mov esi, ecx
        push eax
        call FUN_0047a680
        xor eax, eax
        mov dword ptr [esi+0x68], eax
        mov dword ptr [esi+0x6c], eax
        mov dword ptr [esi], offset g_76f3c0
        mov eax, esi
        pop esi
        ret 0x4
    }
}
