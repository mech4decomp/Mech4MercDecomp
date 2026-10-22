/*
 * FUN_00606970 (38 B) - __thiscall (ECX = this) constructor, RET (no cleanup).
 *
 * Calls FUN_00415180(g_7b8c10), zeroes fields at +8/+0xC/+0x10/+0x14,
 * sets vtable at [this] = 0x78ba84, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b8c10;
extern void __stdcall FUN_00415180(void);

__declspec(naked) void __stdcall FUN_00606970(void)
{
    __asm {
        mov     eax, dword ptr [g_7b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi], 0x78ba84
        mov     eax, esi
        pop     esi
        ret
    }
}
