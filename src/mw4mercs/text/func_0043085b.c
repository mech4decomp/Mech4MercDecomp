/*
 * FUN_0043085b (extent 0x43085b-0x4308c4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b97fc;
extern int    g_007da6a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0043085b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_086e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_086e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
        nop    
        mov    eax, dword ptr [ecx + 0xa4]
        ret    4
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
        je    L_08b9
        mov    ecx, dword ptr [g_007da6a8]
        push    ecx
        push    0x76e230
        push    0x70
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b97fc], eax
        ret    
L_08b9:
        mov    dword ptr [g_007b97fc], 0
        ret    
    }
}
