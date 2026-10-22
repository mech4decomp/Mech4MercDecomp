/*
 * FUN_006FF640 (596 B) — __stdcall(2). Looks up a named object via
 * FUN_006F89F0 / FUN_006F5B80, validates a string tag against 0x79fb30,
 * then allocates and initializes two 0x3c-byte records (via the allocator
 * at 0x76b294), copies the name into them, and registers them in the
 * globals 0x8567ec / 0x85682c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_006F89F0(void);
extern void * __cdecl FUN_006F5B80(void *a, void *b);
extern void * __cdecl FUN_006F6410(void *a);
extern void __cdecl FUN_006F59F0(void *a);
extern int __cdecl FUN_006FFD60(void *a);
extern void __cdecl FUN_006FFC00(void *a, void *b);

extern unsigned int g_76b294;   /* DAT_0076b294 (allocator fn ptr) */
extern unsigned int g_76b420;   /* DAT_0076b420 (IAT fn ptr) */
extern unsigned int g_8567ec;   /* DAT_008567ec */
extern unsigned int g_85682c;   /* DAT_0085682c */

__declspec(naked) void FUN_006FF640(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_006F89F0
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], eax
        jne     L_6ff65e
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
L_6ff65e:
        mov     ebx, dword ptr [esp + 0x1c]
        push    0x79fad4
        push    ebx
        mov     ecx, eax
        call    FUN_006F5B80
        cmp     eax, ebp
        jne     L_6ff67d
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
L_6ff67d:
        mov     edi, 0x79fb30
        mov     esi, eax
L_6ff684:
        mov     cl, byte ptr [esi]
        mov     dl, byte ptr [edi]
        mov     al, cl
        cmp     cl, dl
        jne     L_6ff6ac
        test    al, al
        je      L_6ff6a8
        mov     dl, byte ptr [esi + 1]
        mov     cl, byte ptr [edi + 1]
        mov     al, dl
        cmp     dl, cl
        jne     L_6ff6ac
        add     esi, 2
        add     edi, 2
        test    al, al
        jne     L_6ff684
L_6ff6a8:
        xor     eax, eax
        jmp     L_6ff6b1
L_6ff6ac:
        sbb     eax, eax
        sbb     eax, -1
L_6ff6b1:
        cmp     eax, ebp
        je      L_6ff6bf
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     8
L_6ff6bf:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        call    FUN_006F6410
        cmp     eax, ebp
        je      L_6ff6d4
        mov     ecx, eax
        call    FUN_006F59F0
L_6ff6d4:
        mov     esi, dword ptr [g_76b294]
        push    0x3c
        call    esi
        add     esp, 4
        cmp     eax, ebp
        je      L_6ff71c
        or      ecx, 0xffffffff
        mov     dword ptr [eax + 0x20], ebp
        mov     dword ptr [eax + 0x28], ebp
        mov     dword ptr [eax + 4], ebp
        mov     dword ptr [eax + 8], ebp
        mov     dword ptr [eax], ebp
        mov     dword ptr [eax + 0x10], ebp
        mov     dword ptr [eax + 0x14], ebp
        mov     dword ptr [eax + 0x24], ebp
        mov     dword ptr [eax + 0x2c], ebp
        mov     dword ptr [eax + 0x34], ebp
        mov     dword ptr [eax + 0x38], ebp
        mov     byte ptr [eax + 0xc], 0
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     byte ptr [eax + 0x30], 0
        mov     byte ptr [eax + 0x31], 0
        mov     ebp, eax
L_6ff71c:
        mov     eax, dword ptr [g_8567ec]
        or      ecx, 0xffffffff
        mov     dword ptr [ebp + 0x34], eax
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x79fb64
        repne scasb
        not     ecx
        dec     ecx
        lea     eax, [edx + ecx + 2]
        push    eax
        mov     dword ptr [g_8567ec], ebp
        mov     dword ptr [ebp], 1
        mov     byte ptr [ebp + 0x30], 1
        call    esi
        push    ebx
        push    0x79fb64
        push    0x7a0e90
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_76b420]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        push    ecx
        call    esi
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 0x18
        mov     edi, ebx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp + 0x14], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebp
        rep movsb
        call    FUN_006FFD60
        test    al, al
        jne     L_6ff7b3
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
L_6ff7b3:
        mov     esi, dword ptr [g_76b294]
        push    0x3c
        call    esi
        xor     ecx, ecx
        add     esp, 4
        cmp     eax, ecx
        je      L_6ff7fc
        or      edx, 0xffffffff
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0xc], cl
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x18], edx
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     byte ptr [eax + 0x30], cl
        mov     byte ptr [eax + 0x31], cl
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x38], ecx
        mov     ebp, eax
        jmp     L_6ff7fe
L_6ff7fc:
        xor     ebp, ebp
L_6ff7fe:
        mov     edx, dword ptr [g_85682c]
        mov     dword ptr [ebp], ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [ebp + 0x34], edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x7a0320
        repne scasb
        not     ecx
        dec     ecx
        lea     eax, [edx + ecx + 2]
        push    eax
        mov     dword ptr [g_85682c], ebp
        call    esi
        push    ebx
        push    0x7a0320
        push    0x7a0e90
        push    eax
        mov     dword ptr [ebp + 0x10], eax
        call    dword ptr [g_76b420]
        add     esp, 0x14
        push    ebx
        push    ebp
        call    FUN_006FFC00
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        push    ecx
        call    esi
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 4
        mov     edi, ebx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebp + 0x14], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        push    ebp
        rep movsb
        call    FUN_006FFD60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
