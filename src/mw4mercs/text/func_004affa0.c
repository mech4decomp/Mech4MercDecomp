/*
 * FUN_004AFFA0 (8 B) — __fastcall getter: returns *(unsigned short *)(ecx + 0x188).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned short __fastcall FUN_004affa0(void)
{
    __asm {
        mov     ax, word ptr [ecx + 0x188]
        ret
    }
}
