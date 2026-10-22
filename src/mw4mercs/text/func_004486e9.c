/*
 * FUN_004486e9 (extent 0x4486e9-0x44877e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b98a0;
extern int    g_007b98a4;
extern int    g_007b98e0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004486e9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x9c]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8734
        mov    eax, dword ptr [g_007b98e0]
        push    eax
        push    0x76e828
        push    0x68
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x448c70
        mov    dword ptr [g_007b98a4], esi
        jmp    L_873e
L_8734:
        mov    dword ptr [g_007b98a4], 0
L_873e:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8772
        push    0x800
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], 0x100
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b98a0], esi
        pop    esi
        ret    
L_8772:
        mov    dword ptr [g_007b98a0], 0
        pop    esi
        ret    
    }
}
