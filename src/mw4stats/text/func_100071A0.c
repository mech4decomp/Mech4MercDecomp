/* FUN_100071a0 - __thiscall, ECX=this, param_1=[esp+0x14], param_2=[esp+0x18] */

extern void *g_10021150;   /* IAT slot at 0x10021150 */
extern void *g_100210e0;   /* IAT slot at 0x100210e0 */

void __declspec(naked) FUN_100071a0(void)
{
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov  edi, dword ptr [ecx + 0x4]
        test edi, edi
        jz   L_fa
        mov  bl, byte ptr [esp + 0x18]
        mov  esi, dword ptr [esp + 0x14]
        mov  ebp, dword ptr [g_10021150]
L_b9:
        mov  eax, dword ptr [edi + 0xc]
        test bl, bl
        jz   L_d5
        test eax, eax
        jnz  L_cb
        test esi, esi
        setz al
        jmp  L_ef
L_cb:
        test esi, esi
        jz   L_fa
        push esi
        push eax
        call ebp
        jmp  L_ec
L_d5:
        test eax, eax
        jnz  L_e0
        test esi, esi
        setz al
        jmp  L_ef
L_e0:
        test esi, esi
        jz   L_fa
        push esi
        push eax
        call dword ptr [g_100210e0]
L_ec:
        add  esp, 0x8
L_ef:
        test eax, eax
        jz   L_fa
        mov  edi, dword ptr [edi + 0x4]
        test edi, edi
        jnz  L_b9
L_fa:
        mov  eax, edi
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        ret  0x8
    }
}
