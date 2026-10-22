/*
 * FUN_00496055 (extent 0x496055-0x4960b3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004a26e0(void);
extern void __cdecl FUN_004a2840(void);

__declspec(naked) void FUN_00496055(void)
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
        push    eax
        call    FUN_004a26e0
        ret    4
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a2840
        mov    eax, dword ptr [edi + 0x1a4]
        mov    ecx, dword ptr [edi + 0x1a8]
        mov    edx, dword ptr [edi + 0x1ac]
        pop    edi
        mov    dword ptr [esi + 0x1a4], eax
        mov    dword ptr [esi + 0x1a8], ecx
        mov    dword ptr [esi + 0x1ac], edx
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    al, al
        ret    
    }
}
