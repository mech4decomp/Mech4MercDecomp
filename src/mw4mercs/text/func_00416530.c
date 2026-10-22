/*
 * FUN_00416530 (46 B) — database item/pool constructor. __thiscall (this in ECX),
 * RET 0x4 (1 param). Calls FUN_00415c10, sets vtable 0x76d4b8, initializes
 * [this+0x10]=-1 and [this+0x14]=0, calls FUN_004165e0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(void);
extern void __cdecl FUN_004165e0(void);

__declspec(naked) void FUN_00416530(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415c10
        mov     ecx, esi
        mov     dword ptr [esi], 0x76d4b8
        mov     dword ptr [esi + 0x10], 0xffffffff
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_004165e0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
