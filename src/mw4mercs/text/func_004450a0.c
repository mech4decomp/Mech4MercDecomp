/*
 * FUN_004450a0 (42 B) - MLR mesh/render constructor (__thiscall, RET 0x4).
 * Calls FUN_00485520(param), sets vtable pointer 0x76e7c4, zeroes [this+0xa0],
 * sets [this+0x20]=1, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00485520(void);

__declspec(naked) void FUN_004450a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00485520
        mov     dword ptr [esi], 0x76e7c4
        mov     dword ptr [esi + 0xa0], 0x0
        mov     dword ptr [esi + 0x20], 0x1
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
