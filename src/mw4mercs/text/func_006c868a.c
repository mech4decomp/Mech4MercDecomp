/*
 * FUN_006c868a (extent 0x6c868a-0x6c86c6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006c9210(void);
extern void __cdecl FUN_006c9250(void);

__declspec(naked) void FUN_006c868a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_006c9250
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        call    FUN_006c9210
        ret    0xc
    }
}
