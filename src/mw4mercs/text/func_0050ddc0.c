/*
 * FUN_0050DDC0 (71 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050ddc0(void)
{
    

extern void __cdecl FUN_0050d860(void);
extern void __cdecl FUN_0050d690(void);
__asm {
push ebx
        mov ebx, [esp+0x0C]
        push esi
        mov esi, [esp+0x0C]
        mov eax, [esi+0x04]
        push edi
        push eax
        push ebx
        call dword ptr [esi+0x0C]
        mov ecx, [esi]
        mov edx, [esi+0x10]
        push 0x00
        push 0x00
        lea edi, [ecx + eax*4]
        mov eax, [edi]
        push edx
        push ebx
        push eax
        call FUN_0050d860
        add esp, 0x1C
        cmp eax, -1
        jnz found
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret
found:
        mov ecx, [edi]
        push eax
        push ecx
        call FUN_0050d690
        add esp, 0x08
        pop edi
        pop esi
        pop ebx
        ret
    }


}
