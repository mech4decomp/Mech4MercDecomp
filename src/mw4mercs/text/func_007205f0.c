/*
 * FUN_007205f0 (620 B) — hex-dump formatter.
 *
 * Formats a byte buffer as hex into a caller-provided string buffer
 * (param_3 = {capacity, length, base}), using sprintf_exref and
 * IsBadReadPtr. __stdcall RET 0xC (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b420;   /* IAT: sprintf_exref */
extern void *g_76b128;   /* IAT: IsBadReadPtr */
extern char g_7a4f98[];
extern char g_7a4f90[];
extern char g_7a4f7c[];
extern char g_77a078[];

__declspec(naked) void FUN_007205f0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [g_76b420]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        lea     edx, [edi + 0x20]
        cmp     edi, edx
        mov     esi, edi
        mov     dword ptr [esp + 0x10], esi
        jnc     L_206b9
L_20616:
        push    0x1
        push    esi
        call    dword ptr [g_76b128]
        test    eax, eax
        jz      L_20634
        lea     eax, [esp + 0x14]
        push    0x7a4f98
        push    eax
        call    ebp
        add     esp, 0x8
        jmp     L_20648
L_20634:
        xor     ecx, ecx
        mov     cl, byte ptr [esi]
        lea     edx, [esp + 0x14]
        push    ecx
        push    0x7a4f90
        push    edx
        call    ebp
        add     esp, 0xc
L_20648:
        lea     eax, [esp + 0x14]
        test    eax, eax
        jz      L_206a9
        mov     edx, dword ptr [ebx + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_20671
        sub     ecx, edx
        mov     eax, ecx
L_20671:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        lea     esi, [esp + 0x14]
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [g_76b420]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx], 0x0
L_206a9:
        inc     esi
        lea     edx, [edi + 0x20]
        cmp     esi, edx
        mov     dword ptr [esp + 0x10], esi
        jc      L_20616
L_206b9:
        cmp     dword ptr [esp + 0x24], 0x20
        jbe     L_207ff
        mov     ecx, 0x7a4f7c
        test    ecx, ecx
        jz      L_20724
        mov     esi, dword ptr [ebx + 0x4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     edi, [esi + eax]
        cmp     edi, ecx
        jle     L_206ec
        sub     ecx, esi
        mov     eax, ecx
L_206ec:
        mov     ebp, dword ptr [ebx + 0x4]
        mov     edi, dword ptr [ebx + 0x8]
        add     edi, ebp
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        mov     esi, 0x7a4f7c
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [g_76b420]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [ecx + eax - 1]
        mov     ecx, dword ptr [ebx + 0x8]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + ecx], 0x0
L_20724:
        mov     esi, edx
        add     edi, 0x40
        cmp     esi, edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x20], edi
        jnc     L_207d9
L_20739:
        push    0x1
        push    esi
        call    dword ptr [g_76b128]
        test    eax, eax
        jz      L_20757
        lea     edx, [esp + 0x14]
        push    0x7a4f98
        push    edx
        call    ebp
        add     esp, 0x8
        jmp     L_2076b
L_20757:
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     ecx, [esp + 0x14]
        push    eax
        push    0x7a4f90
        push    ecx
        call    ebp
        add     esp, 0xc
L_2076b:
        lea     edx, [esp + 0x14]
        test    edx, edx
        jz      L_207cc
        mov     edx, dword ptr [ebx + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_20794
        sub     ecx, edx
        mov     eax, ecx
L_20794:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        lea     esi, [esp + 0x14]
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [g_76b420]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        mov     esi, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx], 0x0
L_207cc:
        inc     esi
        cmp     esi, edi
        mov     dword ptr [esp + 0x10], esi
        jc      L_20739
L_207d9:
        mov     eax, 0x77a078
        test    eax, eax
        jz      L_20852
        mov     edx, dword ptr [ebx + 0x4]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_20827
        jmp     L_20823
L_207ff:
        mov     ecx, 0x77a078
        test    ecx, ecx
        jz      L_20852
        mov     edx, dword ptr [ebx + 0x4]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebx]
        inc     eax
        lea     esi, [edx + eax]
        cmp     esi, ecx
        jle     L_20827
L_20823:
        sub     ecx, edx
        mov     eax, ecx
L_20827:
        mov     edx, dword ptr [ebx + 0x8]
        mov     edi, dword ptr [ebx + 0x4]
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edi, edx
        mov     esi, 0x77a078
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [ebx + 0x4], eax
        mov     byte ptr [eax + edx], 0x0
L_20852:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
