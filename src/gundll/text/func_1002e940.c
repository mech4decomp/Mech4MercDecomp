/*
 * FUN_1002e940 (50 B) — __thiscall.
 * If param_1 != 1, call FUN_1002e3a0(0xc1121c00); else init via
 * FUN_1002e980(1) and, if >= 0, call FUN_1002e9f0(this+0x24).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002e980(void);
extern void __cdecl FUN_1002e9f0(void);

__declspec(naked) void FUN_1002e940(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        dec     eax
        push    esi
        mov     esi, ecx
        jz      L1
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
    L1:
        push    0x1
        call    FUN_1002e980
        test    eax, eax
        jl      L2
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_1002e9f0
    L2:
        pop     esi
        ret     0x4
    }
}
