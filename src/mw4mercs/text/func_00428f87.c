/*
 * FUN_00428f87 (extent 0x428f87-0x429022) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9650;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00429030(void);
extern void __cdecl FUN_00481ff0(void);
extern void __cdecl FUN_00482050(void);
extern void __cdecl FUN_004820b0(void);

__declspec(naked) void FUN_00428f87(void)
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
        mov    eax, dword ptr [g_007b9650]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00481ff0
        mov    dword ptr [esi], 0x76dfa8
        mov    eax, esi
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
        push    esi
        mov    esi, ecx
        call    FUN_00429030
        test    byte ptr [esp + 8], 1
        je    L_8fc8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8fc8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [g_007b9650]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00482050
        mov    dword ptr [esi], 0x76dfa8
        mov    eax, esi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007b9650]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004820b0
        mov    dword ptr [esi], 0x76dfa8
        mov    eax, esi
        pop    esi
        ret    4
    }
}
