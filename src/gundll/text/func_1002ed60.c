/*
 * FUN_1002ed60 (60 B) -- __thiscall, RET 0x4.
 * If param_1==0, fetch a value via FUN_1002e750 and store at +0x24.
 * If value != 5, call FUN_1002e3a0 with a constant; else fetch again and
 * call FUN_1002eda0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002eda0(void);

__declspec(naked) void FUN_1002ed60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        push    esi
        mov     esi, ecx
        jnz     L_cont
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
L_cont:
        cmp     eax, 0x5
        mov     ecx, esi
        jz      L_eq5
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
L_eq5:
        call    FUN_1002e750
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_1002eda0
        pop     esi
        ret     0x4
    }
}
