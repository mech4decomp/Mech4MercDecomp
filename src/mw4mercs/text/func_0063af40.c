/* func_0063af40.c - ABL interpreter region: hash/table lookup helper */

extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e100(void);
extern int *g_007dab44;
extern int g_007dab40;

__declspec(naked) int func_0063af40(void)
{
    __asm {
        mov  eax, dword ptr [g_007dab44]
        mov  eax, dword ptr [eax]
        mov  edx, dword ptr [g_007dab40]
        push esi
        mov  esi, dword ptr [esp + 0x8]
        xor  eax, edx
        mov  ecx, dword ptr [eax + 0x20]
        push esi
        xor  ecx, 0x85739531
        call FUN_00600940
        mov  ecx, eax
        call FUN_0064e600
        test al, al
        jnz  L_cont
        xor  eax, eax
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
        mov  ecx, eax
        call FUN_0064e100
        mov  ecx, eax
        mov  eax, dword ptr [ecx + 0x4]
        sub  eax, dword ptr [ecx]
        sar  eax, 0x2
        pop  esi
        ret
    }
}
