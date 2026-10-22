/*
 * FUN_00567B90 (96 B true extent; 228 B slice incl. next fn) — in-.text
 * data block function (block 0x567237). Uses 0x7dab44/0x7dab40 XOR-keyed
 * pointer scheme and globals 0x805928/0x80592c/0x805918/0x805908/
 * 0x80d9bc; calls FUN_00563060.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00563060(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */
extern int g_00805928;   /* DAT_00805928 */
extern int g_0080592c;   /* DAT_0080592c */
extern int g_00805918;   /* DAT_00805918 */
extern int g_00805908;   /* DAT_00805908 */
extern int g_0080d9bc;   /* DAT_0080d9bc */

__declspec(naked) void FUN_00567B90(void)
{
    __asm {
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [g_00805928]
        push    esi
        mov     esi, dword ptr [g_0080592c]
        push    edi
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0x18]
        add     esi, 4
        xor     edx, 0x85739531
        mov     edi, dword ptr [edx + 0x30]
        add     eax, 0xa000
        cmp     esi, eax
        mov     dword ptr [g_0080592c], esi
        jb      L7BD2
        push    0
        call    FUN_00563060
        add     esp, 4
L7BD2:
        mov     eax, dword ptr [g_00805918]
        movsx   ecx, byte ptr [eax]
        mov     dword ptr [esi], edi
        inc     eax
        pop     edi
        mov     dword ptr [g_00805918], eax
        mov     eax, dword ptr [g_0080d9bc]
        mov     dword ptr [g_00805908], ecx
        pop     esi
        ret
    }
}
