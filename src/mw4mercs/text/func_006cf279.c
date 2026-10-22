/*
 * FUN_006cf279 (extent 0x6cf279-0x6cf33e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b2238;
extern int    g_00840008;
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_006cf279(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b2238]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b2238]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b2238]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b2238]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b2238], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2238], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2238], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2238], 3
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_f325
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007b2238]
        push    ecx
        push    0x79e880
        mov    ecx, eax
        call    FUN_00411d10
L_f325:
        mov    edx, dword ptr [g_00840008]
        push    1
        push    edx
        call    FUN_006f4850
        mov    dword ptr [g_00840008], 0
        ret    
    }
}
