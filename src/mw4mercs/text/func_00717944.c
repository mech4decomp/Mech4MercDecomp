/*
 * FUN_00717944 (extent 0x717944-0x717a0c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b2874;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00753bc0(void);
extern void __cdecl FUN_00753cc0(void);

__declspec(naked) void FUN_00717944(void)
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
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        mov    esi, dword ptr [ebp + 8]
        cmp    esi, 1
        jb    L_79a4
        cmp    esi, 0x3ff
        jbe    L_79b6
L_79a4:
        push    0x7a2554
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_79b6
        int 3    
L_79b6:
        mov    ecx, dword ptr [g_008b2874]
        lea    eax, [esi*8]
        sub    eax, esi
        lea    eax, [ecx + eax*8 - 0x38]
        pop    esi
        pop    ebp
        ret    4
        nop    
        nop    
        push    esi
        call    FUN_00753bc0
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    0
        push    0
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00753cc0
        mov    eax, esi
        pop    esi
        ret    0x1c
    }
}
