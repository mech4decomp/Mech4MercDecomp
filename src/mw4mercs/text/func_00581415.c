/*
 * FUN_00581415 (extent 0x581415-0x5814da) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1f78;
extern int    g_007f25bc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_00581415(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    4
        lea    ecx, [edi + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [edi + 0x10]
        mov    eax, dword ptr [edx + 0x10]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        lea    ecx, [esp + 0xc]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov    edx, dword ptr [esi]
        add    esp, 8
        push    1
        add    edi, 0x18
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop    edi
        pop    esi
        je    L_147b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_147b
        push    eax
        call    FUN_004084e0
        pop    ecx
L_147b:
        ret    4
        nop    
        nop    
        nop    
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
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_14ce
        mov    eax, dword ptr [g_007f25bc]
        push    0x5052a0
        push    0x581510
        push    0
        push    0
        push    eax
        push    0x7815b0
        push    0x4ae
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f1f78], esi
        pop    esi
        ret    
L_14ce:
        mov    dword ptr [g_007f1f78], 0
        pop    esi
        ret    
    }
}
