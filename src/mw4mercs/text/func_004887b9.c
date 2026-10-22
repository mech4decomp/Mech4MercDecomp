/*
 * FUN_004887b9 (extent 0x4887b9-0x488908) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da7dc;
extern void __cdecl FUN_0048aa60(void);
extern void __cdecl FUN_0048abf0(void);

__declspec(naked) void FUN_004887b9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi + 0x20]
        cmp    eax, 4
        push    edi
        mov    edi, ecx
        ja    L_8900
        jmp    dword ptr [eax*4 + 0x488908]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esi + 0x98]
        push    0
        lea    eax, [esp + 0x1c]
        push    eax
        mov    eax, dword ptr [esi + 0x94]
        push    ecx
        push    edx
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x2c], 2
        call    FUN_0048aa60
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [g_007da7dc]
        mov    edi, dword ptr [edx]
        mov    dword ptr [ecx], eax
        shl    eax, 5
        add    eax, edi
        mov    edi, eax
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 8]
        mov    dword ptr [edi + 0x18], eax
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    0xc
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esi + 0x98]
        push    0
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esi + 0x94]
        push    edx
        push    eax
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 4
        call    FUN_0048aa60
        mov    edx, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [g_007da7dc]
        mov    dword ptr [edx], eax
        mov    edx, dword ptr [ecx]
        shl    eax, 5
        add    eax, edx
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        mov    edi, eax
        call    dword ptr [edx + 8]
        mov    dword ptr [edi + 0x18], eax
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    0xc
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esi + 0x98]
        push    0
        lea    eax, [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esi + 0x94]
        push    ecx
        push    edx
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], 0
        call    FUN_0048aa60
        mov    ecx, dword ptr [esp + 0x20]
        pop    edi
        mov    dword ptr [ecx], eax
        pop    esi
        add    esp, 0xc
        ret    0xc
        mov    eax, dword ptr [esp + 0x1c]
        push    ebx
        mov    ebx, dword ptr [esi + 0x98]
        push    ebp
        mov    ebp, dword ptr [esi + 0x94]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xb0]
        push    0
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esi]
        push    eax
        mov    dword ptr [esp + 0x24], 1
        push    ecx
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        push    eax
        push    ebx
        push    ebp
        mov    ecx, edi
        call    FUN_0048abf0
        mov    ecx, dword ptr [esp + 0x28]
        pop    ebp
        mov    dword ptr [ecx], eax
        pop    ebx
L_8900:
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    0xc
        // jump-table data @ 0x00488908 (26 relocated pointers)
        __emit 0x82
        __emit 0x88
        __emit 0x48
        __emit 0x00
        __emit 0xB9
        __emit 0x88
        __emit 0x48
        __emit 0x00
        __emit 0xDE
        __emit 0x87
        __emit 0x48
        __emit 0x00
        __emit 0x00
        __emit 0x89
        __emit 0x48
        __emit 0x00
        __emit 0x30
        __emit 0x88
        __emit 0x48
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x51
        __emit 0x56
        __emit 0x57
        __emit 0x8B
        __emit 0x7C
        __emit 0x24
        __emit 0x14
        __emit 0x8B
        __emit 0x57
        __emit 0x14
        __emit 0x6A
        __emit 0x00
        __emit 0x8B
        __emit 0xF1
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0x50
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x18
        __emit 0x8D
        __emit 0x4F
        __emit 0x18
        __emit 0x51
        __emit 0x52
        __emit 0x50
        __emit 0x8B
        __emit 0xCE
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x1C
        __emit 0x03
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
        __emit 0x14
        __emit 0x21
        __emit 0x00
        __emit 0x00
        __emit 0x8B
        __emit 0x4F
        __emit 0x1C
        __emit 0x83
        __emit 0xE1
        __emit 0x0F
        __emit 0x85
        __emit 0xC0
        __emit 0x7C
        __emit 0x12
        __emit 0x8B
        __emit 0x54
        __emit 0x8E
        __emit 0x14
        __emit 0x8D
        __emit 0x7A
        __emit 0x01
        __emit 0x89
        __emit 0x7C
        __emit 0x8E
        __emit 0x14
        __emit 0x8B
        __emit 0x4C
        __emit 0xCE
        __emit 0x54
        __emit 0x89
        __emit 0x04
        __emit 0x91
        __emit 0x5F
        __emit 0x5E
        __emit 0x59
        __emit 0xC2
        __emit 0x08
        __emit 0x00
        __emit 0x90
        __emit 0x90
    }
}
