/*
 * FUN_10014a68 (1432 B declared range 0x10014A68..0x10015000).
 * __stdcall (ret 8).
 *
 * Single function (0x10014A70..0x10014FFD) preceded by 8 NOP padding bytes.
 * Transcribed in full so the entire range matches byte-for-byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_2105c;   /* IAT slot 0x1002105c */
extern void *g_21130;   /* IAT slot 0x10021130 */
extern void *g_210ec;   /* IAT slot 0x100210ec */

extern void __cdecl FUN_1000b7d0(void);
extern void __cdecl FUN_1000b850(void);

__declspec(naked) int __cdecl FUN_10014a68(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_2105c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    -1
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14ff4
        mov     ecx, dword ptr [edi + 0x28]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_14ff4
        mov     edx, dword ptr [edi + 0x10]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_14ff4
        mov     eax, dword ptr [edi + 0x10]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14ace
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14ace:
        mov     eax, dword ptr [edi + 0x14]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14aee
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14aee:
        mov     eax, dword ptr [edi + 0x18]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14b0e
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14b0e:
        mov     eax, dword ptr [edi + 0x1c]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14b2e
        mov     ecx, dword ptr [edi + 0x1c]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14b2e:
        mov     eax, dword ptr [edi + 0x20]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14b4e
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14b4e:
        mov     eax, dword ptr [edi + 0x24]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14b6e
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14b6e:
        mov     eax, dword ptr [edi + 0x28]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14b8e
        mov     ecx, dword ptr [edi + 0x28]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14b8e:
        mov     eax, dword ptr [edi + 0x2c]
        push    -1
        push    eax
        call    ebp
        test    eax, eax
        jne     L_14bae
        mov     ecx, dword ptr [edi + 0x2c]
        push    ecx
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_14fea
L_14bae:
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi]
        push    -1
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0x34]
        mov     dword ptr [edx + 0x34], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 4]
        mov     dword ptr [ecx + 4], edx
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [edi + 8]
        mov     dword ptr [eax + 8], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 0xc]
        mov     dword ptr [edx + 0xc], eax
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_14c29
        mov     eax, dword ptr [edi + 0x10]
        lea     edx, [esi + 0xd4]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14c29
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        xor     ebx, ebx
        add     esp, 4
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x10], ebx
        jne     L_14c61
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14c29:
        mov     ecx, dword ptr [esi + 0x34]
        xor     ebx, ebx
        mov     dword ptr [ecx + 0x10], ebx
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, ebx
        jbe     L_14c4f
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, ebx
        je      L_14c4f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14c4f:
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xe4], ebx
        mov     dword ptr [esi + 0xe0], ebx
L_14c61:
        mov     edx, dword ptr [edi + 0x14]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_14cab
        mov     ecx, dword ptr [edi + 0x14]
        lea     eax, [esi + 0x16c]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14cab
        mov     edx, dword ptr [edi + 0x14]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x14], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x14], ebx
        jne     L_14ce1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14cab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x14], ebx
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, ebx
        jbe     L_14ccf
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, ebx
        je      L_14ccf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14ccf:
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esi + 0x17c], ebx
        mov     dword ptr [esi + 0x178], ebx
L_14ce1:
        mov     ecx, dword ptr [edi + 0x18]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_14d2b
        mov     eax, dword ptr [edi + 0x18]
        lea     edx, [esi + 0x204]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14d2b
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x18], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x18], ebx
        jne     L_14d61
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14d2b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x18], ebx
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, ebx
        jbe     L_14d4f
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, ebx
        je      L_14d4f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14d4f:
        mov     dword ptr [esi + 0x204], ebx
        mov     dword ptr [esi + 0x214], ebx
        mov     dword ptr [esi + 0x210], ebx
L_14d61:
        mov     edx, dword ptr [edi + 0x1c]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_14dab
        mov     ecx, dword ptr [edi + 0x1c]
        lea     eax, [esi + 0x29c]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14dab
        mov     edx, dword ptr [edi + 0x1c]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x1c], ebx
        jne     L_14de1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14dab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x1c], ebx
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, ebx
        jbe     L_14dcf
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, ebx
        je      L_14dcf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14dcf:
        mov     dword ptr [esi + 0x29c], ebx
        mov     dword ptr [esi + 0x2ac], ebx
        mov     dword ptr [esi + 0x2a8], ebx
L_14de1:
        mov     ecx, dword ptr [edi + 0x20]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_14e2b
        mov     eax, dword ptr [edi + 0x20]
        lea     edx, [esi + 0x334]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14e2b
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x20], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x20], ebx
        jne     L_14e61
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14e2b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x20], ebx
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, ebx
        jbe     L_14e4f
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, ebx
        je      L_14e4f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14e4f:
        mov     dword ptr [esi + 0x334], ebx
        mov     dword ptr [esi + 0x344], ebx
        mov     dword ptr [esi + 0x340], ebx
L_14e61:
        mov     edx, dword ptr [edi + 0x24]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_14eab
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [esi + 0x3cc]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14eab
        mov     edx, dword ptr [edi + 0x24]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x24], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x24], ebx
        jne     L_14ee1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14eab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x24], ebx
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, ebx
        jbe     L_14ecf
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, ebx
        je      L_14ecf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14ecf:
        mov     dword ptr [esi + 0x3cc], ebx
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x3d8], ebx
L_14ee1:
        mov     ecx, dword ptr [edi + 0x28]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_14f2b
        mov     eax, dword ptr [edi + 0x28]
        lea     edx, [esi + 0x464]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14f2b
        mov     ecx, dword ptr [edi + 0x28]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x28], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x28], ebx
        jne     L_14f61
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14f2b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x28], ebx
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, ebx
        jbe     L_14f4f
        mov     eax, dword ptr [esi + 0x464]
        cmp     eax, ebx
        je      L_14f4f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14f4f:
        mov     dword ptr [esi + 0x464], ebx
        mov     dword ptr [esi + 0x474], ebx
        mov     dword ptr [esi + 0x470], ebx
L_14f61:
        mov     edx, dword ptr [edi + 0x2c]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_14fab
        mov     ecx, dword ptr [edi + 0x2c]
        lea     eax, [esi + 0x4fc]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_14fab
        mov     edx, dword ptr [edi + 0x2c]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x2c], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x2c], ebx
        jne     L_14fe1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_14fab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x2c], ebx
        mov     eax, dword ptr [esi + 0x508]
        cmp     eax, ebx
        jbe     L_14fcf
        mov     eax, dword ptr [esi + 0x4fc]
        cmp     eax, ebx
        je      L_14fcf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_14fcf:
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x50c], ebx
        mov     dword ptr [esi + 0x508], ebx
L_14fe1:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_14fea:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx + 0x40]
L_14ff4:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     8
    }
}
