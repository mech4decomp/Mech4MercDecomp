/*
 * FUN_004CED60 (35 B) — Test a bit in a bitfield.
 *
 * __thiscall (ECX = this), RET 4.
 * Tests bit `index` in the bitfield at this+0x48.
 * Returns 1 if set, 0 if clear.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004ced60(int index)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     ecx, eax
        and     ecx, 7
        mov     edx, 1
        sar     eax, 3
        mov     al, byte ptr [eax + esi + 0x48]
        shl     edx, cl
        pop     esi
        _emit 0x84
        _emit 0xD0
        setne   al
        ret     4
    }
}
