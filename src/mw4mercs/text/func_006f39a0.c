/*
 * FUN_006F39A0 (32 B) — Calls FUN_00707E70(0), subtracts from this+0x08,
 * compares with double constant at 0x76D970. If <=, sets byte +0x10 = 1.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                push    esi
 *   6A 00             push    0
 *   8B F1             mov     esi, ecx
 *   E8 C6 44 01 00    call    FUN_00707E70
 *   DC 6E 08          fsubr   qword ptr [esi + 8]
 *   DC 15 70 D9 76 00 fcom    qword ptr [0x76D970]
 *   DF E0             fnstsw  ax
 *   F6 C4 41          test    ah, 0x41
 *   74 04             jz      skip
 *   C6 46 10 01       mov     byte ptr [esi + 0x10], 1
 *   5E                pop     esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_00707E70(int);

__declspec(naked) void __fastcall FUN_006f39a0(void *this)
{
    __asm {
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707E70
        fsubr   qword ptr [esi + 8]
        _emit 0xDC
        _emit 0x15
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jz      skip
        mov     byte ptr [esi + 0x10], 1
skip:
        pop     esi
        ret
    }
}
