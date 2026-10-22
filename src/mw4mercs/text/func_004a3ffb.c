/*
 * FUN_004a3ffb (extent 0x4a3ffb-0x4a40fa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern int    g_007da920;
extern int    g_007da984;
extern int    g_007da998;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004a3f00(void);
extern void __cdecl FUN_004a9430(void);
extern void __cdecl FUN_004a95e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a3ffb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2b8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4039
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a3f00
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4039:
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
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a9430
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx + 0x40]
        mov    eax, dword ptr [esi + 0x2b4]
        mov    eax, dword ptr [edx + eax*4]
        add    eax, 4
        push    eax
        push    edi
        call    FUN_00412a50
        add    esp, 8
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
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004a95e0
        mov    eax, dword ptr [edi + 0x2b4]
        pop    edi
        mov    dword ptr [esi + 0x2b4], eax
        pop    esi
        ret    4
        nop    
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_40ee
        mov    eax, dword ptr [g_007da998]
        push    eax
        push    0x7b2edc
        push    0x528
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4a4200
        mov    dword ptr [esi + 0x18], 0x4a4000
        mov    dword ptr [g_007da984], esi
        pop    esi
        ret    
L_40ee:
        mov    dword ptr [g_007da984], 0
        pop    esi
        ret    
    }
}
