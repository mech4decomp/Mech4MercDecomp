/*
 * FUN_00458224 (extent 0x458224-0x4582e6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b958c;
extern int    g_007d98f8;
extern int    g_007d98fc;
extern int    g_007d9900;
extern int    g_007da5fc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_00458224(void)
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        ret    4
        nop    
        mov    eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76ec18
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007d9900], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_829c
        mov    ecx, dword ptr [g_007da5fc]
        push    ecx
        push    0x76ebf8
        push    0x63
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4585c0
        mov    dword ptr [g_007d98f8], esi
        jmp    L_82a6
L_829c:
        mov    dword ptr [g_007d98f8], 0
L_82a6:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_82da
        push    0x400
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007d98fc], esi
        pop    esi
        ret    
L_82da:
        mov    dword ptr [g_007d98fc], 0
        pop    esi
        ret    
    }
}
