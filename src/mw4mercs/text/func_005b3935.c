/*
 * FUN_005b3935 (extent 0x5b3935-0x5b39cd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20fc;
extern int    g_007f25bc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005b3935(void)
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
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        cmp    ecx, edx
        mov    eax, dword ptr [esp + 0xc]
        je    L_3978
        push    ebx
        push    esi
        push    edi
L_3953:
        test    eax, eax
        je    L_396b
        mov    esi, ecx
        mov    ebx, dword ptr [esi]
        mov    edi, eax
        mov    dword ptr [edi], ebx
        mov    ebx, dword ptr [esi + 4]
        mov    esi, dword ptr [esi + 8]
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [edi + 8], esi
L_396b:
        add    ecx, 0xc
        add    eax, 0xc
        cmp    ecx, edx
        jne    L_3953
        pop    edi
        pop    esi
        pop    ebx
L_3978:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_39c1
        mov    eax, dword ptr [g_007f25bc]
        push    0x5052a0
        push    0x5b3a00
        push    0x786360
        push    7
        push    eax
        push    0x78640c
        push    0x493
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f20fc], esi
        pop    esi
        ret    
L_39c1:
        mov    dword ptr [g_007f20fc], 0
        pop    esi
        ret    
    }
}
