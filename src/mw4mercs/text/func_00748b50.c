/*
 * FUN_00748b50 (1026 B) — Texture cache eviction / bump manager.
 *
 * __fastcall (ECX = this). Loops bumping textures out of a cache
 * (g_8b287c list) via a 9-way switch (jump table at 0x748f54, outside
 * this function): case 0/1 = find+reuse matching slot, case 2/3 = age
 * out stale entries, case 4/5/6/7/8 = various eviction policies, default
 * = assert "Failed to create texture even after all other textures
 * bumped!".
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_007488a0(void);
extern void FUN_00747ac0(void);
extern void FUN_00749190(void);
extern void FUN_00753930(void);
extern void FUN_00748790(void);
extern void FUN_006fab90(void);
extern char g_7aa474[];   /* "Failed to create texture even after all other textures bumped!" */

extern int g_8b2884;
extern int g_8b287c;
extern int g_8b2880;
extern int g_8b28c0;
extern int g_85895c;
extern int g_87c2a0;
extern int g_8b79e0;
extern int g_8b2520;
extern int g_8b2888;

__declspec(naked) void FUN_00748b50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x10]
        push    esi
        xor     esi, esi
        test    eax, eax
        push    edi
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp - 0xc], esi
        jnz     L_f4b
    L_b6e:
        mov     ecx, ebx
        call    FUN_007488a0
        test    al, al
        jnz     L_f4b
        cmp     esi, 0x8
        ja      L_f27
        jmp     dword ptr [esi*4 + 0x748f54]
    L_b8d:
        mov     dword ptr [ebp - 0xc], 0x1
        mov     eax, dword ptr [g_8b2884]
        mov     esi, dword ptr [g_8b287c]
        xor     edi, edi
        test    esi, esi
        lea     ecx, [eax + 0x1]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x14], edi
        jz      L_cf6
    L_bb2:
        test    byte ptr [esi + 0x4], 0x1
        jz      L_cca
        mov     bx, word ptr [esi + 0x4]
        test    bl, 0xa0
        jnz     L_cca
        mov     eax, dword ptr [esi + 0x28]
        mov     edx, dword ptr [ebp - 0x8]
        sub     edx, eax
        test    edx, edx
        jle     L_cca
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ax, word ptr [esi]
        mov     cx, word ptr [ecx]
        cmp     ax, cx
        jnz     L_cca
        mov     eax, dword ptr [ebp - 0x4]
        mov     dx, word ptr [esi + 0x2]
        mov     ax, word ptr [eax + 0x2]
        cmp     dx, ax
        jnz     L_cca
        test    byte ptr [esi + 0x6], 0x10
        jnz     L_cca
        mov     edx, dword ptr [g_87c2a0]
        test    edx, edx
        jz      L_c53
        mov     edx, dword ptr [ebp - 0x4]
        test    byte ptr [edx + 0x6], 0x1
        jz      L_c25
        mov     dword ptr [ebp - 0x10], 0x1
        jmp     L_c2f
    L_c25:
        push    eax
        push    ecx
        call    FUN_00747ac0
        mov     dword ptr [ebp - 0x10], eax
    L_c2f:
        test    byte ptr [esi + 0x6], 0x1
        jz      L_c3c
        mov     eax, 0x1
        jmp     L_c4e
    L_c3c:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2]
        push    eax
        xor     eax, eax
        mov     ax, word ptr [esi]
        push    eax
        call    FUN_00747ac0
    L_c4e:
        cmp     dword ptr [ebp - 0x10], eax
        jnz     L_cca
    L_c53:
        mov     edx, dword ptr [ebp - 0x4]
        xor     eax, eax
        mov     ax, word ptr [edx + 0x6]
        mov     dx, word ptr [edx + 0x4]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x6]
        shr     ebx, 0xa
        and     ebx, 0x7
        mov     edi, eax
        shr     edx, 0xa
        and     edx, 0x7
        shr     eax, 0xe
        shr     edi, 0x7
        and     edi, 0x1
        lea     edx, [edi + edx*2]
        lea     eax, [eax + edx*4]
        mov     edx, eax
        and     ecx, 0xffff
        shl     edx, 0x5
        sub     edx, eax
        mov     eax, ecx
        shr     eax, 0x7
        and     eax, 0x1
        shr     ecx, 0xe
        lea     eax, [eax + ebx*2]
        lea     eax, [ecx + eax*4]
        mov     ecx, eax
        shl     ecx, 0x5
        sub     ecx, eax
        lea     edx, [edx*4 + 0x8b7ad0]
        lea     eax, [ecx*4 + 0x8b7ad0]
        cmp     eax, edx
        jnz     L_cc7
        mov     ecx, dword ptr [esi + 0x28]
        mov     edi, esi
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0x14], edi
        jmp     L_cca
    L_cc7:
        mov     edi, dword ptr [ebp - 0x14]
    L_cca:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        jz      L_cee
        and     eax, 0xffff
        lea     edx, [eax*8 + 0x0]
        sub     edx, eax
        lea     esi, [esi + edx*8]
        test    esi, esi
        jnz     L_bb2
    L_cee:
        mov     ebx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [g_8b2884]
    L_cf6:
        mov     ecx, dword ptr [g_85895c]
        test    ecx, ecx
        jz      L_d0e
        sub     eax, dword ptr [ebp - 0x8]
        cmp     eax, 0x3
        jc      L_f39
        jmp     L_d27
    L_d0e:
        test    edi, edi
        jz      L_f39
        mov     eax, dword ptr [g_8b2880]
        sub     eax, dword ptr [edi + 0x24]
        cmp     eax, 0x2
        jc      L_f39
    L_d27:
        test    edi, edi
        jz      L_f39
        mov     ecx, dword ptr [edi + 0x10]
        mov     ax, word ptr [edi + 0x4]
        xor     edx, edx
        mov     dword ptr [ebx + 0x10], ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x4]
        mov     dl, al
        mov     dword ptr [edi + 0x10], 0x0
        and     ecx, 0xfffc
        and     edx, 0x2
        or      edx, ecx
        mov     word ptr [ebx + 0x4], dx
        mov     edx, dword ptr [g_8b28c0]
        inc     edx
        and     eax, 0xfffc
        mov     dword ptr [g_8b28c0], edx
        mov     word ptr [edi + 0x4], ax
        jmp     L_f39
    L_d74:
        mov     eax, dword ptr [g_85895c]
        test    eax, eax
        mov     esi, dword ptr [g_8b287c]
        jz      L_de8
        test    esi, esi
        jz      L_f39
    L_d8b:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_dbf
        mov     edx, dword ptr [g_8b2884]
        sub     edx, dword ptr [esi + 0x28]
        cmp     edx, 0x3
        jle     L_dbf
        test    byte ptr [esi + 0x6], 0x10
        jnz     L_dbf
        mov     eax, dword ptr [g_8b28c0]
        inc     eax
        mov     ecx, esi
        mov     dword ptr [g_8b28c0], eax
        call    FUN_00749190
        mov     ecx, esi
        call    FUN_00753930
    L_dbf:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        jz      L_f39
        and     eax, 0xffff
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        lea     esi, [esi + ecx*8]
        test    esi, esi
        jnz     L_d8b
        jmp     L_f39
    L_de8:
        test    esi, esi
        jz      L_f39
    L_df0:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_e24
        mov     edx, dword ptr [g_8b2880]
        sub     edx, dword ptr [esi + 0x24]
        cmp     edx, 0x1
        jle     L_e24
        test    byte ptr [esi + 0x6], 0x10
        jnz     L_e24
        mov     eax, dword ptr [g_8b28c0]
        inc     eax
        mov     ecx, esi
        mov     dword ptr [g_8b28c0], eax
        call    FUN_00749190
        mov     ecx, esi
        call    FUN_00753930
    L_e24:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        jz      L_f39
        and     eax, 0xffff
        lea     ecx, [eax*8 + 0x0]
        sub     ecx, eax
        lea     esi, [esi + ecx*8]
        test    esi, esi
        jnz     L_df0
        jmp     L_f39
    L_e4d:
        mov     eax, dword ptr [g_85895c]
        test    eax, eax
        jnz     L_eb9
        mov     esi, dword ptr [g_8b287c]
        test    esi, esi
        jz      L_eb9
        mov     ecx, dword ptr [g_8b2880]
    L_e66:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_e97
        cmp     ecx, dword ptr [esi + 0x24]
        jz      L_e97
        test    byte ptr [esi + 0x6], 0x10
        jnz     L_e97
        mov     eax, dword ptr [g_8b28c0]
        inc     eax
        mov     ecx, esi
        mov     dword ptr [g_8b28c0], eax
        call    FUN_00749190
        mov     ecx, esi
        call    FUN_00753930
        mov     ecx, dword ptr [g_8b2880]
    L_e97:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x1a]
        test    ax, ax
        jz      L_ebf
        and     eax, 0xffff
        lea     edx, [eax*8 + 0x0]
        sub     edx, eax
        lea     esi, [esi + edx*8]
        test    esi, esi
        jnz     L_e66
        jmp     L_ebf
    L_eb9:
        mov     ecx, dword ptr [g_8b2880]
    L_ebf:
        sub     ecx, dword ptr [g_8b79e0]
        cmp     ecx, 0x2
        jbe     L_f39
        call    FUN_00748790
        mov     eax, dword ptr [g_8b2880]
        mov     dword ptr [g_8b79e0], eax
        jmp     L_f39
    L_edb:
        mov     ecx, dword ptr [g_8b79e0]
        cmp     ecx, dword ptr [g_8b2880]
        jnz     L_f39
        call    FUN_00748790
        mov     edx, dword ptr [g_8b2880]
        dec     edx
        mov     dword ptr [g_8b79e0], edx
        jmp     L_f39
    L_efd:
        test    dword ptr [g_8b2520], 0x400000
        jz      L_f39
        call    FUN_00748790
        jmp     L_f39
    L_f10:
        mov     eax, dword ptr [g_8b2888]
        cmp     eax, 0x3
        jge     L_f39
        inc     eax
        mov     dword ptr [g_8b2888], eax
        call    FUN_00748790
        jmp     L_f39
    L_f27:
        push    offset g_7aa474
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_f39
        int     3
    L_f39:
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebx + 0x10]
        inc     esi
        test    eax, eax
        mov     dword ptr [ebp - 0xc], esi
        jz      L_b6e
    L_f4b:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
