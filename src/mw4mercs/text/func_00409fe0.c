/*
 * FUN_00409fe0 (41 B) — __thiscall-style constructor: calls FUN_00415180,
 * zeroes two fields, installs vtable pointer 0x76ced4, stores arg at +0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern int g_007b8c10;

__declspec(naked) void FUN_00409fe0(void)
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
        mov     dword ptr [esi], 0x76ced4
        mov     dword ptr [esi+0x10], ecx
        mov     eax, esi
        pop     esi
        ret     4
    }
}
