/*
 * FUN_1002ec90 (66 B) — __thiscall, RET 0x4 (ECX = this, param_1 on stack).
 * Dispatches on param_1: 2/4 -> 0; 7 -> FUN_1002ece0 then maybe FUN_1002ec50;
 * otherwise FUN_1002e3a0(this, 0xc1121c00).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002ece0(void);
extern void __cdecl FUN_1002ec50(void);

__declspec(naked) void FUN_1002ec90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        sub     ecx, 0x2
        jz      Lce
        sub     ecx, 0x2
        jz      Lce
        sub     ecx, 0x3
        mov     ecx, esi
        jz      Lb8
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
    Lb8:
        push    0x7
        call    FUN_1002ece0
        test    eax, eax
        jl      Lce
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_1002ec50
    Lce:
        pop     esi
        ret     0x4
    }
}
