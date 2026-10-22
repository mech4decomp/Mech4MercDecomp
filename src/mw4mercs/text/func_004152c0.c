/*
 * FUN_004152c0 (extent 0x4152c0-0x41533b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8814;
extern int    g_007b8c08;
extern int    g_007b8c10;
extern int    g_007b8c14;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_004152c0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_52ce
L_52c7:
        mov    eax, dword ptr [eax + 0x10]
        test    eax, eax
        jne    L_52c7
L_52ce:
        ret    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x76d3f0
        je    L_52e9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_52e9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    eax, dword ptr [g_007b8814]
        push    eax
        push    0
        push    0x76d400
        call    FUN_006f4710
        push    0x14
        mov    dword ptr [g_007b8c14], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5330
        mov    ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76d3f4
        push    0x14
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b8c10], eax
        ret    
L_5330:
        mov    dword ptr [g_007b8c10], 0
        ret    
    }
}
