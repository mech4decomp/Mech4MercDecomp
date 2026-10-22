/*
 * FUN_1002ec10 (61 B) -- __thiscall, RET 0x4.
 * Switch on param_1: 1 -> FUN_1002e940 then FUN_1002ebc0; 3 -> nothing;
 * else error via FUN_1002e3a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e940(void);
extern void __cdecl FUN_1002ebc0(void);

__declspec(naked) void FUN_1002ec10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        dec     ecx
        jz      L_case1
        sub     ecx, 0x2
        jz      L_out
        push    0xc1121c00
        mov     ecx, esi
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
L_case1:
        push    1
        mov     ecx, esi
        call    FUN_1002e940
        test    eax, eax
        jl      L_out
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_1002ebc0
L_out:
        pop     esi
        ret     0x4
    }
}
