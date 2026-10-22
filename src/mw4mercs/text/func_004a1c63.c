/*
 * FUN_004a1c63 (extent 0x4a1c63-0x4a1d04) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004a1bf0(void);
extern void __cdecl FUN_004a3b70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a1c63(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xec
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1ca9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a1bf0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_1ca9:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [esi + 0x128]
        test    ecx, ecx
        lea    eax, [esi + 0x128]
        je    L_1cf3
        mov    ecx, dword ptr [esi + 0x120]
        test    ecx, ecx
        jne    L_1cf3
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
        mov    dword ptr [esi + 0x120], eax
L_1cf3:
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    FUN_004a3b70
        pop    edi
        pop    esi
        ret    4
    }
}
