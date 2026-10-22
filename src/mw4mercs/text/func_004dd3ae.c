/*
 * FUN_004dd3ae (extent 0x4dd3ae-0x4dd41b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc6a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void FUN_004dd3ae(void)
{
    __asm {
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d3fe
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773810
        push    0x1db
        mov    ecx, eax
        call    FUN_004151c0
        push    1
        push    9
        mov    dword ptr [g_007dc6a0], eax
        call    FUN_00704820
        push    0
        push    0xb
        call    FUN_00704820
        ret    
L_d3fe:
        push    1
        push    9
        mov    dword ptr [g_007dc6a0], 0
        call    FUN_00704820
        push    0
        push    0xb
        call    FUN_00704820
        ret    
    }
}
