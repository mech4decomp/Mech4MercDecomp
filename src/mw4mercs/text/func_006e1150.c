/* FUN_006e1150 - 1479 bytes, __thiscall, RET 0x8 */
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006e1b10(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_0040d9b0(void);
extern int __cdecl FUN_006e1ae0(int);
extern int __cdecl FUN_006d2f50(int);
extern void __cdecl FUN_006fab90(unsigned int);
extern void __cdecl FUN_004db630(void *);
extern void __cdecl FUN_006d3160(void *);
extern int g_0084004c;
__declspec(naked) void FUN_006e1150(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp + -0x4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + -0x4]
        xor     ebx, ebx
        sub     eax, ebx
        jz      L_e11ed
        dec     eax
        jnz     L_e1234
        push    0x50
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_e11ae
        mov     ecx, esi
        call    FUN_006e1b10
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi], 0x79ecf8
        mov     dword ptr [esi + 0x3c], ebx
        mov     byte ptr [esi + 0x4c], bl
        mov     dword ptr [esi + 0x44], ebx
        mov     dword ptr [esi + 0x48], 0x80
        mov     dword ptr [esi + 0x40], ebx
        jmp     L_e11b0
    L_e11ae:
        xor     esi, esi
    L_e11b0:
        lea     edx, [ebp + -0x10]
        push    edx
        push    edi
        mov     dword ptr [ebp + -0x10], ebx
        call    FUN_00412a00
        add     esp, 0x8
        lea     ecx, [ebp + -0x10]
        call    FUN_004128e0
        mov     eax, dword ptr [ebp + -0x10]
        lea     ecx, [esi + 0x38]
        push    eax
        call    FUN_00412780
        mov     ecx, dword ptr [esi + 0x38]
        push    ecx
        call    FUN_00412ab0
        add     esp, 0x4
        lea     ecx, [ebp + -0x10]
        mov     dword ptr [esi + 0x34], eax
        call    FUN_0040d9b0
        jmp     L_e1230
    L_e11ed:
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_e1234
        mov     ecx, 0x100
        mov     dword ptr [eax], 0x79ecec
        mov     dword ptr [eax + 0x30], 0x40
        mov     dword ptr [eax + 0x2c], ebx
        mov     dword ptr [eax + 0x28], ebx
        mov     dword ptr [eax + 0x24], ebx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x1c], ebx
        mov     dword ptr [eax + 0x14], ebx
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x20], ebx
        mov     dword ptr [eax + 0x18], ebx
        mov     dword ptr [eax + 0x10], ebx
        mov     esi, eax
    L_e1230:
        cmp     esi, ebx
        jnz     L_e123f
    L_e1234:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_e123f:
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0x4]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x8]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        cmp     dword ptr [ebp + 0xc], 0x3
        jge     L_e1279
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
    L_e1279:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0x14]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x18]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esi + 0x1c]
        push    0x4
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x20]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     ebx, dword ptr [esi + 0x28]
        xor     eax, eax
        cmp     ebx, eax
        jz      L_e1319
        mov     eax, dword ptr [esi + 0x4]
        cdq
        idiv    dword ptr [ebx + 0x10]
        push    eax
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_006e1ae0
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0x8]
        lea     edx, [eax + -0x1]
        and     edx, eax
        mov     eax, dword ptr [esi + 0x8]
        neg     edx
        sbb     edx, edx
        neg     edx
        add     ecx, edx
        cdq
        idiv    dword ptr [ebx + 0x14]
        mov     dword ptr [esi + 0x14], ecx
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea     ecx, [ebx + -0x1]
        and     ecx, ebx
        add     esp, 0x8
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        add     eax, ecx
        mov     dword ptr [esi + 0x18], eax
        xor     eax, eax
    L_e1319:
        mov     ecx, dword ptr [esi + 0x2c]
        cmp     ecx, eax
        jz      L_e1366
        mov     eax, dword ptr [esi + 0x4]
        cdq
        idiv    dword ptr [ecx + 0x10]
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        mov     ecx, dword ptr [esi + 0x2c]
        lea     edx, [ebx + -0x1]
        and     edx, ebx
        neg     edx
        sbb     edx, edx
        neg     edx
        add     eax, edx
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [esi + 0x8]
        cdq
        idiv    dword ptr [ecx + 0x14]
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea     ecx, [ebx + -0x1]
        and     ecx, ebx
        add     esp, 0x8
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        add     eax, ecx
        mov     dword ptr [esi + 0x20], eax
        xor     eax, eax
    L_e1366:
        cmp     dword ptr [ebp + 0xc], 0x5
        jge     L_e144e
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [ebp + 0x8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x24], eax
        mov     ecx, dword ptr [ebp + -0x4]
        mov     ebx, 0x1
        cmp     ecx, ebx
        jnz     L_e13bb
        test    eax, eax
        jnz     L_e13bb
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax]
        push    eax
        push    0x79eca4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_e13bb
        int     3
    L_e13bb:
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        push    0x4
        lea     ecx, [ebp + 0x8]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x2c], eax
        cmp     dword ptr [ebp + 0xc], ebx
        jle     L_e162d
        cmp     dword ptr [ebp + -0x4], ebx
        jnz     L_e162d
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x3c], eax
        cmp     dword ptr [ebp + 0xc], 0x3
        jle     L_e1442
        mov     eax, dword ptr [edi]
        push    0x4
        lea     ecx, [esi + 0x40]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        jmp     L_e162d
    L_e1442:
        mov     dword ptr [esi + 0x40], 0x0
        jmp     L_e162d
    L_e144e:
        cmp     dword ptr [ebp + -0x4], eax
        jnz     L_e14b5
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x24], eax
        push    0x4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov     edx, dword ptr [edi]
        mov     dword ptr [esi + 0x28], eax
        push    0x4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x2c], eax
        jmp     L_e162d
    L_e14b5:
        lea     edx, [ebp + -0x14]
        push    edx
        push    edi
        mov     dword ptr [ebp + -0x14], eax
        mov     dword ptr [ebp + -0xc], eax
        mov     dword ptr [ebp + -0x8], eax
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_00412a00
        add     esp, 0x8
        lea     ecx, [ebp + -0x14]
        call    FUN_004128e0
        mov     eax, dword ptr [ebp + -0x14]
        push    eax
        call    FUN_00412ab0
        mov     ecx, dword ptr [g_0084004c]
        add     esp, 0x4
        push    eax
        call    FUN_006d2f50
        lea     ecx, [ebp + -0xc]
        push    ecx
        push    edi
        mov     dword ptr [esi + 0x24], eax
        call    FUN_00412a00
        mov     eax, dword ptr [ebp + -0xc]
        xor     ebx, ebx
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_e152c
        lea     ecx, [ebp + -0xc]
        call    FUN_004128e0
        mov     edx, dword ptr [ebp + -0xc]
        push    edx
        call    FUN_00412ab0
        mov     ecx, dword ptr [g_0084004c]
        add     esp, 0x4
        push    eax
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x28], eax
        jmp     L_e152f
    L_e152c:
        mov     dword ptr [esi + 0x28], ebx
    L_e152f:
        lea     eax, [ebp + -0x8]
        push    eax
        push    edi
        call    FUN_00412a00
        mov     eax, dword ptr [ebp + -0x8]
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_e1568
        lea     ecx, [ebp + -0x8]
        call    FUN_004128e0
        mov     ecx, dword ptr [ebp + -0x8]
        push    ecx
        call    FUN_00412ab0
        mov     ecx, dword ptr [g_0084004c]
        add     esp, 0x4
        push    eax
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x2c], eax
        jmp     L_e156b
    L_e1568:
        mov     dword ptr [esi + 0x2c], ebx
    L_e156b:
        cmp     dword ptr [ebp + 0xc], 0x1
        jle     L_e15c5
        lea     edx, [ebp + 0x8]
        push    edx
        push    edi
        call    FUN_00412a00
        mov     eax, dword ptr [ebp + 0x8]
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_e15aa
        lea     ecx, [ebp + 0x8]
        call    FUN_004128e0
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        call    FUN_00412ab0
        mov     ecx, dword ptr [g_0084004c]
        add     esp, 0x4
        push    eax
        call    FUN_006d2f50
        mov     dword ptr [esi + 0x3c], eax
        jmp     L_e15ad
    L_e15aa:
        mov     dword ptr [esi + 0x3c], ebx
    L_e15ad:
        cmp     dword ptr [ebp + 0xc], 0x3
        jle     L_e15c2
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esi + 0x40]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        jmp     L_e15c5
    L_e15c2:
        mov     dword ptr [esi + 0x40], ebx
    L_e15c5:
        mov     eax, dword ptr [ebp + 0x8]
        cmp     eax, ebx
        jz      L_e15df
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e15df
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e15df:
        mov     eax, dword ptr [ebp + -0x8]
        cmp     eax, ebx
        jz      L_e15f9
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e15f9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e15f9:
        mov     eax, dword ptr [ebp + -0xc]
        cmp     eax, ebx
        jz      L_e1613
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e1613
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e1613:
        mov     eax, dword ptr [ebp + -0x14]
        cmp     eax, ebx
        jz      L_e162d
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e162d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e162d:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     ebx, [esi + 0x30]
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esi + 0x34]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx]
        mov     edx, eax
        and     edx, 0x3fc0
        cmp     edx, 0x100
        mov     dword ptr [ebp + 0xc], eax
        jnz     L_e16bb
        mov     edi, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [edi + 0x10]
        jle     L_e166f
        mov     edx, dword ptr [esi + 0x8]
        cmp     edx, dword ptr [edi + 0x14]
        jg      L_e16bb
    L_e166f:
        mov     ecx, dword ptr [edi + 0x24]
        and     ecx, 0x7
        cmp     cl, 0x3
        jnz     L_e16af
        push    edi
        call    FUN_004db630
        mov     edx, dword ptr [edi + 0x24]
        and     edx, 0xfffffffd
        or      edx, 0x5
        mov     ecx, edx
        and     ecx, 0xfffffff7
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], edx
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [g_0084004c]
        push    edi
        call    FUN_006d3160
        mov     eax, dword ptr [g_0084004c]
        mov     byte ptr [eax + 0x5c], 0x1
        mov     eax, dword ptr [ebp + 0xc]
    L_e16af:
        and     eax, 0xffffc2bf
        or      eax, 0x280
        mov     dword ptr [ebx], eax
    L_e16bb:
        mov     ecx, dword ptr [ebx]
        and     ecx, 0x3fc0
        cmp     ecx, 0x280
        jnz     L_e170c
        mov     edi, dword ptr [esi + 0x28]
        mov     edx, dword ptr [edi + 0x24]
        and     edx, 0x7
        cmp     dl, 0x5
        jz      L_e170c
        push    edi
        call    FUN_004db630
        mov     eax, dword ptr [edi + 0x24]
        and     eax, 0xfffffffd
        or      eax, 0x5
        mov     ecx, eax
        and     ecx, 0xfffffff7
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [g_0084004c]
        push    edi
        call    FUN_006d3160
        mov     ecx, dword ptr [g_0084004c]
        mov     byte ptr [ecx + 0x5c], 0x1
    L_e170c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
