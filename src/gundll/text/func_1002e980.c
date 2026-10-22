/*
 * FUN_1002e980 (103 B) — __thiscall, RET 0x4 (1 param).
 * Object init: if param_1 != 1 error; else init fields + call helpers.
 */

extern void __cdecl FUN_1002e3a0(void);
extern int __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002ec50(void);

__declspec(naked) void FUN_1002e980(void)
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
        call    FUN_1002e750
        cmp     eax, 0x7
        mov     dword ptr [esi + 0x24], eax
        jz      L2
        push    0xc1121c00
        mov     ecx, esi
        call    FUN_1002e3a0
        test    eax, eax
        jl      L3
    L2:
        mov     ecx, dword ptr [esi + 0x30]
        mov     eax, dword ptr [esi + 0x2c]
        mov     dword ptr [esi + 0x43c], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x434], 0x0
        mov     dword ptr [esi + 0x438], eax
        call    FUN_1002e750
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_1002ec50
    L3:
        pop     esi
        ret     0x4
    }
}
