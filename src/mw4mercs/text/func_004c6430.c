/*
 * FUN_004c6430 (268 B) - MLR node/mesh constructor. __thiscall, RET 0x4.
 * Calls FUN_00415180 with the stack arg, zeroes fields, sets the vtable
 * (0x76cd9c), and initializes several 4x4 matrices (rep movsd from
 * 0x7b9460) plus assorted scalar fields from globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);

extern int g_007b8d6c;   /* DAT_007b8d6c */
extern int g_007b8d68;   /* DAT_007b8d68 */
extern int g_007b8d70;   /* DAT_007b8d70 */
extern int g_007b3b2c;   /* PTR_FUN_007b3b2c */
extern int g_007b3a2c;   /* PTR_LAB_007b3a2c */
extern int g_007b3b28;   /* PTR_FUN_007b3b28 */
extern int g_007b3b30;   /* PTR_FUN_007b3b30 */

__declspec(naked) void __fastcall FUN_004c6430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        xor     edx, edx
        mov     dword ptr [ebx + 0x8], edx
        mov     dword ptr [ebx], 0x76cd9c
        mov     dword ptr [ebx + 0xc], edx
        mov     dword ptr [ebx + 0x14], edx
        mov     dword ptr [ebx + 0x10], edx
        lea     eax, [ebx + 0xb0]
        mov     edi, eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     esi, eax
        mov     eax, dword ptr [g_007b8d6c]
        lea     edi, [ebx + 0xf0]
        mov     ecx, 0xc
        rep movsd
        mov     ecx, dword ptr [g_007b8d68]
        mov     dword ptr [ebx + 0xe0], ecx
        mov     ecx, dword ptr [g_007b8d70]
        mov     dword ptr [ebx + 0xe8], ecx
        mov     ecx, dword ptr [g_007b8d6c]
        mov     dword ptr [ebx + 0xe4], eax
        mov     eax, dword ptr [g_007b8d68]
        mov     dword ptr [ebx + 0x124], ecx
        mov     dword ptr [ebx + 0x120], eax
        mov     eax, dword ptr [g_007b8d70]
        mov     dword ptr [ebx + 0x128], eax
        mov     eax, dword ptr [g_007b3b2c]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        lea     edi, [ebx + 0x50]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        lea     edi, [ebx + 0x80]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     ecx, dword ptr [g_007b3a2c]
        mov     dword ptr [ebx + 0xec], edx
        mov     dword ptr [ebx + 0x140], edx
        mov     edx, dword ptr [g_007b3b28]
        mov     dword ptr [ebx + 0x1c], ecx
        mov     ecx, dword ptr [g_007b3b30]
        pop     edi
        mov     dword ptr [ebx + 0x134], eax
        pop     esi
        mov     dword ptr [ebx + 0x12c], 0xbf800000
        mov     dword ptr [ebx + 0x18], 0x5
        mov     dword ptr [ebx + 0x130], edx
        mov     dword ptr [ebx + 0x138], ecx
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
