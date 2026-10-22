/* src/modules/gundll/parser/func_1002ebc0.c — FUN_1002ebc0 (72 B) __thiscall, RET 0x4. */

extern void __cdecl FUN_1002e3a0(void);
extern void __cdecl FUN_1002ec10(void);
extern void __cdecl FUN_1002e750(void);

__declspec(naked) void FUN_1002ebc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, ecx
        sub     eax, 0x0
        jz      L3
        dec     eax
        jz      L2
        sub     eax, 0x2
        jz      L2
        push    0xc1121c00
        mov     ecx, esi
        call    FUN_1002e3a0
        pop     esi
        ret     0x4
    L2:
        push    ecx
        mov     ecx, esi
        call    FUN_1002ec10
        pop     esi
        ret     0x4
    L3:
        mov     ecx, esi
        call    FUN_1002e750
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_1002ec10
        pop     esi
        ret     0x4
    }
}
