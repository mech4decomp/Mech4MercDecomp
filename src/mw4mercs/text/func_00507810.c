/*
 * FUN_00507810 (extent 0x507810-0x5079ec) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern int    g_007b8cd8;
extern int    g_007b8cdc;
extern int    g_007b8ce0;
extern int    g_007b8ce4;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00507a30(void);
extern void __cdecl FUN_00507aa0(void);
extern void __cdecl FUN_00507b10(void);
extern void __cdecl FUN_00507b30(void);

__declspec(naked) void FUN_00507810(void)
{
    __asm {
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x90
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507aa0
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 4]
        mov    esi, eax
        push    0
        lea    eax, [esp + 0x10]
        push    eax
        mov    dword ptr [esi], 0x90
        push    0x776fd8
        mov    byte ptr [esp + 0x18], 0
        call    FUN_00411ec0
        mov    al, byte ptr [esp + 0xc]
        test    al, al
        je    L_7864
        or    dword ptr [esi + 0x14], 0x800000
L_7864:
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x78
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507b10
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 4]
        push    0x7723e8
        mov    esi, eax
        call    FUN_0040ed60
        push    0
        lea    ecx, [esp + 0x10]
        push    ecx
        push    0x776fe0
        mov    ecx, eax
        mov    dword ptr [esi + 0x74], 0
        call    FUN_00411bf0
        test    al, al
        je    L_78ce
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_00507a30
        add    esp, 4
        mov    dword ptr [esi + 0x74], eax
L_78ce:
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
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x10
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x2c]
        push    esi
        mov    esi, dword ptr [esp + 0x24]
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00507b30
        mov    ecx, dword ptr [esi + 0x10]
        add    ecx, -0xd
        add    esp, 0x14
        cmp    ecx, 3
        ja    L_79e3
        jmp    dword ptr [ecx*4 + 0x5079ec]
        test    bl, bl
        jne    L_79e3
        mov    edx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [edx]
        push    0x776ff0
        push    ebp
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x10
        ret    
        test    bl, bl
        jne    L_79e3
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x30]
        push    eax
        push    edi
        mov    ecx, esi
        mov    byte ptr [esp + 0x38], 1
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    
        test    bl, bl
        jne    L_79e3
        mov    eax, dword ptr [g_007b8d90]
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    dword ptr [esp + 0x18], eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    
        test    bl, bl
        jne    L_79e3
        mov    eax, dword ptr [g_007b8ce0]
        mov    ecx, dword ptr [g_007b8cd8]
        mov    edx, dword ptr [g_007b8cdc]
        mov    dword ptr [esp + 0x10], ecx
        mov    ecx, dword ptr [g_007b8ce4]
        mov    dword ptr [esp + 0x18], eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x20], ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    al, 1
L_79e3:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    
        nop    
        // jump-table data @ 0x005079EC (17 relocated pointers)
        __emit 0x25
        __emit 0x79
        __emit 0x50
        __emit 0x00
        __emit 0x71
        __emit 0x79
        __emit 0x50
        __emit 0x00
        __emit 0xA9
        __emit 0x79
        __emit 0x50
        __emit 0x00
        __emit 0x4D
        __emit 0x79
        __emit 0x50
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x04
        __emit 0x83
        __emit 0xE8
        __emit 0x00
        __emit 0x74
        __emit 0x12
        __emit 0x48
        __emit 0x74
        __emit 0x09
        __emit 0x48
        __emit 0x75
        __emit 0x0C
        __emit 0xB8
        __emit 0x3C
        __emit 0x70
        __emit 0x77
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x24
        __emit 0x70
        __emit 0x77
        __emit 0x00
        __emit 0xC3
        __emit 0xB8
        __emit 0x18
        __emit 0x70
        __emit 0x77
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
    }
}
