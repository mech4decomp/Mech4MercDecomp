/*
 * FUN_10019cf8 (1416 B declared range 0x10019CF8..0x1001A280).
 * __stdcall (ret 8).
 *
 * Single function (0x10019D00..0x1001A27D) preceded by 8 NOP padding bytes.
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

__declspec(naked) int __cdecl FUN_10019cf8(void)
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
        mov     eax, dword ptr [edi + 0x20]
        push    eax
        call    ebp
        test    eax, eax
        jne     L_1a274
        mov     ecx, dword ptr [edi + 0x24]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_1a274
        mov     edx, dword ptr [edi + 0x10]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19d4e
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19d4e:
        mov     edx, dword ptr [edi + 0x14]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19d6e
        mov     eax, dword ptr [edi + 0x14]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19d6e:
        mov     edx, dword ptr [edi + 0x18]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19d8e
        mov     eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19d8e:
        mov     edx, dword ptr [edi + 0x1c]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19dae
        mov     eax, dword ptr [edi + 0x1c]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19dae:
        mov     edx, dword ptr [edi + 0x20]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19dce
        mov     eax, dword ptr [edi + 0x20]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19dce:
        mov     edx, dword ptr [edi + 0x24]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19dee
        mov     eax, dword ptr [edi + 0x24]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19dee:
        mov     edx, dword ptr [edi + 0x28]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19e0e
        mov     eax, dword ptr [edi + 0x28]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19e0e:
        mov     edx, dword ptr [edi + 0x2c]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19e2e
        mov     eax, dword ptr [edi + 0x2c]
        push    eax
        call    FUN_1000b7d0
        add     esp, 4
        test    eax, eax
        je      L_1a26a
L_19e2e:
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        push    -1
        mov     edx, dword ptr [esi + 0x34]
        mov     dword ptr [edx], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 0x34]
        mov     dword ptr [ecx + 0x34], edx
        mov     eax, dword ptr [esi + 0x34]
        mov     ecx, dword ptr [edi + 4]
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edi + 8]
        mov     dword ptr [edx + 8], eax
        mov     ecx, dword ptr [esi + 0x34]
        mov     edx, dword ptr [edi + 0xc]
        mov     dword ptr [ecx + 0xc], edx
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        call    ebp
        test    eax, eax
        jne     L_19ea9
        mov     edx, dword ptr [edi + 0x10]
        lea     ecx, [esi + 0xd4]
        push    ecx
        push    edx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_19ea9
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        xor     ebx, ebx
        add     esp, 4
        mov     dword ptr [ecx + 0x10], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x10], ebx
        jne     L_19ee1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_19ea9:
        mov     eax, dword ptr [esi + 0x34]
        xor     ebx, ebx
        mov     dword ptr [eax + 0x10], ebx
        mov     eax, dword ptr [esi + 0xe0]
        cmp     eax, ebx
        jbe     L_19ecf
        mov     eax, dword ptr [esi + 0xd4]
        cmp     eax, ebx
        je      L_19ecf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_19ecf:
        mov     dword ptr [esi + 0xd4], ebx
        mov     dword ptr [esi + 0xe4], ebx
        mov     dword ptr [esi + 0xe0], ebx
L_19ee1:
        mov     ecx, dword ptr [edi + 0x14]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_19f2b
        mov     eax, dword ptr [edi + 0x14]
        lea     edx, [esi + 0x16c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_19f2b
        mov     ecx, dword ptr [edi + 0x14]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x14], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x14], ebx
        jne     L_19f61
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_19f2b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x14], ebx
        mov     eax, dword ptr [esi + 0x178]
        cmp     eax, ebx
        jbe     L_19f4f
        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, ebx
        je      L_19f4f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_19f4f:
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esi + 0x17c], ebx
        mov     dword ptr [esi + 0x178], ebx
L_19f61:
        mov     edx, dword ptr [edi + 0x18]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_19fab
        mov     ecx, dword ptr [edi + 0x18]
        lea     eax, [esi + 0x204]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_19fab
        mov     edx, dword ptr [edi + 0x18]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x18], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x18], ebx
        jne     L_19fe1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_19fab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x18], ebx
        mov     eax, dword ptr [esi + 0x210]
        cmp     eax, ebx
        jbe     L_19fcf
        mov     eax, dword ptr [esi + 0x204]
        cmp     eax, ebx
        je      L_19fcf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_19fcf:
        mov     dword ptr [esi + 0x204], ebx
        mov     dword ptr [esi + 0x214], ebx
        mov     dword ptr [esi + 0x210], ebx
L_19fe1:
        mov     ecx, dword ptr [edi + 0x1c]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_1a02b
        mov     eax, dword ptr [edi + 0x1c]
        lea     edx, [esi + 0x29c]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_1a02b
        mov     ecx, dword ptr [edi + 0x1c]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x1c], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x1c], ebx
        jne     L_1a061
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_1a02b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x1c], ebx
        mov     eax, dword ptr [esi + 0x2a8]
        cmp     eax, ebx
        jbe     L_1a04f
        mov     eax, dword ptr [esi + 0x29c]
        cmp     eax, ebx
        je      L_1a04f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_1a04f:
        mov     dword ptr [esi + 0x29c], ebx
        mov     dword ptr [esi + 0x2ac], ebx
        mov     dword ptr [esi + 0x2a8], ebx
L_1a061:
        mov     edx, dword ptr [edi + 0x20]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_1a0ab
        mov     ecx, dword ptr [edi + 0x20]
        lea     eax, [esi + 0x334]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_1a0ab
        mov     edx, dword ptr [edi + 0x20]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x20], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x20], ebx
        jne     L_1a0e1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_1a0ab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x20], ebx
        mov     eax, dword ptr [esi + 0x340]
        cmp     eax, ebx
        jbe     L_1a0cf
        mov     eax, dword ptr [esi + 0x334]
        cmp     eax, ebx
        je      L_1a0cf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_1a0cf:
        mov     dword ptr [esi + 0x334], ebx
        mov     dword ptr [esi + 0x344], ebx
        mov     dword ptr [esi + 0x340], ebx
L_1a0e1:
        mov     ecx, dword ptr [edi + 0x24]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_1a12b
        mov     eax, dword ptr [edi + 0x24]
        lea     edx, [esi + 0x3cc]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_1a12b
        mov     ecx, dword ptr [edi + 0x24]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x24], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x24], ebx
        jne     L_1a161
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_1a12b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x24], ebx
        mov     eax, dword ptr [esi + 0x3d8]
        cmp     eax, ebx
        jbe     L_1a14f
        mov     eax, dword ptr [esi + 0x3cc]
        cmp     eax, ebx
        je      L_1a14f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_1a14f:
        mov     dword ptr [esi + 0x3cc], ebx
        mov     dword ptr [esi + 0x3dc], ebx
        mov     dword ptr [esi + 0x3d8], ebx
L_1a161:
        mov     edx, dword ptr [edi + 0x28]
        push    -1
        push    edx
        call    ebp
        test    eax, eax
        jne     L_1a1ab
        mov     ecx, dword ptr [edi + 0x28]
        lea     eax, [esi + 0x464]
        push    eax
        push    ecx
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_1a1ab
        mov     edx, dword ptr [edi + 0x28]
        push    edx
        call    dword ptr [g_21130]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0x28], eax
        mov     edx, dword ptr [esi + 0x34]
        cmp     dword ptr [edx + 0x28], ebx
        jne     L_1a1e1
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_1a1ab:
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [eax + 0x28], ebx
        mov     eax, dword ptr [esi + 0x470]
        cmp     eax, ebx
        jbe     L_1a1cf
        mov     eax, dword ptr [esi + 0x464]
        cmp     eax, ebx
        je      L_1a1cf
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_1a1cf:
        mov     dword ptr [esi + 0x464], ebx
        mov     dword ptr [esi + 0x474], ebx
        mov     dword ptr [esi + 0x470], ebx
L_1a1e1:
        mov     ecx, dword ptr [edi + 0x2c]
        push    -1
        push    ecx
        call    ebp
        test    eax, eax
        jne     L_1a22b
        mov     eax, dword ptr [edi + 0x2c]
        lea     edx, [esi + 0x4fc]
        push    edx
        push    eax
        call    FUN_1000b850
        add     esp, 8
        test    al, al
        je      L_1a22b
        mov     ecx, dword ptr [edi + 0x2c]
        push    ecx
        call    dword ptr [g_21130]
        mov     edx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [edx + 0x2c], eax
        mov     eax, dword ptr [esi + 0x34]
        cmp     dword ptr [eax + 0x2c], ebx
        jne     L_1a261
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80040254
        pop     ebx
        ret     8
L_1a22b:
        mov     ecx, dword ptr [esi + 0x34]
        mov     dword ptr [ecx + 0x2c], ebx
        mov     eax, dword ptr [esi + 0x508]
        cmp     eax, ebx
        jbe     L_1a24f
        mov     eax, dword ptr [esi + 0x4fc]
        cmp     eax, ebx
        je      L_1a24f
        push    eax
        call    dword ptr [g_210ec]
        add     esp, 4
L_1a24f:
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x50c], ebx
        mov     dword ptr [esi + 0x508], ebx
L_1a261:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
L_1a26a:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x40]
L_1a274:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     8
    }
}
