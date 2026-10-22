/*
 * FUN_004d79f6 (extent 0x4d79f6-0x4d7afa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);
extern void __cdecl FUN_00708a10(void);

__declspec(naked) void FUN_004d79f6(void)
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
        push    ecx
        push    0
        lea    eax, [esp + 4]
        push    eax
        push    0x7dc464
        push    0x772f64
        mov    dword ptr [esp + 0x10], 0x100
        call    FUN_00708930
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        test    eax, eax
        jne    L_7a50
        push    0x13
        push    0x772f50
        push    0x772f64
        call    FUN_00708a10
        push    0x100
        push    0x772f50
        push    0x7dc464
        call    dword ptr [g_0076b320]
        add    esp, 0xc
L_7a50:
        mov    eax, 0x7dc464
        pop    ecx
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
        sub    esp, 8
        push    0
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x772f7c
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_7aa2
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x772f7c
        mov    dword ptr [esp + 0xc], 0x6cfc
        call    FUN_007089b0
L_7aa2:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    0
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x772f94
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_7af2
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x772f94
        mov    dword ptr [esp + 0xc], 0x70e4
        call    FUN_007089b0
L_7af2:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
    }
}
