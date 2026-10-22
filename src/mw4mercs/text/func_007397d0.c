/*
 * FUN_007397d0 (918 B) — Thread message/event loop.
 *
 * __fastcall (ECX = this). Reads events from a queue (DAT_008aacc0),
 * dispatches on a 4-way jump table (0x739b68, outside this function),
 * maintains a hash-list of per-key statistics under a critical section
 * (this+0x30), and writes back via DAT_008aacb8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b214;   /* GetCurrentThread (IAT) */
extern void *g_76b1fc;   /* SetThreadPriority (IAT) */
extern void *g_8aacc0;   /* event read (IAT) */
extern void *g_8aacb8;   /* event write (IAT) */
extern void *g_8aac94;   /* key lookup (IAT) */
extern void *g_76b0e0;   /* GetTickCount (IAT) */
extern void *g_76b110;   /* EnterCriticalSection (IAT) */
extern void *g_76b100;   /* LeaveCriticalSection (IAT) */
extern void *g_8aac84;   /* error query (IAT) */

__declspec(naked) void FUN_007397d0(void)
{
    __asm {
        sub     esp, 0x88
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    0x1
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x18], 0x10
        call    dword ptr [g_76b214]
        push    eax
        call    dword ptr [g_76b1fc]
    L_97f7:
        mov     esi, dword ptr [ebx + 0x20]
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        push    0x0
        push    0x64
        lea     edx, [esp + 0x44]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x34], 0x1
        call    dword ptr [g_8aacc0]
        cmp     eax, 0x4
        jnz     L_9b36
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, eax
        and     ecx, 0xf0000000
        cmp     ecx, 0x90000000
        jnz     L_97f7
        shr     eax, 0x1a
        and     eax, 0x3
        cmp     eax, 0x3
        ja      L_97f7
        jmp     dword ptr [eax*4 + 0x739b68]
    L_984b:
        mov     eax, dword ptr [ebx + 0x8]
        test    eax, eax
        jz      L_9873
        call    dword ptr [g_76b0e0]
        mov     edx, dword ptr [esp + 0x34]
        and     eax, 0x1fff
        or      eax, 0xfffca000
        shl     eax, 0xd
        and     edx, 0x1fff
        or      eax, edx
        jmp     L_9892
    L_9873:
        call    dword ptr [g_76b0e0]
        mov     ecx, dword ptr [esp + 0x34]
        and     eax, 0x1fff
        or      eax, 0xfffce000
        shl     eax, 0xd
        and     ecx, 0x1fff
        or      eax, ecx
    L_9892:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 0x28]
        push    eax
        push    0x0
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    dword ptr [g_8aacb8]
        jmp     L_97f7
    L_98b5:
        mov     dword ptr [esp + 0x1c], 0x0
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        call    dword ptr [g_8aac94]
        mov     ebp, eax
        mov     dword ptr [esp + 0x20], ebp
        call    dword ptr [g_76b0e0]
        lea     esi, [ebx + 0x30]
        push    esi
        mov     edi, eax
        call    dword ptr [g_76b110]
        mov     ecx, dword ptr [ebx + 0x4]
        test    ecx, ecx
        jz      L_9a2e
        mov     eax, ebp
        xor     edx, edx
        and     eax, 0xff
        div     dword ptr [ebx + 0x18]
        shl     edx, 0x5
        mov     esi, dword ptr [edx + ecx*1 + 0x1c]
        test    esi, esi
        jz      L_9a1f
    L_9906:
        cmp     dword ptr [esi], ebp
        jz      L_9920
        mov     esi, dword ptr [esi + 0x1c]
        test    esi, esi
        jnz     L_9906
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        jmp     L_97f7
    L_9920:
        mov     ecx, dword ptr [esi + 0xc]
        cmp     edi, ecx
        mov     ebp, dword ptr [esi + 0x4]
        mov     eax, edi
        jc      L_9930
        sub     eax, ecx
        jmp     L_9933
    L_9930:
        sub     eax, ecx
        dec     eax
    L_9933:
        cmp     eax, 0x7d0
        jbe     L_9942
        xor     eax, eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
    L_9942:
        mov     ecx, dword ptr [esp + 0x34]
        mov     eax, edi
        and     eax, 0x1fff
        and     ecx, 0x1fff
        cmp     eax, ecx
        jc      L_995b
        sub     eax, ecx
        jmp     L_9962
    L_995b:
        sub     eax, ecx
        add     eax, 0x1fff
    L_9962:
        mov     edx, eax
        mov     eax, dword ptr [esi + 0x8]
        inc     eax
        mov     ecx, eax
        mov     dword ptr [esi + 0x8], eax
        mov     eax, dword ptr [esi + 0x4]
        imul    eax, ecx
        add     eax, edx
        xor     edx, edx
        div     ecx
        cmp     ecx, 0x1
        jnz     L_9986
        cmp     eax, ebp
        jbe     L_9986
        add     eax, ebp
        shr     eax, 0x1
    L_9986:
        mov     ebp, dword ptr [esp + 0x1c]
        test    ebp, ebp
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x18], 0x1
        jz      L_99d6
        call    dword ptr [g_76b0e0]
        cmp     eax, edi
        jc      L_99a9
        sub     eax, edi
        jmp     L_99ac
    L_99a9:
        sub     eax, edi
        dec     eax
    L_99ac:
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esi + 0x4]
        and     ecx, 0xffffe000
        shl     eax, 0xd
        add     ecx, eax
        and     ecx, 0x3ffe000
        and     edx, 0x1fff
        or      ecx, edx
        or      ecx, 0x98000000
        mov     dword ptr [esp + 0x10], ecx
    L_99d6:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_99ec
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x4]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        push    ecx
        call    eax
    L_99ec:
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        test    ebp, ebp
        jz      L_9a17
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [ebx + 0x20]
        lea     eax, [esp + 0x28]
        push    eax
        push    0x0
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edx
        call    dword ptr [g_8aacb8]
    L_9a17:
        test    esi, esi
        jnz     L_97f7
    L_9a1f:
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        jmp     L_97f7
    L_9a2e:
        push    esi
        call    dword ptr [g_76b100]
        jmp     L_97f7
    L_9a3a:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        call    dword ptr [g_8aac94]
        mov     ebp, eax
        call    dword ptr [g_76b0e0]
        mov     edi, eax
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b110]
        mov     ecx, dword ptr [ebx + 0x4]
        xor     esi, esi
        cmp     ecx, esi
        jz      L_9b27
        mov     eax, ebp
        xor     edx, edx
        and     eax, 0xff
        div     dword ptr [ebx + 0x18]
        shl     edx, 0x5
        mov     ecx, dword ptr [edx + ecx*1 + 0x1c]
        cmp     ecx, esi
        jz      L_9b27
    L_9a81:
        cmp     dword ptr [ecx], ebp
        jz      L_9a9b
        mov     ecx, dword ptr [ecx + 0x1c]
        cmp     ecx, esi
        jnz     L_9a81
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        jmp     L_97f7
    L_9a9b:
        mov     edx, dword ptr [ecx + 0xc]
        cmp     edi, edx
        mov     eax, edi
        jc      L_9aa8
        sub     eax, edx
        jmp     L_9aab
    L_9aa8:
        sub     eax, edx
        dec     eax
    L_9aab:
        cmp     eax, 0x7d0
        jbe     L_9ab8
        mov     dword ptr [ecx + 0x4], esi
        mov     dword ptr [ecx + 0x8], esi
    L_9ab8:
        mov     edx, dword ptr [ecx + 0x8]
        add     edx, 0x2
        mov     dword ptr [ecx + 0x8], edx
        mov     eax, dword ptr [esp + 0x34]
        mov     ebx, edx
        mov     esi, eax
        shr     esi, 0xd
        mov     edx, edi
        and     edx, 0x1fff
        and     esi, 0x1fff
        cmp     edx, esi
        jc      L_9ae2
        sub     edx, esi
        jmp     L_9aea
    L_9ae2:
        sub     edx, esi
        add     edx, 0x1fff
    L_9aea:
        mov     esi, dword ptr [ecx + 0x4]
        imul    esi, ebx
        and     eax, 0x1fff
        add     edx, esi
        add     eax, edx
        xor     edx, edx
        div     ebx
        mov     dword ptr [ecx + 0xc], edi
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [ecx + 0x18]
        test    eax, eax
        jnz     L_9b11
        mov     dword ptr [ecx + 0x18], 0x2
    L_9b11:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_9b23
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x4]
        push    edx
        push    ecx
        push    ebp
        call    eax
    L_9b23:
        mov     ebx, dword ptr [esp + 0x18]
    L_9b27:
        lea     eax, [ebx + 0x30]
        push    eax
        call    dword ptr [g_76b100]
        jmp     L_97f7
    L_9b36:
        cmp     eax, -0x1
        jnz     L_97f7
        call    dword ptr [g_8aac84]
        cmp     eax, 0x2746
        jz      L_97f7
        cmp     eax, 0x2738
        jz      L_97f7
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x88
        ret
    }
}
