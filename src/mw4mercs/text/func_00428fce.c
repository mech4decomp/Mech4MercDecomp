/*
 * FUN_00428fce (extent 0x428fce-0x42905d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9650;
extern void __cdecl FUN_00482050(void);
extern void __cdecl FUN_004820b0(void);
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004821a0(void);
extern void __cdecl FUN_00482150(void);

__declspec(naked) void FUN_00428fce(void)
{
    __asm {
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
        mov    dword ptr [ecx], 0x76dfa8
        jmp    FUN_00482150
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_00482160
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004821a0
        ret    4
    }
}
