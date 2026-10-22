/* FUN_10008c40 - __thiscall, ECX=this, param_1=[esp+4] */

extern void __cdecl FUN_10006e60(void);
extern void __cdecl FUN_10009070(void);
extern void __cdecl FUN_10007dc0(void);
extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_100087b0(void);
extern void __cdecl FUN_10008320(void);
extern void __cdecl FUN_10007530(void);

void __declspec(naked) FUN_10008c40(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x4]
        push esi
        test eax, eax
        push edi
        mov  esi, ecx
        jnz  L_c51
        pop  edi
        pop  esi
        ret  0x4
L_c51:
        lea  edi, [esi + 0xc]
        push eax
        mov  ecx, edi
        mov  dword ptr [esi + 0x18], eax
        call FUN_10006e60
        lea  eax, [esp + 0xc]
        mov  ecx, esi
        push eax
        call FUN_10009070
        test al, al
        jnz  L_c76
        pop  edi
        xor  eax, eax
        pop  esi
        ret  0x4
L_c76:
        mov  ecx, dword ptr [esp + 0xc]
        push ecx
        mov  ecx, esi
        call FUN_10007dc0
        test al, al
        jz   L_cdf
L_c86:
        mov  ecx, dword ptr [esi + 0x14]
        mov  ax, word ptr [ecx]
        mov  cx, word ptr [ecx + 0x2]
        cmp  ax, 0x20
        jz   L_ca8
        cmp  ax, 0x9
        jz   L_ca8
        cmp  ax, 0xd
        jz   L_ca8
        cmp  ax, 0xa
        jnz  L_cb3
L_ca8:
        push 0x0
        mov  ecx, edi
        call FUN_10006ef0
        jmp  L_c86
L_cb3:
        cmp  ax, 0x3c
        jnz  L_cdf
        cmp  cx, 0x21
        jnz  L_ccc
        mov  ecx, esi
        call FUN_100087b0
        test al, al
        jz   L_cdf
        jmp  L_c86
L_ccc:
        mov  edx, dword ptr [esp + 0xc]
        mov  ecx, esi
        add  edx, 0x4
        push edx
        call FUN_10008320
        test al, al
        jnz  L_ce9
L_cdf:
        lea  eax, [esp + 0xc]
        push eax
        call FUN_10007530
L_ce9:
        mov  eax, dword ptr [esp + 0xc]
        pop  edi
        pop  esi
        ret  0x4
    }
}
