/*
 * FUN_0040bbc0 (41 B) — __thiscall constructor: calls FUN_00415180(global),
 * zeroes fields +8/+0xc, sets vtable 0x76d030, stores param at +0x10,
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void FUN_00415180(void);

__declspec(naked) void FUN_0040bbc0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp+8]
        xor     eax, eax
        mov     dword ptr [esi+8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi], 0x76d030
        mov     dword ptr [esi+0x10], ecx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
