/*
 * FUN_006A3B90 (33 B) — __thiscall constructor.
 *
 * Calls FUN_006a22a0() (thiscall), zeroes [this+8] and [this+0x10], sets
 * [this+0xc]=1, sets vtable pointer 0x799dcc at [this], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void FUN_006a3b90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        xor     eax, eax
        mov     byte ptr [esi + 0x8], al
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0xc], 0x1
        mov     dword ptr [esi], 0x799dcc
        mov     eax, esi
        pop     esi
        ret
    }
}
