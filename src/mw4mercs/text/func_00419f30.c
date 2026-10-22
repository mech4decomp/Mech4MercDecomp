/*
 * FUN_00419f30 (30 B) — __thiscall init helper: calls FUN_0041a160 on the
 * source arg, then zeroes this+0xc / this+0x1c / this+0x2c. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041a160(void *p);

__declspec(naked) void FUN_00419f30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0041a160
        xor     eax, eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
