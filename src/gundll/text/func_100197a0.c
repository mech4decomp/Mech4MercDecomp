/*
 * FUN_100197a0 (37 B) — __thiscall, RET 0x4.
 * Ctor: calls FUN_1001c720(this, 0x7103, param_1), sets vtable 0x10049a88,
 * zeroes member at +0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_100197a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x7103
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x10049a88
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
