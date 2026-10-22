/* func_0063ad60.c - ABL interpreter region: comparison helper */

extern void __cdecl FUN_0063af40(void);
extern void __cdecl FUN_0063ae80(void);

__declspec(naked) char func_0063ad60(void)
{
    __asm {
        push esi
        mov  esi, dword ptr [esp + 0x8]
        push esi
        call FUN_0063af40
        add  esp, 0x4
        test eax, eax
        jnz  L_cont
        xor  al, al
        pop  esi
        ret
L_cont:
        push ebx
        push esi
        call FUN_0063af40
        push esi
        mov  ebx, eax
        call FUN_0063ae80
        sub  ebx, eax
        add  esp, 0x8
        neg  ebx
        sbb  ebx, ebx
        inc  ebx
        mov  al, bl
        pop  ebx
        pop  esi
        ret
    }
}
