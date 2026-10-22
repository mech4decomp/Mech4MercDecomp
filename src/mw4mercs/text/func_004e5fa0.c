/*
 * FUN_004e5fa0 (extent 0x4e5fa0-0x4e6034) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc140;
extern int    g_007dc76c;
extern int    g_007dc770;
extern int    g_00849304;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_004e5fa0(void)
{
    __asm {
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_5fcb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x774094
        pop    esi
        ret    
L_5fcb:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
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
        nop    
        nop    
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6011
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x7740a8
        push    0x1d4
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc76c], eax
        jmp    L_601b
L_6011:
        mov    dword ptr [g_007dc76c], 0
L_601b:
        mov    edx, dword ptr [g_00849304]
        push    edx
        push    0
        push    0x774098
        call    FUN_006f4710
        mov    dword ptr [g_007dc770], eax
        ret    
    }
}
