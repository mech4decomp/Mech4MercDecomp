/*
 * FUN_00746c50 (extent 0x746c50-0x746d7d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_007b743c;
extern int    g_008b2778;
extern int    g_008b277c;
extern int    g_008b2780;
extern int    g_008b2784;
extern int    g_008b27c8;
extern int    g_008b27cc;
extern char   g_008b27d0;
extern char   g_008b27d1;
extern int    g_008b27d8;
extern int    g_008b27dc;

__declspec(naked) void FUN_00746c50(void)
{
    __asm {
        mov    eax, dword ptr [g_008b27d8]
        test    eax, eax
        jne    L_6c76
        push    0x400000
        mov    dword ptr [g_008b27dc], 0xffffe
        call    dword ptr [g_0076b294]
        add    esp, 4
        mov    dword ptr [g_008b27d8], eax
L_6c76:
        mov    eax, dword ptr [g_008b27cc]
        test    eax, eax
        jne    L_6c86
        mov    byte ptr [g_008b27d0], 1
L_6c86:
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
        mov    al, byte ptr [g_008b27d0]
        xor    edx, edx
        cmp    al, dl
        je    L_6cd3
        cmp    dword ptr [g_008b27cc], edx
        jne    L_6cd3
        mov    eax, dword ptr [g_008b27d8]
        mov    ecx, dword ptr [g_008b27dc]
        mov    dword ptr [eax + ecx*4], 0x1234aacc
        mov    dword ptr [g_007b743c], eax
        mov    dword ptr [g_008b27c8], edx
        mov    dword ptr [g_008b27cc], ecx
        mov    byte ptr [g_008b27d0], dl
        mov    byte ptr [g_008b27d1], 1
L_6cd3:
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
        mov    eax, dword ptr [g_008b27d8]
        push    ebx
        xor    ebx, ebx
        cmp    eax, ebx
        mov    byte ptr [g_008b27d1], bl
        je    L_6d65
        mov    edx, dword ptr [g_008b27dc]
        cmp    dword ptr [eax + edx*4], 0x1234aacc
        jne    L_6d2b
        mov    ecx, dword ptr [g_008b27c8]
        mov    eax, dword ptr [g_007b743c]
        lea    edx, [ecx*4]
        mov    dword ptr [g_008b2784], eax
        mov    dword ptr [g_008b2780], edx
        mov    dword ptr [g_008b277c], eax
        mov    dword ptr [g_008b2778], ebx
        jmp    L_6d65
L_6d2b:
        mov    eax, dword ptr [g_008b27c8]
        mov    ecx, dword ptr [g_007b743c]
        push    esi
        lea    esi, [ecx + eax*4]
        mov    dword ptr [g_008b2784], esi
        mov    esi, eax
        shl    esi, 0x1e
        sub    esi, eax
        add    esi, edx
        lea    edx, [esi*4 + 8]
        shl    eax, 2
        mov    dword ptr [g_008b2780], edx
        mov    dword ptr [g_008b277c], ecx
        mov    dword ptr [g_008b2778], eax
        pop    esi
L_6d65:
        mov    dword ptr [g_008b27cc], ebx
        mov    dword ptr [g_008b27c8], ebx
        mov    dword ptr [g_007b743c], 0x8b2788
        pop    ebx
        ret    
    }
}
