/*
 * FUN_5e015cc0 (449 B) — DirectDraw surface format/creation body.
 * Fixed-point division (DIV/IDIV) + step setup.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a690;      /* DAT_5e77a690 */
extern int g_5e77a694;      /* DAT_5e77a694 */
extern int g_5e77a6a4;      /* DAT_5e77a6a4 */
extern int g_5e77a68c;      /* DAT_5e77a68c */
extern int g_5e77a698;      /* DAT_5e77a698 */
extern int g_5e77a69c;      /* DAT_5e77a69c */
extern int g_5e77a6a0;      /* DAT_5e77a6a0 */

extern int g_5e77a588[];    /* int array */
extern int g_5e77a584[];    /* int array */

__declspec(naked) void __stdcall FUN_5e015cc0(void)
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
        jz      L_5e7a
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
        lea     eax, [eax + ecx - 1]
        shl     ebx, 0x4
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x8], ebx
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_5d7a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_5d6c
        test    ecx, 0xffff0000
        jnz     L_5d66
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_5d66
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_5d7a
    L_5d66:
        xor     edx, edx
        div     ecx
        jmp     L_5d7a
    L_5d6c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_5d7a
        dec     eax
        add     edx, ecx
    L_5d7a:
        mov     ecx, 0x5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 0x1
        cmp     ecx, eax
        jle     L_5e7a
        test    esi, esi
        jl      L_5dd7
        cmp     esi, edi
        jge     L_5dbb
        shl     esi, 0x4
        mov     dword ptr [g_5e77a698], 0
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_5e68
    L_5dbb:
        lea     ecx, [edi + edi]
        cmp     esi, ecx
        jge     L_5e0d
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_5e68
    L_5dd7:
        lea     eax, [esi + edi]
        test    eax, eax
        jl      L_5df2
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_5e68
    L_5df2:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      L_5e0d
        shl     eax, 0x4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_5e68
    L_5e0d:
        shl     esi, 0x4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_5e5a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_5e4c
        test    ecx, 0xffff0000
        jnz     L_5e46
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_5e46
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_5e5a
    L_5e46:
        xor     edx, edx
        div     ecx
        jmp     L_5e5a
    L_5e4c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_5e5a
        dec     eax
        add     edx, ecx
    L_5e5a:
        mov     ecx, 0x5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a698
        mov     dword ptr [ecx], eax
    L_5e68:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
    L_5e7a:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
