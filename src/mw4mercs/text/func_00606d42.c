/*
 * FUN_00606d42 (extent 0x606d42-0x606da4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00606d42(void)
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_6d7b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x78ba88
        pop    esi
        ret    
L_6d7b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x78bacc
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_6d9e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6d9e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
