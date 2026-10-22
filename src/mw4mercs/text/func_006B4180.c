/*
 * FUN_006B4180 (212 B) — in-.text data block function (block 0x6B3D55).
 * Calls FUN_0041eb40 (twice) to init buffers, FUN_006b36f0, then loops
 * 9 times over a table at 0x7b6020/0x7b6024 calling FUN_006b3a60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_006b36f0(void);
extern void __cdecl FUN_006b3a60(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_007b6020[]; /* table @ 0x7b6020 */
extern int g_007b6024[]; /* table @ 0x7b6024 */

__declspec(naked) void FUN_006B4180(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        push    0xb
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_006b36f0
        add     esp, 0xc
        push    4
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], 0
        call    FUN_0041eb40
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        mov     ebx, dword ptr [esp + 0x30]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [eax + ebx*4 + 0x9098]
        add     eax, 0x9090
        mov     ecx, 0xe
        add     esi, ecx
        mov     dword ptr [eax + ebx*4 + 8], esi
        add     dword ptr [eax + 0xc00], ecx
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x30], 9
L4219:
        mov     edx, dword ptr [esi*8 + g_007b6024]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi*8 + g_007b6020]
        push    0
        push    ebx
        add     edx, ecx
        push    edi
        push    edx
        add     eax, dword ptr [esp + 0x24]
        push    eax
        call    FUN_006b3a60
        add     esp, 0x14
        inc     esi
        cmp     esi, 0xf
        jle     L4247
        xor     esi, esi
L4247:
        dec     dword ptr [esp + 0x30]
        jne     L4219
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
    }
}
