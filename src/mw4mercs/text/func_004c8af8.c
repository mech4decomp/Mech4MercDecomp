/*
 * FUN_004c8af8 (extent 0x4c8af8-0x4c8bce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c04;
extern int    g_007dab30;
extern int    g_007dab34;
extern int    g_007dc140;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c8bd0(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void FUN_004c8af8(void)
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
        nop    
        mov    eax, dword ptr [g_007b8c04]
        mov    dword ptr [g_007dab30], eax
        inc    eax
        push    0x20
        mov    dword ptr [g_007b8c04], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8b55
        mov    ecx, dword ptr [g_007dc140]
        mov    edx, dword ptr [g_007dab30]
        push    0x771800
        push    2
        push    ecx
        push    0x770e5c
        push    edx
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dab34], eax
        ret    
L_8b55:
        mov    dword ptr [g_007dab34], 0
        ret    
        push    esi
        mov    esi, dword ptr [g_007dab34]
        test    esi, esi
        je    L_8b7b
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8b7b:
        mov    dword ptr [g_007dab34], 0
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
        call    FUN_004d5b10
        mov    dword ptr [esi], 0x771874
        mov    dword ptr [esi + 0x10], 0xffffffff
        mov    eax, esi
        pop    esi
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_004c8bd0
        test    byte ptr [esp + 8], 1
        je    L_8bc8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8bc8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
