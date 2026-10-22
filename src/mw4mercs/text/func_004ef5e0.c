/* func_004ef5e0 - MLR/Adept state engine subsystem */
extern void __cdecl FUN_004f2250(void);
extern void __cdecl FUN_004ef590(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ef470(void);
extern int g_007dc814;

__declspec(naked) int func_004ef5e0(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp+0xc]
        push esi
        push edi
        mov edi, dword ptr [esp+0x10]
        push ebx
        push edi
        call FUN_004f2250
        mov esi, eax
        add esp, 0x8
        test esi, esi
        jz L1
        push edi
        mov ecx, esi
        call FUN_004ef590
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
L1:
        push 0x28
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L2
        mov ecx, dword ptr [g_007dc814]
        push ebx
        push edi
        push ecx
        mov ecx, eax
        call FUN_004ef470
        pop edi
        pop esi
        pop ebx
        ret
L2:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
    }
}
