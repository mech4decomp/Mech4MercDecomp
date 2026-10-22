/*
 * FUN_5e030165 (1185 B) - string-to-96-bit-fixed-point parser with a
 * 12-way state-machine switch (jump table at 0x5E030606). Handles
 * sign, hex/dec/exponent prefixes, digit accumulation, and produces a
 * normalized 96-bit value + exponent in the output struct.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02da4c(void);
extern void __cdecl FUN_5e03009e(void);
extern void __cdecl FUN_5e0323e1(void);
extern char g_5e0391b8;   /* DAT_5e0391b8 (byte) */
extern int  g_5e0391b4;   /* DAT_5e0391b4 (dword) */
extern int *g_5e0391c0;   /* PTR_DAT_5e0391c0 */
extern int  g_5e030606;   /* jump table base (dispatch target) */

__declspec(naked) void FUN_5e030165(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x5c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0x10]
        lea     eax, [ebp-0x5c]
        push    1
        mov     dword ptr [ebp-0xc], eax
        xor     eax, eax
        pop     edx
        mov     dword ptr [ebp-0x28], eax
        mov     dword ptr [ebp-0x18], edx
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0x24], eax
        mov     dword ptr [ebp-0x20], eax
        mov     dword ptr [ebp-0x2c], eax
        mov     dword ptr [ebp-0x30], eax
        mov     dword ptr [ebp-0x1c], eax
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x14], eax
        mov     dword ptr [ebp+0x10], edi
    L1a0:
        mov     cl, byte ptr [edi]
        cmp     cl, 0x20
        jz      L1b6
        cmp     cl, 0x9
        jz      L1b6
        cmp     cl, 0xa
        jz      L1b6
        cmp     cl, 0xd
        jnz     L1b9
    L1b6:
        inc     edi
        jmp     L1a0
    L1b9:
        push    4
        pop     esi
    L1bc:
        mov     bl, byte ptr [edi]
        inc     edi
        cmp     eax, 0xb
        ja      L43f
        jmp     dword ptr [eax*4 + g_5e030606]
    L1cf:
        cmp     bl, 0x31
        jl      L1e0
        cmp     bl, 0x39
        jg      L1e0
    L1d9:
        push    3
        jmp     L3fd
    L1e0:
        cmp     bl, byte ptr [g_5e0391b8]
        jnz     L1ef
    L1e8:
        push    5
        jmp     L435
    L1ef:
        movsx   eax, bl
        sub     eax, 0x2b
        jz      L215
        dec     eax
        dec     eax
        jz      L209
        sub     eax, 3
        jnz     L4d8
        jmp     L298
    L209:
        push    2
        mov     dword ptr [ebp-0x28], 0x8000
        pop     eax
        jmp     L1bc
    L215:
        and     dword ptr [ebp-0x28], 0
        push    2
        pop     eax
        jmp     L1bc
    L21e:
        cmp     bl, 0x31
        mov     dword ptr [ebp-0x10], edx
        jl      L22b
        cmp     bl, 0x39
        jle     L1d9
    L22b:
        cmp     bl, byte ptr [g_5e0391b8]
        jz      L2f3
        cmp     bl, 0x2b
        jz      L26d
        cmp     bl, 0x2d
        jz      L26d
        cmp     bl, 0x30
        jz      L298
    L246:
        cmp     bl, 0x43
        jle     L4d8
        cmp     bl, 0x45
        jle     L266
        cmp     bl, 0x63
        jle     L4d8
        cmp     bl, 0x65
        jg      L4d8
    L266:
        push    6
        jmp     L435
    L26d:
        dec     edi
        push    0xb
        jmp     L435
    L275:
        cmp     bl, 0x31
        jl      L283
        cmp     bl, 0x39
        jle     L1d9
    L283:
        cmp     bl, byte ptr [g_5e0391b8]
        jz      L1e8
        cmp     bl, 0x30
        jnz     L44d
    L298:
        mov     eax, edx
        jmp     L1bc
    L29f:
        mov     dword ptr [ebp-0x10], edx
    L2a2:
        cmp     dword ptr [g_5e0391b4], edx
        jle     L2bb
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        push    1
        pop     edx
        jmp     L2c9
    L2bb:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, esi
    L2c9:
        test    eax, eax
        jz      L2eb
        cmp     dword ptr [ebp-0x4], 0x19
        jnc     L2e3
        mov     eax, dword ptr [ebp-0xc]
        inc     dword ptr [ebp-0x4]
        sub     bl, 0x30
        inc     dword ptr [ebp-0xc]
        mov     byte ptr [eax], bl
        jmp     L2e6
    L2e3:
        inc     dword ptr [ebp-0x8]
    L2e6:
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L2a2
    L2eb:
        cmp     bl, byte ptr [g_5e0391b8]
        jnz     L35a
    L2f3:
        mov     eax, esi
        jmp     L1bc
    L2fa:
        cmp     dword ptr [ebp-0x4], 0
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x24], edx
        jnz     L313
    L306:
        cmp     bl, 0x30
        jnz     L313
        dec     dword ptr [ebp-0x8]
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L306
    L313:
        cmp     dword ptr [g_5e0391b4], edx
        jle     L32c
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        push    1
        pop     edx
        jmp     L33a
    L32c:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, esi
    L33a:
        test    eax, eax
        jz      L35a
        cmp     dword ptr [ebp-0x4], 0x19
        jnc     L355
        mov     eax, dword ptr [ebp-0xc]
        inc     dword ptr [ebp-0x4]
        sub     bl, 0x30
        inc     dword ptr [ebp-0xc]
        dec     dword ptr [ebp-0x8]
        mov     byte ptr [eax], bl
    L355:
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L313
    L35a:
        cmp     bl, 0x2b
        jz      L26d
        cmp     bl, 0x2d
        jz      L26d
        jmp     L246
    L371:
        cmp     dword ptr [g_5e0391b4], edx
        mov     dword ptr [ebp-0x24], edx
        jle     L38d
        movzx   eax, bl
        push    esi
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        push    1
        pop     edx
        jmp     L39b
    L38d:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, esi
    L39b:
        test    eax, eax
        jz      L44d
        mov     eax, esi
        jmp     L3fe
    L3a7:
        lea     ecx, [edi-2]
        cmp     bl, 0x31
        mov     dword ptr [ebp+0x10], ecx
        jl      L3b7
        cmp     bl, 0x39
        jle     L3fb
    L3b7:
        movsx   eax, bl
        sub     eax, 0x2b
        jz      L433
        dec     eax
        dec     eax
        jz      L427
        sub     eax, 3
        jnz     L4db
    L3cc:
        push    8
        jmp     L435
    L3d0:
        mov     dword ptr [ebp-0x20], edx
    L3d3:
        cmp     bl, 0x30
        jnz     L3dd
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L3d3
    L3dd:
        cmp     bl, 0x31
        jl      L4d8
        cmp     bl, 0x39
        jg      L4d8
        jmp     L3fb
    L3f1:
        cmp     bl, 0x31
        jl      L404
        cmp     bl, 0x39
        jg      L404
    L3fb:
        push    9
    L3fd:
        pop     eax
    L3fe:
        dec     edi
        jmp     L1bc
    L404:
        cmp     bl, 0x30
        jnz     L44d
        jmp     L3cc
    L40b:
        cmp     dword ptr [ebp+0x20], 0
        jz      L43b
        movsx   eax, bl
        lea     ecx, [edi-1]
        sub     eax, 0x2b
        mov     dword ptr [ebp+0x10], ecx
        jz      L433
        dec     eax
        dec     eax
        jnz     L4db
    L427:
        or      dword ptr [ebp-0x18], 0xffffffff
        push    7
        pop     eax
        jmp     L1bc
    L433:
        push    7
    L435:
        pop     eax
        jmp     L1bc
    L43b:
        push    0xa
        dec     edi
        pop     eax
    L43f:
        cmp     eax, 0xa
        jz      L4dd
        jmp     L1bc
    L44d:
        mov     edi, dword ptr [ebp+0x10]
        jmp     L4dd
    L455:
        mov     dword ptr [ebp-0x20], 1
        xor     esi, esi
    L45e:
        cmp     dword ptr [g_5e0391b4], 1
        jle     L476
        movzx   eax, bl
        push    4
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        jmp     L485
    L476:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, 4
    L485:
        test    eax, eax
        jz      L4a5
        movsx   ecx, bl
        lea     eax, [esi+esi*4]
        lea     esi, [ecx+eax*2-0x30]
        cmp     esi, 0x1450
        jg      L4a0
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L45e
    L4a0:
        mov     esi, 0x1451
    L4a5:
        mov     dword ptr [ebp-0x1c], esi
    L4a8:
        cmp     dword ptr [g_5e0391b4], 1
        jle     L4c0
        movzx   eax, bl
        push    4
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        jmp     L4cf
    L4c0:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, 4
    L4cf:
        test    eax, eax
        jz      L4d8
        mov     bl, byte ptr [edi]
        inc     edi
        jmp     L4a8
    L4d8:
        dec     edi
        jmp     L4dd
    L4db:
        mov     edi, ecx
    L4dd:
        mov     eax, dword ptr [ebp+0xc]
        cmp     dword ptr [ebp-0x10], 0
        mov     dword ptr [eax], edi
        jz      L5c5
        push    0x18
        pop     eax
        cmp     dword ptr [ebp-0x4], eax
        jbe     L509
        cmp     byte ptr [ebp-0x45], 5
        jl      L4fd
        inc     byte ptr [ebp-0x45]
    L4fd:
        mov     dword ptr [ebp-0x4], eax
        mov     eax, dword ptr [ebp-0xc]
        dec     eax
        inc     dword ptr [ebp-0x8]
        jmp     L50c
    L509:
        mov     eax, dword ptr [ebp-0xc]
    L50c:
        cmp     dword ptr [ebp-0x4], 0
        jbe     L5bb
    L516:
        dec     eax
        cmp     byte ptr [eax], 0
        jnz     L524
        dec     dword ptr [ebp-0x4]
        inc     dword ptr [ebp-0x8]
        jmp     L516
    L524:
        lea     eax, [ebp-0x40]
        push    eax
        lea     eax, [ebp-0x5c]
        push    dword ptr [ebp-0x4]
        push    eax
        call    FUN_5e03009e
        mov     eax, dword ptr [ebp-0x1c]
        xor     ecx, ecx
        add     esp, 0xc
        cmp     dword ptr [ebp-0x18], ecx
        jge     L543
        neg     eax
    L543:
        add     eax, dword ptr [ebp-0x8]
        cmp     dword ptr [ebp-0x20], ecx
        jnz     L54e
        add     eax, dword ptr [ebp+0x18]
    L54e:
        cmp     dword ptr [ebp-0x24], ecx
        jnz     L556
        sub     eax, dword ptr [ebp+0x1c]
    L556:
        cmp     eax, 0x1450
        jle     L58d
        mov     dword ptr [ebp-0x2c], 1
    L564:
        mov     ebx, dword ptr [ebp+0x10]
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ebp+0x10]
    L570:
        cmp     dword ptr [ebp-0x2c], 0
        jz      L5d6
        xor     ebx, ebx
        mov     eax, 0x7fff
        mov     esi, 0x80000000
        xor     edx, edx
        mov     dword ptr [ebp-0x14], 2
        jmp     L5eb
    L58d:
        cmp     eax, 0xffffebb0
        jge     L59d
        mov     dword ptr [ebp-0x30], 1
        jmp     L564
    L59d:
        push    dword ptr [ebp+0x14]
        push    eax
        lea     eax, [ebp-0x40]
        push    eax
        call    FUN_5e0323e1
        mov     edx, dword ptr [ebp-0x40]
        mov     ebx, dword ptr [ebp-0x3e]
        mov     esi, dword ptr [ebp-0x3a]
        mov     eax, dword ptr [ebp-0x36]
        add     esp, 0xc
        jmp     L570
    L5bb:
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        jmp     L570
    L5c5:
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        mov     dword ptr [ebp-0x14], 4
        jmp     L5eb
    L5d6:
        cmp     dword ptr [ebp-0x30], 0
        jz      L5eb
        xor     edx, edx
        xor     eax, eax
        xor     esi, esi
        xor     ebx, ebx
        mov     dword ptr [ebp-0x14], 1
    L5eb:
        mov     ecx, dword ptr [ebp+0x8]
        or      eax, dword ptr [ebp-0x28]
        pop     edi
        mov     dword ptr [ecx+6], esi
        mov     dword ptr [ecx+2], ebx
        mov     word ptr [ecx+0xa], ax
        mov     eax, dword ptr [ebp-0x14]
        pop     esi
        mov     word ptr [ecx], dx
        pop     ebx
        leave
        ret
    }
}
