/*
 * FUN_004c8bdb (extent 0x4c8bdb-0x4c8cbe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c04;
extern int    g_007dab2c;
extern int    g_007dab34;
extern int    g_007dab38;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c8b90(void);
extern void __cdecl FUN_004c8cc0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void FUN_004c8bdb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 0
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c04]
        mov    dword ptr [g_007dab2c], eax
        inc    eax
        push    0x20
        mov    dword ptr [g_007b8c04], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8c45
        mov    ecx, dword ptr [g_007dab34]
        mov    edx, dword ptr [g_007dab2c]
        push    0x771818
        push    3
        push    ecx
        push    0x771880
        push    edx
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dab38], eax
        ret    
L_8c45:
        mov    dword ptr [g_007dab38], 0
        ret    
        push    esi
        mov    esi, dword ptr [g_007dab38]
        test    esi, esi
        je    L_8c6b
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8c6b:
        mov    dword ptr [g_007dab38], 0
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004c8b90
        mov    dword ptr [esi], 0x771888
        mov    dword ptr [esi + 0x10], 0xfffffffe
        mov    eax, esi
        pop    esi
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_004c8cc0
        test    byte ptr [esp + 8], 1
        je    L_8cb8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8cb8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
