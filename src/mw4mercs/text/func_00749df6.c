/*
 * FUN_00749df6 (extent 0x749df6-0x749f60) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b16c;
extern int    g_0076b170;
extern int    g_0076b1fc;
extern int    g_0076b380;
extern int    g_0076b388;
extern int    g_008b79f0;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00737300(void);

__declspec(naked) void FUN_00749df6(void)
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
        sub    esp, 8
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [esi + 0x14]
        push    edi
        mov    edi, dword ptr [g_0076b170]
        push    -1
        push    0
        lea    edx, [esp + 0x10]
        push    edx
        push    2
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ecx
        call    edi
        cmp    eax, 1
        jne    L_9e55
        push    ebx
        mov    ebx, dword ptr [esi + 0x24]
        push    ebp
        mov    ebp, dword ptr [esi + 8]
L_9e37:
        push    ebx
        call    ebp
        push    -1
        push    0
        lea    eax, [esp + 0x18]
        push    eax
        push    2
        mov    dword ptr [esi + 0xc], 1
        call    edi
        cmp    eax, 1
        je    L_9e37
        pop    ebp
        pop    ebx
L_9e55:
        push    0
        call    dword ptr [g_0076b380]
        add    esp, 4
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0
        push    0x28
        call    FUN_006f3c80
        mov    edi, dword ptr [g_0076b16c]
        push    0
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x10]
        push    0
        push    0
        push    0
        mov    dword ptr [esi + 4], 0x5f41569
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], 0
        call    edi
        push    0
        push    0
        push    0
        push    0
        mov    dword ptr [esi + 0x14], eax
        call    edi
        lea    edi, [esi + 0x20]
        push    edi
        push    0
        push    esi
        push    0x749e00
        push    0
        push    0
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [g_0076b388]
        mov    ecx, dword ptr [edi]
        add    esp, 0x18
        push    0x7aa53c
        push    ecx
        mov    dword ptr [esi + 0x1c], eax
        call    FUN_00737300
        mov    edx, dword ptr [g_008b79f0]
        pop    edi
        mov    dword ptr [esi], edx
        mov    dword ptr [g_008b79f0], esi
        mov    eax, esi
        pop    esi
        ret    4
        mov    ecx, dword ptr [esp + 8]
        xor    eax, eax
        dec    ecx
        cmp    ecx, 4
        ja    L_9f4b
        jmp    dword ptr [ecx*4 + 0x749f60]
        mov    edx, dword ptr [esp + 4]
        mov    eax, 0xfffffffe
        push    eax
        mov    eax, dword ptr [edx + 0x1c]
        push    eax
        call    dword ptr [g_0076b1fc]
        ret    8
        mov    edx, dword ptr [esp + 4]
        or    eax, 0xffffffff
        push    eax
        mov    eax, dword ptr [edx + 0x1c]
        push    eax
        call    dword ptr [g_0076b1fc]
        ret    8
        mov    edx, dword ptr [esp + 4]
        mov    eax, 1
        push    eax
        mov    eax, dword ptr [edx + 0x1c]
        push    eax
        call    dword ptr [g_0076b1fc]
        ret    8
        mov    eax, 2
L_9f4b:
        mov    edx, dword ptr [esp + 4]
        push    eax
        mov    eax, dword ptr [edx + 0x1c]
        push    eax
        call    dword ptr [g_0076b1fc]
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00749F60 (48 relocated pointers)
        __emit 0x03
        __emit 0x9F
        __emit 0x74
        __emit 0x00
        __emit 0x1A
        __emit 0x9F
        __emit 0x74
        __emit 0x00
        __emit 0x4B
        __emit 0x9F
        __emit 0x74
        __emit 0x00
        __emit 0x2F
        __emit 0x9F
        __emit 0x74
        __emit 0x00
        __emit 0x46
        __emit 0x9F
        __emit 0x74
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
        __emit 0x56
        __emit 0x8B
        __emit 0x74
        __emit 0x24
        __emit 0x08
        __emit 0x57
        __emit 0x8B
        __emit 0x46
        __emit 0x18
        __emit 0x50
        __emit 0xFF
        __emit 0x15
        __emit 0x68
        __emit 0xB1
        __emit 0x76
        __emit 0x00
        __emit 0x6A
        __emit 0xFF
        __emit 0x8B
        __emit 0x4E
        __emit 0x1C
        __emit 0x51
        __emit 0xFF
        __emit 0x15
        __emit 0xF4
        __emit 0xB0
        __emit 0x76
        __emit 0x00
        __emit 0x8B
        __emit 0x56
        __emit 0x1C
        __emit 0x8B
        __emit 0x3D
        __emit 0xEC
        __emit 0xB0
        __emit 0x76
        __emit 0x00
        __emit 0x52
        __emit 0xFF
        __emit 0xD7
        __emit 0x8B
        __emit 0x46
        __emit 0x14
        __emit 0x50
        __emit 0xFF
        __emit 0xD7
        __emit 0x8B
        __emit 0x4E
        __emit 0x18
        __emit 0x51
        __emit 0xFF
        __emit 0xD7
        __emit 0x8B
        __emit 0x0D
        __emit 0xF0
        __emit 0x79
        __emit 0x8B
        __emit 0x00
        __emit 0x3B
        __emit 0xCE
        __emit 0x75
        __emit 0x13
        __emit 0x8B
        __emit 0x16
        __emit 0x56
        __emit 0x89
        __emit 0x15
        __emit 0xF0
        __emit 0x79
        __emit 0x8B
        __emit 0x00
        __emit 0xE8
        __emit 0x64
        __emit 0xA2
        __emit 0xFA
        __emit 0xFF
        __emit 0x5F
        __emit 0x5E
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x8B
        __emit 0x01
        __emit 0x3B
        __emit 0xC6
        __emit 0x74
        __emit 0x08
        __emit 0x8B
        __emit 0xC8
        __emit 0x8B
        __emit 0x01
        __emit 0x3B
        __emit 0xC6
        __emit 0x75
        __emit 0xF8
        __emit 0x8B
        __emit 0x06
        __emit 0x56
        __emit 0x89
        __emit 0x01
        __emit 0xE8
        __emit 0x47
        __emit 0xA2
        __emit 0xFA
        __emit 0xFF
        __emit 0x5F
        __emit 0x5E
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0x8B
        __emit 0x50
        __emit 0x14
        __emit 0x89
        __emit 0x48
        __emit 0x24
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x08
        __emit 0x52
        __emit 0x89
        __emit 0x48
        __emit 0x10
        __emit 0xC6
        __emit 0x01
        __emit 0x00
        __emit 0xC7
        __emit 0x40
        __emit 0x0C
        __emit 0x02
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xFF
        __emit 0x15
        __emit 0x68
        __emit 0xB1
        __emit 0x76
        __emit 0x00
        __emit 0xC2
        __emit 0x0C
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
