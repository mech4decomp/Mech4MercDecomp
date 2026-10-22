/*
 * FUN_0070012C (455 B) — in-.text data block. Contains:
 *   - 4 nop pad
 *   - small __cdecl callback at 0x130 (mov eax,[esp+4]; mov ecx,[esp+8];
 *     mov eax,[eax]; sub eax,[ecx]; ret) used as a qsort-style comparator
 *     (pushed as 0x700130 into the call at 0x7001E9).
 *   - 3 nop pad
 *   - main __stdcall fn at 0x140 (RET 4): splits a comma/equals-delimited
 *     string, allocates an array via IAT g_76b294, fills it via g_76b2b4 /
 *     g_76b318, sorts via g_76b314, then formats the result through
 *     g_76b420 and copies it back into the caller's buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_76b294;   /* IAT fn ptr */
extern int *g_76b2b4;   /* IAT fn ptr */
extern int *g_76b318;   /* IAT fn ptr */
extern int *g_76b314;   /* IAT fn ptr */
extern int *g_76b420;   /* IAT fn ptr (sprintf-style) */

__declspec(naked) void __stdcall FUN_0070012C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        /* --- small comparator callback @ 0x130 --- */
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [eax]
        sub     eax, dword ptr [ecx]
        ret
        nop
        nop
        nop
        /* --- main function @ 0x140 --- */
        sub     esp, 0x84
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x98]
        test    edi, edi
        mov     ebp, 1
        mov     ecx, edi
        je      L_2e6
        mov     al, byte ptr [edi]
        test    al, al
        je      L_2e6
    L_16a:
        cmp     al, 0x2c
        jne     L_16f
        inc     ebp
    L_16f:
        mov     al, byte ptr [ecx + 1]
        inc     ecx
        test    al, al
        jne     L_16a
        cmp     ebp, 1
        je      L_2e6
        mov     al, byte ptr [edi]
        test    al, al
        je      L_192
    L_186:
        cmp     al, 0x3d
        je      L_192
        mov     al, byte ptr [edi + 1]
        inc     edi
        test    al, al
        jne     L_186
    L_192:
        test    edi, edi
        je      L_2e6
        lea     eax, [ebp*4]
        inc     edi
        push    eax
        mov     dword ptr [esp + 0x9c], edi
        call    dword ptr [g_76b294]
        mov     ebx, eax
        push    0x774288
        push    edi
        mov     edi, dword ptr [g_76b2b4]
        mov     dword ptr [esp + 0x1c], ebx
        mov     esi, ebx
        call    edi
        add     esp, 0xc
        test    eax, eax
        je      L_1e9
    L_1cd:
        push    eax
        call    dword ptr [g_76b318]
        push    0x774288
        mov     dword ptr [esi], eax
        push    0
        add     esi, 4
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     L_1cd
    L_1e9:
        push    0x700130
        push    4
        push    ebp
        push    ebx
        call    dword ptr [g_76b314]
        mov     ecx, dword ptr [esp + 0xa8]
        push    0x7a0320
        push    0x7a0e60
        push    ecx
        xor     ebx, ebx
        call    dword ptr [g_76b420]
        add     esp, 0x1c
        test    ebp, ebp
        jle     L_2e6
    L_21d:
        cmp     ebx, ebp
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [edx + ebx*4]
        lea     esi, [edx + ebx*4]
        mov     edx, ecx
        jge     L_244
    L_22d:
        lea     edi, [ecx + 1]
        mov     eax, edi
    L_232:
        add     esi, 4
        inc     ebx
        cmp     dword ptr [esi], eax
        jne     L_240
        inc     edx
        inc     eax
        cmp     ebx, ebp
        jl      L_232
    L_240:
        cmp     edx, ecx
        jne     L_25a
    L_244:
        push    ecx
        lea     eax, [esp + 0x18]
        push    0x76b9a8
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_27f
    L_25a:
        cmp     edx, edi
        push    edx
        push    ecx
        jne     L_26c
        push    0x7a108c
        lea     ecx, [esp + 0x20]
        push    ecx
        jmp     L_276
    L_26c:
        push    0x7a1084
        lea     edx, [esp + 0x20]
        push    edx
    L_276:
        call    dword ptr [g_76b420]
        add     esp, 0x10
    L_27f:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x14]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x98]
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        cmp     ebx, ebp
        rep movsb
        je      L_2e6
        or      ecx, 0xffffffff
        mov     edi, 0x774288
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x98]
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        cmp     ebx, ebp
        rep movsb
        jl      L_21d
    L_2e6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x84
        ret     4
    }
}
