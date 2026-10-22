/*
 * FUN_100272f0 (37 B) — __thiscall ctor.
 * Calls FUN_1001c720(this, 0x5156, param_1), sets vtable 0x1004ac30,
 * zeroes field +0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_100272f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5156
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x1004ac30
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
