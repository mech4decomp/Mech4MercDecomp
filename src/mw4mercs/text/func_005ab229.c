/*
 * FUN_005ab229 (extent 0x5ab229-0x5ab34e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20b0;
extern int    g_007f20b4;
extern int    g_007f20b8;
extern int    g_007f20bc;
extern int    g_007f20c0;
extern int    g_007f2548;
extern int    g_007f255c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005ab229(void)
{
    __asm {
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
        push    esi
        push    edi
        push    0xa8
        call    FUN_004084d0
        mov    edi, eax
        xor    esi, esi
        add    esp, 4
        cmp    edi, esi
        je    L_b2a8
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    esi
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5ab3a0
        push    esi
        push    esi
        push    ecx
        push    0x78576c
        push    0x4c9
        mov    ecx, edi
        call    FUN_00501a20
        mov    dword ptr [edi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f20c0], edi
        jmp    L_b2ae
L_b2a8:
        mov    dword ptr [g_007f20c0], esi
L_b2ae:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_b2cf
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax], 0xbfc00000
        mov    dword ptr [eax + 8], esi
        mov    dword ptr [g_007f20b0], eax
        jmp    L_b2d5
L_b2cf:
        mov    dword ptr [g_007f20b0], esi
L_b2d5:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_b2f6
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax], 0x3fc00000
        mov    dword ptr [eax + 8], esi
        mov    dword ptr [g_007f20b4], eax
        jmp    L_b2fc
L_b2f6:
        mov    dword ptr [g_007f20b4], esi
L_b2fc:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_b31d
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax], esi
        mov    dword ptr [eax + 8], 0xbfc00000
        mov    dword ptr [g_007f20b8], eax
        jmp    L_b323
L_b31d:
        mov    dword ptr [g_007f20b8], esi
L_b323:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, esi
        je    L_b345
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax], esi
        pop    edi
        mov    dword ptr [eax + 8], 0x3fc00000
        mov    dword ptr [g_007f20bc], eax
        pop    esi
        ret    
L_b345:
        pop    edi
        mov    dword ptr [g_007f20bc], esi
        pop    esi
        ret    
    }
}
