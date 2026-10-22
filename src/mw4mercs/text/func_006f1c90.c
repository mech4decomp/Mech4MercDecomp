/*
 * FUN_006F1C90 (73 B) — Timer-based state transition.
 *
 * __fastcall (ECX = this). If byte at this+0x68 is non-zero, calls
 * FUN_006F39A0 on this+0x6C and compares the result against a double
 * constant at 0x0076D970. If less than the constant, clears three
 * sub-objects (this+0x08, +0x10, +0x18) via FUN_0041FCB0, sets
 * byte at this+0x68 to 0, sets dword at this+0x00 to 2, returns 1.
 * Otherwise returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_006f39a0(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void __fastcall FUN_006f1c90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x68]
        test    al, al
        jz      l_fail
        lea     ecx, [esi + 0x6C]
        call    FUN_006f39a0
        _emit   0xDC
        _emit   0x1D
        _emit   0x70
        _emit   0xD9
        _emit   0x76
        _emit   0x00
        fnstsw  ax
        test    ah, 1
        jz      l_fail
        lea     ecx, [esi + 8]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fcb0
        lea     ecx, [esi + 0x18]
        call    FUN_0041fcb0
        mov     byte ptr [esi + 0x68], 0
        mov     dword ptr [esi], 2
        mov     al, 1
        pop     esi
        ret
    l_fail:
        xor     al, al
        pop     esi
        ret
    }
}
