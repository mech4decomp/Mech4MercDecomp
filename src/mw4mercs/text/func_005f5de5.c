/*
 * FUN_005f5de5 (extent 0x5f5de5-0x5f6334) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005f1570(void);
extern void __cdecl FUN_005f1730(void);
extern void __cdecl FUN_005f5c00(void);
extern void __cdecl FUN_005f5db0(void);
extern void __cdecl FUN_005fbcb0(void);
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_005f5de5(void)
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0xc]
        xor    eax, 0x85739531
        mov    dl, byte ptr [eax + 0x17]
        test    dl, dl
        je    L_5e2a
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x14]
        mov    edi, ecx
        shl    edi, 7
        add    edi, ecx
        shl    edi, 3
        sub    edi, ecx
        mov    eax, dword ptr [eax + edi*8 + 0x3584]
        jmp    L_5e32
L_5e2a:
        mov    eax, dword ptr [ecx + 0x18]
        xor    eax, 0x85739531
L_5e32:
        test    dl, dl
        mov    ecx, dword ptr [esp + 0xc]
        je    L_5e48
        cmp    ecx, 0x13
        jl    L_5e48
        cmp    ecx, 0x1b
        jle    L_632c
L_5e48:
        cmp    ecx, 0x1d
        ja    L_632c
        jmp    dword ptr [ecx*4 + 0x5f6334]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb8]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xbc]
        pop    edi
        pop    esi
        ret    4
        mov    al, byte ptr [esi + 0x2f8]
        test    al, al
        je    L_5e91
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0xb0]
        pop    edi
        pop    esi
        ret    4
L_5e91:
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0xb0]
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb4]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xac]
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0x10c]
        pop    edi
        pop    esi
        ret    4
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0x10c]
        pop    edi
        pop    esi
        ret    4
        mov    ecx, esi
        call    FUN_005f5c00
        pop    edi
        pop    esi
        ret    4
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14c]
        pop    edi
        pop    esi
        ret    4
        mov    ecx, esi
        call    FUN_005fbcb0
        pop    edi
        pop    esi
        ret    4
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_5f69
        push    0
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edx, dword ptr [eax + 0x80]
        dec    edx
        neg    edx
        sbb    edx, edx
        and    edx, 2
        dec    edx
        pop    edi
        mov    dword ptr [eax + 0x80], edx
        pop    esi
        ret    4
L_5f69:
        push    0x1389
L_5f6e:
        push    esi
        call    FUN_005f1730
        cmp    al, 1
        jne    L_632c
        mov    ecx, esi
        call    FUN_005f5db0
        pop    edi
        pop    esi
        ret    4
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_5fee
        push    1
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 2
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffd
        add    edx, 2
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_5fee:
        push    0x138a
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_605e
        push    2
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 3
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffc
        add    edx, 3
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_605e:
        push    0x138b
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_60bd
        push    3
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        pop    edi
        mov    dword ptr [eax + 0x80], 0xfffffffd
        pop    esi
        ret    4
L_60bd:
        push    0x138c
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_612e
        push    4
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 4
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffb
        add    edx, 4
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_612e:
        push    0x138d
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_619e
        push    5
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 5
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffffa
        add    edx, 5
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_619e:
        push    0x138e
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_620e
        push    6
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 6
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffff9
        add    edx, 6
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_620e:
        push    0x138f
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_627e
        push    7
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    ecx, dword ptr [eax + 0x80]
        xor    edx, edx
        cmp    ecx, 7
        setne    dl
        pop    edi
        pop    esi
        dec    edx
        and    edx, 0xfffffff8
        add    edx, 7
        mov    dword ptr [eax + 0x80], edx
        ret    4
L_627e:
        push    0x1390
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_62d9
        push    8
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        pop    edi
        mov    dword ptr [eax + 0x80], 0xfffffffc
        pop    esi
        ret    4
L_62d9:
        push    0x1391
        jmp    L_5f6e
        lea    ecx, [eax + 0x1b0]
        cmp    dword ptr [ecx], 0xa
        jne    L_632c
        push    9
        call    FUN_005f1570
        cmp    al, 1
        jne    L_632c
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_632c
        mov    ecx, dword ptr [eax + 0x40]
        push    0xe
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    dword ptr [eax + 0x80], 0xfffffffe
L_632c:
        pop    edi
        pop    esi
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x005F6334 (59 relocated pointers)
        __emit 0x58
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0x76
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xA2
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xB1
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xC0
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xD1
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xE2
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0xFD
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0x2C
        __emit 0x63
        __emit 0x5F
        __emit 0x00
        __emit 0xE3
        __emit 0x62
        __emit 0x5F
        __emit 0x00
        __emit 0x09
        __emit 0x5F
        __emit 0x5F
        __emit 0x00
        __emit 0x88
        __emit 0x5F
        __emit 0x5F
        __emit 0x00
        __emit 0xF8
        __emit 0x5F
        __emit 0x5F
        __emit 0x00
        __emit 0x68
        __emit 0x60
        __emit 0x5F
        __emit 0x00
        __emit 0xC7
        __emit 0x60
        __emit 0x5F
        __emit 0x00
        __emit 0x38
        __emit 0x61
        __emit 0x5F
        __emit 0x00
        __emit 0xA8
        __emit 0x61
        __emit 0x5F
        __emit 0x00
        __emit 0x18
        __emit 0x62
        __emit 0x5F
        __emit 0x00
        __emit 0x88
        __emit 0x62
        __emit 0x5F
        __emit 0x00
        __emit 0x67
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0xEE
        __emit 0x5E
        __emit 0x5F
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x81
        __emit 0x04
        __emit 0x05
        __emit 0x00
        __emit 0x00
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x07
        __emit 0xD9
        __emit 0x80
        __emit 0x8C
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xC3
        __emit 0x8B
        __emit 0x41
        __emit 0x78
        __emit 0x83
        __emit 0xC1
        __emit 0x78
        __emit 0xFF
        __emit 0x50
        __emit 0x04
        __emit 0xD9
        __emit 0x80
        __emit 0xBC
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x89
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x91
        __emit 0x8C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8D
        __emit 0x81
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x04
        __emit 0x89
        __emit 0x11
        __emit 0x8B
        __emit 0x50
        __emit 0x1C
        __emit 0x89
        __emit 0x51
        __emit 0x04
        __emit 0x8B
        __emit 0x50
        __emit 0x2C
        __emit 0x89
        __emit 0x51
        __emit 0x08
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x08
        __emit 0x50
        __emit 0xE8
        __emit 0xA2
        __emit 0x48
        __emit 0xE2
        __emit 0xFF
        __emit 0xC2
        __emit 0x08
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
