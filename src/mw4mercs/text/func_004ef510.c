/* func_004ef510 - MLR/Adept state engine subsystem */
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004af200(void);
extern void __cdecl FUN_004ba900(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) int func_004ef510(void)
{
    __asm {
        sub esp, 0x48
        push esi
        mov esi, dword ptr [esp+0x50]
        mov eax, dword ptr [esi]
        push 0x1
        lea ecx, [esp+0x54]
        push ecx
        mov ecx, esi
        call dword ptr [eax+0x20]
        mov edx, dword ptr [esi]
        push 0x4
        lea eax, [esp+0x8]
        push eax
        mov ecx, esi
        mov word ptr [esp+0xc], 0xffff
        mov word ptr [esp+0xe], 0x0
        call dword ptr [edx+0x20]
        push 0x1
        lea ecx, [esp+0x8]
        push ecx
        lea ecx, [esp+0x10]
        call FUN_004d1f80
        lea edx, [esp+0x8]
        push 0x0
        push edx
        call FUN_004af200
        add esp, 0x4
        push eax
        lea eax, [esp+0x10]
        push eax
        call FUN_004ba900
        add esp, 0xc
        lea ecx, [esp+0x8]
        mov esi, eax
        call FUN_004d21c0
        mov eax, esi
        pop esi
        add esp, 0x48
        ret
    }
}
