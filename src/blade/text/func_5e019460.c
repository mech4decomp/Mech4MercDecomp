/*
 * FUN_5e019460 (449 B) — DirectDraw wrapper: surface/format setup.
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

__declspec(naked) void FUN_5e019460(void)
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
        jz      L_61a
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
        jz      L_51a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_50c
        test    ecx, 0xffff0000
        jnz     L_506
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_506
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_51a
    L_506:
        xor     edx, edx
        div     ecx
        jmp     L_51a
    L_50c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_51a
        dec     eax
        add     edx, ecx
    L_51a:
        mov     ecx, 0x5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 0x1
        cmp     ecx, eax
        jle     L_61a
        test    esi, esi
        jl      L_577
        cmp     esi, edi
        jge     L_55b
        shl     esi, 0x4
        mov     dword ptr [g_5e77a698], 0x0
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_608
    L_55b:
        lea     ecx, [edi + edi*1]
        cmp     esi, ecx
        jge     L_5ad
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_608
    L_577:
        lea     eax, [esi + edi*1]
        test    eax, eax
        jl      L_592
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_608
    L_592:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      L_5ad
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_608
    L_5ad:
        shl     esi, 0x4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_5fa
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_5ec
        test    ecx, 0xffff0000
        jnz     L_5e6
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_5e6
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_5fa
    L_5e6:
        xor     edx, edx
        div     ecx
        jmp     L_5fa
    L_5ec:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_5fa
        dec     eax
        add     edx, ecx
    L_5fa:
        mov     ecx, 0x5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a698
        mov     dword ptr [ecx], eax
    L_608:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
    L_61a:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
