/*
 * FUN_00409610 (90 B) — __fastcall constructor. Calls FUN_00415180,
 * zeroes +8/+0xc, sets vtable 0x76cd9c, then constructs two sub-objects
 * at +0x10 and +0x24 via FUN_00416280, and finally sets vtable 0x76ce00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416280(void);

__declspec(naked) void* FUN_00409610(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        push    1
        push    0
        lea     edi, [esi+0x10]
        push    0x19
        mov     ecx, edi
        mov     dword ptr [esi+8], 0
        mov     dword ptr [esi+0xc], 0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_00416280
        push    1
        mov     dword ptr [edi], 0x76ce04
        push    0
        lea     edi, [esi+0x24]
        push    0x19
        mov     ecx, edi
        call    FUN_00416280
        mov     dword ptr [edi], 0x76ce04
        pop     edi
        mov     dword ptr [esi], 0x76ce00
        mov     eax, esi
        pop     esi
        ret
    }
}
