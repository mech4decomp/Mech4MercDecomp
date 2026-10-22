/*
 * FUN_1000ce50 (38 B) — __thiscall ctor.
 * Calls FUN_1001c870(this, 0x1200, param_1), zeroes fields +0x24/+0x28,
 * sets vtable 0x10049644, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_1000ce50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x1200
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x10049644
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
