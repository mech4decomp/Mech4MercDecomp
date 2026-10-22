/*
 * FUN_004c8ccb (extent 0x4c8ccb-0x4c8dbe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c04;
extern int    g_007dab28;
extern int    g_007dab38;
extern int    g_007dab3c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c8c80(void);
extern void __cdecl FUN_004c8dc0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void FUN_004c8ccb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 6
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 2
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx + 0x10], 3
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8c04]
        mov    dword ptr [g_007dab28], eax
        inc    eax
        push    0x20
        mov    dword ptr [g_007b8c04], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8d45
        mov    ecx, dword ptr [g_007dab38]
        mov    edx, dword ptr [g_007dab28]
        push    0x771840
        push    1
        push    ecx
        push    0x771894
        push    edx
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dab3c], eax
        ret    
L_8d45:
        mov    dword ptr [g_007dab3c], 0
        ret    
        push    esi
        mov    esi, dword ptr [g_007dab3c]
        test    esi, esi
        je    L_8d6b
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8d6b:
        mov    dword ptr [g_007dab3c], 0
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
        mov    eax, dword ptr [g_007dab3c]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004c8c80
        mov    dword ptr [esi], 0x77189c
        mov    dword ptr [esi + 0x10], 0xfffffffd
        mov    eax, esi
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004c8dc0
        test    byte ptr [esp + 8], 1
        je    L_8db8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8db8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
