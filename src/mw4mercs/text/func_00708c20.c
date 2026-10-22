/*
 * FUN_00708c20 (1264 B) — Game initialization routine.
 *
 * RET 8 (two stack params). Allocates a 0x2004-byte stack frame, copies and
 * lowercases a command-line string, reads a set of config flags via
 * FUN_00708b40, then performs a long sequence of subsystem initializations.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_858bfc;
extern void *g_858c08;
extern void *g_85979c;
extern void *g_8597c8;
extern void *g_859af7;
extern void *g_859afd;
extern void *g_8597ac;
extern void *g_8597a8;
extern void *g_859ae0;
extern void *g_8aa288;
extern void *g_858980;
extern void *g_859afe;
extern void *g_8597a4;
extern void *g_8597a0;
extern void *g_859aff;
extern void *g_859290;
extern void *g_8597b8;
extern void *g_8597b4;
extern void *g_8597b0;
extern void *g_8aa9f8;
extern void *g_859278;
extern void *g_858934;
extern void *g_858954;
extern void *g_859b9c;
extern void *g_85a0c4;
extern void *g_858af8;
extern void *g_859af8;
extern void *g_858f74;
extern void *g_858f70;
extern void *g_858f68;
extern void *g_858f6c;
extern void *g_849310;
extern void *g_858a34;
extern void *g_858ac0;
extern void *g_859ae8;
extern void *g_859b90;
extern void *g_859af5;
extern void *g_858a40;
extern void *g_8aa9e4;
extern void *g_858998;
extern void *g_859af4;
extern void *g_7b6fac;

/* IAT function pointers */
extern void *g_76b2dc;   /* sprintf */
extern void *g_76b294;   /* malloc */
extern void *g_76b0e8;   /* CreateFileA */
extern void *g_76b160;   /* SetFilePointer */
extern void *g_76b0e4;   /* WriteFile */
extern void *g_76b0ec;   /* CloseHandle */

extern void __cdecl FUN_0075dc00(void);
extern void __cdecl FUN_0073ce10(void);
extern void __cdecl FUN_00708b40(void);
extern void __cdecl FUN_007374b0(void);
extern void __cdecl FUN_0072d2e0(void);
extern void __cdecl FUN_00707f80(void);
extern void __cdecl FUN_0070c960(void);
extern void __cdecl FUN_00737d60(void);
extern void __cdecl FUN_0070f910(void);
extern void __cdecl FUN_0070ceb0(void);
extern void __cdecl FUN_00707a70(void);
extern void __cdecl FUN_006f39e0(void);
extern void __cdecl FUN_006f3a40(void);
extern void __cdecl FUN_007086d0(void);
extern void __cdecl FUN_006fb210(void);
extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_00747c20(void);
extern void __cdecl FUN_007299c0(void);
extern void __cdecl FUN_00746e10(void);
extern void __cdecl FUN_00733250(void);
extern void __cdecl FUN_007178f0(void);
extern void __cdecl FUN_00708030(void);
extern void __cdecl FUN_00733390(void);
extern void __cdecl FUN_00747670(void);
extern void __cdecl FUN_0070a6a0(void);
extern void __cdecl FUN_0073cdb0(void);
extern void __cdecl FUN_00722230(void);
extern void __cdecl FUN_00739c40(void);
extern void __cdecl FUN_00701a10(void);
extern void __cdecl FUN_0070e150(void);
extern void __cdecl FUN_00707990(void);
extern void __cdecl FUN_0075dbbe(void);
extern void __cdecl FUN_0071f310(void);
extern void __cdecl FUN_00719b10(void);
extern void __cdecl FUN_00722130(void);
extern void __cdecl FUN_0070abe0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __cdecl FUN_00708c20(void)
{
    __asm {
        mov     eax, 0x2004
        call    FUN_0075dc00
        mov     eax, dword ptr [esp + 0x2008]
        push    ebx
        push    ebp
        xor     ebx, ebx
        push    esi
        mov     dword ptr [g_858bfc], eax
        mov     dword ptr [g_858c08], ebx
        call    FUN_0073ce10
        mov     ebp, dword ptr [esp + 0x2018]
        cmp     ebp, ebx
        mov     dword ptr [g_85979c], eax
        jnz     L_8c5b
        mov     ebp, 0x76b768
L_8c5b:
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x859178
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     edx, edx
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        inc     ecx
        mov     dword ptr [g_7b6fac], 0x859178
        jz      L_8cbd
L_8c97:
        mov     al, byte ptr [edx + 0x859178]
        cmp     al, 0x41
        jl      L_8ca7
        cmp     al, 0x5a
        jg      L_8ca7
        add     al, 0x20
L_8ca7:
        mov     byte ptr [edx + 0x859078], al
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     edx
        mov     edi, ebp
        repne   scasb
        not     ecx
        cmp     edx, ecx
        jc      L_8c97
L_8cbd:
        push    0x7a15b4
        call    FUN_00708b40
        test    eax, eax
        mov     ebp, 0x1
        jz      L_8cd6
        mov     dword ptr [g_8597c8], ebp
L_8cd6:
        push    0x7a15a8
        call    FUN_00708b40
        test    eax, eax
        jz      L_8ceb
        mov     byte ptr [g_859af7], 0x1
L_8ceb:
        push    0x7a1598
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d00
        mov     byte ptr [g_859afd], 0x1
L_8d00:
        push    0x7a1588
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d14
        mov     dword ptr [g_8597ac], ebp
L_8d14:
        push    0x7a1574
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d28
        mov     dword ptr [g_8597a8], ebp
L_8d28:
        push    0x7a1568
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d3c
        mov     dword ptr [g_859ae0], ebp
L_8d3c:
        push    0x7a155c
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d51
        mov     byte ptr [g_8aa288], 0x1
L_8d51:
        push    0x7a154c
        mov     dword ptr [g_858980], ebx
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d6b
        mov     dword ptr [g_858980], ebp
L_8d6b:
        push    0x7a1540
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d80
        mov     byte ptr [g_859afe], 0x1
L_8d80:
        push    0x7a1530
        call    FUN_00708b40
        test    eax, eax
        jz      L_8d98
        mov     dword ptr [g_858980], 0x2
L_8d98:
        push    0x7a1528
        call    FUN_00708b40
        test    eax, eax
        jz      L_8dac
        mov     dword ptr [g_8597a4], ebp
L_8dac:
        push    0x7a1518
        call    FUN_00708b40
        test    eax, eax
        jz      L_8dc0
        mov     dword ptr [g_8597a0], ebp
L_8dc0:
        push    0x7a150c
        call    FUN_00708b40
        cmp     eax, ebx
        jz      L_8e24
        cmp     eax, ebp
        mov     byte ptr [g_859afd], 0x1
        mov     byte ptr [g_859aff], 0x1
        jnz     L_8e02
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a14fc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x859290
        rep     movsd
        mov     ecx, eax
        jmp     L_8e1f
L_8e02:
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x859290
        rep     movsd
        mov     ecx, edx
L_8e1f:
        and     ecx, 0x3
        rep     movsb
L_8e24:
        push    0x7a14f0
        call    FUN_00708b40
        cmp     eax, ebp
        jbe     L_8e50
        push    0x8597b8
        push    0x8597b4
        push    0x76e2a0
        push    eax
        call    dword ptr [g_76b2dc]
        add     esp, 0x10
        mov     dword ptr [g_8597b0], eax
L_8e50:
        cmp     dword ptr [g_8aa9f8], ebx
        jnz     L_8e62
        push    0x859178
        call    FUN_007374b0
L_8e62:
        call    FUN_0072d2e0
        cmp     dword ptr [g_859278], ebx
        jnz     L_8e86
        mov     al, byte ptr [g_858934]
        test    al, al
        jnz     L_8e86
        call    FUN_00707f80
        test    al, al
        jz      L_8e86
        call    FUN_0070c960
L_8e86:
        mov     al, byte ptr [g_858954]
        mov     byte ptr [g_859b9c], al
        mov     eax, dword ptr [g_859278]
        mov     esi, 0x2
        cmp     eax, esi
        mov     byte ptr [g_858954], 0x0
        mov     byte ptr [g_85a0c4], 0x0
        mov     dword ptr [g_858c08], ebp
        jz      L_8eb7
        call    FUN_00737d60
L_8eb7:
        call    FUN_0070f910
        call    FUN_0070ceb0
        call    FUN_00707a70
        call    FUN_006f39e0
        call    FUN_006f3a40
        call    FUN_007086d0
        call    FUN_006fb210
        push    ebx
        push    ebp
        call    FUN_006faa30
        call    FUN_00747c20
        cmp     dword ptr [g_859278], esi
        jz      L_90a7
        call    FUN_007299c0
        mov     al, byte ptr [g_8aa9e4]
        test    al, al
        jnz     L_8f10
        call    FUN_00746e10
        neg     eax
        sbb     al, al
        inc     al
        mov     byte ptr [g_859af4], al
L_8f10:
        call    FUN_00733250
        call    FUN_007178f0
        call    FUN_00708030
        call    FUN_00733390
        call    FUN_00747670
        call    FUN_0070a6a0
        call    FUN_0073cdb0
        call    FUN_00722230
        mov     ecx, dword ptr [g_858998]
        push    ecx
        call    FUN_00739c40
        call    FUN_00701a10
        call    FUN_0070e150
        call    FUN_00707990
        mov     ecx, dword ptr [g_858af8]
        mov     al, byte ptr [g_859aff]
        inc     ecx
        test    al, al
        mov     dword ptr [g_858af8], ecx
        mov     dword ptr [g_859af8], ebx
        jz      L_906f
        mov     al, byte ptr [g_858f74]
        test    al, 0x1
        jnz     L_8fb3
        or      al, 0x1
        push    0x4000
        mov     byte ptr [g_858f74], al
        call    dword ptr [g_76b294]
        push    0x709110
        mov     dword ptr [g_858f70], eax
        mov     dword ptr [g_858f68], 0x4000
        mov     dword ptr [g_858f6c], ebx
        mov     byte ptr [eax], 0x0
        call    FUN_0075dbbe
        add     esp, 0x8
L_8fb3:
        push    0x858f68
        call    FUN_0071f310
        push    0x858f68
        call    FUN_00719b10
        push    0x858f68
        call    FUN_00722130
        mov     eax, dword ptr [g_858f70]
        mov     ecx, eax
        mov     al, byte ptr [eax]
        test    al, al
        lea     esi, [esp + 0x14]
        jz      L_8ff9
L_8fe2:
        cmp     al, 0xa
        jnz     L_8fee
        mov     byte ptr [esi], 0xd
        inc     esi
        mov     byte ptr [esi], al
        jmp     L_8ff0
L_8fee:
        mov     byte ptr [esi], al
L_8ff0:
        mov     al, byte ptr [ecx + 0x1]
        inc     esi
        inc     ecx
        test    al, al
        jnz     L_8fe2
L_8ff9:
        mov     cl, byte ptr [g_859290]
        mov     bl, 0x2b
        cmp     cl, bl
        mov     byte ptr [esi], 0x0
        mov     eax, 0x859290
        jnz     L_9012
        mov     eax, 0x859291
L_9012:
        push    0x0
        push    0x80
        push    0x4
        push    0x0
        push    0x0
        push    0x40000000
        push    eax
        call    dword ptr [g_76b0e8]
        mov     edi, eax
        cmp     edi, -0x1
        jz      L_9068
        cmp     byte ptr [g_859290], bl
        jnz     L_9047
        push    0x2
        push    0x0
        push    0x0
        push    edi
        call    dword ptr [g_76b160]
L_9047:
        push    0x0
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x1c]
        sub     esi, eax
        push    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edi
        call    dword ptr [g_76b0e4]
        push    edi
        call    dword ptr [g_76b0ec]
L_9068:
        call    FUN_0070c960
        xor     ebx, ebx
L_906f:
        mov     al, byte ptr [g_859b9c]
        test    al, al
        mov     esi, 0x2
        mov     dword ptr [g_858c08], esi
        jz      L_9088
        call    FUN_0070abe0
L_9088:
        mov     edx, dword ptr [g_849310]
        push    edx
        call    FUN_006f4950
        call    dword ptr [g_858a34]
        cmp     dword ptr [g_859278], ebp
        jz      L_90a7
        call    FUN_006f49a0
L_90a7:
        cmp     dword ptr [g_858ac0], ebx
        pop     edi
        jz      L_90f2
        cmp     dword ptr [g_859278], ebx
        jnz     L_90e5
        cmp     dword ptr [g_859ae8], ebx
        jnz     L_90e5
        cmp     dword ptr [g_859b90], ebx
        jnz     L_90e5
        mov     eax, dword ptr [g_849310]
        push    eax
        call    FUN_006f4950
        mov     byte ptr [g_859af5], 0x0
        call    dword ptr [g_858a40]
        call    FUN_006f49a0
L_90e5:
        cmp     dword ptr [g_858ac0], ebx
        jz      L_90f2
        call    FUN_0070c960
L_90f2:
        cmp     dword ptr [g_859278], esi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L_9107
        mov     dword ptr [g_858c08], 0x3
L_9107:
        add     esp, 0x2004
        ret     0x8
    }
}
