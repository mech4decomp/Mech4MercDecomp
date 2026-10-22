/* FUN_100070e0 - __thiscall, ECX=this, param_1=[esp+0x14], param_2=[esp+0x18], param_3=[esp+0x1c] */

extern void *g_10021150;   /* IAT slot at 0x10021150 */
extern void *g_100210e0;   /* IAT slot at 0x100210e0 */

void __declspec(naked) FUN_100070e0(void)
{
    __asm {
        push ebx
        push ebp
        mov  ebp, dword ptr [ecx + 0x4]
        push esi
        test ebp, ebp
        push edi
        jz   L_8c
        mov  bl, byte ptr [esp + 0x1c]
        mov  esi, dword ptr [esp + 0x18]
        mov  edi, dword ptr [esp + 0x14]
L_fb:
        mov  eax, dword ptr [ebp + 0xc]
        test bl, bl
        jz   L_1b
        test eax, eax
        jnz  L_0d
        test edi, edi
        setz al
        jmp  L_35
L_0d:
        test edi, edi
        jz   L_39
        push edi
        push eax
        call dword ptr [g_10021150]
        jmp  L_32
L_1b:
        test eax, eax
        jnz  L_26
        test edi, edi
        setz al
        jmp  L_35
L_26:
        test edi, edi
        jz   L_39
        push edi
        push eax
        call dword ptr [g_100210e0]
L_32:
        add  esp, 0x8
L_35:
        test eax, eax
        jnz  L_77
L_39:
        mov  eax, dword ptr [ebp + 0x18]
        test bl, bl
        jz   L_59
        test eax, eax
        jnz  L_4b
        test esi, esi
        setz al
        jmp  L_73
L_4b:
        test esi, esi
        jz   L_83
        push esi
        push eax
        call dword ptr [g_10021150]
        jmp  L_70
L_59:
        test eax, eax
        jnz  L_64
        test esi, esi
        setz al
        jmp  L_73
L_64:
        test esi, esi
        jz   L_83
        push esi
        push eax
        call dword ptr [g_100210e0]
L_70:
        add  esp, 0x8
L_73:
        test eax, eax
        jz   L_83
L_77:
        mov  ebp, dword ptr [ebp + 0x4]
        test ebp, ebp
        jz   L_8c
        jmp  L_fb
L_83:
        pop  edi
        mov  eax, ebp
        pop  esi
        pop  ebp
        pop  ebx
        ret  0xc
L_8c:
        pop  edi
        pop  esi
        pop  ebp
        xor  eax, eax
        pop  ebx
        ret  0xc
    }
}
