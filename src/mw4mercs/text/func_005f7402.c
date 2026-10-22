/*
 * FUN_005f7402 (extent 0x5f7402-0x5f747e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);

__declspec(naked) void FUN_005f7402(void)
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
        mov    al, 1
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        mov    dword ptr [esi], 0x76cd9c
        lea    edi, [esi + 0x14]
        push    0
        mov    ecx, edi
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    word ptr [esi + 0x10], 0xffff
        mov    word ptr [esi + 0x12], 0
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x77ceac
        lea    edi, [esi + 0x1c]
        push    0
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x775540
        pop    edi
        mov    dword ptr [esi], 0x78a914
        mov    eax, esi
        pop    esi
        ret    
    }
}
