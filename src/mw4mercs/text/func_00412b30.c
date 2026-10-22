/*
 * FUN_00412b30 (47 B) — __fastcall constructor: initializes a string-system
 * object (vtable 0x76cd9c -> 0x76d1f0), calls FUN_00415180 with a global,
 * and FUN_0041ee70(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);

__declspec(naked) void FUN_00412b30(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        push    eax
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041ee70
        mov     dword ptr [esi], 0x76d1f0
        mov     eax, esi
        pop     esi
        ret
    }
}
