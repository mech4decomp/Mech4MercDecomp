/*
 * FUN_00753cc0 (699 B) — texture load/create.
 *
 * __thiscall (ECX = this). Decodes an image file (bmp/jpg/tga) via a set of
 * decoder helpers, builds a texture descriptor, and creates the surface.
 * RET 0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_849324;
extern int g_8aadac;
extern void *g_76b2ac;   /* IAT: _stricmp */
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_007362b0(void);
extern void __cdecl FUN_00735f00(void);
extern void __cdecl FUN_0072dfe0(void);
extern int __cdecl FUN_006fab90(void *);
extern void __cdecl FUN_00753c90(void);
extern void __cdecl FUN_00753980(void);
extern void __cdecl FUN_0075ba00(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_0075bb60(void);
extern void __cdecl FUN_0075c060(void);
extern void __cdecl FUN_00735e30(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_00753cc0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        xor     edi, edi
        mov     dword ptr [ebp - 0x4], eax
        cmp     eax, edi
        mov     eax, dword ptr [ebp + 0x18]
        mov     esi, ecx
        jnz     L_753d09
        cmp     ax, di
        jnz     L_753de2
        mov     eax, [g_849324]
        push    eax
        call    FUN_006f4950
        lea     ecx, [ebp + 0x14]
        push    ecx
        lea     edx, [ebp - 0x4]
        push    edx
        push    ebx
        call    FUN_006faca0
        call    FUN_006f49a0
        jmp     L_753d12
L_753d09:
        cmp     ax, di
        jnz     L_753de2
L_753d12:
        mov     dword ptr [ebp + 0x18], edi
        mov     dword ptr [ebp + 0xc], edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        lea     edi, [ecx + ebx - 4]
        push    0x79e268
        push    edi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_753d5c
        mov     edx, dword ptr [ebp + 0x14]
        lea     eax, [ebp + 0xc]
        push    eax
        mov     eax, dword ptr [ebp - 0x4]
        lea     ecx, [ebp + 0x18]
        push    ecx
        push    edx
        push    eax
        push    ebx
        call    FUN_007362b0
        mov     eax, dword ptr [ebp + 0x18]
        mov     edi, dword ptr [ebp + 0xc]
        jmp     L_753de5
L_753d5c:
        mov     eax, [g_8aadac]
        test    eax, eax
        jz      L_753d96
        push    0x79e260
        push    edi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_753d96
        mov     eax, dword ptr [ebp + 0x14]
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp + 0x18]
        push    edx
        push    eax
        push    ecx
        push    ebx
        call    FUN_00735f00
        mov     eax, dword ptr [ebp + 0x18]
        mov     edi, dword ptr [ebp + 0xc]
        jmp     L_753de5
L_753d96:
        push    0x7700ac
        push    edi
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_753dc7
        mov     ecx, dword ptr [ebp + 0x14]
        lea     edx, [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp + 0x18]
        push    eax
        push    ecx
        push    edx
        push    ebx
        call    FUN_0072dfe0
        mov     eax, dword ptr [ebp + 0x18]
        mov     edi, dword ptr [ebp + 0xc]
        jmp     L_753de5
L_753dc7:
        push    ebx
        push    0x7adab8
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_753dda
        int     3
L_753dda:
        mov     eax, dword ptr [ebp + 0x18]
        mov     edi, dword ptr [ebp + 0xc]
        jmp     L_753de5
L_753de2:
        mov     edi, dword ptr [ebp + 0x1c]
L_753de5:
        cmp     ax, 0x10
        jnc     L_753df0
        mov     eax, 0x10
L_753df0:
        cmp     di, 0x10
        jnc     L_753dfb
        mov     edi, 0x10
L_753dfb:
        push    eax
        call    FUN_00753c90
        push    edi
        mov     word ptr [esi], ax
        call    FUN_00753c90
        test    ebx, ebx
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ebp + 0x28]
        mov     word ptr [esi + 0x2], ax
        mov     ax, word ptr [ebp + 0x20]
        mov     word ptr [esi + 0x6], ax
        mov     word ptr [esi + 0x4], 0x4
        mov     dword ptr [esi + 0x1c], ecx
        mov     dword ptr [esi + 0x20], edx
        jnz     L_753e31
        mov     ebx, 0x7adaa0
L_753e31:
        push    ebx
        mov     ecx, esi
        call    FUN_00753980
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, -0x1
        setz    cl
        test    cl, cl
        mov     byte ptr [ebp + 0x18], cl
        jz      L_753e4f
        xor     eax, eax
        or      byte ptr [esi + 0x5], 0x2
L_753e4f:
        xor     edx, edx
        mov     dx, word ptr [esi + 0x4]
        shl     eax, 0xa
        and     edx, 0xe3ff
        or      edx, eax
        test    cl, cl
        mov     word ptr [esi + 0x4], dx
        jnz     L_753e7d
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      L_753f33
        test    byte ptr [esi + 0x6], 0x8
        jnz     L_753f33
L_753e7d:
        mov     ecx, esi
        call    FUN_0075ba00
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jnz     L_753ef3
        mov     eax, dword ptr [esi + 0x8]
        push    0x0
        push    0x821
        lea     ecx, [ebp - 0x80]
        push    ecx
        push    0x0
        push    eax
        mov     dword ptr [ebp - 0x80], 0x7c
        call    FUN_007353f0
        mov     edi, dword ptr [ebp - 0x5c]
        xor     edx, edx
        mov     dx, word ptr [esi]
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2]
        mov     dword ptr [ebp + 0x18], edi
        shl     edx, 0x2
        test    eax, eax
        jle     L_753ee6
        mov     dword ptr [ebp + 0xc], eax
L_753ec3:
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep     stosd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     stosb
        mov     edi, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0xc]
        add     edi, edx
        dec     eax
        mov     dword ptr [ebp + 0x18], edi
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_753ec3
L_753ee6:
        mov     eax, dword ptr [esi + 0x8]
        push    0x0
        push    eax
        call    FUN_00735440
        jmp     L_753f03
L_753ef3:
        mov     edx, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_0075bb60
L_753f03:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L_753f17
        test    byte ptr [esi + 0x6], 0x8
        jnz     L_753f17
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jnz     L_753f33
L_753f17:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_753f25
        mov     ecx, esi
        call    FUN_0075c060
L_753f25:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_753f33
        mov     ecx, esi
        call    FUN_00735e30
L_753f33:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x4]
        mov     ecx, eax
        and     ecx, 0x1c00
        cmp     cx, 0x400
        jz      L_753f4f
        cmp     cx, 0x800
        jnz     L_753f56
L_753f4f:
        or      eax, 0x8
        mov     word ptr [esi + 0x4], ax
L_753f56:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      L_753f75
        mov     ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        jnz     L_753f75
        mov     ecx, dword ptr [ebp + 0x20]
        test    ch, 0x4
        jnz     L_753f75
        push    eax
        call    FUN_006f4230
L_753f75:
        mov     esp, ebp
        pop     ebp
        ret     0x24
    }
}
