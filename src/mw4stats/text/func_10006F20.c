/* FUN_10006f20 - __thiscall, ECX=this, param_1 at [esp+4] */

void __declspec(naked) FUN_10006f20(void)
{
    __asm {
        push esi
        mov  esi, ecx
        push edi
        mov  ecx, dword ptr [esi]
        test ecx, ecx
        jz   L_5e
        mov  edi, dword ptr [esp + 0xc]
        mov  eax, dword ptr [esi + 0x8]
        cmp  edi, eax
        jc   L_5e
        mov  eax, dword ptr [esi + 0x4]
        test eax, eax
        jz   L_42
        mov  edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x4]
L_42:
        mov  ecx, dword ptr [esi]
        lea  edx, [edi + edi*0x1 + 0x2]
        push 0x0
        push edx
        mov  eax, dword ptr [ecx]
        call dword ptr [eax]
        test eax, eax
        mov  dword ptr [esi + 0x4], eax
        jz   L_5e
        mov  word ptr [eax], 0x0
        mov  dword ptr [esi + 0x8], edi
L_5e:
        pop  edi
        pop  esi
        ret  0x4
    }
}
