/*
 * FUN_1000de10 (38 B) — __thiscall ctor.
 * Calls FUN_1001c720(this, 0x2100, param_1), zeroes fields +0x20/+0x24,
 * sets vtable 0x10049698, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_1000de10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x2100
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049698
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
