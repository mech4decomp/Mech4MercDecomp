/*
 * FUN_004165ce (extent 0x4165ce-0x416609) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416840(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00415c70(void);

__declspec(naked) void FUN_004165ce(void)
{
    __asm {
        nop    
        nop    
        jmp    FUN_00415c70
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
        push    0
        call    FUN_00416840
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        push    esi
        push    0x76d4f8
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6605
        int 3    
L_6605:
        mov    eax, esi
        pop    esi
        ret    
    }
}
