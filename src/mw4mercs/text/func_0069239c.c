/*
 * FUN_0069239c (extent 0x69239c-0x692550) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern float  g_007990d4;
extern void __cdecl FUN_00675850(void);

__declspec(naked) void FUN_0069239c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00675850
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    eax, -0x14
        add    esp, 0x14
        cmp    eax, 3
        ja    L_2547
        jmp    dword ptr [eax*4 + 0x692550]
        test    bl, bl
        jne    L_2401
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [edx + 4]
        mov    cl, 1
        jmp    L_240d
L_2401:
        fld    dword ptr [g_007990d4]
        fmul    dword ptr [edi + 0x78]
        fstp    dword ptr [edi + 0x78]
L_240d:
        fld    dword ptr [edi + 0x78]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_2547
        fld    dword ptr [edi + 0x78]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797e68
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_2464
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x420c0000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_2464:
        fld    dword ptr [edi + 0x80]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_2547
        fld    dword ptr [edi + 0x80]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797e30
        jmp    L_252b
        test    bl, bl
        jne    L_24ac
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x40e00000
        call    dword ptr [edx + 4]
        mov    cl, 1
L_24ac:
        fld    dword ptr [edi + 0x7c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_2547
        fld    dword ptr [edi + 0x7c]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x799114
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_2503
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x40000000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_2503:
        fld    dword ptr [edi + 0x84]
        fld    st(0)
        fmulp st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fst    dword ptr [edi + 0x84]
        fnstsw  ax
        test    ah, 0x41
        je    L_2545
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x7990d8
L_252b:
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [edx]
        push    ebp
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
L_2545:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2547:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        mov    edi, edi
        // jump-table data @ 0x00692550 (116 relocated pointers)
        __emit 0xE4
        __emit 0x23
        __emit 0x69
        __emit 0x00
        __emit 0x49
        __emit 0x24
        __emit 0x69
        __emit 0x00
        __emit 0x91
        __emit 0x24
        __emit 0x69
        __emit 0x00
        __emit 0xE8
        __emit 0x24
        __emit 0x69
        __emit 0x00
        __emit 0x81
        __emit 0xEC
        __emit 0x8C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x56
        __emit 0x57
        __emit 0x8B
        __emit 0xBC
        __emit 0x24
        __emit 0x98
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x37
        __emit 0x8B
        __emit 0x06
        __emit 0x6A
        __emit 0x28
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x50
        __emit 0x14
        __emit 0x57
        __emit 0xE8
        __emit 0x30
        __emit 0xF9
        __emit 0xE6
        __emit 0xFF
        __emit 0x8B
        __emit 0x16
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x52
        __emit 0x04
        __emit 0x66
        __emit 0x8B
        __emit 0x0D
        __emit 0xAE
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0xF0
        __emit 0x66
        __emit 0xA1
        __emit 0xAC
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x66
        __emit 0x89
        __emit 0x4E
        __emit 0x1E
        __emit 0x8B
        __emit 0x4F
        __emit 0x04
        __emit 0x68
        __emit 0xE8
        __emit 0x23
        __emit 0x77
        __emit 0x00
        __emit 0x66
        __emit 0x89
        __emit 0x46
        __emit 0x1C
        __emit 0xE8
        __emit 0xB2
        __emit 0xC7
        __emit 0xD7
        __emit 0xFF
        __emit 0x6A
        __emit 0x00
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x48
        __emit 0x8B
        __emit 0xF8
        __emit 0xE8
        __emit 0x95
        __emit 0xB7
        __emit 0xD7
        __emit 0xFF
        __emit 0x6A
        __emit 0x00
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x48
        __emit 0x52
        __emit 0x68
        __emit 0x40
        __emit 0x77
        __emit 0x79
        __emit 0x00
        __emit 0x8B
        __emit 0xCF
        __emit 0xE8
        __emit 0xC2
        __emit 0xFD
        __emit 0xD7
        __emit 0xFF
        __emit 0x84
        __emit 0xC0
        __emit 0x0F
        __emit 0x84
        __emit 0x96
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xA1
        __emit 0x10
        __emit 0x8C
        __emit 0x7B
        __emit 0x00
        __emit 0x8B
        __emit 0x3D
        __emit 0xB0
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x50
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0xE8
        __emit 0x95
        __emit 0x2B
        __emit 0xD8
        __emit 0xFF
        __emit 0x6A
        __emit 0x00
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x20
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x1C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0x9C
        __emit 0xCD
        __emit 0x76
        __emit 0x00
        __emit 0xE8
        __emit 0x62
        __emit 0xC8
        __emit 0xD8
        __emit 0xFF
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x50
        __emit 0x51
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0xF0
        __emit 0xD1
        __emit 0x76
        __emit 0x00
        __emit 0xE8
        __emit 0x5C
        __emit 0x05
        __emit 0xD8
        __emit 0xFF
        __emit 0x6A
        __emit 0x18
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x48
        __emit 0x50
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x14
        __emit 0x51
        __emit 0x89
        __emit 0x15
        __emit 0xB0
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0xE8
        __emit 0xA1
        __emit 0xD0
        __emit 0xF9
        __emit 0xFF
        __emit 0x66
        __emit 0x8B
        __emit 0x10
        __emit 0x66
        __emit 0x8B
        __emit 0x40
        __emit 0x02
        __emit 0x83
        __emit 0xC4
        __emit 0x0C
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0x51
        __emit 0x8B
        __emit 0xCF
        __emit 0x66
        __emit 0x89
        __emit 0x56
        __emit 0x1C
        __emit 0x66
        __emit 0x89
        __emit 0x46
        __emit 0x1E
        __emit 0x89
        __emit 0x3D
        __emit 0xB0
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0xE8
        __emit 0x0D
        __emit 0x08
        __emit 0xD8
        __emit 0xFF
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xE8
        __emit 0xF4
        __emit 0x04
        __emit 0xD8
        __emit 0xFF
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x44
        __emit 0xE8
        __emit 0xAB
        __emit 0xB7
        __emit 0xD7
        __emit 0xFF
        __emit 0x5F
        __emit 0x5E
        __emit 0x81
        __emit 0xC4
        __emit 0x8C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x14
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x10
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0x53
        __emit 0x8A
        __emit 0x18
        __emit 0x56
        __emit 0x8B
        __emit 0x74
        __emit 0x24
        __emit 0x10
        __emit 0x57
        __emit 0x8B
        __emit 0x7C
        __emit 0x24
        __emit 0x10
        __emit 0x51
        __emit 0x52
        __emit 0x50
        __emit 0x56
        __emit 0x84
        __emit 0xDB
        __emit 0x57
        __emit 0x0F
        __emit 0x95
        __emit 0xC3
        __emit 0xE8
        __emit 0xC8
        __emit 0xFC
        __emit 0xE6
        __emit 0xFF
        __emit 0x8B
        __emit 0x4E
        __emit 0x10
        __emit 0x83
        __emit 0xC4
        __emit 0x14
        __emit 0x83
        __emit 0xE9
        __emit 0x06
        __emit 0x74
        __emit 0x31
        __emit 0x49
        __emit 0x75
        __emit 0x59
        __emit 0x84
        __emit 0xDB
        __emit 0x75
        __emit 0x55
        __emit 0x66
        __emit 0xA1
        __emit 0xAC
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x66
        __emit 0x8B
        __emit 0x0D
        __emit 0xAE
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x16
        __emit 0x66
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0x50
        __emit 0x66
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x1E
        __emit 0x57
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x52
        __emit 0x04
        __emit 0x5F
        __emit 0x5E
        __emit 0xB0
        __emit 0x01
        __emit 0x5B
        __emit 0xC3
        __emit 0x84
        __emit 0xDB
        __emit 0x75
        __emit 0x27
        __emit 0x66
        __emit 0x8B
        __emit 0x0D
        __emit 0xAC
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x66
        __emit 0x8B
        __emit 0x15
        __emit 0xAE
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x06
        __emit 0x66
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x18
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x18
        __emit 0x51
        __emit 0x57
        __emit 0x8B
        __emit 0xCE
        __emit 0x66
        __emit 0x89
        __emit 0x54
        __emit 0x24
        __emit 0x22
        __emit 0xFF
        __emit 0x50
        __emit 0x04
        __emit 0xB0
        __emit 0x01
        __emit 0x5F
        __emit 0x5E
        __emit 0x5B
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
        // jump-table data @ 0x00692C28 (0 relocated pointers)
    }
}
