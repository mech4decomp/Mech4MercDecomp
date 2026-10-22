/*
 * FUN_00748350 (980 B) — Texture mipmap filter (box/point) generator.
 *
 * __fastcall (ECX = this). Iterates mip levels, calls FUN_007357d0 /
 * FUN_00740db0 / FUN_007353f0 to build source buffers, then applies a
 * 4-way filter switch (jump table at 0x748724, outside this function):
 *   case 0 = box filter (16-bit or 32-bit), case 1 = point copy,
 *   case 2/3 = assert "Texture mipmap filter type %d not implemented".
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00747ac0(void);
extern void FUN_007357d0(void);
extern void FUN_00740db0(void);
extern void FUN_007353f0(void);
extern void FUN_006fab90(void);
extern void FUN_00735440(void);
extern void FUN_00401008(void);
extern char g_7aa424[];   /* "Texture mipmap filter type %d not implemented" */

__declspec(naked) void FUN_00748350(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x140
        mov     eax, 0x7c
        mov     dword ptr [ebp - 0x140], eax
        mov     dword ptr [ebp - 0xc4], eax
        xor     eax, eax
        mov     dword ptr [ebp - 0x44], eax
        push    ebx
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], eax
        push    edi
        mov     dword ptr [ebp - 0x48], ebx
        mov     dword ptr [ebp - 0x28], esi
        mov     dword ptr [ebp - 0x38], eax
        mov     dword ptr [ebp - 0x44], offset FUN_00401008
        mov     dword ptr [ebp - 0x2c], 0x1
    L_8394:
        test    byte ptr [ebx + 0x6], 0x1
        jz      L_83a1
        mov     eax, 0x1
        jmp     L_83b3
    L_83a1:
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 0x2]
        xor     edx, edx
        mov     dx, word ptr [ebx]
        push    ecx
        push    edx
        call    FUN_00747ac0
    L_83b3:
        cmp     dword ptr [ebp - 0x2c], eax
        jge     L_871d
    L_83bc:
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x44]
        push    ecx
        push    esi
        call    FUN_007357d0
        mov     edx, dword ptr [ebp - 0xc]
        push    edx
        call    FUN_00740db0
        push    0x0
        push    0x811
        lea     eax, [ebp - 0x140]
        push    eax
        push    0x0
        push    esi
        call    FUN_007353f0
        mov     edx, dword ptr [ebp - 0xc]
        push    0x0
        push    0x821
        lea     ecx, [ebp - 0xc4]
        push    ecx
        push    0x0
        push    edx
        call    FUN_007353f0
        mov     bx, word ptr [ebx + 0x6]
        mov     eax, dword ptr [ebp - 0x6c]
        mov     ecx, dword ptr [ebp - 0x60]
        mov     edx, dword ptr [ebp - 0x64]
        mov     edi, dword ptr [ebp - 0xb8]
        mov     esi, dword ptr [ebp - 0x68]
        mov     dword ptr [ebp - 0x30], eax
        mov     eax, dword ptr [ebp - 0xa0]
        shr     ebx, 0x8
        and     ebx, 0x3
        cmp     ebx, 0x7
        mov     dword ptr [ebp - 0x34], ecx
        mov     ecx, dword ptr [ebp - 0x11c]
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x10], eax
        ja      L_86f0
        jmp     dword ptr [ebx*4 + 0x748724]
    L_8449:
        cmp     dword ptr [ebp - 0x70], 0x10
        mov     ebx, dword ptr [ebp - 0xbc]
        jnz     L_8560
        test    ebx, ebx
        jbe     L_86f0
        mov     dword ptr [ebp - 0x18], ebx
        mov     ebx, dword ptr [ebp - 0x130]
        jmp     L_8475
    L_846c:
        mov     ebx, dword ptr [ebp - 0x130]
        mov     edi, dword ptr [ebp - 0x24]
    L_8475:
        test    edi, edi
        jbe     L_8534
        mov     dword ptr [ebp - 0x1c], edi
        jmp     L_848b
    L_8482:
        mov     ebx, dword ptr [ebp - 0x130]
        mov     edx, dword ptr [ebp - 0x20]
    L_848b:
        xor     eax, eax
        mov     ax, word ptr [ecx]
        xor     edi, edi
        mov     di, word ptr [ebx + ecx*1]
        add     ecx, 0x4
        mov     dword ptr [ebp - 0x4], eax
        xor     eax, eax
        mov     ax, word ptr [ecx - 0x2]
        mov     dword ptr [ebp - 0x14], edi
        and     edi, edx
        mov     dword ptr [ebp - 0x8], eax
        xor     eax, eax
        mov     ax, word ptr [ebx + ecx*1 - 0x2]
        mov     ebx, eax
        and     ebx, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x14]
        and     edi, esi
        shr     ebx, 0x2
        and     ebx, edx
        mov     edx, eax
        and     edx, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x14]
        shr     edx, 0x2
        and     edx, esi
        add     ebx, edx
        mov     edx, dword ptr [ebp - 0x30]
        and     eax, edx
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x4]
        shr     eax, 0x2
        and     eax, edx
        mov     edx, dword ptr [ebp - 0x1c]
        add     ebx, eax
        mov     eax, dword ptr [ebp - 0x34]
        and     eax, edi
        add     ebx, eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     word ptr [eax], bx
        add     eax, 0x2
        dec     edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x1c], edx
        jnz     L_8482
        mov     edx, dword ptr [ebp - 0x20]
        mov     edi, dword ptr [ebp - 0x24]
    L_8534:
        mov     ebx, dword ptr [ebp - 0xb4]
        add     edi, edi
        sub     ebx, edi
        add     eax, ebx
        mov     ebx, dword ptr [ebp - 0x130]
        sub     ebx, edi
        mov     edi, dword ptr [ebp - 0x18]
        dec     edi
        mov     dword ptr [ebp - 0x10], eax
        lea     ecx, [ecx + ebx*2]
        mov     dword ptr [ebp - 0x18], edi
        jnz     L_846c
        jmp     L_86f0
    L_8560:
        test    ebx, ebx
        jbe     L_86f0
        mov     dword ptr [ebp - 0x14], ebx
        mov     ebx, dword ptr [ebp - 0x130]
        jmp     L_857c
    L_8573:
        mov     ebx, dword ptr [ebp - 0x130]
        mov     edi, dword ptr [ebp - 0x24]
    L_857c:
        test    edi, edi
        jbe     L_862e
        mov     dword ptr [ebp - 0x1c], edi
        jmp     L_8592
    L_8589:
        mov     ebx, dword ptr [ebp - 0x130]
        mov     edx, dword ptr [ebp - 0x20]
    L_8592:
        mov     edi, dword ptr [ebx + ecx*1]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [ebp - 0x8], eax
        mov     eax, dword ptr [ebx + ecx*1 + 0x4]
        mov     dword ptr [ebp - 0x18], edi
        and     edi, edx
        mov     ebx, eax
        and     ebx, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, edx
        add     ebx, edi
        mov     edi, dword ptr [ebp - 0x18]
        and     edi, esi
        shr     ebx, 0x2
        and     ebx, edx
        mov     edx, eax
        and     edx, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, esi
        add     edx, edi
        mov     edi, dword ptr [ebp - 0x18]
        shr     edx, 0x2
        and     edx, esi
        add     ebx, edx
        mov     edx, dword ptr [ebp - 0x30]
        and     eax, edx
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x8]
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x4]
        and     edi, edx
        add     eax, edi
        mov     edi, dword ptr [ebp - 0x34]
        shr     eax, 0x2
        and     eax, edx
        mov     edx, dword ptr [ebp - 0x1c]
        add     ebx, eax
        mov     eax, dword ptr [ebp - 0x4]
        and     eax, edi
        add     ebx, eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [eax], ebx
        add     eax, 0x4
        add     ecx, 0x8
        dec     edx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x1c], edx
        jnz     L_8589
        mov     edi, dword ptr [ebp - 0x24]
        mov     edx, dword ptr [ebp - 0x20]
    L_862e:
        mov     ebx, dword ptr [ebp - 0xb4]
        shl     edi, 0x2
        sub     ebx, edi
        add     eax, ebx
        mov     ebx, dword ptr [ebp - 0x130]
        sub     ebx, edi
        mov     edi, dword ptr [ebp - 0x14]
        dec     edi
        mov     dword ptr [ebp - 0x10], eax
        lea     ecx, [ecx + ebx*2]
        mov     dword ptr [ebp - 0x14], edi
        jnz     L_8573
        jmp     L_86f0
    L_865b:
        cmp     dword ptr [ebp - 0x70], 0x10
        mov     edx, dword ptr [ebp - 0xbc]
        jnz     L_86a3
        test    edx, edx
        jbe     L_86f0
        mov     esi, edx
    L_8671:
        test    edi, edi
        jbe     L_8686
        mov     edx, edi
    L_8677:
        mov     bx, word ptr [ecx]
        mov     word ptr [eax], bx
        add     ecx, 0x4
        add     eax, 0x2
        dec     edx
        jnz     L_8677
    L_8686:
        mov     ebx, dword ptr [ebp - 0xb4]
        lea     edx, [edi + edi*1]
        sub     ebx, edx
        add     eax, ebx
        mov     ebx, dword ptr [ebp - 0x130]
        sub     ebx, edx
        dec     esi
        lea     ecx, [ecx + ebx*2]
        jnz     L_8671
        jmp     L_86f0
    L_86a3:
        test    edx, edx
        jbe     L_86f0
        mov     esi, edx
    L_86a9:
        test    edi, edi
        jbe     L_86bc
        mov     edx, edi
    L_86af:
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [eax], ebx
        add     ecx, 0x8
        add     eax, 0x4
        dec     edx
        jnz     L_86af
    L_86bc:
        mov     ebx, dword ptr [ebp - 0xb4]
        lea     edx, [edi*4 + 0x0]
        sub     ebx, edx
        add     eax, ebx
        mov     ebx, dword ptr [ebp - 0x130]
        sub     ebx, edx
        dec     esi
        lea     ecx, [ecx + ebx*2]
        jnz     L_86a9
        jmp     L_86f0
    L_86dd:
        push    ebx
        push    offset g_7aa424
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_86f0
        int     3
    L_86f0:
        mov     eax, dword ptr [ebp - 0xc]
        push    0x0
        push    eax
        call    FUN_00735440
        mov     ecx, dword ptr [ebp - 0x28]
        push    0x0
        push    ecx
        call    FUN_00735440
        mov     eax, dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp - 0x48]
        inc     eax
        mov     dword ptr [ebp - 0x28], edx
        mov     dword ptr [ebp - 0x2c], eax
        mov     esi, edx
        jmp     L_8394
    L_871d:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
