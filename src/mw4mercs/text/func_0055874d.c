/*
 * FUN_0055874d (extent 0x55874d-0x5587a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;

__declspec(naked) void FUN_0055874d(void)
{
    __asm {
        nop    
        nop    
        nop    
        ret    4
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
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        mov    dl, byte ptr [eax + 0x16]
        test    dl, dl
        je    L_879f
        mov    al, byte ptr [esp + 4]
        test    al, al
        mov    ecx, dword ptr [ecx + 0xe0]
        je    L_8796
        mov    edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        ret    4
L_8796:
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
L_879f:
        ret    4
    }
}
