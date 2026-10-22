/* FUN_10006fb0 - __thiscall, ECX=this, param_1=[ebp+8], param_2=[ebp+0xc], param_3=[ebp+0x10] */

extern void __cdecl FUN_10006f20(void);
extern unsigned short __cdecl FUN_10006d80(void);

void __declspec(naked) FUN_10006fb0(void)
{
    __asm {
        push ebp
        mov  ebp, esp
        push ebx
        push esi
        push edi
        mov  edi, dword ptr [ebp + 0xc]
        mov  ebx, ecx
        push edi
        call FUN_10006f20
        cmp  dword ptr [ebx + 0x8], edi
        jnc  L_c7
        int  3
L_c7:
        mov  esi, dword ptr [ebx + 0x4]
        test edi, edi
        jz   L_01
L_ce:
        mov  eax, dword ptr [ebp + 0x8]
        mov  ax, word ptr [eax]
        cmp  ax, 0x26
        jnz  L_ef
        mov  cl, byte ptr [ebp + 0x10]
        test cl, cl
        jz   L_ef
        lea  ecx, [ebp + 0x8]
        push ecx
        call FUN_10006d80
        mov  word ptr [esi], ax
        jmp  L_fb
L_ef:
        mov  word ptr [esi], ax
        mov  eax, dword ptr [ebp + 0x8]
        add  eax, 0x2
        mov  dword ptr [ebp + 0x8], eax
L_fb:
        add  esi, 0x2
        dec  edi
        jnz  L_ce
L_01:
        mov  word ptr [esi], 0x0
        pop  edi
        mov  eax, ebx
        pop  esi
        pop  ebx
        pop  ebp
        ret  0xc
    }
}
