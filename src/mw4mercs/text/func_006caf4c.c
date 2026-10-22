/*
 * FUN_006caf4c (extent 0x6caf4c-0x6cb027) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b3ec;
extern int    g_0082f358;
extern int    g_0082f35c;
extern int    g_0082f380;
extern int    g_0082f384;
extern int    g_0082f388;
extern void __cdecl FUN_006cb240(void);
extern void __cdecl FUN_006cb600(void);
extern void __cdecl FUN_006cbf20(void);

__declspec(naked) void FUN_006caf4c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_af60
        mov    ecx, dword ptr [g_0082f380]
        mov    dword ptr [eax], ecx
L_af60:
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_af70
        mov    edx, dword ptr [g_0082f358]
        mov    dword ptr [eax], edx
L_af70:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_af80
        mov    ecx, dword ptr [g_0082f35c]
        mov    dword ptr [eax], ecx
L_af80:
        ret    0xc
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_afe1
        cmp    byte ptr [eax], 0
        je    L_afe1
        lea    ecx, [esp + 8]
        push    ecx
        push    eax
        push    0x83c2dc
        call    dword ptr [g_0076b3ec]
        mov    eax, dword ptr [g_0082f384]
        add    esp, 0xc
        cmp    eax, 2
        je    L_afd1
        cmp    eax, 4
        je    L_afd1
        mov    ecx, dword ptr [g_0082f388]
        push    0x83c2dc
        call    FUN_006cb240
        ret    
L_afd1:
        mov    ecx, dword ptr [g_0082f388]
        push    0x83c2dc
        call    FUN_006cbf20
L_afe1:
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
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_b026
        cmp    byte ptr [eax], 0
        je    L_b026
        lea    ecx, [esp + 0xc]
        push    ecx
        push    eax
        push    0x83a2dc
        call    dword ptr [g_0076b3ec]
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_0082f388]
        add    esp, 0xc
        push    0x83a2dc
        push    edx
        call    FUN_006cb600
L_b026:
        ret    
    }
}
