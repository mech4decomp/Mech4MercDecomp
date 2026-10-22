/*
 * FUN_005af470 (24 B) — __thiscall (ECX = this), RET.
 * Calls FUN_005af230, then clears flags at this+0x176 and this+0x177.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af230(void);

__declspec(naked) void __stdcall FUN_005af470(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005af230
        xor     al, al
        mov     byte ptr [esi + 0x176], al
        mov     byte ptr [esi + 0x177], al
        pop     esi
        ret
    }
}
