/*
 * FUN_0075a900 (extent 0x75a900-0x75a93e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00759a20(void);
extern void __cdecl FUN_0075a940(void);

__declspec(naked) void FUN_0075a900(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        call    FUN_00759a20
        mov    dword ptr [esi], 0x7af0a4
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0075a940
        test    byte ptr [esp + 8], 1
        je    L_a938
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a938:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
