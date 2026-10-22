/*
 * FUN_00415560 (40 B) — archive/database registered-class subsystem:
 * __thiscall constructor. Stores arg1 at this[4], arg2 at this[0xc],
 * calls FUN_00415d40(arg2), zeroes this[0x10]/[0x14]/[0x18], returns this.
 * this=ECX, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415d40(void);

__declspec(naked) void func_00415560(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        xor     eax, eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     eax, esi
        pop     esi
        ret     8
    }
}
