/*
 * FUN_005bffbb (extent 0x5bffbb-0x5c00e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2500;
extern void __cdecl FUN_005c0740(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_005d3050(void);

__declspec(naked) void FUN_005bffbb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xe0]
        cmp    dword ptr [eax + 0x14], 6
        setne    al
        ret    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        sub    eax, 4
        je    L_001f
        dec    eax
        je    L_0002
        dec    eax
        jne    L_003a
        mov    edx, dword ptr [g_007f2500]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x2fc], edx
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_005c0740
        ret    8
L_0002:
        mov    eax, dword ptr [g_007f2500]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x2fc], eax
        mov    eax, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_005c0740
        ret    8
L_001f:
        mov    edx, dword ptr [g_007f2500]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x2fc], edx
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_005d3050
L_003a:
        ret    8
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
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    5
        call    dword ptr [eax + 4]
        ret    
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        ret    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov    ecx, esi
        call    FUN_005c1990
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [edx + 4]
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
        mov    byte ptr [ecx + 0x30a], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
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
        ret    
    }
}
