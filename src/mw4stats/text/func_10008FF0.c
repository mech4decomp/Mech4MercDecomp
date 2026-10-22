/* FUN_10008ff0 - __fastcall, ECX=param_1 */

extern void __cdecl FUN_10008da0(void);

void __declspec(naked) FUN_10008ff0(void)
{
    __asm {
        push esi
        mov  esi, ecx
        push 0x0
        push 0x1c
        mov  ecx, dword ptr [esi]
        mov  eax, dword ptr [ecx]
        call dword ptr [eax]
        test eax, eax
        jnz  L_900e
        mov  ecx, esi
        call FUN_10008da0
        xor  al, al
        pop  esi
        ret  0x4
L_900e:
        mov  esi, dword ptr [esi]
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr [eax + 0x4], 0x1
        mov  dword ptr [eax + 0x8], 0x0
        mov  dword ptr [eax + 0xc], 0x10021350
        mov  dword ptr [eax + 0x10], esi
        mov  dword ptr [eax + 0x14], 0x0
        mov  dword ptr [eax + 0x18], 0x0
        mov  dword ptr [eax], 0x1002134c
        mov  dword ptr [eax + 0xc], 0x10021344
        mov  dword ptr [ecx], eax
        mov  al, 0x1
        pop  esi
        ret  0x4
    }
}
