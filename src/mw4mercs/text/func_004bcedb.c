/*
 * FUN_004bcedb (extent 0x4bcedb-0x4bcf61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daad0;
extern int    g_007daad4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004bcd90(void);
extern void __cdecl FUN_004bf310(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004bcedb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007daad0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x154
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cf25
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007daad4]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004bcd90
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_cf25:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004bf310
        mov    eax, dword ptr [edi]
        push    2
        add    esi, 0x150
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        pop    edi
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
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
