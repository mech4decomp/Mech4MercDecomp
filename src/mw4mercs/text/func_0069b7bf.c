/*
 * FUN_0069b7bf (extent 0x69b7bf-0x69b7fd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00649150(void);

__declspec(naked) void FUN_0069b7bf(void)
{
    __asm {
        nop    
        or    eax, 0x9c0069b6
        mov    bh, 0x69
        add    byte ptr [esi - 0x63ff9649], ch
        mov    bh, 0x69
        add    byte ptr [esi - 0x6dff9649], ch
        mov    bh, 0x69
        add    byte ptr [esi - 0x63ff9649], ch
        mov    bh, 0x69
        add    byte ptr [edi + esi*4 - 0x6f6fff97], bl
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
        call    FUN_00649150
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x3c]
        ret    
    }
}
