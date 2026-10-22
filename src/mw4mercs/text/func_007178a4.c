/*
 * FUN_007178a4 (extent 0x7178a4-0x71798d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00859d7c;
extern float  g_00859d80;
extern float  g_00859d84;
extern float  g_00859d88;
extern int    g_0087c59c;
extern int    g_0087c5a0;
extern int    g_008b2874;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_007178a4(void)
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
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [g_00859d88]
        mov    ecx, dword ptr [esp + 8]
        fstp    dword ptr [eax]
        fld    dword ptr [g_00859d80]
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 0x10]
        fstp    dword ptr [ecx]
        fld    dword ptr [g_00859d84]
        fstp    dword ptr [edx]
        fld    dword ptr [g_00859d7c]
        fstp    dword ptr [eax]
        ret    0x10
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
        mov    eax, 0x87c2d0
        mov    ecx, 2
L_78fb:
        lea    edx, [ecx + 1]
        add    eax, 2
        lea    esi, [edx - 2]
        mov    word ptr [eax - 2], si
        lea    esi, [ecx - 2]
        mov    word ptr [eax], si
        add    eax, 2
        mov    word ptr [eax], cx
        add    eax, 2
        mov    word ptr [eax], si
        add    eax, 2
        mov    word ptr [eax], dx
        add    eax, 2
        mov    word ptr [eax], cx
        add    ecx, 4
        lea    edx, [ecx - 2]
        add    eax, 2
        cmp    dx, 0x80
        jb    L_78fb
        xor    eax, eax
        mov    dword ptr [g_0087c59c], eax
        mov    dword ptr [g_0087c5a0], eax
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
        sub    ecx, dword ptr [g_008b2874]
        mov    eax, 0x24924925
        mul    ecx
        sub    ecx, edx
        shr    ecx, 1
        add    ecx, edx
        shr    ecx, 5
        inc    ecx
        push    esi
        mov    esi, ecx
        cmp    esi, 1
        jb    L_7977
        cmp    esi, 0x3ff
        jbe    L_7989
L_7977:
        push    0x7a2554
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7989
        int 3    
L_7989:
        mov    eax, esi
        pop    esi
        ret    
    }
}
