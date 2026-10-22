/* FUN_10008e70 - __fastcall, ECX=param_1 */

extern void __cdecl FUN_10008da0(void);

void __declspec(naked) FUN_10008e70(void)
{
    __asm {
        push esi
        push edi
        mov  edi, ecx
        xor  esi, esi
        push esi
        push 0x48
        mov  ecx, dword ptr [edi]
        mov  eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp  eax, esi
        jnz  L_e91
        mov  ecx, edi
        call FUN_10008da0
        pop  edi
        xor  al, al
        pop  esi
        ret  0x4
L_e91:
        mov  edx, dword ptr [edi]
        mov  dword ptr [eax + 0x4], esi
        mov  dword ptr [eax + 0x8], esi
        lea  ecx, [eax + 0x20]
        mov  dword ptr [eax + 0xc], 0x10021314
        mov  dword ptr [eax + 0x10], edx
        mov  dword ptr [eax + 0x14], esi
        mov  dword ptr [eax + 0x18], esi
        mov  dword ptr [ecx], esi
        mov  dword ptr [ecx + 0x4], ecx
        mov  dword ptr [ecx + 0x8], esi
        mov  dword ptr [ecx + 0xc], edx
        lea  ecx, [eax + 0x34]
        mov  dword ptr [eax + 0x1c], 0x10021304
        pop  edi
        mov  dword ptr [ecx], esi
        mov  dword ptr [ecx + 0x4], ecx
        mov  dword ptr [ecx + 0x8], esi
        mov  dword ptr [ecx + 0xc], edx
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr [eax + 0x30], 0x100212e8
        mov  dword ptr [eax + 0x44], esi
        mov  dword ptr [eax], 0x100212e4
        mov  dword ptr [eax + 0xc], 0x100212b4
        mov  dword ptr [ecx], eax
        mov  al, 0x1
        pop  esi
        ret  0x4
    }
}
