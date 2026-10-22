/* FUN_0042a210 - MLR ctor (__thiscall, RET 0x4, vtable 0x76e090) */
extern void __cdecl FUN_004861f0(void);

__declspec(naked) void func_0042a210(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        push esi
        push 0x0
        mov esi, ecx
        push eax
        call FUN_004861f0
        mov dword ptr [esi], 0x76e090
        mov dword ptr [esi + 0xa0], 0x0
        mov dword ptr [esi + 0x20], 0x0
        mov eax, esi
        pop esi
        ret 0x4
    }
}
