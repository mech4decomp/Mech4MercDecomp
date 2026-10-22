/*
 * FUN_006c85f3 (extent 0x6c85f3-0x6c8641) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006c8f00(void);
extern void __cdecl FUN_006c9450(void);

__declspec(naked) void FUN_006c85f3(void)
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
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_006c9450
        ret    0x1c
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        call    FUN_006c8f00
        ret    8
    }
}
