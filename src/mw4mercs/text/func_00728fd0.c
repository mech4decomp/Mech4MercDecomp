/*
 * FUN_00728fd0 (extent 0x728fd0-0x729553) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern int    g_0076b394;
extern float  g_0076dd60;
extern float  g_00775980;
extern float  g_007b7118;
extern int    g_00859d70;
extern int    g_0087c1d4;
extern char   g_0088069f;
extern int    g_008806a0;
extern int    g_008806a4;
extern float  g_008816a8;
extern float  g_008816ac;
extern float  g_008816b0;
extern float  g_008816b4;
extern float  g_008816b8;
extern int    g_008816bc;
extern int    g_008816c0;
extern char   g_008816c4;
extern int    g_008816cc;
extern int    g_008816d0;
extern char   g_008816d4;
extern float  g_008816d8;
extern char   g_008816dc;
extern char   g_008816dd;
extern int    g_008816e0;
extern char   g_008816e4;
extern char   g_008816e5;
extern char   g_008816e6;
extern char   g_008816e7;
extern int    g_008816e8;
extern char   g_008b2520;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00713d70(void);
extern void __cdecl FUN_00727660(void);
extern void __cdecl FUN_00727ec0(void);
extern void __cdecl FUN_007283d0(void);
extern void __cdecl FUN_007284a0(void);
extern void __cdecl FUN_007286b0(void);
extern void __cdecl FUN_00728eb0(void);
extern void __cdecl FUN_00728fe0(void);
extern void __cdecl FUN_00729560(void);
extern void __cdecl FUN_00731660(void);

__declspec(naked) void FUN_00728fd0(void)
{
    __asm {
        mov    ecx, dword ptr [esp + 4]
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        call    FUN_00728fe0
        ret    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1c
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        push    ebx
        je    L_954c
        cmp    byte ptr [eax], 0
        je    L_954c
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    eax
        push    0x2000
        mov    bl, 4
        push    0x87e6a0
        mov    dword ptr [ebp + 8], 0x87e6a0
        mov    byte ptr [g_0088069f], bl
        call    dword ptr [g_0076b394]
        mov    al, byte ptr [g_0088069f]
        add    esp, 0x10
        cmp    al, bl
        je    L_903d
        push    0x79cbf4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_903d
        int 3    
L_903d:
        mov    edx, dword ptr [ebp + 8]
        cmp    byte ptr [edx], 0x2f
        jne    L_904e
        lea    eax, [ebp + 8]
        push    eax
        call    FUN_00729560
L_904e:
        mov    al, byte ptr [g_008816dc]
        test    al, al
        mov    eax, dword ptr [g_008816cc]
        je    L_906e
        fild    dword ptr [eax + 0x128]
        fdivr    dword ptr [g_008816d8]
        fstp    dword ptr [g_007b7118]
L_906e:
        mov    ecx, dword ptr [eax + 0x75c]
        test    ecx, ecx
        je    L_9088
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        call    FUN_00731660
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_9088:
        call    FUN_00713d10
        call    FUN_00728eb0
        test    byte ptr [g_008b2520], 0x40
        je    L_90b7
        mov    eax, dword ptr [g_0087c1d4]
        xor    edx, edx
        mov    dx, word ptr [eax]
        mov    dword ptr [ebp + 0xc], edx
        fild    dword ptr [ebp + 0xc]
        fdivr    dword ptr [g_00775980]
        fstp    dword ptr [g_008816a8]
L_90b7:
        mov    eax, dword ptr [g_008816e0]
        cmp    eax, 3
        mov    dword ptr [ebp - 8], eax
        jne    L_912e
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        lea    edx, [ebp + 0xc]
        push    edx
        lea    eax, [ebp - 4]
        push    eax
        mov    dword ptr [g_008816e0], 2
        call    FUN_00727660
        fld    dword ptr [g_008816ac]
        fsub    dword ptr [g_008816b4]
        add    esp, 0xc
        fild    dword ptr [ebp + 0xc]
        fld    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_912c
        fadd    dword ptr [g_0076dd60]
        mov    ebx, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_008816bc]
        fstp    dword ptr [ebp - 4]
        mov    eax, dword ptr [ebp - 4]
        and    eax, 0x7fffff
        sub    eax, ebx
        sub    eax, 0x400000
        cdq    
        sub    eax, edx
        sar    eax, 1
        add    ecx, eax
        mov    dword ptr [g_008816bc], ecx
        jmp    L_912e
L_912c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_912e:
        mov    eax, dword ptr [ebp + 8]
        cmp    byte ptr [eax], 0
        push    esi
        mov    dword ptr [g_008806a4], 0
        mov    byte ptr [g_008816c4], 0
        mov    esi, eax
        mov    byte ptr [g_008816d4], 1
        je    L_94f6
        mov    ebx, dword ptr [g_0076b2b0]
        push    edi
L_915c:
        mov    al, byte ptr [g_008816d4]
        test    al, al
        je    L_91bf
        mov    eax, dword ptr [g_008816e0]
        test    eax, eax
        je    L_91bf
        fld    dword ptr [g_008816b0]
        push    0
        fsub    dword ptr [g_008816b8]
        push    esi
        mov    byte ptr [g_008816d4], 0
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 4]
        call    FUN_007284a0
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 4]
        and    eax, 0x7fffff
        sub    eax, ecx
        mov    ecx, dword ptr [g_008816e0]
        sub    eax, 0x400000
        cmp    ecx, 1
        jne    L_91b6
        sub    eax, dword ptr [g_008816e8]
        jmp    L_91b9
L_91b6:
        inc    eax
        sar    eax, 1
L_91b9:
        add    dword ptr [g_008816c0], eax
L_91bf:
        mov    al, byte ptr [g_008816e7]
        test    al, al
        jne    L_93c5
        cmp    byte ptr [esi], 0x2f
        jne    L_93c5
        mov    al, byte ptr [esi + 1]
        inc    esi
        cmp    al, 0x2f
        jne    L_91e5
        inc    esi
L_91de:
        push    0x2f
        jmp    L_94e4
L_91e5:
        push    6
        push    esi
        push    0x7a5748
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_9307
        add    esi, 6
        xor    ecx, ecx
        mov    edx, 8
L_9204:
        xor    eax, eax
        mov    al, byte ptr [esi]
        shl    ecx, 4
        mov    edi, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x8aa610]
        inc    esi
        cmp    eax, 0x30
        jb    L_9220
        cmp    eax, 0x39
        jbe    L_922a
L_9220:
        cmp    eax, 0x61
        jb    L_9237
        cmp    eax, 0x66
        ja    L_9237
L_922a:
        sub    eax, 0x30
        cmp    eax, 9
        jbe    L_9235
        sub    eax, 0x27
L_9235:
        add    ecx, eax
L_9237:
        dec    edx
        jne    L_9204
        mov    eax, ecx
        mov    ecx, dword ptr [g_008806a4]
        xor    edi, edi
        cmp    ecx, edi
        mov    dword ptr [g_008816d0], eax
        je    L_9297
        cmp    dword ptr [g_008806a0], edi
        je    L_925e
        push    2
        push    0xb
        call    FUN_00713cc0
L_925e:
        mov    ecx, dword ptr [g_008806a4]
        push    ecx
        push    0x8806a8
        call    FUN_00713ae0
        cmp    dword ptr [g_008806a0], edi
        je    L_927f
        push    edi
        push    0xb
        call    FUN_00713cc0
L_927f:
        mov    eax, dword ptr [g_008816d0]
        mov    dword ptr [g_008806a0], edi
        mov    dword ptr [g_008806a4], edi
        mov    byte ptr [g_008816c4], 1
L_9297:
        cmp    dword ptr [g_00859d70], edi
        je    L_92f0
        cmp    eax, -1
        jne    L_92a8
        push    1
        jmp    L_92ba
L_92a8:
        and    eax, 0xff000000
        cmp    eax, 0xff000000
        jne    L_92b8
        push    2
        jmp    L_92ba
L_92b8:
        push    3
L_92ba:
        push    0x10
        call    FUN_00713cc0
        mov    edx, dword ptr [g_008816d0]
        and    edx, 0xff000000
        cmp    edx, 0xff000000
        jne    L_92f9
        mov    eax, dword ptr [g_008816cc]
        cmp    dword ptr [eax + 0x130], edi
        jne    L_92f9
        push    1
        push    0xd
        call    FUN_00713cc0
        jmp    L_94e9
L_92f0:
        push    3
        push    0x10
        call    FUN_00713cc0
L_92f9:
        push    3
        push    0xd
        call    FUN_00713cc0
        jmp    L_94e9
L_9307:
        push    0xe
        push    esi
        push    0x7a5788
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_9325
        add    esi, 0xe
        mov    byte ptr [g_008816e4], al
        jmp    L_94e9
L_9325:
        push    0xe
        push    esi
        push    0x7a5778
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_9345
        add    esi, 0xe
        mov    byte ptr [g_008816e4], 1
        jmp    L_94e9
L_9345:
        push    6
        push    esi
        push    0x7a5770
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_9365
        add    esi, 6
        mov    byte ptr [g_008816e5], 1
        jmp    L_94e9
L_9365:
        push    6
        push    esi
        push    0x7a5768
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_9383
        add    esi, 6
        mov    byte ptr [g_008816e5], al
        jmp    L_94e9
L_9383:
        push    8
        push    esi
        push    0x7a575c
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_93a1
        add    esi, 8
        mov    byte ptr [g_008816e6], al
        jmp    L_94e9
L_93a1:
        push    8
        push    esi
        push    0x7a5750
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_91de
        add    esi, 8
        mov    byte ptr [g_008816e6], 1
        jmp    L_94e9
L_93c5:
        mov    al, byte ptr [g_008816dd]
        test    al, al
        je    L_94cf
        cmp    byte ptr [esi], 0x20
        jne    L_942a
        lea    edi, [esi + 1]
        push    edi
        call    FUN_007283d0
        mov    edx, dword ptr [g_008816e8]
        mov    ecx, dword ptr [g_008816c0]
        add    eax, edx
        add    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x10], 0
        fild    qword ptr [ebp - 0x14]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_941f
        push    0xa
        call    FUN_007286b0
        mov    byte ptr [g_008816d4], 1
        mov    esi, edi
        jmp    L_94e9
L_941f:
        xor    eax, eax
        mov    al, byte ptr [esi]
        mov    esi, edi
        jmp    L_94e3
L_942a:
        lea    ecx, [esi + 1]
        push    ecx
        call    FUN_007283d0
        xor    edx, edx
        mov    dl, byte ptr [esi]
        mov    dword ptr [ebp - 4], eax
        lea    eax, [ebp - 0xc]
        lea    ecx, [ebp + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00727ec0
        fild    dword ptr [ebp - 4]
        fld    dword ptr [g_008816b0]
        fsub    dword ptr [g_008816b8]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_948c
L_9460:
        mov    eax, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_008816c0]
        add    edx, eax
        mov    dword ptr [ebp - 4], edx
        fild    dword ptr [ebp - 4]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 1
        je    L_948b
        xor    eax, eax
        mov    al, byte ptr [esi]
        inc    esi
        push    eax
        call    FUN_007286b0
        jmp    L_9460
L_948b:
        dec    esi
L_948c:
        mov    ecx, dword ptr [g_008816e8]
        mov    edx, dword ptr [g_008816c0]
        mov    eax, dword ptr [ebp + 0xc]
        add    ecx, edx
        add    ecx, eax
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x18], 0
        fild    qword ptr [ebp - 0x1c]
        fcomp    dword ptr [g_008816b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_94c9
        push    0xa
        call    FUN_007286b0
        mov    byte ptr [g_008816d4], 1
        jmp    L_94e9
L_94c9:
        xor    eax, eax
        mov    al, byte ptr [esi]
        jmp    L_94e2
L_94cf:
        xor    eax, eax
        mov    al, byte ptr [esi]
        cmp    al, 0xa
        je    L_94db
        cmp    al, 0xd
        jne    L_94e2
L_94db:
        mov    byte ptr [g_008816d4], 1
L_94e2:
        inc    esi
L_94e3:
        push    eax
L_94e4:
        call    FUN_007286b0
L_94e9:
        cmp    byte ptr [esi], 0
        jne    L_915c
        mov    eax, dword ptr [ebp + 8]
        pop    edi
L_94f6:
        sub    esi, eax
        cmp    esi, 0x2000
        pop    esi
        jb    L_9513
        push    0x7a5644
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9513
        int 3    
L_9513:
        mov    eax, dword ptr [g_008806a4]
        test    eax, eax
        je    L_953e
        mov    eax, dword ptr [g_008806a0]
        test    eax, eax
        je    L_952e
        push    2
        push    0xb
        call    FUN_00713cc0
L_952e:
        mov    eax, dword ptr [g_008806a4]
        push    eax
        push    0x8806a8
        call    FUN_00713ae0
L_953e:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [g_008816e0], ecx
        call    FUN_00713d70
L_954c:
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
