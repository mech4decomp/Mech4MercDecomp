/*
 * FUN_0073a0d2 (extent 0x73a0d2-0x73a131) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b16c;
extern int    g_0076b218;
extern int    g_00856b9c;
extern int    g_008aadc0;
extern int    g_008aadc4;
extern void __cdecl FUN_00737300(void);

__declspec(naked) void FUN_0073a0d2(void)
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
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00856b9c]
        inc    eax
        cmp    eax, 1
        mov    dword ptr [g_00856b9c], eax
        jne    L_a12f
        push    0
        push    0
        push    eax
        push    0
        call    dword ptr [g_0076b16c]
        mov    dword ptr [g_008aadc4], eax
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        push    0
        push    0
        push    0x73a190
        push    0
        push    0
        call    dword ptr [g_0076b218]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    0x7a716c
        push    ecx
        mov    dword ptr [g_008aadc0], eax
        call    FUN_00737300
L_a12f:
        pop    ecx
        ret    
    }
}
