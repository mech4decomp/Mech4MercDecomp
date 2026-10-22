/* FUN_10006e80 - __thiscall, ECX=this, param at [esp+4] */

void __declspec(naked) FUN_10006e80(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x4]
        test eax, eax
        jz   L_af
        push edi
        mov  edx, eax
L_8b:
        mov  eax, dword ptr [ecx + 0x8]
        cmp  word ptr [eax], 0xa
        jnz  L_a2
        mov  edi, dword ptr [ecx]
        mov  dword ptr [ecx + 0x4], 0x1
        inc  edi
        mov  dword ptr [ecx], edi
        jmp  L_a5
L_a2:
        inc  dword ptr [ecx + 0x4]
L_a5:
        add  eax, 0x2
        dec  edx
        mov  dword ptr [ecx + 0x8], eax
        jnz  L_8b
        pop  edi
L_af:
        ret  0x4
    }
}
