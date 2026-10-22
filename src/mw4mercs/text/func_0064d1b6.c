/*
 * FUN_0064d1b6 (extent 0x64d1b6-0x64d29e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void FUN_0064d1b6(void)
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
        mov    eax, dword ptr [g_00805918]
        mov    ecx, dword ptr [eax + 1]
        mov    edx, dword ptr [g_0080592c]
        inc    eax
        push    esi
        mov    esi, dword ptr [ecx + 0x20]
        push    edi
        mov    edi, dword ptr [edx]
        add    edi, esi
        add    eax, 4
        mov    dword ptr [edx], edi
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [ecx + 0x3c]
        mov    dword ptr [g_00805908], edx
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
        nop    
        cmp    dword ptr [g_00805908], 0xb
        jne    L_d28f
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    ebx, 0x11
L_d219:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        test    esi, esi
        mov    dword ptr [g_0080592c], eax
        jl    L_d24a
        cmp    esi, dword ptr [edi + 0x18]
        jl    L_d259
L_d24a:
        push    4
        call    FUN_00563060
        mov    eax, dword ptr [g_0080592c]
        add    esp, 4
L_d259:
        mov    ecx, dword ptr [edi + 0x14]
        mov    edx, dword ptr [ecx + 8]
        imul    edx, esi
        add    dword ptr [eax], edx
        cmp    dword ptr [g_00805908], ebx
        jne    L_d270
        mov    edi, ecx
        jmp    L_d219
L_d270:
        mov    ecx, dword ptr [g_00805918]
        movsx    eax, byte ptr [ecx]
        inc    ecx
        cmp    eax, 0xb
        mov    dword ptr [g_00805908], eax
        mov    dword ptr [g_00805918], ecx
        jne    L_d297
        mov    edi, dword ptr [edi + 0x14]
        jmp    L_d219
L_d28f:
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x14]
        ret    
L_d297:
        mov    eax, dword ptr [edi + 0x14]
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
