/*
 * FUN_00731580 (extent 0x731580-0x73160d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2a4;
extern int    g_0076b318;
extern int    g_0076b320;
extern void __cdecl FUN_007314f0(void);
extern void __cdecl FUN_00731640(void);

__declspec(naked) void FUN_00731580(void)
{
    __asm {
        sub    esp, 0x24
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x2c]
        push    eax
        push    ecx
        call    FUN_00731640
        push    0x20
        push    eax
        lea    edx, [esp + 8]
        push    edx
        call    dword ptr [g_0076b320]
        lea    eax, [esp + 0xc]
        push    0x2e
        push    eax
        mov    byte ptr [esp + 0x34], 0
        call    dword ptr [g_0076b2a4]
        add    esp, 0x14
        test    eax, eax
        je    L_15bc
        mov    byte ptr [eax], 0
L_15bc:
        mov    edx, dword ptr [esp + 0x28]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        push    edx
        call    FUN_007314f0
        add    esp, 0x24
        ret    0xc
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
        push    0x7a60a4
        push    0x8e
        call    FUN_00731640
        test    eax, eax
        jne    L_15f8
        mov    ax, 8
        ret    
L_15f8:
        push    eax
        call    dword ptr [g_0076b318]
        add    esp, 4
        test    ax, ax
        jne    L_160c
        mov    eax, 8
L_160c:
        ret    
    }
}
