/*
 * FUN_1002ec50 (61 B) -- __thiscall, RET 0x4.
 * Switch on param_1: 0 -> FUN_1002e750 then FUN_1002ec90; 2/4 -> nothing;
 * else error via FUN_1002e3a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002ec90(void);

__declspec(naked) void FUN_1002ec50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        sub     ecx, eax
        jz      L_case0
        sub     ecx, 0x2
        jz      L_out
        sub     ecx, 0x2
        jz      L_out
        push    0xc1121c00
        mov     ecx, esi
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
L_case0:
        mov     ecx, esi
        call    FUN_1002e750
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_1002ec90
L_out:
        pop     esi
        ret     0x4
    }
}
