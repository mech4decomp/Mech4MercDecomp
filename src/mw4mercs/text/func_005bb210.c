/*
 * FUN_005bb210 (40 B) — __thiscall destructor body.
 *
 * Sets this vtable to 0x00787018, destroys sub-objects at +0x26c and
 * +0x258 via FUN_0041fc90, then calls FUN_005ed0b0 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fc90(void);
extern void FUN_005ed0b0(void);

__declspec(naked) void FUN_005bb210(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x26c]
        mov     dword ptr [esi], 0x787018
        call    FUN_0041fc90
        lea     ecx, [esi + 0x258]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005ed0b0
        pop     esi
        ret
    }
}
