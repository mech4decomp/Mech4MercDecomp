/*
 * FUN_0040bc00 (47 B) — __fastcall constructor: calls FUN_00415180(global),
 * zeroes fields +8..+0x20, sets vtable 0x76d034, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void FUN_00415180(void);

__declspec(naked) void FUN_0040bc00(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi+0x14], eax
        mov     dword ptr [esi+0x18], eax
        mov     dword ptr [esi+0x1c], eax
        mov     dword ptr [esi+8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi], 0x76d034
        mov     eax, esi
        pop     esi
        ret
    }
}
