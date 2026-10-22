/*
 * FUN_00500161 (extent 0x500161-0x5001c8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd158;
extern void __cdecl FUN_0050d840(void);

__declspec(naked) void FUN_00500161(void)
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        xor    ecx, ecx
        cmp    eax, 3
        ja    L_019c
        jmp    dword ptr [eax*4 + 0x5001c8]
        mov    ecx, 0x5001e0
        jmp    L_019c
        mov    ecx, 0x500240
        jmp    L_019c
        mov    ecx, 0x5002d0
        jmp    L_019c
        mov    ecx, 0x500360
L_019c:
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x80], edx
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax + 0x84], edx
        mov    dword ptr [g_007dd158], eax
        mov    eax, dword ptr [eax + 4]
        push    ecx
        push    eax
        call    FUN_0050d840
        add    esp, 8
        ret    
        nop    
        // jump-table data @ 0x005001C8 (64 relocated pointers)
        __emit 0x82
        __emit 0x01
        __emit 0x50
        __emit 0x00
        __emit 0x89
        __emit 0x01
        __emit 0x50
        __emit 0x00
        __emit 0x90
        __emit 0x01
        __emit 0x50
        __emit 0x00
        __emit 0x97
        __emit 0x01
        __emit 0x50
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xA1
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x88
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x04
        __emit 0x8B
        __emit 0x02
        __emit 0x56
        __emit 0x6A
        __emit 0x00
        __emit 0x51
        __emit 0x50
        __emit 0xE8
        __emit 0xF5
        __emit 0x03
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x0D
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x91
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0xF0
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0x8B
        __emit 0x08
        __emit 0x6A
        __emit 0x00
        __emit 0x52
        __emit 0x51
        __emit 0xE8
        __emit 0xD8
        __emit 0x03
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x15
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x2B
        __emit 0xF0
        __emit 0x8B
        __emit 0x82
        __emit 0x84
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x18
        __emit 0x85
        __emit 0xC0
        __emit 0x75
        __emit 0x02
        __emit 0xF7
        __emit 0xDE
        __emit 0x8B
        __emit 0xC6
        __emit 0x5E
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
        __emit 0x83
        __emit 0xEC
        __emit 0x08
        __emit 0xA1
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x88
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x54
        __emit 0x24
        __emit 0x0C
        __emit 0x8B
        __emit 0x02
        __emit 0x6A
        __emit 0x00
        __emit 0x6A
        __emit 0x00
        __emit 0x51
        __emit 0x50
        __emit 0xE8
        __emit 0x11
        __emit 0x04
        __emit 0x00
        __emit 0x00
        __emit 0xDD
        __emit 0x5C
        __emit 0x24
        __emit 0x10
        __emit 0x8B
        __emit 0x0D
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x91
        __emit 0x80
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x20
        __emit 0x8B
        __emit 0x08
        __emit 0x6A
        __emit 0x00
        __emit 0x6A
        __emit 0x00
        __emit 0x52
        __emit 0x51
        __emit 0xE8
        __emit 0xF0
        __emit 0x03
        __emit 0x00
        __emit 0x00
        __emit 0xDC
        __emit 0x6C
        __emit 0x24
        __emit 0x20
        __emit 0x8B
        __emit 0x15
        __emit 0x58
        __emit 0xD1
        __emit 0x7D
        __emit 0x00
        __emit 0x8B
        __emit 0x82
        __emit 0x84
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x20
        __emit 0x85
        __emit 0xC0
        __emit 0x75
        __emit 0x02
        __emit 0xD9
        __emit 0xE0
        __emit 0xD8
        __emit 0x15
        __emit 0xB0
        __emit 0xC5
        __emit 0x76
        __emit 0x00
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        __emit 0x75
        __emit 0x0B
        __emit 0xDD
        __emit 0xD8
        __emit 0xB8
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x08
        __emit 0xC3
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
        __emit 0x74
        __emit 0x07
        __emit 0x83
        __emit 0xC8
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x08
        __emit 0xC3
        __emit 0x33
        __emit 0xC0
        __emit 0x83
    }
}
