/*
 * FUN_00490615 (extent 0x490615-0x49069c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87ec;
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00416280(void);

__declspec(naked) void FUN_00490615(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, edx
        mov    dword ptr [ecx + 0x10], edx
        mov    dword ptr [ecx + 0x14], eax
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
        mov    eax, dword ptr [ecx + 0xc]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x10]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx], eax
        ret    0xc
        nop    
        nop    
        push    esi
        push    edi
        mov    esi, ecx
        push    1
        push    0
        lea    edi, [esi + 4]
        push    0x1003
        mov    ecx, edi
        call    FUN_00416280
        mov    eax, dword ptr [g_007b87ec]
        mov    dword ptr [edi], 0x76ffe0
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    eax
        mov    dword ptr [esi], 0x76ffdc
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
    }
}
