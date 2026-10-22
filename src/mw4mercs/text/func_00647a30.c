/*
 * FUN_00647a30 (19 B) -- __thiscall init of a small node/list object:
 * loads *this, zeroes byte[0], sets [4]=0, [8]=self, [0xc]=self.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00647a30(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x8], eax
        mov     byte ptr [eax], 0x0
        mov     dword ptr [eax + 0xc], eax
        ret
    }
}
