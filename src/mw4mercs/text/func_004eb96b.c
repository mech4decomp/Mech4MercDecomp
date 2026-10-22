/*
 * FUN_004eb96b (extent 0x4eb96b-0x4eb9f7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc7cc;
extern int    g_007dc7d8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00724350(void);

__declspec(naked) void FUN_004eb96b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx + 0x54], eax
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [ecx + 0x58], eax
        mov    eax, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x5c], eax
        mov    eax, dword ptr [ecx + 0x2c]
        test    eax, eax
        je    L_b9b8
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax + 0x44], ecx
        fld    dword ptr [eax + 0x44]
        mov    ecx, dword ptr [edx + 4]
        fchs    
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [eax + 0x48], ecx
        mov    ecx, edx
        push    ecx
        mov    dword ptr [eax + 0x4c], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    eax, dword ptr [eax + 0x18]
        push    edx
        push    ecx
        /* __emit: fstp dword ptr [esp] no-disp form D9 1C 24 (MSVC6 emits
           disp8-0 D9 5C 24 00) */
        __emit 0xD9
        __emit 0x1C
        __emit 0x24
        push    0x40
        push    eax
        call    FUN_00724350
L_b9b8:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b9ec
        mov    ecx, dword ptr [g_007dc7d8]
        push    ecx
        push    0x7746cc
        push    0x22b
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc7cc], eax
        ret    
L_b9ec:
        mov    dword ptr [g_007dc7cc], 0
        ret
        nop
    }
}
