/*
 * FUN_0040a020 (86 B) — __fastcall-style constructor: calls FUN_00415180,
 * zeroes two fields, installs vtable pointers, and initializes two
 * sub-objects at +0x10 and +0x28 via FUN_00416e20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416e20(void);
extern int g_007b8c10;

__declspec(naked) void FUN_0040a020(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        lea     edi, [esi+0x10]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi+8], 0
        mov     dword ptr [esi+0xc], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416e20
        mov     dword ptr [edi], 0x76cedc
        push    1
        lea     edi, [esi+0x28]
        push    0
        mov     ecx, edi
        call    FUN_00416e20
        mov     dword ptr [edi], 0x76cedc
        pop     edi
        mov     dword ptr [esi], 0x76ced8
        mov     eax, esi
        pop     esi
        ret
    }
}
