/*
 * FUN_006F2320 (38 B) — Check: if *param_1 != 1, call FUN_006f39a0 on
 * this+0xA8, compare result with double at 0x76d970, return 0 if <=, else 1.
 * If *param_1 == 1, return 1 immediately.
 *
 * __fastcall (ECX = param_1).
 *
 * Disassembly:
 *   83 39 01             cmp     dword ptr [ecx], 1
 *   74 1B                jz      ret1
 *   81 C1 A8 00 00 00    add     ecx, 0xa8
 *   E8 70 16 00 00       call    0x006f39a0
 *   DC 1D 70 D9 76 00    fcomp   qword ptr [0x0076d970]
 *   DF E0                fnstsw  ax
 *   F6 C4 41             test    ah, 0x41
 *   74 03                jz      ret1
 *   33 C0                xor     eax, eax
 *   C3                   ret
 *    B8 01 00 00 00      mov     eax, 1
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f39a0(int);

__declspec(naked) int __fastcall FUN_006f2320(int *param_1)
{
    __asm {
        cmp     dword ptr [ecx], 1
        jz      ret1
        add     ecx, 0xa8
        call    FUN_006f39a0
        _emit 0xDC
        _emit 0x1D
        _emit 0x70
        _emit 0xD9
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x41
        jz      ret1
        xor     eax, eax
        ret
ret1:
        mov     eax, 1
        ret
    }
}
