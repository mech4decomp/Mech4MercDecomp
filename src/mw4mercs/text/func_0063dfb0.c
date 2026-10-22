/*
 * FUN_0063dfb0 (21 B) — __thiscall: copies 0xc dwords from the
 * stack argument ([esp+8]) into this+0x50 (rep movsd).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0063dfb0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        lea     edi, [ecx+0x50]
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        ret     0x4
    }
}
