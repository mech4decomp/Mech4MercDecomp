/*
 * FUN_005b8f00 (26 B) — __thiscall destructor.
 *
 * Sets vtable ptr at [this]=0x786cb0, destroys sub-object at this+0x10
 * (FUN_0041fc90), then calls FUN_00415380 on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *param);
extern void __stdcall FUN_00415380(void *param);

__declspec(naked) void __stdcall FUN_005b8f00(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi], 0x786cb0
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
