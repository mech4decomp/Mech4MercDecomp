/*
 * FUN_005604db (extent 0x5604db-0x560a9f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_007ddd80;
extern float  g_007ddd84;
extern int    g_007ddd8c;
extern int    g_007ddd94;
extern int    g_007ddd9c;
extern int    g_007ddda4;
extern int    g_007dddac;
extern float  g_007dddb4;
extern float  g_007dddb8;
extern int    g_007dddbc;
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_0055e440(void);
extern void __cdecl FUN_0055e790(void);
extern void __cdecl FUN_0055e7d0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_00728fd0(void);
extern void __cdecl FUN_00732b20(void);
extern void __cdecl FUN_00732c40(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005604db(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        fld    dword ptr [g_007dddb4]
        push    esi
        fcomp    dword ptr [g_0076c5b0]
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x104]
        or    eax, 0xff000000
        push    edi
        mov    edi, eax
        mov    dword ptr [esi + 0x104], eax
        fnstsw  ax
        mov    dword ptr [esp + 8], edi
        test    ah, 0x40
        jne    L_053e
        mov    ecx, dword ptr [g_007dddbc]
        xor    eax, eax
        mov    al, byte ptr [esp + 0xb]
        and    edi, 0xffffff
        sub    eax, ecx
        test    eax, eax
        jge    L_052d
        xor    eax, eax
        jmp    L_0539
L_052d:
        cmp    eax, 0xff
        jle    L_0539
        mov    eax, 0xff
L_0539:
        shl    eax, 0x18
        or    edi, eax
L_053e:
        fild    dword ptr [esi + 0x114]
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0055e7d0
        mov    edx, dword ptr [esi + 0x10c]
        mov    ecx, dword ptr [esp + 0x10]
        add    esp, 8
        push    0
        push    edx
        mov    edx, dword ptr [esi + 0x108]
        push    0
        xor    eax, eax
        mov    al, byte ptr [esi + 0x110]
        push    0
        push    1
        push    eax
        push    ecx
        push    edi
        push    edx
        call    FUN_007274d0
        mov    al, byte ptr [esi + 0x135]
        test    al, al
        je    L_05a8
        add    esi, 4
        push    esi
        call    FUN_00728fd0
        add    esp, 4
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_05a8:
        mov    eax, dword ptr [esi + 0x118]
        test    eax, eax
        je    L_05bc
        dec    dword ptr [eax]
        jns    L_05bc
        mov    dword ptr [eax], 0
L_05bc:
        fld    dword ptr [esp + 8]
        push    1
        call    FUN_0075db4a
        push    eax
        lea    eax, [esi + 4]
        push    eax
        call    FUN_00732c40
        test    eax, eax
        mov    dword ptr [esi + 0x118], eax
        je    L_05dd
        inc    dword ptr [eax]
L_05dd:
        pop    edi
        pop    esi
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        fld    dword ptr [g_007dddb8]
        push    esi
        fcomp    dword ptr [g_0076c5b0]
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x11c]
        mov    ecx, dword ptr [esi + 0x120]
        mov    edx, dword ptr [esi + 0x124]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi + 0x128]
        mov    dword ptr [esp + 8], eax
        fnstsw  ax
        mov    dword ptr [esp + 0x10], ecx
        test    ah, 0x40
        mov    dword ptr [esp + 0xc], edx
        jne    L_0659
        push    1
        push    0xb
        call    FUN_00713cc0
        mov    ecx, dword ptr [esp + 0x24]
        push    ecx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x2c]
        push    edx
        call    FUN_0055e440
        fstp    dword ptr [esp + 0x30]
        add    esp, 8
L_0659:
        fld    dword ptr [g_007dddb4]
        mov    eax, dword ptr [esi + 0x104]
        fcomp    dword ptr [g_0076c5b0]
        or    eax, 0xff000000
        push    edi
        mov    edi, eax
        mov    dword ptr [esi + 0x104], eax
        fnstsw  ax
        mov    dword ptr [esp + 0x1c], edi
        test    ah, 0x40
        jne    L_06b1
        mov    ecx, dword ptr [g_007dddbc]
        xor    eax, eax
        mov    al, byte ptr [esp + 0x1f]
        and    edi, 0xffffff
        sub    eax, ecx
        test    eax, eax
        jge    L_06a0
        xor    eax, eax
        jmp    L_06ac
L_06a0:
        cmp    eax, 0xff
        jle    L_06ac
        mov    eax, 0xff
L_06ac:
        shl    eax, 0x18
        or    edi, eax
L_06b1:
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x24]
        push    eax
        call    FUN_0055e790
        fld    dword ptr [esp + 0x1c]
        add    esp, 0x10
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x10]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x20]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_00727630
        fild    dword ptr [esi + 0x114]
        lea    ecx, [esp + 8]
        push    ecx
        lea    edx, [esp + 0x24]
        fstp    dword ptr [esp + 0xc]
        push    edx
        mov    dword ptr [esp + 0x28], 0
        call    FUN_0055e7d0
        mov    eax, dword ptr [esi + 0x10c]
        mov    edx, dword ptr [esp + 0x10]
        add    esp, 8
        push    0
        push    eax
        mov    eax, dword ptr [esi + 0x108]
        push    0
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x110]
        push    0
        push    1
        push    ecx
        push    edx
        push    edi
        push    eax
        call    FUN_007274d0
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        call    FUN_0055e7d0
        mov    al, byte ptr [esp + 0x3c]
        add    esp, 8
        test    al, al
        pop    edi
        je    L_077c
        fld    dword ptr [esp + 0x28]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x24]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_007275f0
L_077c:
        mov    al, byte ptr [esi + 0x135]
        test    al, al
        je    L_0799
        add    esi, 4
        push    esi
        call    FUN_00728fd0
        add    esp, 4
        pop    esi
        add    esp, 0x1c
        ret    0x10
L_0799:
        mov    eax, dword ptr [esi + 0x118]
        test    eax, eax
        je    L_07ad
        dec    dword ptr [eax]
        jns    L_07ad
        mov    dword ptr [eax], 0
L_07ad:
        fld    dword ptr [esp + 4]
        push    1
        call    FUN_0075db4a
        push    eax
        lea    eax, [esi + 4]
        push    eax
        call    FUN_00732c40
        test    eax, eax
        mov    dword ptr [esi + 0x118], eax
        je    L_07ce
        inc    dword ptr [eax]
L_07ce:
        pop    esi
        add    esp, 0x1c
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [ecx + 0x118]
        test    esi, esi
        push    edi
        jne    L_0807
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x1c]
        pop    edi
        mov    dword ptr [eax], esi
        mov    dword ptr [ecx], esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
L_0807:
        fld    dword ptr [esi + 0x3c]
        call    FUN_0075db4a
        fld    dword ptr [esi + 0x40]
        mov    ebp, dword ptr [esp + 0x1c]
        mov    edi, eax
        mov    dword ptr [ebp], edi
        call    FUN_0075db4a
        mov    ebx, dword ptr [esp + 0x20]
        mov    esi, eax
        mov    al, byte ptr [esp + 0x24]
        test    al, al
        mov    dword ptr [ebx], esi
        je    L_0865
        mov    dword ptr [esp + 0x10], edi
        xor    edi, edi
        mov    dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        fdiv    dword ptr [g_007ddd84]
        call    FUN_0075db4a
        mov    dword ptr [esp + 0x10], esi
        mov    dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [ebp], eax
        fdiv    dword ptr [g_007ddd80]
        call    FUN_0075db4a
        mov    dword ptr [ebx], eax
L_0865:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
        nop    
        mov    ecx, dword ptr [esp + 4]
        push    esi
        push    edi
        xor    edi, edi
        push    0x76c7f4
        mov    dword ptr [g_007dddac], edi
        mov    dword ptr [g_007ddda4], edi
        mov    dword ptr [g_007ddd9c], edi
        mov    dword ptr [g_007ddd94], edi
        mov    dword ptr [g_007ddd8c], edi
        call    FUN_0040ecc0
        mov    esi, eax
        cmp    esi, edi
        je    L_0900
        push    edi
        push    0x7dddac
        push    0x77df38
        mov    ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x7ddda4
        push    0x77df2c
        mov    ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x7ddd9c
        push    0x77df20
        mov    ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x7ddd94
        push    0x77df14
        mov    ecx, esi
        call    FUN_00411cb0
        push    edi
        push    0x7ddd8c
        push    0x77df08
        mov    ecx, esi
        call    FUN_00411cb0
L_0900:
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x120]
        fild    dword ptr [esi + 0x114]
        mov    eax, dword ptr [esi + 0x11c]
        mov    edx, dword ptr [esi + 0x124]
        push    edi
        fstp    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi + 0x128]
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    dword ptr [esp + 0x24], edx
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    dword ptr [esp + 0x34], 0
        call    FUN_0055e790
        fld    dword ptr [esp + 0x2c]
        add    esp, 0x10
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x20]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x14]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x1c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_00727630
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        call    FUN_0055e7d0
        mov    ecx, dword ptr [esi + 0x10c]
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 8
        push    0
        push    ecx
        mov    ecx, dword ptr [esi + 0x104]
        push    0
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x110]
        push    0
        push    1
        push    edx
        mov    edx, dword ptr [esi + 0x108]
        push    eax
        push    ecx
        push    edx
        call    FUN_007274d0
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076d064]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076d064]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_007275f0
        mov    eax, dword ptr [esi + 0x118]
        test    eax, eax
        je    L_0a17
        dec    dword ptr [eax]
        jns    L_0a17
        mov    dword ptr [eax], 0
L_0a17:
        fld    dword ptr [esp + 0x18]
        call    FUN_0075db4a
        mov    ebx, dword ptr [esp + 0x34]
        mov    ebp, dword ptr [esp + 0x30]
        push    eax
        lea    eax, [esi + 4]
        push    eax
        push    ebx
        push    ebp
        call    FUN_00732b20
        test    eax, eax
        mov    dword ptr [esi + 0x118], eax
        je    L_0a40
        inc    dword ptr [eax]
L_0a40:
        mov    ecx, dword ptr [ebp]
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x28], 0
        fild    qword ptr [esp + 0x24]
        fdiv    dword ptr [g_007ddd84]
        call    FUN_0075db4a
        mov    edx, dword ptr [ebx]
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x28], 0
        fild    qword ptr [esp + 0x24]
        mov    edi, eax
        mov    dword ptr [ebp], edi
        fdiv    dword ptr [g_007ddd80]
        call    FUN_0075db4a
        mov    dword ptr [esi + 0x12c], edi
        pop    edi
        mov    byte ptr [esi + 0x134], 1
        mov    dword ptr [esi + 0x130], eax
        pop    esi
        pop    ebp
        mov    dword ptr [ebx], eax
        pop    ebx
        add    esp, 0x1c
        ret    8
    }
}
