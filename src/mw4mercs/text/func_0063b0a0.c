/* func_0063b0a0.c - ABL interpreter region: lookup with flag check */

extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007f268c;

__declspec(naked) int func_0063b0a0(void)
{
    __asm {
        mov  eax, dword ptr [g_007dab44]
        mov  eax, dword ptr [eax]
        push ebx
        mov  ebx, dword ptr [g_007dab40]
        push esi
        mov  esi, dword ptr [esp + 0xc]
        xor  eax, ebx
        mov  ecx, dword ptr [eax + 0x20]
        push edi
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e600
        test al, al
        jz   L_fail
        mov  ecx, dword ptr [g_007dab44]
        mov  eax, dword ptr [ecx]
        xor  eax, dword ptr [g_007dab40]
        mov  ecx, dword ptr [eax + 0x20]
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e5a0
        mov  ebx, eax
        mov  ecx, ebx
        call FUN_0064e100
        mov  edx, dword ptr [eax + 0x4]
        sub  edx, dword ptr [eax]
        test edx, 0xfffffffc
        jz   L_fail
        mov  ecx, ebx
        call FUN_0064e100
        mov  edi, dword ptr [eax]
        mov  ecx, ebx
        call FUN_0064e100
        cmp  edi, dword ptr [eax + 0x4]
        jz   L_fail
L_loop:
        mov  eax, dword ptr [g_007dab44]
        mov  ecx, dword ptr [g_007dab40]
        mov  eax, dword ptr [eax]
        xor  eax, ecx
        mov  ecx, dword ptr [edi]
        push ecx
        mov  ecx, dword ptr [eax + 0x10]
        xor  ecx, 0x85739531
        call FUN_004fcb30
        mov  esi, eax
        test esi, esi
        jz   L_next
        mov  eax, dword ptr [g_007f268c]
        mov  ecx, dword ptr [esi + 0x4]
        push eax
        call FUN_00415230
        test al, al
        jz   L_next
        mov  edx, dword ptr [esi + 0x10]
        shr  edx, 0x13
        test dl, 0x1
        jz   L_found
L_next:
        mov  ecx, ebx
        add  edi, 0x4
        call FUN_0064e100
        cmp  edi, dword ptr [eax + 0x4]
        jnz  L_loop
L_fail:
        pop  edi
        pop  esi
        xor  al, al
        pop  ebx
        ret
L_found:
        mov  eax, dword ptr [edi]
        mov  ecx, dword ptr [esp + 0x14]
        pop  edi
        pop  esi
        mov  dword ptr [ecx], eax
        mov  al, 0x1
        pop  ebx
        ret
    }
}
