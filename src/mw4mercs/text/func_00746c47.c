/*
 * FUN_00746c47 (extent 0x746c47-0x746cd4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_007b743c;
extern int    g_008b27c8;
extern int    g_008b27cc;
extern char   g_008b27d0;
extern char   g_008b27d1;
extern int    g_008b27d8;
extern int    g_008b27dc;

__declspec(naked) void FUN_00746c47(void)
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
    }
}
