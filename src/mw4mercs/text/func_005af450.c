/*
 * FUN_005af450 (24 B) — __thiscall (ECX = this), RET.
 * Calls FUN_005af230, then sets flags at this+0x176 and this+0x177 to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af230(void);

__declspec(naked) void __stdcall FUN_005af450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005af230
        mov     al, 0x1
        mov     byte ptr [esi + 0x176], al
        mov     byte ptr [esi + 0x177], al
        pop     esi
        ret
    }
}
