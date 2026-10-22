/*
 * FUN_0072cf10 (extent 0x72cf10-0x72cfb4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00881a58;
extern int    g_00882568;
extern int    g_0088256c;
extern int    g_00882570;
extern int    g_00882574;
extern int    g_00882578;
extern int    g_00882598;
extern int    g_0088259c;
extern int    g_008825a0;
extern int    g_008825a4;
extern int    g_008825a8;
extern int    g_008825ac;
extern int    g_008825c8;
extern void __cdecl FUN_0072ce60(void);
extern void __cdecl FUN_0072cf50(void);

__declspec(naked) void FUN_0072cf10(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 2
        jb    L_cf3e
        cmp    eax, 3
        ja    L_cf3e
        cmp    dword ptr [g_008825c8], 0x3b5
        jne    L_cf2f
        mov    eax, 3
L_cf2f:
        mov    dword ptr [g_00881a58], eax
        call    FUN_0072ce60
        call    FUN_0072cf50
L_cf3e:
        ret    4
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
        cmp    dword ptr [g_00881a58], 2
        jne    L_cf60
        mov    eax, 0xff000000
        jmp    L_cf6d
L_cf60:
        mov    eax, dword ptr [g_008825ac]
        and    eax, 0xff
        shl    eax, 0x18
L_cf6d:
        mov    ecx, dword ptr [g_00882598]
        mov    edx, dword ptr [g_0088259c]
        or    ecx, eax
        mov    dword ptr [g_00882568], ecx
        mov    ecx, dword ptr [g_008825a0]
        or    edx, eax
        or    ecx, eax
        mov    dword ptr [g_0088256c], edx
        mov    edx, dword ptr [g_008825a4]
        mov    dword ptr [g_00882570], ecx
        mov    ecx, dword ptr [g_008825a8]
        or    edx, eax
        or    ecx, eax
        mov    dword ptr [g_00882574], edx
        mov    dword ptr [g_00882578], ecx
        ret    
    }
}
