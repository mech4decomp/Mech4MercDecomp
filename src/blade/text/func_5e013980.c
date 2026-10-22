/*
 * FUN_5e013980 (449 B) — DirectDraw caps/format computation (integer variant).
 *
 * __cdecl, RET 0x8 (2 stack params). 16/32-bit division.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;   /* DAT_5e77a588 (int array, 32-byte stride) */
extern int g_5e77a584;   /* DAT_5e77a584 (int array) */
extern int g_5e77a690;
extern int g_5e77a694;
extern int g_5e77a698;
extern int g_5e77a69c;
extern int g_5e77a6a0;
extern int g_5e77a6a4;
extern int g_5e77a68c;

__declspec(naked) void __cdecl FUN_5e013980(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        shl     ecx, 5
        shl     edx, 5
        mov     eax, dword ptr [ecx + g_5e77a588]
        push    ebx
        add     eax, 0xf
        push    esi
        sar     eax, 4
        mov     dword ptr [g_5e77a690], eax
        mov     esi, dword ptr [edx + g_5e77a588]
        add     esi, 0xf
        push    edi
        sar     esi, 4
        sub     esi, eax
        mov     dword ptr [g_5e77a694], esi
        jz      L_13b3a
        mov     ebx, dword ptr [ecx + g_5e77a588]
        mov     ecx, dword ptr [ecx + g_5e77a584]
        mov     esi, dword ptr [edx + g_5e77a584]
        mov     edi, dword ptr [edx + g_5e77a588]
        shl     eax, 4
        sub     esi, ecx
        sub     edi, ebx
        sub     eax, ebx
        add     ecx, 0x10
        imul    eax, esi
        imul    ecx, edi
        mov     ebx, edi
        lea     eax, [eax + ecx - 1]
        shl     ebx, 4
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp + 0x8], ebx
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_13a3a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_13a2c
        test    ecx, 0xffff0000
        jnz     L_13a26
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_13a26
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_13a3a
    L_13a26:
        xor     edx, edx
        div     ecx
        jmp     L_13a3a
    L_13a2c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_13a3a
        dec     eax
        add     edx, ecx
    L_13a3a:
        mov     ecx, offset g_5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 1
        cmp     ecx, eax
        jle     L_13b3a
        test    esi, esi
        jl      L_13a97
        cmp     esi, edi
        jge     L_13a7b
        shl     esi, 4
        mov     dword ptr [g_5e77a698], 0
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_13b28
    L_13a7b:
        lea     ecx, [edi + edi]
        cmp     esi, ecx
        jge     L_13acd
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 4
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_13b28
    L_13a97:
        lea     eax, [esi + edi]
        test    eax, eax
        jl      L_13ab2
        shl     eax, 4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_13b28
    L_13ab2:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      L_13acd
        shl     eax, 4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_13b28
    L_13acd:
        shl     esi, 4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_13b1a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_13b0c
        test    ecx, 0xffff0000
        jnz     L_13b06
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_13b06
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_13b1a
    L_13b06:
        xor     edx, edx
        div     ecx
        jmp     L_13b1a
    L_13b0c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_13b1a
        dec     eax
        add     edx, ecx
    L_13b1a:
        mov     ecx, offset g_5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a698
        mov     dword ptr [ecx], eax
    L_13b28:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
    L_13b3a:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
