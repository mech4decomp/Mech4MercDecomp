/*
 * FUN_005e1d9b (extent 0x5e1d9b-0x5e1e26) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2528;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005e1dd0(void);
extern void __cdecl FUN_005f8320(void);

__declspec(naked) void FUN_005e1d9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x424
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1dcc
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2528]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005e1dd0
        ret    
L_1dcc:
        xor    eax, eax
        ret    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005f8320
        mov    byte ptr [esi + 0x41c], 0
        mov    dword ptr [esi], 0x788918
        mov    dword ptr [esi + 0x158], 1
        mov    dword ptr [esi + 0x420], 0xffffffff
        mov    eax, esi
        pop    esi
        ret    0x10
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
        mov    eax, 6
        ret    
    }
}
