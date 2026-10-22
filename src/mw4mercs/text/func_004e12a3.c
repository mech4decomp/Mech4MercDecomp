/*
 * FUN_004e12a3 (extent 0x4e12a3-0x4e13e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004e4870(void);
extern void __cdecl FUN_004e4af0(void);
extern void __cdecl FUN_004ee860(void);
extern void __cdecl FUN_004eed30(void);
extern void __cdecl FUN_004ef200(void);
extern void __cdecl FUN_004ef5e0(void);
extern void __cdecl FUN_004ef970(void);
extern void __cdecl FUN_004efc50(void);
extern void __cdecl FUN_004efe40(void);
extern void __cdecl FUN_004f0310(void);
extern void __cdecl FUN_004f0850(void);
extern void __cdecl FUN_004f10d0(void);
extern void __cdecl FUN_004f3360(void);

__declspec(naked) void FUN_004e12a3(void)
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
        mov    edx, dword ptr [esp + 4]
        lea    eax, [edx - 0x21a]
        cmp    eax, 0xd
        ja    L_13d0
        jmp    dword ptr [eax*4 + 0x4e13e8]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004f0850
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_004f0310
        add    esp, 0xc
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004ef970
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004efc50
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004ef5e0
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004ef200
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004eed30
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    edx
        call    FUN_004e4af0
        add    esp, 0xc
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004e4870
        add    esp, 8
        ret    0x10
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    edx
        push    eax
        call    FUN_004efe40
        add    esp, 8
        ret    0x10
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        call    FUN_004ee860
        add    esp, 8
        ret    0x10
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_004f10d0
        add    esp, 8
        ret    0x10
L_13d0:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    edx
        call    FUN_004f3360
        ret    0x10
        // jump-table data @ 0x004E13E8 (64 relocated pointers)
        __emit 0xBB
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xDF
        __emit 0x12
        __emit 0x4E
        __emit 0x00
        __emit 0x91
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0x0E
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xCA
        __emit 0x12
        __emit 0x4E
        __emit 0x00
        __emit 0x23
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xF9
        __emit 0x12
        __emit 0x4E
        __emit 0x00
        __emit 0x38
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xD0
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xD0
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0x4D
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0x62
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0x7C
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0xA6
        __emit 0x13
        __emit 0x4E
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x50
        __emit 0x8B
        __emit 0x41
        __emit 0x14
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x8B
        __emit 0x7C
        __emit 0x24
        __emit 0x64
        __emit 0x8B
        __emit 0xB4
        __emit 0x87
        __emit 0xCC
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x85
        __emit 0xF6
        __emit 0x8B
        __emit 0xAF
        __emit 0xD8
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0x74
        __emit 0x19
        __emit 0x8B
        __emit 0x5C
        __emit 0x24
        __emit 0x68
        __emit 0x8B
        __emit 0x06
        __emit 0x53
        __emit 0x8B
        __emit 0xCE
        __emit 0xFF
        __emit 0x50
        __emit 0x14
        __emit 0x84
        __emit 0xDB
        __emit 0x0F
        __emit 0x84
        __emit 0x6C
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0xE9
        __emit 0x0B
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x50
        __emit 0x8B
        __emit 0xCF
        __emit 0xE8
        __emit 0xDC
        __emit 0x98
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0xD8
        __emit 0x66
        __emit 0x8B
        __emit 0x0B
        __emit 0x66
        __emit 0x3B
        __emit 0x0D
        __emit 0xAC
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x75
        __emit 0x11
        __emit 0x66
        __emit 0x8B
        __emit 0x53
        __emit 0x02
        __emit 0x66
        __emit 0x3B
        __emit 0x15
        __emit 0xAE
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        __emit 0x0F
        __emit 0x84
        __emit 0x07
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x8A
        __emit 0x44
        __emit 0x24
        __emit 0x68
        __emit 0x84
        __emit 0xC0
        __emit 0x0F
        __emit 0x84
        __emit 0xFB
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xA1
        __emit 0xE4
        __emit 0xC6
        __emit 0x7D
        __emit 0x00
        __emit 0x50
        __emit 0xE8
        __emit 0xB6
        __emit 0x34
        __emit 0x21
        __emit 0x00
        __emit 0x6A
        __emit 0x54
        __emit 0xE8
        __emit 0x2F
        __emit 0x70
        __emit 0xF2
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x1B
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x10
        __emit 0x8B
        __emit 0x15
        __emit 0x48
        __emit 0xC8
        __emit 0x7D
        __emit 0x00
        __emit 0x6A
        __emit 0x00
        __emit 0x53
        __emit 0x51
        __emit 0x57
        __emit 0x52
        __emit 0x8B
        __emit 0xC8
        __emit 0xE8
        __emit 0x11
        __emit 0x02
        __emit 0x01
        __emit 0x00
        __emit 0x8B
        __emit 0xF0
        __emit 0xEB
        __emit 0x02
        __emit 0x33
        __emit 0xF6
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x10
        __emit 0x8B
        __emit 0x48
        __emit 0x14
        __emit 0x56
        __emit 0x51
        __emit 0x8B
        __emit 0xCF
        __emit 0xE8
        __emit 0xAB
        __emit 0x96
        __emit 0xFF
        __emit 0xFF
        __emit 0x6A
        __emit 0x01
        __emit 0x53
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x24
        __emit 0xE8
        __emit 0x9F
        __emit 0x0A
        __emit 0xFF
        __emit 0xFF
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x1C
        __emit 0x52
        __emit 0x8B
        __emit 0xCE
    }
}
