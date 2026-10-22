/*
 * FUN_0069ff90 (29 B) — __thiscall ctor: calls base ctor FUN_006a01e0,
 * zeroes fields at +0x10/+0x14/+0x18, sets vtable pointer 0x799c00,
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a01e0(void);

__declspec(naked) void FUN_0069ff90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a01e0
        xor     eax, eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi], 0x799c00
        mov     eax, esi
        pop     esi
        ret
    }
}
