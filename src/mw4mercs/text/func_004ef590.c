/* func_004ef590 - MLR/Adept state engine subsystem (__thiscall, RET 0x4) */
extern void __cdecl FUN_004f0e50(void);

__declspec(naked) int func_004ef590(void)
{
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp+0xc]
        mov eax, dword ptr [esi]
        push edi
        mov edi, ecx
        push 0x4
        lea ecx, [esp+0xc]
        push ecx
        mov ecx, esi
        mov word ptr [esp+0x10], 0xffff
        mov word ptr [esp+0x12], 0x0
        call dword ptr [eax+0x20]
        push esi
        mov ecx, edi
        call FUN_004f0e50
        mov edx, dword ptr [esi]
        push 0x4
        lea eax, [esp+0x14]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x20]
        pop edi
        pop esi
        pop ecx
        ret 0x4
    }
}
