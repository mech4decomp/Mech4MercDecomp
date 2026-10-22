/*
 * FUN_00733c20 (1256 B) — Texture/surface object constructor (__thiscall).
 *
 * Initializes a large object (this, ECX) from a name string, allocates a
 * copy via FUN_006f3c80, and registers it in a global list (head
 * DAT_00857f38). Builds texture/surface descriptors via FUN_0075b120/
 * FUN_0075b340/FUN_0075b2f0/FUN_0075b280 and friends. __thiscall, RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aa284;              /* DAT_008aa284 */
extern char g_8aa288;             /* DAT_008aa288 */
extern int g_857f38;              /* DAT_00857f38 — list head */
extern int g_85a230;              /* DAT_0085a230 */
extern char g_87dd0a;             /* DAT_0087dd0a */
extern int g_896c88;              /* DAT_00896c88 */
extern int g_85a214;              /* DAT_0085a214 */
extern int g_857f3c;              /* DAT_00857f3c */
extern void *g_76b294;            /* malloc */

extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_00733a70(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0075b120(void);
extern void __cdecl FUN_0075b340(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00735710(void);
extern void __cdecl FUN_00735750(void);
extern void __cdecl FUN_0075b2f0(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_0075b280(void);
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00717a10(void);
extern void __cdecl FUN_0075b9c0(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_0075b720(void);
extern void __cdecl FUN_0075b040(void);

__declspec(naked) void __stdcall FUN_00733c20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x16c
        xor     eax, eax
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebx + 0xfc], eax
        mov     dword ptr [ebx + 0xf4], eax
        push    edi
        mov     dword ptr [ebx + 0xe8], eax
        mov     dword ptr [ebx + 0x18], eax
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0x24], eax
        mov     dword ptr [ebx + 0x28], eax
        mov     dword ptr [ebx + 0x10], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx + 0x100], eax
        mov     dword ptr [ebx + 0xf8], eax
        mov     dword ptr [ebx + 0xe4], eax
        mov     eax, dword ptr [g_8aa284]
        mov     ecx, 0x3
        mov     dword ptr [ebx + 0xa8], ecx
        mov     dword ptr [ebx + 0xac], ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        push    ecx
        mov     dword ptr [ebx + 0xe0], 0x3f800000
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     al, byte ptr [g_8aa288]
        and     ecx, 0x3
        test    al, al
        rep movsb
        jz      L_3d13
        push    0x10
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_857f38]
        xor     esi, esi
        add     esp, 0x4
        cmp     ecx, esi
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jnz     L_3cfa
        mov     dword ptr [g_857f38], eax
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jmp     L_40f2

L_3cfa:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jz      L_40e9

L_3d05:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jnz     L_3d05
        jmp     L_40e9

L_3d13:
        mov     edx, dword ptr [g_85a230]
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x7a2ce0
        push    edx
        call    FUN_00740d60
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp + 0x8]
        lea     esi, [ebx + 0x4]
        push    esi
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00733a70
        mov     edx, dword ptr [ebp - 0x4]
        push    edx
        call    FUN_00740db0
        mov     eax, dword ptr [esi]
        xor     esi, esi
        cmp     eax, esi
        jnz     L_3d93
        push    0x10
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_857f38]
        add     esp, 0x4
        cmp     ecx, esi
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jnz     L_3d7a
        mov     dword ptr [g_857f38], eax
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jmp     L_40f2

L_3d7a:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jz      L_40e9

L_3d85:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jnz     L_3d85
        jmp     L_40e9

L_3d93:
        lea     edi, [ebx + 0x8]
        push    edi
        push    0x7afc40
        push    eax
        call    FUN_0075b120
        mov     eax, dword ptr [edi]
        lea     esi, [ebx + 0x10]
        push    esi
        push    0x7afbe0
        push    eax
        call    FUN_00740d60
        xor     eax, eax
        mov     ecx, 0x1b
        lea     edi, [ebp - 0x84]
        rep stosd
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0x8]
        push    ecx
        xor     edi, edi
        push    edi
        lea     edx, [ebp - 0x84]
        push    edx
        push    eax
        mov     dword ptr [ebp - 0x8], 0x1007
        mov     dword ptr [ebp - 0x84], 0x6c
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_0075b340
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0x0
        jge     L_3e1d
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [g_896c88]
        push    ecx
        push    0x2744
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_3e1d
        int     3

L_3e1d:
        mov     dl, byte ptr [ebp + 0xc]
        test    dl, dl
        mov     eax, dword ptr [ebp - 0x7c]
        mov     ecx, dword ptr [ebp - 0x78]
        mov     dword ptr [ebx + 0xb4], edi
        mov     dword ptr [ebx + 0xbc], eax
        mov     dword ptr [ebx + 0xb8], ecx
        mov     dword ptr [ebx + 0xb0], edi
        jnz     L_3f8b
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x16c]
        rep stosd
        mov     ecx, 0x1b
        lea     edi, [ebp - 0xf0]
        rep stosd
        mov     ecx, dword ptr [g_85a214]
        lea     eax, [ebp + 0xc]
        push    eax
        push    0x7a2d60
        push    ecx
        mov     dword ptr [ebp - 0x16c], 0x7c
        mov     dword ptr [ebp - 0xf0], 0x6c
        call    FUN_00740d60
        mov     eax, dword ptr [ebp + 0xc]
        lea     edx, [ebp - 0x16c]
        push    edx
        push    eax
        call    FUN_00735710
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        call    FUN_00740db0
        mov     eax, dword ptr [g_85a214]
        lea     edx, [ebp + 0x8]
        push    edx
        push    0x7a2d20
        push    eax
        call    FUN_00740d60
        mov     edx, dword ptr [ebp + 0x8]
        lea     ecx, [ebp - 0xf0]
        push    ecx
        push    edx
        call    FUN_00735750
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        call    FUN_00740db0
        mov     ecx, dword ptr [ebp - 0x7c]
        mov     eax, dword ptr [ebp - 0x78]
        mov     edx, 0x840
        mov     dword ptr [ebp - 0x164], ecx
        mov     dword ptr [ebp - 0xe8], ecx
        lea     ecx, [ebp - 0xf0]
        mov     dword ptr [ebp - 0x104], edx
        mov     dword ptr [ebp - 0x88], edx
        mov     edx, dword ptr [esi]
        push    ecx
        mov     edi, 0x1007
        push    edx
        mov     dword ptr [ebp - 0x160], eax
        mov     dword ptr [ebp - 0x168], edi
        mov     dword ptr [ebp - 0xe4], eax
        mov     dword ptr [ebp - 0xec], edi
        call    FUN_0075b2f0
        mov     ecx, dword ptr [g_85a230]
        push    0x0
        lea     edi, [ebx + 0x28]
        push    edi
        lea     eax, [ebp - 0x16c]
        push    eax
        push    ecx
        call    FUN_00735230
        mov     edx, dword ptr [edi]
        lea     eax, [ebx + 0x24]
        push    eax
        push    0x7a2d20
        push    edx
        call    FUN_00740d60
        mov     ecx, dword ptr [esi]
        lea     eax, [ebx + 0x18]
        push    eax
        mov     eax, dword ptr [ebx + 0x24]
        push    0x1
        push    0x0
        push    eax
        push    ecx
        call    FUN_0075b280
        mov     edx, dword ptr [edi]
        lea     eax, [ebx + 0x2c]
        mov     dword ptr [eax], 0x7c
        push    eax
        push    edx
        call    FUN_00735710
        mov     eax, dword ptr [ebx + 0x3c]
        imul    eax, dword ptr [ebx + 0x34]
        mov     ecx, dword ptr [g_8aa284]
        push    0x1
        push    eax
        push    ecx
        call    FUN_006f4940
        jmp     L_404e

L_3f8b:
        push    edi
        push    edi
        push    0x1
        shl     eax, 0x10
        or      eax, ecx
        push    eax
        push    0x7a60ec
        push    edi
        call    FUN_00717a10
        lea     edi, [ebx + 0x24]
        push    edi
        push    0x7a2d20
        push    0x0
        push    0x0
        mov     ecx, eax
        mov     dword ptr [ebx + 0xe8], eax
        call    FUN_0075b9c0
        push    eax
        call    FUN_00740d60
        mov     ecx, dword ptr [ebx + 0xe8]
        push    0x0
        push    0x801
        lea     eax, [ebx + 0x2c]
        push    eax
        push    0x0
        push    0x0
        push    0x0
        mov     dword ptr [eax], 0x7c
        call    FUN_0075b9c0
        push    eax
        call    FUN_007353f0
        mov     ecx, dword ptr [ebx + 0xe8]
        push    0x0
        push    0x0
        push    0x0
        call    FUN_0075b9c0
        push    eax
        call    FUN_00735440
        mov     edi, dword ptr [edi]
        lea     edx, [ebp - 0x84]
        push    edx
        push    edi
        call    FUN_00735750
        mov     eax, dword ptr [ebx + 0xbc]
        mov     ecx, dword ptr [ebx + 0xb8]
        mov     esi, dword ptr [esi]
        mov     dword ptr [ebp - 0x7c], eax
        mov     dword ptr [ebp - 0xc], eax
        lea     eax, [ebp - 0x84]
        xor     edx, edx
        push    eax
        push    esi
        mov     dword ptr [ebp - 0x78], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x10], ecx
        call    FUN_0075b2f0
        lea     eax, [ebx + 0x18]
        push    eax
        push    0x1
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    edi
        push    esi
        call    FUN_0075b280

L_404e:
        mov     edx, dword ptr [ebx + 0xb8]
        mov     eax, 0x3f800000
        mov     dword ptr [ebx + 0xd8], eax
        mov     dword ptr [ebx + 0xdc], eax
        or      eax, 0xffffffff
        lea     ecx, [ebx + 0xec]
        mov     dword ptr [ebx + 0xc8], edx
        mov     edx, dword ptr [ebx + 0x4]
        mov     dword ptr [ebx + 0xd0], eax
        mov     dword ptr [ebx + 0xd4], eax
        mov     eax, dword ptr [ebx + 0xbc]
        push    ecx
        xor     esi, esi
        push    edx
        mov     dword ptr [ebx + 0xc0], esi
        mov     dword ptr [ebx + 0xc4], esi
        mov     dword ptr [ebx + 0xcc], eax
        call    FUN_0075b720
        mov     eax, dword ptr [ebx + 0x4]
        push    esi
        push    eax
        call    FUN_0075b040
        push    0x10
        call    dword ptr [g_76b294]
        mov     ecx, dword ptr [g_857f38]
        add     esp, 0x4
        cmp     ecx, esi
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jnz     L_40d9
        mov     dword ptr [g_857f38], eax
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jmp     L_40f2

L_40d9:
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jz      L_40e9

L_40e0:
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 0x4]
        cmp     edx, esi
        jnz     L_40e0

L_40e9:
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], ecx

L_40f2:
        mov     eax, dword ptr [g_857f3c]
        inc     eax
        pop     edi
        mov     dword ptr [g_857f3c], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
