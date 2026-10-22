/*
 * FUN_004dd5bb (extent 0x4dd5bb-0x4dd647) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6a0;
extern int    g_007dc6a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004dd5bb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        mov    eax, ecx
        mov    cl, byte ptr [eax + 0x24]
        fchs    
        test    cl, cl
        fstp    dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x20]
        push    esi
        je    L_d5eb
        mov    eax, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [ecx]
        lea    esi, [esp + 8]
        push    esi
        push    eax
        call    dword ptr [edx + 4]
        pop    esi
        ret    4
L_d5eb:
        mov    esi, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [eax + 0x1c]
        push    edx
        call    dword ptr [esi + 4]
        pop    esi
        ret    4
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d63c
        mov    ecx, dword ptr [g_007dc6a0]
        push    ecx
        push    0x773868
        push    0x1dd
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6a8], eax
        ret    
L_d63c:
        mov    dword ptr [g_007dc6a8], 0
        ret    
    }
}
