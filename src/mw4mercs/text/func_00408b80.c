/*
 * FUN_00408b80 (41 B) — __thiscall, RET 0x4: constructor that stores a
 * global into the object, calls FUN_00415180, and initializes fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b8c10;   /* DAT_007b8c10 */
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_00408b80(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd68
        mov     dword ptr [esi + 0x10], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
