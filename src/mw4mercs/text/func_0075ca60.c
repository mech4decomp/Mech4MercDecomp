/*
 * FUN_0075ca60 (extent 0x75ca60-0x75cb40) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bd2cc;
extern void __cdecl FUN_0075c8c0(void);
extern void __cdecl FUN_0075c8e0(void);

__declspec(naked) void FUN_0075ca60(void)
{
    __asm {
        mov    ecx, dword ptr [g_008bd2cc]
        mov    cl, byte ptr [ecx]
        or    eax, 0xffffffff
        cmp    cl, 0x30
        jl    L_ca89
        cmp    cl, 0x39
        jg    L_ca89
        movsx    eax, cl
        mov    ecx, dword ptr [g_008bd2cc]
        sub    eax, 0x30
        inc    ecx
        mov    dword ptr [g_008bd2cc], ecx
        ret    
L_ca89:
        cmp    cl, 0x61
        jl    L_caa7
        cmp    cl, 0x66
        jg    L_caa7
        movsx    eax, cl
        mov    ecx, dword ptr [g_008bd2cc]
        sub    eax, 0x57
        inc    ecx
        mov    dword ptr [g_008bd2cc], ecx
        ret    
L_caa7:
        cmp    cl, 0x41
        jl    L_cac4
        cmp    cl, 0x46
        jg    L_cac4
        movsx    eax, cl
        mov    ecx, dword ptr [g_008bd2cc]
        sub    eax, 0x37
        inc    ecx
        mov    dword ptr [g_008bd2cc], ecx
L_cac4:
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
        call    FUN_0075c8c0
        mov    edx, dword ptr [g_008bd2cc]
        mov    al, byte ptr [edx]
        inc    edx
        cmp    al, 0x22
        mov    dword ptr [g_008bd2cc], edx
        je    L_caf5
        push    0x7af9a4
        call    FUN_0075c8e0
        xor    eax, eax
        ret    
L_caf5:
        mov    al, byte ptr [edx]
        cmp    al, 0x22
        mov    ecx, 0x8bc480
        je    L_cb18
L_cb00:
        mov    byte ptr [ecx], al
        inc    ecx
        inc    edx
        cmp    ecx, 0x8bc57f
        ja    L_cb2d
        mov    al, byte ptr [edx]
        cmp    al, 0x22
        jne    L_cb00
        mov    dword ptr [g_008bd2cc], edx
L_cb18:
        inc    edx
        mov    byte ptr [ecx], 0
        mov    dword ptr [g_008bd2cc], edx
        call    FUN_0075c8c0
        mov    eax, 0x8bc480
        ret    
L_cb2d:
        push    0x79cbf4
        mov    dword ptr [g_008bd2cc], edx
        call    FUN_0075c8e0
        xor    eax, eax
        ret    
    }
}
