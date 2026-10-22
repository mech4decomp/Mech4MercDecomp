/*
 * FUN_005d171d (extent 0x5d171d-0x5d19db) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00785970;
extern int    g_007b220c;
extern int    g_007f244c;
extern int    g_007f24d8;
extern int    g_007f25b8;
extern int    g_0080da94;
extern int    g_0080daa4;
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0054fd90(void);
extern void __cdecl FUN_005b3630(void);
extern void __cdecl FUN_005c5300(void);
extern void __cdecl FUN_005d1330(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_00676a20(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005d171d(void)
{
    __asm {
        /* __emit: alignment pad 8D 49 00 (lea ecx,[ecx+0]) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: in-function jump-table DATA (20 dword entries, relocated
           addresses of a prior function at 0x5D1506). Inline asm has no dd;
           emit the literal patched address bytes (one byte per __emit). */
        __emit 0x06
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0x7D
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0x84
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0x8B
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0x92
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0x99
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0xA0
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0xAE
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0xAE
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0xA7
        __emit 0x15
        __emit 0x5D
        __emit 0x00
        __emit 0xC1
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xC8
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xCF
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xD6
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xDD
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xE4
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xEB
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xF9
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xF9
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        __emit 0xF2
        __emit 0x16
        __emit 0x5D
        __emit 0x00
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x14
        mov    eax, dword ptr [g_007f244c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        lea    ebx, [esi + 0x36c]
        push    ebx
        mov    dword ptr [esp + 0x1c], 0xbf800000
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_1821
        fld    dword ptr [esi + 0x3b8]
        mov    dword ptr [esp + 0xc], 1
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_17e3
        mov    dword ptr [esp + 0xc], 0
L_17e3:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0
        push    2
        mov    ecx, esi
        call    FUN_005c5300
        sub    esp, 0xc
        mov    ecx, esp
        push    ebx
        mov    edi, eax
        call    FUN_0040c5d0
        mov    ecx, edi
        call    FUN_005b3630
        mov    dl, byte ptr [esp + 0xc]
        mov    byte ptr [edi + 0x24], dl
        push    edi
        jmp    L_1842
L_1821:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0
        push    3
        mov    ecx, esi
        call    FUN_005c5300
        push    eax
L_1842:
        mov    ecx, esi
        call    FUN_005dcd00
        mov    edx, dword ptr [esi + 0x35c]
        fld    dword ptr [edx + 0x42c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_1891
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    0
        push    8
        mov    ecx, esi
        call    FUN_005c5300
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0x14], 0
        call    FUN_005dcd00
L_1891:
        mov    ebx, dword ptr [esi + 0x470]
        test    ebx, ebx
        je    L_19cd
        fld    qword ptr [ebp + 8]
        fmul    qword ptr [g_00785970]
        call    FUN_0075db4a
        mov    edx, dword ptr [esi + 0x474]
        mov    ecx, dword ptr [g_0080da94]
        add    eax, edx
        push    ebx
        mov    dword ptr [ebx + 0x10], eax
        call    FUN_00676a20
        mov    edi, eax
        test    edi, edi
        je    L_19ac
        fld    dword ptr [esi + 0x3b8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_18ff
        mov    eax, dword ptr [esi + 0x35c]
        mov    ecx, dword ptr [eax + 0xd8]
        lea    edx, [esp + 0x10]
        push    edx
        add    ecx, 0x80
        call    FUN_0054fd90
        jmp    L_1928
L_18ff:
        mov    ecx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x88]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [eax + 0x28]
        fstp    dword ptr [esp + 0x18]
L_1928:
        mov    edi, dword ptr [edi + 0x34]
        test    edi, edi
        je    L_19ac
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_1957
        test    edi, edi
        je    L_19ac
        mov    eax, dword ptr [g_007f25b8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_19ac
L_1957:
        push    0
        call    FUN_00707e70
        fcomp    qword ptr [esi + 0x49c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_19cd
        mov    eax, dword ptr [esi + 0x364]
        test    eax, eax
        je    L_197b
        cmp    dword ptr [eax + 8], 3
        je    L_19cd
L_197b:
        mov    edx, dword ptr [esi]
        push    0
        push    0
        mov    ecx, esi
        mov    byte ptr [esi + 0x459], 0
        call    dword ptr [edx + 0x184]
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005d1330
        mov    eax, dword ptr [esi + 0x470]
        test    eax, eax
        je    L_19c3
        push    eax
        jmp    L_19b8
L_19ac:
        test    ebx, ebx
        mov    byte ptr [esi + 0x459], 0
        je    L_19c3
        push    ebx
L_19b8:
        mov    ecx, dword ptr [g_0080daa4]
        call    FUN_00416130
L_19c3:
        mov    dword ptr [esi + 0x470], 0
L_19cd:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
