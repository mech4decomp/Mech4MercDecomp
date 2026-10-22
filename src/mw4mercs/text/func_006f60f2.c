/*
 * FUN_006f60f2 (extent 0x6f60f2-0x6f613b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006f5360(void);
extern void __cdecl FUN_006f64f0(void);
extern void __cdecl FUN_006f6540(void);

__declspec(naked) void FUN_006f60f2(void)
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
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x79fc54
        je    L_6116
        push    esi
        call    FUN_006f5360
L_6116:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006f64f0
        test    byte ptr [esp + 8], 1
        je    L_6135
        push    esi
        call    FUN_006f6540
L_6135:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
