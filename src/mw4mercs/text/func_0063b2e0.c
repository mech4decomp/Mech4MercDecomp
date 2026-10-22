/* func_0063b2e0.c - ABL interpreter region: indexed table lookup */

extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e100(void);
extern int *g_007dab44;
extern int g_007dab40;

__declspec(naked) int func_0063b2e0(void)
{
    __asm {
        mov  eax, dword ptr [g_007dab44]
        mov  ecx, dword ptr [g_007dab40]
        mov  eax, dword ptr [eax]
        push esi
        mov  esi, dword ptr [esp + 0x8]
        xor  eax, ecx
        mov  ecx, dword ptr [eax + 0x20]
        push edi
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e600
        test al, al
        jnz  L_cont
        pop  edi
        pop  esi
        ret
L_cont:
        mov  ecx, dword ptr [g_007dab44]
        mov  eax, dword ptr [ecx]
        xor  eax, dword ptr [g_007dab40]
        mov  ecx, dword ptr [eax + 0x20]
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e5a0
        mov  esi, eax
        mov  ecx, esi
        call FUN_0064e100
        mov  edi, dword ptr [eax]
        mov  edx, dword ptr [eax + 0x4]
        sub  edx, edi
        mov  edi, dword ptr [esp + 0x10]
        sar  edx, 0x2
        cmp  edi, edx
        jc   L_ok
        pop  edi
        xor  al, al
        pop  esi
        ret
L_ok:
        mov  ecx, esi
        call FUN_0064e100
        mov  eax, dword ptr [eax]
        mov  ecx, dword ptr [eax + edi*0x4]
        mov  edx, dword ptr [esp + 0x14]
        pop  edi
        mov  dword ptr [edx], ecx
        mov  al, 0x1
        pop  esi
        ret
    }
}
