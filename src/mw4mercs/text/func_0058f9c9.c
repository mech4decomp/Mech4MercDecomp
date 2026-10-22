/*
 * FUN_0058f9c9 (extent 0x58f9c9-0x58fa71) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5ec;
extern int    g_007dab40;
extern int    g_007dab44;

__declspec(naked) void FUN_0058f9c9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        fild    dword ptr [eax + 0x54]
        fmul    dword ptr [g_0076d5ec]
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
        push    edi
        mov    edi, dword ptr [ecx + 0x8f8]
        test    edi, edi
        je    L_fa62
        push    esi
        mov    esi, dword ptr [edi + 0xd8]
        or    dword ptr [esi + 0x18], 0xc0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        mov    eax, dword ptr [edi + 0x124]
        test    eax, eax
        mov    cl, 0x80
        pop    esi
        je    L_fa46
        mov    dl, byte ptr [eax + 0x9c]
        test    dl, cl
        jne    L_fa46
        or    dl, cl
        mov    byte ptr [eax + 0x9c], dl
L_fa46:
        mov    edi, dword ptr [edi + 0x128]
        test    edi, edi
        je    L_fa62
        mov    al, byte ptr [edi + 0x9c]
        test    al, cl
        jne    L_fa62
        or    al, cl
        mov    byte ptr [edi + 0x9c], al
L_fa62:
        pop    edi
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
        ret    
    }
}
