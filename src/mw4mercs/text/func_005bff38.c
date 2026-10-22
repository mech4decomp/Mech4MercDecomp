/*
 * FUN_005bff38 (extent 0x5bff38-0x5bffae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005bffb0(void);
extern void __cdecl FUN_005c0a30(void);
extern void __cdecl FUN_005c0a70(void);

__declspec(naked) void FUN_005bff38(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c0a30
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005c0a70
        ret    4
        nop    
        nop    
        nop    
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
        push    esi
        mov    esi, ecx
        call    FUN_005bffb0
        test    byte ptr [esp + 8], 1
        je    L_ffa8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ffa8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
