/* FUN_10007070 - __thiscall, ECX=this, param_1=[esp+0x14], param_2=[esp+0x18] */

extern void *g_10021150;   /* IAT slot at 0x10021150 */
extern void *g_100210e0;   /* IAT slot at 0x100210e0 */

void __declspec(naked) FUN_10007070(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov  edi, dword ptr [ecx + 0x4]
        test edi, edi
        jz   L_d5
        mov  bl, byte ptr [esp + 0x18]
        mov  esi, dword ptr [esp + 0x14]
        mov  ebp, dword ptr [g_10021150]
L_89:
        mov  eax, dword ptr [edi + 0xc]
        test bl, bl
        jz   L_a5
        test eax, eax
        jnz  L_9b
        test esi, esi
        setz al
        jmp  L_bf
L_9b:
        test esi, esi
        jz   L_cc
        push esi
        push eax
        call ebp
        jmp  L_bc
L_a5:
        test eax, eax
        jnz  L_b0
        test esi, esi
        setz al
        jmp  L_bf
L_b0:
        test esi, esi
        jz   L_cc
        push esi
        push eax
        call dword ptr [g_100210e0]
L_bc:
        add  esp, 0x8
L_bf:
        test eax, eax
        jz   L_cc
        mov  edi, dword ptr [edi + 0x4]
        test edi, edi
        jz   L_d5
        jmp  L_89
L_cc:
        mov  eax, edi
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        ret  0x8
L_d5:
        pop  edi
        pop  esi
        pop  ebp
        xor  eax, eax
        pop  ebx
        ret  0x8
    }
}
