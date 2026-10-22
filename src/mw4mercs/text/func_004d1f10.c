/*
 * FUN_004d1f10 (71 B) — MLR network subsystem: init a renderer-table object
 * (this=ECX). __thiscall, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

__declspec(naked) void FUN_004d1f10(void)
{
    __asm {
        push    esi
        push    0x0
        push    0x0
        mov     esi, ecx
        push    0x0
        call    FUN_0041e690
        mov     ax, word ptr [g_007db0ac]
        mov     cx, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x40], ax
        mov     word ptr [esi + 0x42], cx
        mov     dword ptr [esi], 0x772570
        mov     word ptr [esi + 0x40], 0xffff
        mov     dword ptr [esi + 0x20], 0
        mov     word ptr [esi + 0x24], 0xffff
        mov     dword ptr [esi + 0x3c], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
