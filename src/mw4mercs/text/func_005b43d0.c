/*
 * FUN_005b43d0 (29 B) — __thiscall destructor, no stack params, plain RET.
 *
 * Sets this->vtable = 0x786558, calls FUN_0041fc90() on the sub-object at
 * this+0x54c, then FUN_005f36e0() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void);
extern void __stdcall FUN_005f36e0(void);

__declspec(naked) void __stdcall FUN_005b43d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x54c]
        mov     dword ptr [esi], 0x786558
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_005f36e0
        pop     esi
        ret
    }
}
