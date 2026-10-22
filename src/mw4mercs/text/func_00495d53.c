/*
 * FUN_00495d53 (extent 0x495d53-0x495dc9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004abaa0(void);
extern void __cdecl FUN_004aeb30(void);

__declspec(naked) void FUN_00495d53(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_004abaa0
        push    0x3f800000
        lea    ecx, [esi + 0x278]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x284]
        mov    byte ptr [esi + 0x290], 0
        call    FUN_004aeb30
        mov    dword ptr [esi + 0x298], 0
        mov    dword ptr [esi + 0x2a0], 0
        mov    dword ptr [esi + 0x2a8], 0x3f800000
        mov    dword ptr [esi + 0x2b0], 0x3f800000
        pop    esi
        ret    
    }
}
