/*
 * FUN_00678670 (1310 B) — __cdecl, RET 0. GameData setter with a large
 * switch dispatch (jump table at 0x00678b90, outside the function's byte
 * range) validating/formatting per-key values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066a3c0(void);
extern int *g_76b424;   /* IAT 0x0076b424 (_snprintf) */

extern float _DAT_0076c5b0;  /* 0x0076c5b0 */
extern float _DAT_00797cf8;  /* 0x00797cf8 */
extern unsigned short _DAT_007db0ac;  /* 0x007db0ac */
extern unsigned short _DAT_007db0ae;  /* 0x007db0ae */
extern int DAT_00678b90;     /* jump table base 0x00678b90 */

__declspec(naked) void __cdecl FUN_00678670(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    ecx
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_0066a3c0
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x33
        add     esp, 0x14
        cmp     eax, 0x10
        ja      l_678b85
        jmp     dword ptr [eax*4 + DAT_00678b90]
l_6786b5:
        test    bl, bl
        jnz     l_6786d0
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
l_6786d0:
        fld     dword ptr [esi + 0x2fc]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [_DAT_00797cf8]
        mov     edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [esi + 0x2fc]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x796638
        push    edx
        push    ecx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_67871c:
        test    bl, bl
        jnz     l_678737
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678737:
        fld     dword ptr [esi + 0x300]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [_DAT_00797cf8]
        sub     esp, 0x8
        fmul    dword ptr [esi + 0x300]
        fstp    qword ptr [esp]
        push    0x796608
        jmp     l_678a9a
l_67876a:
        test    bl, bl
        jnz     l_678785
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678785:
        fld     dword ptr [esi + 0x304]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [esi + 0x304]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x79645c
        jmp     l_678a9a
l_6787b2:
        test    bl, bl
        jnz     l_6787cd
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_6787cd:
        fld     dword ptr [esi + 0x308]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [esi + 0x308]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x796418
        jmp     l_678a9a
l_6787fa:
        test    bl, bl
        jnz     l_678815
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678815:
        fld     dword ptr [esi + 0x2f8]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_678b85
        fld     dword ptr [esi + 0x2f8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797e98
        jmp     l_678a9a
l_678842:
        test    bl, bl
        jnz     l_67885f
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x3e800000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        jmp     l_678871
l_67885f:
        fld     dword ptr [_DAT_00797cf8]
        fmul    dword ptr [esi + 0x320]
        fstp    dword ptr [esi + 0x320]
l_678871:
        fld     dword ptr [esi + 0x320]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_678b85
        fld     dword ptr [esi + 0x320]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797e68
        jmp     l_678a9a
l_67889e:
        test    bl, bl
        jnz     l_6788b9
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x420c0000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_6788b9:
        fld     dword ptr [esi + 0x324]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_678b85
        fld     dword ptr [esi + 0x324]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797e30
        jmp     l_678a9a
l_6788e6:
        test    bl, bl
        jnz     l_678901
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678901:
        fld     dword ptr [esi + 0x30c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [_DAT_00797cf8]
        sub     esp, 0x8
        fmul    dword ptr [esi + 0x30c]
        fstp    qword ptr [esp]
        push    0x797e00
        jmp     l_678a9a
l_678934:
        test    bl, bl
        jnz     l_67894f
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_67894f:
        fld     dword ptr [esi + 0x310]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [_DAT_00797cf8]
        sub     esp, 0x8
        fmul    dword ptr [esi + 0x310]
        fstp    qword ptr [esp]
        push    0x797dd0
        jmp     l_678a9a
l_678982:
        test    bl, bl
        jnz     l_67899d
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_67899d:
        fld     dword ptr [esi + 0x314]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [esi + 0x314]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797d8c
        jmp     l_678a9a
l_6789ca:
        test    bl, bl
        jnz     l_6789e5
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x41200000
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_6789e5:
        fld     dword ptr [esi + 0x328]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_678b85
        fld     dword ptr [esi + 0x328]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797d58
        jmp     l_678a9a
l_678a12:
        test    bl, bl
        jnz     l_678a2d
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678a2d:
        fld     dword ptr [esi + 0x318]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_678b85
        fld     dword ptr [esi + 0x318]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797d2c
        jmp     l_678a9a
l_678a57:
        test    bl, bl
        jnz     l_678a72
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678a72:
        fld     dword ptr [esi + 0x31c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_678b85
        fld     dword ptr [esi + 0x31c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x797cfc
l_678a9a:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_678ab8:
        test    bl, bl
        jnz     l_678b85
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0xc], cx
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x16], dx
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_678af0:
        test    bl, bl
        jnz     l_678b85
        mov     ax, word ptr [_DAT_007db0ae]
        mov     dx, word ptr [_DAT_007db0ac]
        mov     word ptr [esp + 0xe], ax
        lea     eax, [esp + 0xc]
        push    eax
        mov     word ptr [esp + 0x10], dx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_678b27:
        test    bl, bl
        jnz     l_678b85
        mov     cx, word ptr [_DAT_007db0ac]
        mov     dx, word ptr [_DAT_007db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0xc], cx
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x16], dx
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_678b5b:
        test    bl, bl
        jnz     l_678b85
        mov     ax, word ptr [_DAT_007db0ae]
        mov     dx, word ptr [_DAT_007db0ac]
        mov     word ptr [esp + 0xe], ax
        lea     eax, [esp + 0xc]
        push    eax
        mov     word ptr [esp + 0x10], dx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
l_678b85:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
