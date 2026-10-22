/*
 * FUN_00734ae0 (909 B) — texture/surface setup (__fastcall, ECX = this).
 * Loads a format descriptor, builds several local descriptor blocks on
 * the stack, and calls a series of D3D-style surface/texture helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_85a230;       /* 0x0085a230 */
extern int   g_85a214;       /* 0x0085a214 */
extern int   g_896c88;       /* 0x00896c88 */
extern int   g_8aa284;       /* 0x008aa284 */
extern char  g_87dd0a;       /* 0x0087dd0a */
extern char  g_7a2ce0[];     /* 0x007a2ce0 */
extern char  g_7afc40[];     /* 0x007afc40 */
extern char  g_7afbe0[];     /* 0x007afbe0 */
extern char  g_7a2d60[];     /* 0x007a2d60 */
extern char  g_7a2d20[];     /* 0x007a2d20 */

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
extern void __cdecl FUN_0075b9c0(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b040(void);
extern void __cdecl FUN_0075b4a0(void);

__declspec(naked) void FUN_00734ae0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x17c
        push    ebx
        push    esi
        push    edi
        lea     eax, [ebp - 0x4]
        push    eax
        mov     esi, ecx
        mov     ecx, dword ptr [g_85a230]
        push    0x7a2ce0
        push    ecx
        mov     dword ptr [ebp - 0x4], 0x0
        call    FUN_00740d60
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [esi]
        lea     edi, [esi + 0x4]
        push    edi
        push    edx
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 0x18], edi
        call    FUN_00733a70
        mov     ecx, dword ptr [ebp - 0x4]
        push    ecx
        call    FUN_00740db0
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_34e66
        lea     edi, [esi + 0x8]
        push    edi
        push    0x7afc40
        push    eax
        call    FUN_0075b120
        mov     edx, dword ptr [edi]
        lea     ebx, [esi + 0x10]
        push    ebx
        push    0x7afbe0
        push    edx
        call    FUN_00740d60
        mov     edx, dword ptr [ebx]
        xor     eax, eax
        mov     ecx, 0x1b
        lea     edi, [ebp - 0x94]
        rep     stosd
        lea     eax, [ebp - 0x8]
        push    eax
        xor     edi, edi
        push    edi
        lea     ecx, [ebp - 0x94]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x8], 0x1007
        mov     dword ptr [ebp - 0x94], 0x6c
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_0075b340
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0x0
        jge     L_34bbc
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [g_896c88]
        push    eax
        push    0x2744
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_34bbc
        int     3
    L_34bbc:
        mov     ecx, dword ptr [esi + 0xe8]
        cmp     ecx, edi
        mov     edx, dword ptr [ebp - 0x8c]
        mov     eax, dword ptr [ebp - 0x88]
        mov     dword ptr [esi + 0xb4], edi
        mov     dword ptr [esi + 0xbc], edx
        mov     dword ptr [esi + 0xb8], eax
        mov     dword ptr [esi + 0xb0], edi
        jnz     L_34d3d
        mov     edx, dword ptr [g_85a214]
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x17c]
        rep     stosd
        mov     ecx, 0x1b
        lea     edi, [ebp - 0x100]
        rep     stosd
        lea     ecx, [ebp - 0x10]
        push    ecx
        push    0x7a2d60
        push    edx
        mov     dword ptr [ebp - 0x17c], 0x7c
        mov     dword ptr [ebp - 0x100], 0x6c
        call    FUN_00740d60
        mov     ecx, dword ptr [ebp - 0x10]
        lea     eax, [ebp - 0x17c]
        push    eax
        push    ecx
        call    FUN_00735710
        mov     edx, dword ptr [ebp - 0x10]
        push    edx
        call    FUN_00740db0
        mov     ecx, dword ptr [g_85a214]
        lea     eax, [ebp - 0x14]
        push    eax
        push    0x7a2d20
        push    ecx
        call    FUN_00740d60
        mov     eax, dword ptr [ebp - 0x14]
        lea     edx, [ebp - 0x100]
        push    edx
        push    eax
        call    FUN_00735750
        mov     ecx, dword ptr [ebp - 0x14]
        push    ecx
        call    FUN_00740db0
        mov     eax, dword ptr [ebp - 0x88]
        mov     ecx, dword ptr [ebp - 0x8c]
        mov     edx, 0x840
        mov     dword ptr [ebp - 0x114], edx
        mov     dword ptr [ebp - 0x98], edx
        lea     edx, [ebp - 0x100]
        mov     dword ptr [ebp - 0x170], eax
        mov     dword ptr [ebp - 0xf4], eax
        mov     eax, dword ptr [ebx]
        push    edx
        mov     edi, 0x1007
        push    eax
        mov     dword ptr [ebp - 0x174], ecx
        mov     dword ptr [ebp - 0x178], edi
        mov     dword ptr [ebp - 0xf8], ecx
        mov     dword ptr [ebp - 0xfc], edi
        call    FUN_0075b2f0
        mov     edx, dword ptr [g_85a230]
        push    0x0
        lea     edi, [esi + 0x28]
        push    edi
        lea     ecx, [ebp - 0x17c]
        push    ecx
        push    edx
        call    FUN_00735230
        lea     eax, [esi + 0x24]
        push    eax
        mov     eax, dword ptr [edi]
        push    0x7a2d20
        push    eax
        call    FUN_00740d60
        mov     ecx, dword ptr [esi + 0x24]
        mov     edx, dword ptr [ebx]
        lea     eax, [esi + 0x18]
        push    eax
        push    0x1
        push    0x0
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0xc], eax
        call    FUN_0075b280
        lea     eax, [esi + 0x2c]
        mov     dword ptr [eax], 0x7c
        push    eax
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_00735710
        mov     ecx, dword ptr [esi + 0x3c]
        imul    ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [g_8aa284]
        push    0x1
        push    ecx
        push    edx
        call    FUN_006f4940
        jmp     L_34dec
    L_34d3d:
        lea     edi, [esi + 0x24]
        push    edi
        push    0x7a2d20
        push    0x0
        push    0x0
        call    FUN_0075b9c0
        push    eax
        call    FUN_00740d60
        mov     ecx, dword ptr [esi + 0xe8]
        push    0x0
        push    0x801
        lea     eax, [esi + 0x2c]
        push    eax
        push    0x0
        push    0x0
        push    0x0
        mov     dword ptr [eax], 0x7c
        call    FUN_0075b9c0
        push    eax
        call    FUN_007353f0
        mov     ecx, dword ptr [esi + 0xe8]
        push    0x0
        push    0x0
        push    0x0
        call    FUN_0075b9c0
        push    eax
        call    FUN_00735440
        mov     edi, dword ptr [edi]
        lea     eax, [ebp - 0x94]
        push    eax
        push    edi
        call    FUN_00735750
        mov     ecx, dword ptr [esi + 0xb8]
        mov     eax, dword ptr [esi + 0xbc]
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [ebp - 0x88], ecx
        mov     dword ptr [ebp - 0x20], ecx
        lea     ecx, [ebp - 0x94]
        xor     edx, edx
        push    ecx
        push    ebx
        mov     dword ptr [ebp - 0x8c], eax
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0x24], edx
        mov     dword ptr [ebp - 0x1c], eax
        call    FUN_0075b2f0
        lea     eax, [esi + 0x18]
        push    eax
        push    0x1
        lea     edx, [ebp - 0x28]
        push    edx
        push    edi
        push    ebx
        mov     dword ptr [ebp - 0xc], eax
        call    FUN_0075b280
    L_34dec:
        mov     eax, dword ptr [esi + 0xac]
        cmp     eax, 0x3
        jz      L_34e4d
        cmp     eax, 0x4
        jz      L_34e4d
        mov     edi, dword ptr [esi + 0xfc]
        mov     esi, dword ptr [esi + 0x100]
        mov     eax, dword ptr [ebp - 0x18]
        mov     ebx, dword ptr [eax]
        push    esi
        push    edi
        push    ebx
        call    FUN_0075b0d0
        push    0x1
        push    ebx
        call    FUN_0075b040
        push    esi
        push    edi
        push    ebx
        call    FUN_0075b0d0
        mov     ecx, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [ecx]
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    esi
        call    FUN_0075b4a0
        push    0x0
        push    0x0
        push    0x0
        push    0x0
        push    esi
        call    FUN_0075b4a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_34e4d:
        mov     edx, dword ptr [esi + 0x100]
        mov     eax, dword ptr [esi + 0xfc]
        mov     ecx, dword ptr [ebp - 0x18]
        push    edx
        mov     edx, dword ptr [ecx]
        push    eax
        push    edx
        call    FUN_0075b0d0
    L_34e66:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
