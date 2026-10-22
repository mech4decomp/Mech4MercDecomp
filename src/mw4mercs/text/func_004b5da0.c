/*
 * FUN_004B5DA0 (41 B) — Constructor (__thiscall, ECX=this), RET 4.
 * Calls FUN_00415180(DAT_007b8c10), zeroes fields[2,3], sets vtable,
 * stores param_1 at field[4], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int param_1);

__declspec(naked) void __stdcall FUN_004b5da0(void)
{
    __asm {
        _emit 0xa1
        _emit 0x10
        _emit 0x8c
        _emit 0x7b
        _emit 0x00
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 8]
        xor     eax, eax
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x0076cd9c
        mov     dword ptr [esi + 0x10], ecx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
