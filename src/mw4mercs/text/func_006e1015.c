/*
 * FUN_006e1015 (extent 0x6e1015-0x6e1717) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0084004c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_004db630(void);
extern void __cdecl FUN_006d2f50(void);
extern void __cdecl FUN_006d3160(void);
extern void __cdecl FUN_006e1ae0(void);
extern void __cdecl FUN_006e1b10(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006e1015(void)
{
    __asm {
        mov    eax, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        call    FUN_0040eda0
        mov    ecx, dword ptr [esi + 4]
        push    ecx
        mov    edi, eax
        push    0x79ec94
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 8]
        push    edx
        push    0x79ec84
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0xc]
        push    eax
        push    0x79ec74
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x10]
        push    ecx
        push    0x79ec64
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 0x14]
        push    edx
        push    0x79ec58
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x18]
        push    eax
        push    0x79ec4c
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x1c]
        push    ecx
        push    0x79ec40
        mov    ecx, edi
        call    FUN_00411d10
        mov    edx, dword ptr [esi + 0x20]
        push    edx
        push    0x79ec34
        mov    ecx, edi
        call    FUN_00411d10
        mov    eax, dword ptr [esi + 0x40]
        lea    eax, [eax + eax*2]
        mov    ecx, dword ptr [eax*4 + 0x83f600]
        push    ecx
        push    0x79ec28
        mov    ecx, edi
        call    FUN_00411c40
        mov    edx, dword ptr [esi + 0x30]
        push    edx
        push    0x79ec20
        mov    ecx, edi
        call    FUN_00411d10
        mov    ecx, dword ptr [esi + 0x3c]
        test    ecx, ecx
        je    L_10f0
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ec14
        mov    ecx, edi
        call    FUN_00411c40
L_10f0:
        mov    eax, dword ptr [esi + 0x24]
        test    eax, eax
        je    L_110d
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ec04
        mov    ecx, edi
        call    FUN_00411c40
L_110d:
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_112a
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ebf4
        mov    ecx, edi
        call    FUN_00411c40
L_112a:
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        je    L_1147
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79ebe4
        mov    ecx, edi
        call    FUN_00411c40
L_1147:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [ebp - 4]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [ebp - 4]
        xor    ebx, ebx
        sub    eax, ebx
        je    L_11ed
        dec    eax
        jne    L_1234
        push    0x50
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, ebx
        je    L_11ae
        mov    ecx, esi
        call    FUN_006e1b10
        mov    dword ptr [esi + 0x38], ebx
        mov    dword ptr [esi], 0x79ecf8
        mov    dword ptr [esi + 0x3c], ebx
        mov    byte ptr [esi + 0x4c], bl
        mov    dword ptr [esi + 0x44], ebx
        mov    dword ptr [esi + 0x48], 0x80
        mov    dword ptr [esi + 0x40], ebx
        jmp    L_11b0
L_11ae:
        xor    esi, esi
L_11b0:
        lea    edx, [ebp - 0x10]
        push    edx
        push    edi
        mov    dword ptr [ebp - 0x10], ebx
        call    FUN_00412a00
        add    esp, 8
        lea    ecx, [ebp - 0x10]
        call    FUN_004128e0
        mov    eax, dword ptr [ebp - 0x10]
        lea    ecx, [esi + 0x38]
        push    eax
        call    FUN_00412780
        mov    ecx, dword ptr [esi + 0x38]
        push    ecx
        call    FUN_00412ab0
        add    esp, 4
        lea    ecx, [ebp - 0x10]
        mov    dword ptr [esi + 0x34], eax
        call    FUN_0040d9b0
        jmp    L_1230
L_11ed:
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_1234
        mov    ecx, 0x100
        mov    dword ptr [eax], 0x79ecec
        mov    dword ptr [eax + 0x30], 0x40
        mov    dword ptr [eax + 0x2c], ebx
        mov    dword ptr [eax + 0x28], ebx
        mov    dword ptr [eax + 0x24], ebx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 0x1c], ebx
        mov    dword ptr [eax + 0x14], ebx
        mov    dword ptr [eax + 0xc], ebx
        mov    dword ptr [eax + 0x20], ebx
        mov    dword ptr [eax + 0x18], ebx
        mov    dword ptr [eax + 0x10], ebx
        mov    esi, eax
L_1230:
        cmp    esi, ebx
        jne    L_123f
L_1234:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_123f:
        mov    edx, dword ptr [edi]
        lea    eax, [esi + 4]
        push    4
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 8]
        push    4
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    dword ptr [ebp + 0xc], 3
        jge    L_1279
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
L_1279:
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        lea    eax, [esi + 0x14]
        push    4
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 0x18]
        push    4
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        lea    eax, [esi + 0x1c]
        push    4
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 0x20]
        push    4
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    ebx, dword ptr [esi + 0x28]
        xor    eax, eax
        cmp    ebx, eax
        je    L_1319
        mov    eax, dword ptr [esi + 4]
        cdq    
        idiv    dword ptr [ebx + 0x10]
        push    eax
        mov    dword ptr [ebp + 8], eax
        call    FUN_006e1ae0
        mov    ecx, eax
        mov    eax, dword ptr [ebp + 8]
        lea    edx, [eax - 1]
        and    edx, eax
        mov    eax, dword ptr [esi + 8]
        neg    edx
        sbb    edx, edx
        neg    edx
        add    ecx, edx
        cdq    
        idiv    dword ptr [ebx + 0x14]
        mov    dword ptr [esi + 0x14], ecx
        mov    ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea    ecx, [ebx - 1]
        and    ecx, ebx
        add    esp, 8
        neg    ecx
        sbb    ecx, ecx
        neg    ecx
        add    eax, ecx
        mov    dword ptr [esi + 0x18], eax
        xor    eax, eax
L_1319:
        mov    ecx, dword ptr [esi + 0x2c]
        cmp    ecx, eax
        je    L_1366
        mov    eax, dword ptr [esi + 4]
        cdq    
        idiv    dword ptr [ecx + 0x10]
        mov    ebx, eax
        push    ebx
        call    FUN_006e1ae0
        mov    ecx, dword ptr [esi + 0x2c]
        lea    edx, [ebx - 1]
        and    edx, ebx
        neg    edx
        sbb    edx, edx
        neg    edx
        add    eax, edx
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [esi + 8]
        cdq    
        idiv    dword ptr [ecx + 0x14]
        mov    ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea    ecx, [ebx - 1]
        and    ecx, ebx
        add    esp, 8
        neg    ecx
        sbb    ecx, ecx
        neg    ecx
        add    eax, ecx
        mov    dword ptr [esi + 0x20], eax
        xor    eax, eax
L_1366:
        cmp    dword ptr [ebp + 0xc], 5
        jge    L_144e
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [ebp + 8]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x24], eax
        mov    ecx, dword ptr [ebp - 4]
        mov    ebx, 1
        cmp    ecx, ebx
        jne    L_13bb
        test    eax, eax
        jne    L_13bb
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [eax]
        push    eax
        push    0x79eca4
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_13bb
        int 3    
L_13bb:
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        push    4
        lea    ecx, [ebp + 8]
        mov    dword ptr [esi + 0x28], eax
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x2c], eax
        cmp    dword ptr [ebp + 0xc], ebx
        jle    L_162d
        cmp    dword ptr [ebp - 4], ebx
        jne    L_162d
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [ebp + 8]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [g_0084004c]
        push    edx
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x3c], eax
        cmp    dword ptr [ebp + 0xc], 3
        jle    L_1442
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esi + 0x40]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        jmp    L_162d
L_1442:
        mov    dword ptr [esi + 0x40], 0
        jmp    L_162d
L_144e:
        cmp    dword ptr [ebp - 4], eax
        jne    L_14b5
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [ebp + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov    edx, dword ptr [edi]
        mov    dword ptr [esi + 0x24], eax
        push    4
        lea    eax, [ebp + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov    edx, dword ptr [edi]
        mov    dword ptr [esi + 0x28], eax
        push    4
        lea    eax, [ebp + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [g_0084004c]
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x2c], eax
        jmp    L_162d
L_14b5:
        lea    edx, [ebp - 0x14]
        push    edx
        push    edi
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp + 8], eax
        call    FUN_00412a00
        add    esp, 8
        lea    ecx, [ebp - 0x14]
        call    FUN_004128e0
        mov    eax, dword ptr [ebp - 0x14]
        push    eax
        call    FUN_00412ab0
        mov    ecx, dword ptr [g_0084004c]
        add    esp, 4
        push    eax
        call    FUN_006d2f50
        lea    ecx, [ebp - 0xc]
        push    ecx
        push    edi
        mov    dword ptr [esi + 0x24], eax
        call    FUN_00412a00
        mov    eax, dword ptr [ebp - 0xc]
        xor    ebx, ebx
        add    esp, 8
        cmp    eax, ebx
        je    L_152c
        lea    ecx, [ebp - 0xc]
        call    FUN_004128e0
        mov    edx, dword ptr [ebp - 0xc]
        push    edx
        call    FUN_00412ab0
        mov    ecx, dword ptr [g_0084004c]
        add    esp, 4
        push    eax
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x28], eax
        jmp    L_152f
L_152c:
        mov    dword ptr [esi + 0x28], ebx
L_152f:
        lea    eax, [ebp - 8]
        push    eax
        push    edi
        call    FUN_00412a00
        mov    eax, dword ptr [ebp - 8]
        add    esp, 8
        cmp    eax, ebx
        je    L_1568
        lea    ecx, [ebp - 8]
        call    FUN_004128e0
        mov    ecx, dword ptr [ebp - 8]
        push    ecx
        call    FUN_00412ab0
        mov    ecx, dword ptr [g_0084004c]
        add    esp, 4
        push    eax
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x2c], eax
        jmp    L_156b
L_1568:
        mov    dword ptr [esi + 0x2c], ebx
L_156b:
        cmp    dword ptr [ebp + 0xc], 1
        jle    L_15c5
        lea    edx, [ebp + 8]
        push    edx
        push    edi
        call    FUN_00412a00
        mov    eax, dword ptr [ebp + 8]
        add    esp, 8
        cmp    eax, ebx
        je    L_15aa
        lea    ecx, [ebp + 8]
        call    FUN_004128e0
        mov    eax, dword ptr [ebp + 8]
        push    eax
        call    FUN_00412ab0
        mov    ecx, dword ptr [g_0084004c]
        add    esp, 4
        push    eax
        call    FUN_006d2f50
        mov    dword ptr [esi + 0x3c], eax
        jmp    L_15ad
L_15aa:
        mov    dword ptr [esi + 0x3c], ebx
L_15ad:
        cmp    dword ptr [ebp + 0xc], 3
        jle    L_15c2
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x40]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        jmp    L_15c5
L_15c2:
        mov    dword ptr [esi + 0x40], ebx
L_15c5:
        mov    eax, dword ptr [ebp + 8]
        cmp    eax, ebx
        je    L_15df
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_15df
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_15df:
        mov    eax, dword ptr [ebp - 8]
        cmp    eax, ebx
        je    L_15f9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_15f9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_15f9:
        mov    eax, dword ptr [ebp - 0xc]
        cmp    eax, ebx
        je    L_1613
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1613
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1613:
        mov    eax, dword ptr [ebp - 0x14]
        cmp    eax, ebx
        je    L_162d
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_162d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_162d:
        mov    edx, dword ptr [edi]
        push    4
        lea    ebx, [esi + 0x30]
        push    ebx
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x34]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebx]
        mov    edx, eax
        and    edx, 0x3fc0
        cmp    edx, 0x100
        mov    dword ptr [ebp + 0xc], eax
        jne    L_16bb
        mov    edi, dword ptr [esi + 0x28]
        mov    ecx, dword ptr [esi + 4]
        cmp    ecx, dword ptr [edi + 0x10]
        jle    L_166f
        mov    edx, dword ptr [esi + 8]
        cmp    edx, dword ptr [edi + 0x14]
        jg    L_16bb
L_166f:
        mov    ecx, dword ptr [edi + 0x24]
        and    ecx, 7
        cmp    cl, 3
        jne    L_16af
        push    edi
        call    FUN_004db630
        mov    edx, dword ptr [edi + 0x24]
        and    edx, 0xfffffffd
        or    edx, 5
        mov    ecx, edx
        and    ecx, 0xfffffff7
        add    esp, 4
        mov    dword ptr [edi + 0x24], edx
        mov    dword ptr [edi + 0x24], ecx
        mov    ecx, dword ptr [g_0084004c]
        push    edi
        call    FUN_006d3160
        mov    eax, dword ptr [g_0084004c]
        mov    byte ptr [eax + 0x5c], 1
        mov    eax, dword ptr [ebp + 0xc]
L_16af:
        and    eax, 0xffffc2bf
        or    eax, 0x280
        mov    dword ptr [ebx], eax
L_16bb:
        mov    ecx, dword ptr [ebx]
        and    ecx, 0x3fc0
        cmp    ecx, 0x280
        jne    L_170c
        mov    edi, dword ptr [esi + 0x28]
        mov    edx, dword ptr [edi + 0x24]
        and    edx, 7
        cmp    dl, 5
        je    L_170c
        push    edi
        call    FUN_004db630
        mov    eax, dword ptr [edi + 0x24]
        and    eax, 0xfffffffd
        or    eax, 5
        mov    ecx, eax
        and    ecx, 0xfffffff7
        add    esp, 4
        mov    dword ptr [edi + 0x24], eax
        mov    dword ptr [edi + 0x24], ecx
        mov    ecx, dword ptr [g_0084004c]
        push    edi
        call    FUN_006d3160
        mov    ecx, dword ptr [g_0084004c]
        mov    byte ptr [ecx + 0x5c], 1
L_170c:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
