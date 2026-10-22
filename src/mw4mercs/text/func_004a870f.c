/*
 * FUN_004a870f (extent 0x4a870f-0x4a87da) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern int    g_007da994;
extern int    g_007da998;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004a95e0(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a870f(void)
{
    __asm {
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a95e0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        lea    ecx, [edi + 0x2b8]
        push    ecx
        lea    ecx, [esi + 0x2b8]
        call    FUN_004ae4c0
        lea    edx, [edi + 0x2c4]
        push    edx
        lea    ecx, [esi + 0x2c4]
        call    FUN_004adf10
        mov    ecx, dword ptr [edi + 0x2e4]
        mov    al, byte ptr [edi + 0x2d8]
        lea    edx, [edi + 0x2e8]
        mov    dword ptr [esi + 0x2e4], ecx
        push    edx
        lea    ecx, [esi + 0x2e8]
        mov    byte ptr [esi + 0x2d8], al
        call    FUN_004adf10
        mov    al, byte ptr [edi + 0x2fc]
        mov    byte ptr [esi + 0x2fc], al
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_87ce
        mov    eax, dword ptr [g_007da998]
        push    eax
        push    0x7b30a8
        push    0x524
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4a8920
        mov    dword ptr [esi + 0x18], 0x4a85a0
        mov    dword ptr [g_007da994], esi
        pop    esi
        ret    
L_87ce:
        mov    dword ptr [g_007da994], 0
        pop    esi
        ret    
    }
}
