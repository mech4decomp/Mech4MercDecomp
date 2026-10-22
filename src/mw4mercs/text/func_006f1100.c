/*
 * FUN_006F1100 (41 B) — Calls FUN_006f39a0, compares result with double
 * at 0x76d970. If less, sets byte at this+0x2c to 1. Then writes byte
 * at this+0x2c to *param_1, returns this+0x28. RET 4.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   E8 98 28 00 00       call    0x006f39a0
 *   DC 1D 70 D9 76 00    fcomp   qword ptr [0x0076d970]
 *   DF E0                fnstsw  ax
 *   F6 C4 01             test    ah, 1
 *   74 04                jz      skip
 *   C6 46 2C 01          mov     byte ptr [esi + 0x2c], 1
 *   8A 46 2C             mov     al, byte ptr [esi + 0x2c]
 *   8B 4C 24 08          mov     ecx, dword ptr [esp + 8]
 *   88 01                mov     byte ptr [ecx], al
 *   8B 46 28             mov     eax, dword ptr [esi + 0x28]
 *   5E                   pop     esi
 *   C2 04 00             ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f39a0(int);

__declspec(naked) int __stdcall FUN_006f1100(unsigned char *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006f39a0
        _emit 0xDC
        _emit 0x1D
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 1
        jz      skip
        mov     byte ptr [esi + 0x2c], 1
skip:
        mov     al, byte ptr [esi + 0x2c]
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [ecx], al
        mov     eax, dword ptr [esi + 0x28]
        pop     esi
        ret     4
    }
}
