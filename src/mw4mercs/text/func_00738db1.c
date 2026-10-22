/*
 * FUN_00738db1 (extent 0x738db1-0x738ecb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b108;
extern int    g_0076b16c;
extern int    g_0076b210;
extern int    g_0076b218;
extern int    g_0076b21c;
extern int    g_008aac88;
extern void __cdecl FUN_00738d20(void);

__declspec(naked) void FUN_00738db1(void)
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
        sub    esp, 0x194
        push    esi
        push    edi
        push    0x7a7138
        push    0
        push    0
        call    dword ptr [g_0076b21c]
        mov    edi, eax
        test    edi, edi
        jne    L_8ded
        pop    edi
        mov    eax, 0x80004005
        pop    esi
        add    esp, 0x194
        ret    4
L_8ded:
        push    -1
        push    edi
        call    dword ptr [g_0076b0f4]
        mov    esi, dword ptr [esp + 0x1a0]
        mov    eax, dword ptr [esi + 0x50]
        test    eax, eax
        jne    L_8e09
        mov    dword ptr [esi + 0x50], edi
        jmp    L_8e10
L_8e09:
        push    edi
        call    dword ptr [g_0076b0ec]
L_8e10:
        mov    edx, dword ptr [esi + 0x54]
        inc    edx
        mov    eax, edx
        cmp    eax, 1
        mov    dword ptr [esi + 0x54], edx
        jne    L_8eb4
        lea    eax, [esi + 0x30]
        push    eax
        call    dword ptr [g_0076b108]
        lea    ecx, [esp + 0xc]
        push    ecx
        push    0x101
        call    dword ptr [g_008aac88]
        test    eax, eax
        jne    L_8e94
        mov    edi, dword ptr [g_0076b16c]
        push    eax
        push    eax
        push    1
        push    eax
        call    edi
        test    eax, eax
        mov    dword ptr [esi + 0x2c], eax
        je    L_8e94
        mov    ecx, esi
        call    FUN_00738d20
        test    eax, eax
        je    L_8e94
        push    0x7a711c
        push    0
        push    1
        push    0
        call    edi
        test    eax, eax
        mov    dword ptr [esi + 0x28], eax
        je    L_8e94
        lea    edx, [esp + 8]
        push    edx
        push    0
        push    esi
        push    0x7397b0
        push    0x1000
        push    0
        call    dword ptr [g_0076b218]
        test    eax, eax
        mov    dword ptr [esi + 0x4c], eax
        jne    L_8eb4
L_8e94:
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x50]
        push    ecx
        call    dword ptr [g_0076b210]
        pop    edi
        mov    eax, 0x80004005
        pop    esi
        add    esp, 0x194
        ret    4
L_8eb4:
        mov    edx, dword ptr [esi + 0x50]
        push    edx
        call    dword ptr [g_0076b210]
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x194
        ret    4
    }
}
