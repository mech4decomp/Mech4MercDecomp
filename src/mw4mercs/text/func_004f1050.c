/*
 * FUN_004F1050 (35 B) — Alloc + init helper (__cdecl, RET 0).
 *
 * Allocates 0x14c bytes via FUN_004084D0. If successful, calls
 * FUN_004C43F0(DAT_007DAB04) on the allocation and returns result.
 * Returns 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004084d0(int size);
extern int __stdcall FUN_004c43f0(int param);

__declspec(naked) int __cdecl FUN_004f1050(void)
{
    __asm {
        push    0x14c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        _emit   0x8B
        _emit   0x0D
        _emit   0x04
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        push    ecx
        mov     ecx, eax
        call    FUN_004c43f0
        ret
    l_fail:
        xor     eax, eax
        ret
    }
}
