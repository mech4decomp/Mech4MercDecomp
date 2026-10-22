/* FUN_10008e10 - __fastcall, ECX=param_1 */

extern void __cdecl FUN_10008da0(void);

void __declspec(naked) FUN_10008e10(void)
{
    __asm {
        push esi
        mov  esi, ecx
        push edi
        xor  edi, edi
        mov  ecx, dword ptr [esi]
        push edi
        push 0x20
        mov  eax, dword ptr [ecx]
        call dword ptr [eax]
        cmp  eax, edi
        jnz  L_e31
        mov  ecx, esi
        call FUN_10008da0
        pop  edi
        xor  al, al
        pop  esi
        ret  0x4
L_e31:
        mov  esi, dword ptr [esi]
        mov  ecx, dword ptr [esp + 0xc]
        mov  dword ptr [eax + 0x4], edi
        mov  dword ptr [eax + 0x8], esi
        mov  dword ptr [eax + 0xc], edi
        mov  dword ptr [eax + 0x10], edi
        mov  dword ptr [eax + 0x14], esi
        mov  dword ptr [eax + 0x18], edi
        mov  dword ptr [eax + 0x1c], edi
        mov  dword ptr [eax], 0x100212a4
        mov  dword ptr [ecx], eax
        pop  edi
        mov  al, 0x1
        pop  esi
        ret  0x4
    }
}
