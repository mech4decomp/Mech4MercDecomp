/*
 * FUN_006055C0 (34 B) — __thiscall destructor.
 *
 * Sets vtable 0x78b9c4 at [this], calls FUN_0041fc90() on this+0x20 and
 * this+0x18, then FUN_00415380() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_006055c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi], 0x78b9c4
        call    FUN_0041fc90
        lea     ecx, [esi + 0x18]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
