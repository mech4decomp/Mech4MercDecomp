/*
 * FUN_004c3d2c (extent 0x4c3d2c-0x4c3d72) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_004c3d2c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
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
        ret    0x10
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
        lea    esi, [ecx + 0x27c]
        mov    ecx, esi
        call    FUN_0041fcb0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_3d6e
        push    eax
        mov    ecx, esi
        call    FUN_0041fcd0
L_3d6e:
        pop    esi
        ret    4
    }
}
