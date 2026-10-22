/*
 * FUN_005ecb2b (extent 0x5ecb2b-0x5ecb91) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005ef900(void);

__declspec(naked) void FUN_005ecb2b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        lea    esi, [ecx + 0x220]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_cb50
        mov    ecx, esi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x18]
L_cb50:
        pop    esi
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x6c]
        mov    eax, dword ptr [esi + 0x10]
        mov    edx, dword ptr [esi]
        and    eax, 0xffffffbf
        mov    ecx, esi
        mov    dword ptr [esi + 0x10], eax
        call    dword ptr [edx + 0xc4]
        mov    ecx, esi
        call    FUN_005ef900
        pop    esi
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
        ret    
    }
}
