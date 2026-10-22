/*
 * FUN_004B34A0 (8 B) — Field getter (__fastcall, ECX=this).
 * Returns *(unsigned short *)(this + 0x178).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned short __fastcall FUN_004b34a0(void)
{
    __asm {
        mov     ax, word ptr [ecx + 0x178]
        ret
    }
}
