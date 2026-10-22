/*
 * FUN_004CED30 (35 B) — Clear a bit in a bitfield.
 *
 * __thiscall (ECX = this), RET 4.
 * Clears bit `index` in the bitfield at this+0x48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004ced30(int index)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 8]
        mov     eax, ecx
        and     ecx, 7
        mov     dl, 1
        shl     dl, cl
        sar     eax, 3
        mov     cl, byte ptr [eax + esi + 0x48]
        not     dl
        and     cl, dl
        mov     byte ptr [eax + esi + 0x48], cl
        pop     esi
        ret     4
    }
}
