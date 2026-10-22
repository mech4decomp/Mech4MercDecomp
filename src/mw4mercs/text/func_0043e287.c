/*
 * FUN_0043e287 (extent 0x43e287-0x43e318) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b958c;
extern int    g_007b9850;
extern int    g_007b9854;
extern int    g_007b986c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_0043e287(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_e29e
        mov    eax, dword ptr [ecx + 0x44]
        ret    4
L_e29e:
        mov    edx, dword ptr [ecx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        shl    eax, 5
        add    eax, edx
        ret    4
        nop    
        mov    eax, dword ptr [ecx + 0x84]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b958c]
        push    esi
        push    eax
        push    0
        push    0x76e5fc
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007b9854], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e30c
        mov    ecx, dword ptr [g_007b986c]
        push    ecx
        push    0x76e5d8
        push    0x6c
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x43e4d0
        mov    dword ptr [g_007b9850], esi
        pop    esi
        ret    
L_e30c:
        mov    dword ptr [g_007b9850], 0
        pop    esi
        ret    
    }
}
