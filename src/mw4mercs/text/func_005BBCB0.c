/*
 * FUN_005BBCB0 (243 B) — in-.text data block function (block 0x5BB9CB).
 * String prefix handling: copies into buffer 0x7f2160, dispatches on
 * leading char via FUN_00532120 and fn ptr 0x76b2ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00532120(void);

extern void (__cdecl *g_0076b2ac)(void);   /* fn ptr @ 0x76b2ac */

extern int  g_007dab44;   /* DAT_007dab44 */
extern int  g_007dab40;   /* DAT_007dab40 */
extern char g_007b5514;   /* byte @ 0x7b5514 */
extern char g_007f2160;   /* byte @ 0x7f2160 */
extern int  g_007f2260;   /* DAT_007f2260 */
extern int  g_007f2264;   /* DAT_007f2264 */
extern char g_7f2160[];   /* buffer @ 0x7f2160 */
extern char g_7f2161[];   /* buffer @ 0x7f2161 */
extern char g_787120[];   /* string @ 0x787120 */
extern char g_787118[];   /* string @ 0x787118 */

__declspec(naked) void FUN_005BBCB0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     al, byte ptr [edi]
        cmp     al, 0x5f
        jne     LBCF0
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7f2160
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     cl, byte ptr [g_007b5514]
        pop     edi
        mov     byte ptr [g_007f2160], cl
        mov     eax, offset g_7f2160
        pop     esi
        ret
LBCF0:
        cmp     al, 0x40
        jne     LBD9E
        mov     esi, dword ptr [g_0076b2ac]
        push    offset g_787120
        push    edi
        call    esi
        add     esp, 8
        test    eax, eax
        jne     LBD34
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx]
        mov     ecx, dword ptr [g_007f2260]
        xor     eax, esi
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        call    FUN_00532120
        pop     edi
        pop     esi
        ret
LBD34:
        push    offset g_787118
        push    edi
        call    esi
        add     esp, 8
        test    eax, eax
        jne     LBD6A
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        mov     esi, dword ptr [edx]
        mov     ecx, dword ptr [g_007f2264]
        xor     eax, esi
        push    ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        call    FUN_00532120
        pop     edi
        pop     esi
        ret
LBD6A:
        mov     dl, byte ptr [g_007b5514]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     byte ptr [g_007f2160], dl
        mov     edi, offset g_7f2161
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, offset g_7f2160
        pop     esi
        ret
LBD9E:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
