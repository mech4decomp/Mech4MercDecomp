/*
 * FUN_004165b0 (30 B) — database item/pool destructor. __fastcall (this in ECX).
 * Sets vtable 0x76d4b8, [this+0x10]=-1, calls FUN_00416820 (thiscall) and
 * FUN_00415c40 (thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416820(void);
extern void __cdecl FUN_00415c40(void);

__declspec(naked) void FUN_004165b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76d4b8
        mov     dword ptr [esi + 0x10], 0xffffffff
        call    FUN_00416820
        mov     ecx, esi
        call    FUN_00415c40
        pop     esi
        ret
    }
}
