/*
 * FUN_00747670 (191 B) — Texture manager initialization.
 *
 * If DAT_008b2868 is set, calls FUN_006fab90("InitializeTextureManager
 * called twice!") and INT3s if it returns non-zero. Allocates two buffers
 * via FUN_006f3c80, zeroes them, fills a table of 2999 words with 1,
 * sets DAT_008b2868=1, and conditionally clears DAT_0087c1d4 /
 * DAT_0087c0d1 / DAT_0087c254.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008b2868;   /* DAT_008b2868 */
extern int  g_00849324;   /* DAT_00849324 */
extern int  g_008b286c;   /* DAT_008b286c */
extern int  g_008b2870;   /* DAT_008b2870 */
extern int  g_008b2874;   /* DAT_008b2874 */
extern int  g_008b287c;   /* DAT_008b287c */
extern int  g_008b2878;   /* DAT_008b2878 */
extern int  g_0087c1d4;   /* DAT_0087c1d4 */
extern char g_0087c0d1;   /* DAT_0087c0d1 */
extern char g_0087c254;   /* DAT_0087c254 */

extern int __cdecl FUN_006fab90(char *msg);
extern int __cdecl FUN_006f3c80(int size, int pool);

__declspec(naked) void FUN_00747670(void)
{
    __asm {
        mov     al, byte ptr [g_008b2868]
        test    al, al
        jz      L8B
        push    0x7aa348
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L8B
        int     3
L8B:
        mov     eax, dword ptr [g_00849324]
        push    edi
        push    eax
        push    0x2ee0
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_00849324]
        push    ecx
        push    0x29040
        mov     dword ptr [g_008b286c], eax
        mov     dword ptr [g_008b2870], 0x0
        call    FUN_006f3c80
        mov     edx, eax
        xor     eax, eax
        mov     edi, edx
        mov     ecx, 0xa410
        rep stosd
        mov     ecx, 0xe
        mov     edi, 0x8b2830
        rep stosd
        mov     ecx, 0xe
        mov     edi, 0x8b27f8
        rep stosd
        mov     dword ptr [g_008b287c], eax
        mov     dword ptr [g_008b2874], edx
        mov     dword ptr [g_008b2878], edx
        lea     eax, [edx + 0x1a]
        mov     ecx, 0xbb7
        mov     edx, 0x1
        pop     edi
L700:
        mov     word ptr [eax], dx
        add     eax, 0x38
        dec     ecx
        jnz     L700
        mov     eax, dword ptr [g_0087c1d4]
        test    eax, eax
        mov     byte ptr [g_008b2868], dl
        jz      L72E
        mov     dword ptr [g_0087c1d4], 0x0
        mov     byte ptr [g_0087c0d1], dl
        mov     byte ptr [g_0087c254], dl
L72E:
        ret
    }
}
