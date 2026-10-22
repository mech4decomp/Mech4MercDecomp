/* FUN_10008970 - __thiscall, ECX=this, param_1=[esp+4] */

extern void __cdecl FUN_100082f0(void);
extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10008ff0(void);
extern void __cdecl FUN_10006fb0(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_10025884;

void __declspec(naked) FUN_10008970(void)
{
    __asm {
        sub  esp, 0x8
        push ebx
        push ebp
        push esi
        push edi
        mov  edi, ecx
        xor  ebp, ebp
        mov  bl, 0x1
        mov  dword ptr [esp + 0x10], ebp
        mov  eax, dword ptr [edi + 0x14]
        mov  dword ptr [esp + 0x14], eax
        mov  si, word ptr [eax]
L_8b:
        test si, si
        jz   L_ec
        cmp  si, 0x3c
        jz   L_ec
        cmp  si, 0x26
        jnz  L_c4
        mov  ecx, edi
        call FUN_100082f0
        mov  bl, al
L_a5:
        mov  dword ptr [esp + 0x10], 0x0
L_ad:
        mov  eax, dword ptr [edi + 0x14]
        inc  ebp
        test bl, bl
        mov  si, word ptr [eax]
        jnz  L_8b
        pop  edi
        pop  esi
        pop  ebp
        xor  al, al
        pop  ebx
        add  esp, 0x8
        ret  0x4
L_c4:
        push 0x0
        lea  ecx, [edi + 0xc]
        call FUN_10006ef0
        cmp  si, 0x20
        jz   L_e6
        cmp  si, 0x9
        jz   L_e6
        cmp  si, 0xd
        jz   L_e6
        cmp  si, 0xa
        jnz  L_a5
L_e6:
        inc  dword ptr [esp + 0x10]
        jmp  L_ad
L_ec:
        test bl, bl
        jnz  L_fc
        pop  edi
        pop  esi
        pop  ebp
        xor  al, al
        pop  ebx
        add  esp, 0x8
        ret  0x4
L_fc:
        test ebp, ebp
        jz   L_7d
        mov  ecx, dword ptr [edi + 0x8]
        shr  ecx, 0x1
        test cl, 0x1
        jz   L_0e
        sub  ebp, dword ptr [esp + 0x10]
L_0e:
        test ebp, ebp
        jz   L_8b2
        lea  edx, [esp + 0x10]
        mov  ecx, edi
        push edx
        mov  dword ptr [esp + 0x14], 0x0
        call FUN_10008ff0
        test al, al
        jnz  L_34
        pop  edi
        pop  esi
        pop  ebp
        pop  ebx
        add  esp, 0x8
        ret  0x4
L_34:
        mov  eax, dword ptr [edi + 0x8]
        mov  ecx, dword ptr [esp + 0x14]
        mov  edx, dword ptr [esp + 0x10]
        shr  eax, 0x2
        not  al
        and  al, 0x1
        push eax
        push ebp
        push ecx
        lea  ecx, [edx + 0x10]
        call FUN_10006fb0
        mov  eax, dword ptr [esp + 0x1c]
        mov  ecx, dword ptr [esp + 0x10]
        pop  edi
        pop  esi
        mov  edx, dword ptr [eax + 0x8]
        pop  ebp
        mov  dword ptr [edx], ecx
        add  ecx, 0x8
        mov  dword ptr [ecx], 0x0
        mov  dword ptr [eax + 0x8], ecx
        mov  ecx, dword ptr [eax + 0xc]
        inc  ecx
        mov  dword ptr [eax + 0xc], ecx
        mov  al, bl
        pop  ebx
        add  esp, 0x8
        ret  0x4
L_7d:
        push offset g_str_10025884
        mov  ecx, edi
        call FUN_10008d30
        xor  bl, bl
L_8b2:
        pop  edi
        pop  esi
        mov  al, bl
        pop  ebp
        pop  ebx
        add  esp, 0x8
        ret  0x4
    }
}
