/* func_0063afb0.c - ABL interpreter region: membership/lookup check */

extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005faef0(void);
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007f268c;

__declspec(naked) char func_0063afb0(void)
{
    __asm {
        mov  eax, dword ptr [g_007dab44]
        mov  eax, dword ptr [eax]
        mov  ecx, dword ptr [esp + 0x4]
        push ebx
        push edi
        xor  eax, dword ptr [g_007dab40]
        push ecx
        mov  ecx, dword ptr [eax + 0x10]
        xor  ecx, 0x85739531
        call FUN_004fcb30
        mov  ebx, eax
        test ebx, ebx
        jz   L_fail
        mov  eax, dword ptr [g_007f268c]
        mov  ecx, dword ptr [ebx + 0x4]
        push eax
        call FUN_00415230
        test al, al
        jz   L_fail
        push esi
        mov  ecx, ebx
        call FUN_005faef0
        mov  edi, dword ptr [eax + 0x4]
        mov  ecx, ebx
        call FUN_005faef0
        mov  esi, dword ptr [eax]
        cmp  esi, edi
        jz   L_done
        mov  eax, dword ptr [esp + 0x14]
L_loop:
        cmp  dword ptr [esi], eax
        jz   L_done
        add  esi, 0x4
        cmp  esi, edi
        jnz  L_loop
L_done:
        mov  ecx, ebx
        call FUN_005faef0
        mov  ecx, dword ptr [eax + 0x4]
        xor  edx, edx
        cmp  esi, ecx
        pop  esi
        setnz dl
        pop  edi
        mov  al, dl
        pop  ebx
        ret
L_fail:
        pop  edi
        xor  al, al
        pop  ebx
        ret
    }
}
