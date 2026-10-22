/*
 * FUN_00749c30 (extent 0x749c30-0x749cb0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00858990;
extern char   g_008b79ec;
extern void __cdecl FUN_00749950(void);
extern void __cdecl FUN_00749980(void);
extern void __cdecl FUN_007499c0(void);
extern void __cdecl FUN_0075b040(void);
extern void __cdecl FUN_0075b0d0(void);

__declspec(naked) void FUN_00749c30(void)
{
    __asm {
        mov    al, byte ptr [g_008b79ec]
        push    ebx
        xor    ebx, ebx
        cmp    al, bl
        push    esi
        push    edi
        je    L_9ca9
        cmp    byte ptr [g_00858990], bl
        jne    L_9ca9
        mov    esi, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esi]
        cmp    edi, ebx
        je    L_9ca9
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, 4
        ja    L_9ca9
        jmp    dword ptr [eax*4 + 0x749cb0]
        push    ebx
        push    ebx
        push    edi
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0xc], eax
        call    FUN_0075b0d0
        push    1
        push    edi
        call    FUN_0075b040
        mov    dword ptr [esi + 0x30], ebx
        pop    edi
        mov    dword ptr [esi + 0x34], ebx
        pop    esi
        pop    ebx
        ret    8
        mov    ecx, esi
        call    FUN_00749950
        mov    dword ptr [esi + 0x30], ebx
        pop    edi
        mov    dword ptr [esi + 0x34], ebx
        pop    esi
        pop    ebx
        ret    8
        mov    ecx, esi
        call    FUN_00749980
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        mov    ecx, esi
        call    FUN_007499c0
L_9ca9:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        nop    
        // jump-table data @ 0x00749CB0 (40 relocated pointers)
        __emit 0x60
        __emit 0x9C
        __emit 0x74
        __emit 0x00
        __emit 0x60
        __emit 0x9C
        __emit 0x74
        __emit 0x00
        __emit 0x95
        __emit 0x9C
        __emit 0x74
        __emit 0x00
        __emit 0xA2
        __emit 0x9C
        __emit 0x74
        __emit 0x00
        __emit 0x82
        __emit 0x9C
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
        __emit 0xA0
        __emit 0xEC
        __emit 0x79
        __emit 0x8B
        __emit 0x00
        __emit 0x84
        __emit 0xC0
        __emit 0x56
        __emit 0x8B
        __emit 0xF1
        __emit 0x74
        __emit 0x65
        __emit 0xA0
        __emit 0x90
        __emit 0x89
        __emit 0x85
        __emit 0x00
        __emit 0x84
        __emit 0xC0
        __emit 0x75
        __emit 0x5C
        __emit 0x8B
        __emit 0x06
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x56
        __emit 0x50
        __emit 0xE8
        __emit 0xBF
        __emit 0x70
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0x46
        __emit 0x08
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x06
        __emit 0x50
        __emit 0xE8
        __emit 0xB2
        __emit 0x70
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0xCE
        __emit 0xE8
        __emit 0x2B
        __emit 0xF9
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0x46
        __emit 0x20
        __emit 0x6A
        __emit 0x00
        __emit 0x50
        __emit 0x6A
        __emit 0x02
        __emit 0x56
        __emit 0xE8
        __emit 0xED
        __emit 0xFC
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0x4E
        __emit 0x24
        __emit 0x6A
        __emit 0x00
        __emit 0x51
        __emit 0x6A
        __emit 0x04
        __emit 0x56
        __emit 0xE8
        __emit 0xDF
        __emit 0xFC
        __emit 0xFF
        __emit 0xFF
        __emit 0x8B
        __emit 0x56
        __emit 0x1C
        __emit 0x8B
        __emit 0x46
        __emit 0x18
        __emit 0x8B
        __emit 0x0E
        __emit 0x52
        __emit 0x50
        __emit 0x51
        __emit 0xE8
        __emit 0x9F
        __emit 0x13
        __emit 0x01
        __emit 0x00
        __emit 0x6A
        __emit 0x02
        __emit 0x56
        __emit 0xE8
        __emit 0xF7
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
        __emit 0x6A
        __emit 0x03
        __emit 0x56
        __emit 0xE8
        __emit 0xEF
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
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
    }
}
