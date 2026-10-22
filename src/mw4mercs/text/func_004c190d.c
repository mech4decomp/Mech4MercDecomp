/*
 * FUN_004c190d (extent 0x4c190d-0x4c194c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004c1950(void);
extern void __cdecl FUN_004c1a10(void);

__declspec(naked) void FUN_004c190d(void)
{
    __asm {
        nop    
        nop    
        nop    
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
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 5
        not    al
        lea    edx, [ecx + 0xb0]
        test    al, 1
        mov    eax, dword ptr [ecx + 0x174]
        push    edx
        push    eax
        je    L_1943
        call    FUN_004c1950
        add    esp, 8
        ret    
L_1943:
        call    FUN_004c1a10
        add    esp, 8
        ret    
    }
}
