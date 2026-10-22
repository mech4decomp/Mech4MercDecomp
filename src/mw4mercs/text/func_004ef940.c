/*
 * FUN_004EF940 (35 B) — Alloc + init helper (__cdecl, RET 0).
 *
 * Allocates 0x154 bytes via FUN_004084D0. If successful, calls
 * FUN_004BCE50(DAT_007DAAD4) on the allocation and returns result.
 * Returns 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int size);
extern int __stdcall FUN_004bce50(int param);

__declspec(naked) int __cdecl FUN_004ef940(void)
{
    __asm {
        push    0x154
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        _emit   0x8B
        _emit   0x0D
        _emit   0xD4
        _emit   0xAA
        _emit   0x7D
        _emit   0x00
        push    ecx
        mov     ecx, eax
        call    FUN_004bce50
        ret
    l_fail:
        xor     eax, eax
        ret
    }
}
