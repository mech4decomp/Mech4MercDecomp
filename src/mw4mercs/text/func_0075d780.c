/*
 * FUN_0075d780 (extent 0x75d780-0x75d811) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_0076b2d0;
extern int    g_0076b310;
extern int    g_008bd2d4;
extern int    g_008bd2d8;
extern int    g_008bd2dc;
extern int    g_008bd2e0;

__declspec(naked) void FUN_0075d780(void)
{
    __asm {
        mov    eax, dword ptr [g_008bd2dc]
        test    eax, eax
        jne    L_d7bb
        push    0x7d0
        mov    dword ptr [g_008bd2dc], 0x64
        mov    dword ptr [g_008bd2e0], 0x63
        mov    dword ptr [g_008bd2d8], 1
        call    dword ptr [g_0076b294]
        add    esp, 4
        mov    dword ptr [g_008bd2d4], eax
        ret    
L_d7bb:
        mov    ecx, dword ptr [g_008bd2d4]
        add    eax, 0x64
        mov    dword ptr [g_008bd2dc], eax
        lea    eax, [eax + eax*4]
        shl    eax, 2
        push    eax
        push    ecx
        mov    dword ptr [g_008bd2e0], 0x64
        call    dword ptr [g_0076b310]
        add    esp, 8
        mov    dword ptr [g_008bd2d4], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008bd2dc]
        test    eax, eax
        je    L_d810
        mov    eax, dword ptr [g_008bd2d4]
        push    eax
        mov    dword ptr [g_008bd2dc], 0
        call    dword ptr [g_0076b2d0]
        pop    ecx
L_d810:
        ret    
    }
}
