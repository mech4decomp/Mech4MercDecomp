/*
 * FUN_004E8F20 (165 B) — Adept Zone constructor (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c43f0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_004c8a50(void);
extern int g_7dc7a8;   /* DAT_007dc7a8 */
extern int g_7daa38;   /* DAT_007daa38 */

__declspec(naked) void __fastcall FUN_004e8f20(void)
{
    __asm {
        mov     eax, dword ptr [g_7dc7a8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004c43f0
        xor     edi, edi
        mov     dword ptr [esi + 0x158], edi
        mov     dword ptr [esi + 0x154], edi
        mov     dword ptr [esi + 0x160], edi
        mov     dword ptr [esi + 0x15c], edi
        mov     dword ptr [esi + 0x168], edi
        mov     dword ptr [esi + 0x164], edi
        mov     dword ptr [esi + 0x170], edi
        mov     dword ptr [esi + 0x16c], edi
        lea     ecx, [esi + 0x180]
        mov     dword ptr [esi + 0x14c], edi
        mov     dword ptr [esi + 0x178], edi
        mov     dword ptr [esi + 0x174], edi
        call    FUN_004d1f10
        lea     ecx, [esi + 0x1c4]
        call    FUN_004d1f10
        mov     ecx, dword ptr [g_7daa38]
        mov     dword ptr [esi], 0x7744f4
        mov     dword ptr [esi + 0x13c], 0x4e9800
        call    FUN_00416110
        mov     ebx, eax
        cmp     ebx, edi
        jz      L8FB7
        mov     ecx, ebx
        call    FUN_00491280
        mov     dword ptr [ebx + 0x18], edi
        mov     edi, ebx
    L8FB7:
        push    edi
        mov     ecx, esi
        call    FUN_004c8a50
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
