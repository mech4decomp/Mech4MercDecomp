/*
 * FUN_1002eee0 (66 B) — __thiscall, RET 0x4 (ECX = this, param_1 on stack).
 * If param_1 == 0, call FUN_1002e750 and store result. If (result) == 2,
 * call FUN_1002e750 again and return 0; else FUN_1002e3a0(this, 0xc1121c00).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e750(void);
extern void __cdecl FUN_1002e3a0(void);

__declspec(naked) void FUN_1002eee0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        xor     edi, edi
        sub     eax, edi
        mov     esi, ecx
        jz      Lf3
        sub     eax, 0x2
        jmp     L00
    Lf3:
        mov     ecx, esi
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
        cmp     eax, 0x2
    L00:
        mov     ecx, esi
        jz      L13
        push    0xc1121c00
        call    FUN_1002e3a0
        pop     edi
        pop     esi
        ret     0x4
    L13:
        call    FUN_1002e750
        mov     dword ptr [esi + 0x24], eax
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
