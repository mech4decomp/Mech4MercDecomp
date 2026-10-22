/*
 * FUN_5e02852d (925 B) - Bresenham-style line drawing into a 2D buffer.
 *
 * 5 params (esp+0x14..+0x24): value, x0, y0, x1, y1. Draws a line from
 * (x0,y0) to (x1,y1) writing `value` into the buffer at DAT_5e77a844
 * (16-bit mode when DAT_5e77a834==0, else 32-bit with value duplicated
 * into hi/lo 16 bits, second plane at DAT_5e77a838).
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_5e038b70;  /* DAT_5e038b70 (direction flag) */
extern int g_5e77a840;             /* DAT_5e77a840 (row stride) */
extern int g_5e77a834;             /* DAT_5e77a834 (16/32-bit flag) */
extern int g_5e77a844;             /* DAT_5e77a844 (base) */
extern int g_5e77a858;             /* DAT_5e77a858 (special-case flag) */
extern int g_5e77a838;             /* DAT_5e77a838 (second plane / scratch) */
extern int g_5e77a818;             /* DAT_5e77a818 (saved ESP) */

__declspec(naked) void FUN_5e02852d(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    ebp
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        mov     word ptr [g_5e038b70], 0
        sub     ecx, edx
        jnz     L_85d5
        sub     ebx, eax
        jge     L_8563
        add     eax, ebx
        neg     ebx
        mov     word ptr [g_5e038b70], 1
    L_8563:
        mov     ecx, ebx
        mov     edi, dword ptr [g_5e77a840]
        imul    edi, edx
        push    ecx
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        pop     ecx
        lea     edi, [edi + eax*2]
        add     edi, dword ptr [g_5e77a844]
        inc     ecx
        cmp     dword ptr [g_5e77a858], 0
        jz      L_859f
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_859f
        add     edi, 2
    L_859f:
        cld
        mov     eax, dword ptr [esp + 0x14]
        cmp     dword ptr [g_5e77a834], 0
        jnz     L_85b5
        rep     stosw
        jmp     L_88c5
    L_85b5:
        mov     esi, eax
        shl     eax, 0x10
        and     esi, 0xffff
        or      eax, esi
        push    ecx
        push    edi
        rep     stosd
        pop     edi
        pop     ecx
        add     edi, dword ptr [g_5e77a838]
        rep     stosd
        jmp     L_88c5
    L_85d5:
        jg      L_85e5
        add     edx, ecx
        neg     ecx
        xchg    eax, ebx
        mov     word ptr [g_5e038b70], 1
    L_85e5:
        mov     esi, dword ptr [g_5e77a840]
        sub     ebx, eax
        jg      L_8613
        jl      L_860f
        mov     edi, dword ptr [g_5e77a840]
        imul    edi, edx
        push    ecx
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        pop     ecx
        lea     edi, [edi + eax*2]
        add     edi, dword ptr [g_5e77a844]
        jmp     L_864c
    L_860f:
        neg     esi
        neg     ebx
    L_8613:
        mov     edi, dword ptr [g_5e77a840]
        imul    edi, edx
        push    ecx
        mov     ecx, dword ptr [g_5e77a834]
        shl     eax, cl
        pop     ecx
        lea     edi, [edi + eax*2]
        add     edi, dword ptr [g_5e77a844]
        cmp     ebx, ecx
        jg      L_87bb
        jl      L_86a5
        mov     ebx, dword ptr [g_5e77a834]
        shl     ebx, 1
        lea     esi, [ebx + esi + 2]
        cmp     esi, 0
        jge     L_864c
        neg     esi
    L_864c:
        inc     ecx
        cmp     dword ptr [g_5e77a858], 0
        jz      L_8669
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_8669
        add     edi, esi
    L_8669:
        mov     eax, dword ptr [esp + 0x14]
        cmp     dword ptr [g_5e77a834], 0
        jnz     L_8683
    L_8676:
        mov     word ptr [edi], ax
        add     edi, esi
        dec     ecx
        jnz     L_8676
        jmp     L_88c5
    L_8683:
        mov     ebx, eax
        shl     eax, 0x10
        and     ebx, 0xffff
        or      eax, ebx
        mov     edx, dword ptr [g_5e77a838]
    L_8696:
        mov     dword ptr [edi], eax
        mov     dword ptr [edx + edi], eax
        add     edi, esi
        dec     ecx
        jnz     L_8696
        jmp     L_88c5
    L_86a5:
        cmp     dword ptr [g_5e77a834], 0
        jnz     L_8720
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, ebx
        mov     ebp, ecx
        mov     ebx, ecx
        shr     ebx, 1
        inc     ecx
        cmp     esi, 0
        jle     L_86f0
        cmp     dword ptr [g_5e77a858], 0
        jz      L_86e5
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_86e5
    L_86da:
        add     edi, esi
        sub     ebx, edx
        jge     L_86e5
        add     ebx, ebp
        add     edi, 2
    L_86e5:
        mov     word ptr [edi], ax
        dec     ecx
        jnz     L_86da
        jmp     L_88c5
    L_86f0:
        cmp     dword ptr [g_5e77a858], 0
        jz      L_8715
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_8715
    L_870a:
        sub     edi, esi
        sub     ebx, edx
        jge     L_8715
        add     ebx, ebp
        sub     edi, 2
    L_8715:
        mov     word ptr [edi], ax
        dec     ecx
        jnz     L_870a
        jmp     L_88c5
    L_8720:
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, eax
        shl     eax, 0x10
        and     ebp, 0xffff
        or      eax, ebp
        mov     edx, ebx
        mov     ebp, ecx
        mov     ebx, ecx
        shr     ebx, 1
        inc     ecx
        mov     dword ptr [g_5e77a818], esp
        mov     esp, dword ptr [g_5e77a838]
        cmp     esi, 0
        jle     L_8783
        cmp     dword ptr [g_5e77a858], 0
        jz      L_8770
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_8770
    L_8765:
        add     edi, esi
        sub     ebx, edx
        jge     L_8770
        add     ebx, ebp
        add     edi, 4
    L_8770:
        mov     dword ptr [edi], eax
        mov     dword ptr [esp + edi], eax
        dec     ecx
        jnz     L_8765
        mov     esp, dword ptr [g_5e77a818]
        jmp     L_88c5
    L_8783:
        cmp     dword ptr [g_5e77a858], 0
        jz      L_87a8
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_87a8
    L_879d:
        sub     edi, esi
        sub     ebx, edx
        jge     L_87a8
        add     ebx, ebp
        sub     edi, 4
    L_87a8:
        mov     dword ptr [edi], eax
        mov     dword ptr [esp + edi], eax
        dec     ecx
        jnz     L_879d
        mov     esp, dword ptr [g_5e77a818]
        jmp     L_88c5
    L_87bb:
        cmp     dword ptr [g_5e77a834], 0
        jnz     L_8838
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, ecx
        mov     ecx, ebx
        mov     ebp, ebx
        mov     ebx, ecx
        inc     ecx
        shr     ebx, 1
        cmp     esi, 0
        jl      L_8808
        cmp     dword ptr [g_5e77a858], 0
        jz      L_87fd
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_87fd
    L_87f2:
        add     edi, 2
        sub     ebx, edx
        jge     L_87fd
        add     ebx, ebp
        add     edi, esi
    L_87fd:
        mov     word ptr [edi], ax
        dec     ecx
        jnz     L_87f2
        jmp     L_88c5
    L_8808:
        cmp     dword ptr [g_5e77a858], 0
        jz      L_882d
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_882d
    L_8822:
        sub     edi, 2
        sub     ebx, edx
        jge     L_882d
        add     ebx, ebp
        sub     edi, esi
    L_882d:
        mov     word ptr [edi], ax
        dec     ecx
        jnz     L_8822
        jmp     L_88c5
    L_8838:
        mov     eax, dword ptr [esp + 0x14]
        mov     ebp, eax
        shl     eax, 0x10
        and     ebp, 0xffff
        or      eax, ebp
        mov     edx, ecx
        mov     ecx, ebx
        mov     ebp, ebx
        mov     ebx, ecx
        inc     ecx
        shr     ebx, 1
        mov     dword ptr [g_5e77a818], esp
        mov     esp, dword ptr [g_5e77a838]
        cmp     esi, 0
        jl      L_8896
        cmp     dword ptr [g_5e77a858], 0
        jz      L_8886
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_8886
    L_887b:
        add     edi, 4
        sub     ebx, edx
        jge     L_8886
        add     ebx, ebp
        add     edi, esi
    L_8886:
        mov     dword ptr [edi], eax
        mov     dword ptr [esp + edi], eax
        dec     ecx
        jnz     L_887b
        mov     esp, dword ptr [g_5e77a818]
        jmp     L_88c5
    L_8896:
        cmp     dword ptr [g_5e77a858], 0
        jz      L_88b7
        dec     ecx
        jz      L_88c5
        cmp     word ptr [g_5e038b70], 1
        jnz     L_88b7
    L_88ac:
        sub     edi, 4
        sub     ebx, edx
        jge     L_88b7
        add     ebx, ebp
        sub     edi, esi
    L_88b7:
        mov     dword ptr [edi], eax
        mov     dword ptr [esp + edi], eax
        dec     ecx
        jnz     L_88ac
        mov     esp, dword ptr [g_5e77a818]
    L_88c5:
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
