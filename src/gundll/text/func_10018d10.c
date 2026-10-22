/*
 * FUN_10018d10 (37 B) — __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c9e0(this, 0x5316, param_1), sets vtable 0x10049a4c,
 * zeroes member at +0x1c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);

__declspec(naked) void FUN_10018d10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5316
        mov     esi, ecx
        call    FUN_1001c9e0
        mov     dword ptr [esi], 0x10049a4c
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
