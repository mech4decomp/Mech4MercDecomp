/*
 * FUN_005a3f13 (extent 0x5a3f13-0x5a4028) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f23d8;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005a3f10(void);
extern void __cdecl FUN_005a4360(void);
extern void __cdecl FUN_005ced20(void);
extern void __cdecl FUN_005f3990(void);
extern void __cdecl FUN_005f39c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a3f13(void)
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f3990
        push    edi
        mov    ecx, esi
        call    FUN_005a3f10
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    0xb
        call    dword ptr [eax + 4]
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005f39c0
        fld    qword ptr [esp + 0xc]
        fsub    qword ptr [esi + 0xe4]
        mov    edx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [edx + 0x14]
        sub    eax, 0xb
        fstp    dword ptr [esp + 0xc]
        je    L_400b
        sub    eax, 2
        jne    L_4022
        xor    eax, eax
        mov    al, byte ptr [esi + 0x4bc]
        add    eax, -2
        cmp    eax, 0x17
        ja    L_4022
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x5a4030]
        jmp    dword ptr [ecx*4 + 0x5a4028]
        mov    edi, dword ptr [esi + 0x2fc]
        test    edi, edi
        je    L_3fe8
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_3fe8
        mov    ecx, edi
        call    FUN_005ced20
L_3fe8:
        pop    edi
        mov    dword ptr [esi + 0x440], 0
        mov    dword ptr [esi + 0x448], 0
        mov    dword ptr [esi + 0x444], 0
        pop    esi
        ret    8
L_400b:
        mov    edi, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x150]
        push    edi
        mov    ecx, esi
        call    FUN_005a4360
L_4022:
        pop    edi
        pop    esi
        ret    8
        nop    
        // jump-table data @ 0x005A4028 (197 relocated pointers)
        __emit 0xC5
        __emit 0x3F
        __emit 0x5A
        __emit 0x00
        __emit 0x22
        __emit 0x40
        __emit 0x5A
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
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
        __emit 0x83
        __emit 0xEC
        __emit 0x10
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x8B
        __emit 0x46
        __emit 0x78
        __emit 0x8D
        __emit 0x4E
        __emit 0x78
        __emit 0xFF
        __emit 0x50
        __emit 0x04
        __emit 0x8B
        __emit 0xE8
        __emit 0x8A
        __emit 0x86
        __emit 0xF8
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0x33
        __emit 0xDB
        __emit 0x3A
        __emit 0xC3
        __emit 0x74
        __emit 0x0C
        __emit 0x89
        __emit 0x9E
        __emit 0x2C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x9E
        __emit 0x48
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x33
        __emit 0xC0
        __emit 0x8A
        __emit 0x86
        __emit 0xBC
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x57
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0x00
        __emit 0x00
        __emit 0x80
        __emit 0x3F
        __emit 0x83
        __emit 0xC0
        __emit 0xFE
        __emit 0x83
        __emit 0xF8
        __emit 0x17
        __emit 0x77
        __emit 0x3A
        __emit 0x33
        __emit 0xC9
        __emit 0x8A
        __emit 0x88
        __emit 0x44
        __emit 0x43
        __emit 0x5A
        __emit 0x00
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x3C
        __emit 0x43
        __emit 0x5A
        __emit 0x00
        __emit 0x8B
        __emit 0xBE
        __emit 0xFC
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0x3B
        __emit 0xFB
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x74
        __emit 0x19
        __emit 0xA1
        __emit 0xD8
        __emit 0x23
        __emit 0x7F
        __emit 0x00
        __emit 0x8B
        __emit 0x4F
        __emit 0x04
        __emit 0x50
        __emit 0xE8
        __emit 0x5D
        __emit 0x11
        __emit 0xE7
        __emit 0xFF
        __emit 0x84
        __emit 0xC0
        __emit 0x74
        __emit 0x07
        __emit 0x8B
        __emit 0xCF
        __emit 0xE8
        __emit 0x42
        __emit 0xAC
        __emit 0x02
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x2C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x5F
        __emit 0xD8
        __emit 0x1D
        __emit 0xB0
        __emit 0xC5
        __emit 0x76
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x75
        __emit 0x16
        __emit 0x8B
        __emit 0x16
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x92
        __emit 0x14
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x8E
        __emit 0x2C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xEB
        __emit 0x12
        __emit 0xD9
        __emit 0x85
        __emit 0xC4
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x8E
        __emit 0x2C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xD9
        __emit 0xE0
        __emit 0xD9
        __emit 0x9E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x1D
        __emit 0xB0
        __emit 0xC5
        __emit 0x76
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        __emit 0x74
        __emit 0x28
        __emit 0xD9
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x1D
        __emit 0xB0
        __emit 0xC5
        __emit 0x76
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        __emit 0x74
        __emit 0x15
        __emit 0x89
        __emit 0x9E
        __emit 0x48
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x9E
        __emit 0x44
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x5E
        __emit 0x5D
        __emit 0x5B
        __emit 0x83
        __emit 0xC4
        __emit 0x10
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x1D
        __emit 0xB0
        __emit 0xC5
        __emit 0x76
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xD8
        __emit 0x9E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0xDF
        __emit 0xE0
        __emit 0x0F
        __emit 0x85
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x75
        __emit 0x2C
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x20
        __emit 0xD8
        __emit 0x8D
        __emit 0xD4
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x0F
        __emit 0x85
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE9
        __emit 0xC7
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x0F
        __emit 0x84
        __emit 0xBC
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x20
        __emit 0xD8
        __emit 0x8D
        __emit 0xD8
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0xAE
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x0F
        __emit 0x84
        __emit 0x95
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x8E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x8E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xE9
        __emit 0x84
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x74
        __emit 0x37
        __emit 0xD9
        __emit 0x85
        __emit 0xDC
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x8D
        __emit 0xD4
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x20
        __emit 0xD8
        __emit 0xAE
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x74
        __emit 0x56
        __emit 0x8B
        __emit 0x96
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xEB
        __emit 0x48
        __emit 0xD9
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x75
        __emit 0x35
        __emit 0xD9
        __emit 0x85
        __emit 0xE0
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x8D
        __emit 0xD8
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x20
        __emit 0xD8
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x9E
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x75
        __emit 0x0C
        __emit 0x8B
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0xD8
        __emit 0x8D
        __emit 0xC4
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x96
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x74
        __emit 0x2B
        __emit 0x8B
        __emit 0x16
        __emit 0xDD
        __emit 0xD8
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x92
        __emit 0x14
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xD8
        __emit 0x9E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0x74
        __emit 0x14
        __emit 0x8B
        __emit 0x06
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x90
        __emit 0x14
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xD9
        __emit 0x9E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x86
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x8E
        __emit 0x40
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xD8
        __emit 0x0D
        __emit 0xFC
        __emit 0xD0
        __emit 0x77
        __emit 0x00
        __emit 0x8B
        __emit 0x96
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x81
        __emit 0xC2
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x8E
        __emit 0x70
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x9E
        __emit 0x44
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x52
        __emit 0xD9
        __emit 0x86
        __emit 0x3C
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x14
        __emit 0xD8
        __emit 0x0D
        __emit 0xFC
        __emit 0xD0
        __emit 0x77
        __emit 0x00
        __emit 0xD9
        __emit 0x9E
        __emit 0x48
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xE8
        __emit 0x9E
        __emit 0x69
        __emit 0xE7
        __emit 0xFF
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x14
        __emit 0x89
        __emit 0x9E
        __emit 0x90
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0xE0
        __emit 0xD9
        __emit 0x9E
        __emit 0x8C
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0xD9
        __emit 0xE0
        __emit 0xD9
        __emit 0x9E
        __emit 0x94
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x5E
        __emit 0x5D
        __emit 0x5B
        __emit 0x83
        __emit 0xC4
        __emit 0x10
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        // jump-table data @ 0x005A433C (0 relocated pointers)
    }
}
