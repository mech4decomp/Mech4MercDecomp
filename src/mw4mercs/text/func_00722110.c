/*
 * FUN_00722110 (32 B) — __stdcall: writes an RGB triple to the VGA DAC
 * palette registers (port 0x3C8 index 0, then 0x3C9 for R/G/B).
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00722110(int r, int g, int b)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    eax
        push    edx
        mov     dx, 0x3c8
        xor     al, al
        out     dx, al
        inc     dx
        mov     al, byte ptr [ebp + 0x8]
        out     dx, al
        mov     al, byte ptr [ebp + 0xc]
        out     dx, al
        mov     al, byte ptr [ebp + 0x10]
        out     dx, al
        pop     edx
        pop     eax
        pop     ebp
        ret     0xc
    }
}
