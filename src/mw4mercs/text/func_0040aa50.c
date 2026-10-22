/*
 * FUN_0040aa50 (86 B) — __fastcall constructor: calls FUN_00415180 with the
 * global DAT_007b8c10, zeroes +0x8/+0xc, sets vtable 0x76cd9c, constructs two
 * sub-objects at +0x10 and +0x24 via FUN_00416990(0,1), sets their vtables
 * 0x76cf6c, then sets final vtable 0x76cf68. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int a);
extern void __cdecl FUN_00416990(int a, int b);
extern int g_007b8c10;

__declspec(naked) void FUN_0040aa50(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    0x1
        lea     edi, [esi+0x10]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi+0x8], 0x0
        mov     dword ptr [esi+0xc], 0x0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416990
        mov     dword ptr [edi], 0x76cf6c
        push    0x1
        lea     edi, [esi+0x24]
        push    0x0
        mov     ecx, edi
        call    FUN_00416990
        mov     dword ptr [edi], 0x76cf6c
        pop     edi
        mov     dword ptr [esi], 0x76cf68
        mov     eax, esi
        pop     esi
        ret
    }
}
