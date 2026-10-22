/*
 * FUN_004eb37b (extent 0x4eb37b-0x4eb419) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc130;
extern int    g_007dc7c4;
extern int    g_007dc7c8;
extern int    g_007dc7d0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00415d70(void);

__declspec(naked) void FUN_004eb37b(void)
{
    __asm {
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
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b3d7
        mov    eax, dword ptr [g_007dc130]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    0x7746a8
        push    ecx
        push    edx
        push    0x6c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc7c8], esi
        jmp    L_b3e1
L_b3d7:
        mov    dword ptr [g_007dc7c8], 0
L_b3e1:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_b40e
        mov    ecx, dword ptr [g_007dc7d0]
        push    ecx
        push    0x77468c
        push    0x22c
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc7c4], eax
        ret    
L_b40e:
        mov    dword ptr [g_007dc7c4], 0
        ret    
    }
}
