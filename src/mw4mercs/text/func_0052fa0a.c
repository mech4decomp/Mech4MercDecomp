/*
 * FUN_0052fa0a (extent 0x52fa0a-0x52fa6e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0052fa70(void);

__declspec(naked) void FUN_0052fa0a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x15], 1
        mov    byte ptr [ecx + 0xce], al
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
        mov    eax, dword ptr [ecx + 0x3514]
        test    eax, eax
        jne    L_fa44
        mov    dword ptr [ecx + 0x3514], 6
L_fa44:
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
        push    esi
        mov    esi, ecx
        call    FUN_0052fa70
        test    byte ptr [esp + 8], 1
        je    L_fa68
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_fa68:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
