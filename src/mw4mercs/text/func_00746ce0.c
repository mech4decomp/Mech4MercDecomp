/*
 * FUN_00746ce0 (157 B) — Initializes a set of global pointers/counters.
 *
 * Reads DAT_008b27d8; if non-zero and the dword at
 * [DAT_008b27d8 + DAT_008b27dc*4] == 0x1234aacc, sets up globals one way,
 * otherwise another. Finally zeroes DAT_008b27cc / DAT_008b27c8 and sets
 * PTR_DAT_007b743c = &DAT_008b2788.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008b27d8;   /* DAT_008b27d8 */
extern char g_008b27d1;   /* DAT_008b27d1 */
extern int  g_008b27dc;   /* DAT_008b27dc */
extern int  g_008b27c8;   /* DAT_008b27c8 */
extern int  g_007b743c;   /* PTR_DAT_007b743c */
extern int  g_008b2784;   /* DAT_008b2784 */
extern int  g_008b2780;   /* DAT_008b2780 */
extern int  g_008b277c;   /* DAT_008b277c */
extern int  g_008b2778;   /* DAT_008b2778 */
extern int  g_008b27cc;   /* DAT_008b27cc */

__declspec(naked) void FUN_00746ce0(void)
{
    __asm {
        mov     eax, dword ptr [g_008b27d8]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        mov     byte ptr [g_008b27d1], bl
        jz      L65
        mov     edx, dword ptr [g_008b27dc]
        cmp     dword ptr [eax + edx*0x4], 0x1234aacc
        jnz     L2B
        mov     ecx, dword ptr [g_008b27c8]
        mov     eax, dword ptr [g_007b743c]
        lea     edx, [ecx*0x4 + 0x0]
        mov     dword ptr [g_008b2784], eax
        mov     dword ptr [g_008b2780], edx
        mov     dword ptr [g_008b277c], eax
        mov     dword ptr [g_008b2778], ebx
        jmp     L65
L2B:
        mov     eax, dword ptr [g_008b27c8]
        mov     ecx, dword ptr [g_007b743c]
        push    esi
        lea     esi, [ecx + eax*0x4]
        mov     dword ptr [g_008b2784], esi
        mov     esi, eax
        shl     esi, 0x1e
        sub     esi, eax
        add     esi, edx
        lea     edx, [esi*0x4 + 0x8]
        shl     eax, 0x2
        mov     dword ptr [g_008b2780], edx
        mov     dword ptr [g_008b277c], ecx
        mov     dword ptr [g_008b2778], eax
        pop     esi
L65:
        mov     dword ptr [g_008b27cc], ebx
        mov     dword ptr [g_008b27c8], ebx
        mov     dword ptr [g_007b743c], 0x8b2788
        pop     ebx
        ret
    }
}
