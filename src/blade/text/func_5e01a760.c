/*
 * FUN_5e01a760 (449 B) — DirectDraw wrapper: surface/format setup (clone of 5e019460).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* array base */
extern int g_5e77a584;   /* array base */
extern int g_5e77a690;
extern int g_5e77a694;
extern int g_5e77a6a4;
extern int g_5e77a68c;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;

__declspec(naked) void FUN_5e01a760(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        shl     ecx, 0x5
        shl     edx, 0x5
        mov     eax, dword ptr [ecx + g_5e77a588]
        push    ebx
        add     eax, 0xf
        push    esi
        sar     eax, 0x4
        mov     dword ptr [g_5e77a690], eax
        mov     esi, dword ptr [edx + g_5e77a588]
        add     esi, 0xf
        push    edi
        sar     esi, 0x4
        sub     esi, eax
        mov     dword ptr [g_5e77a694], esi
        jz      L_a91a
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     ecx, dword ptr [ecx + g_5e77a584]
        mov     esi, dword ptr [edx + g_5e77a584]
        mov     edi, dword ptr [edx + g_5e77a588]
        shl     eax, 0x4
        sub     esi, ecx
        sub     edi, ebx
        sub     eax, ebx
        add     ecx, 0x10
        imul    eax, esi
        imul    ecx, edi
        mov     ebx, edi
        lea     eax, [eax + ecx*1 - 1]
        shl     ebx, 0x4
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x8], ebx
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_a81a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_a80c
        test    ecx, 0xffff0000
        jnz     L_a806
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_a806
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_a81a
    L_a806:
        xor     edx, edx
        div     ecx
        jmp     L_a81a
    L_a80c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_a81a
        dec     eax
        add     edx, ecx
    L_a81a:
        mov     ecx, 0x5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 0x1
        cmp     ecx, eax
        jle     L_a91a
        test    esi, esi
        jl      L_a877
        cmp     esi, edi
        jge     L_a85b
        shl     esi, 0x4
        mov     dword ptr [g_5e77a698], 0x0
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_a908
    L_a85b:
        lea     ecx, [edi + edi*1]
        cmp     esi, ecx
        jge     L_a8ad
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_a908
    L_a877:
        lea     eax, [esi + edi*1]
        test    eax, eax
        jl      L_a892
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_a908
    L_a892:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      L_a8ad
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_a908
    L_a8ad:
        shl     esi, 0x4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_a8fa
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_a8ec
        test    ecx, 0xffff0000
        jnz     L_a8e6
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_a8e6
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_a8fa
    L_a8e6:
        xor     edx, edx
        div     ecx
        jmp     L_a8fa
    L_a8ec:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_a8fa
        dec     eax
        add     edx, ecx
    L_a8fa:
        mov     ecx, 0x5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a698
        mov     dword ptr [ecx], eax
    L_a908:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
    L_a91a:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
