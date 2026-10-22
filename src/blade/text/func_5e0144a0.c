/*
 * FUN_5e0144a0 (449 B) — DirectDraw caps/format computation (integer variant).
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

__declspec(naked) void __cdecl FUN_5e0144a0(void)
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
        jz      L_1465a
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
        jz      L_1455a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_1454c
        test    ecx, 0xffff0000
        jnz     L_14546
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_14546
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_1455a
    L_14546:
        xor     edx, edx
        div     ecx
        jmp     L_1455a
    L_1454c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_1455a
        dec     eax
        add     edx, ecx
    L_1455a:
        mov     ecx, offset g_5e77a6a4
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a68c
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a694]
        mov     eax, 1
        cmp     ecx, eax
        jle     L_1465a
        test    esi, esi
        jl      L_145b7
        cmp     esi, edi
        jge     L_1459b
        shl     esi, 4
        mov     dword ptr [g_5e77a698], 0
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_14648
    L_1459b:
        lea     ecx, [edi + edi]
        cmp     esi, ecx
        jge     L_145ed
        sub     esi, edi
        mov     dword ptr [g_5e77a698], eax
        shl     esi, 4
        mov     dword ptr [g_5e77a69c], esi
        jmp     L_14648
    L_145b7:
        lea     eax, [esi + edi]
        test    eax, eax
        jl      L_145d2
        shl     eax, 4
        mov     dword ptr [g_5e77a698], 0xffffffff
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_14648
    L_145d2:
        lea     eax, [esi + edi*2]
        test    eax, eax
        jl      L_145ed
        shl     eax, 4
        mov     dword ptr [g_5e77a698], 0xfffffffe
        mov     dword ptr [g_5e77a69c], eax
        jmp     L_14648
    L_145ed:
        shl     esi, 4
        mov     dword ptr [ebp + 0x8], ebx
        mov     dword ptr [ebp + 0xc], esi
        mov     eax, dword ptr [ebp + 0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_1463a
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_1462c
        test    ecx, 0xffff0000
        jnz     L_14626
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_14626
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_1463a
    L_14626:
        xor     edx, edx
        div     ecx
        jmp     L_1463a
    L_1462c:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_1463a
        dec     eax
        add     edx, ecx
    L_1463a:
        mov     ecx, offset g_5e77a69c
        mov     dword ptr [ecx], edx
        mov     ecx, offset g_5e77a698
        mov     dword ptr [ecx], eax
    L_14648:
        mov     eax, dword ptr [g_5e77a6a4]
        mov     dword ptr [g_5e77a6a0], ebx
        sub     eax, ebx
        mov     dword ptr [g_5e77a6a4], eax
    L_1465a:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
