/*
 * FUN_006849e7 (extent 0x6849e7-0x684aa9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;

__declspec(naked) void FUN_006849e7(void)
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
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_4a1a
        mov    edx, dword ptr [g_007dab44]
        mov    edx, dword ptr [edx]
        xor    edx, dword ptr [g_007dab40]
        mov    edx, dword ptr [edx + 0x1c]
        xor    edx, 0x85739531
        cmp    eax, edx
        jne    L_4a1a
        cmp    dword ptr [ecx], 0
        je    L_4a1a
        mov    al, 1
        ret    
L_4a1a:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0x10], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0x18], ecx
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [eax + 0x1c], edx
        mov    edx, dword ptr [esp + 0x28]
        mov    dword ptr [eax + 0x20], ecx
        mov    ecx, dword ptr [esp + 0x2c]
        mov    dword ptr [eax + 0x24], edx
        mov    edx, dword ptr [esp + 0x30]
        mov    dword ptr [eax + 0x28], ecx
        mov    ecx, dword ptr [esp + 0x34]
        mov    dword ptr [eax + 0x2c], edx
        mov    dl, byte ptr [esp + 0x38]
        mov    dword ptr [eax + 0x30], ecx
        mov    cl, byte ptr [esp + 0x3c]
        mov    byte ptr [eax + 0x34], dl
        mov    edx, dword ptr [esp + 0x40]
        mov    byte ptr [eax + 0x35], cl
        mov    cl, byte ptr [esp + 0x44]
        mov    dword ptr [eax + 0x38], edx
        mov    dl, byte ptr [esp + 0x48]
        mov    byte ptr [eax + 0x3c], cl
        mov    cl, byte ptr [esp + 0x4c]
        mov    byte ptr [eax + 0x3d], dl
        mov    byte ptr [eax + 0x3e], cl
        ret    0x4c
    }
}
