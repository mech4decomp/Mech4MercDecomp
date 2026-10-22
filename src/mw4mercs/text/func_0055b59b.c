/*
 * FUN_0055b59b (extent 0x55b59b-0x55b61d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;

__declspec(naked) void FUN_0055b59b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x2c]
        jne    L_b5be
        xor    al, al
        ret    
L_b5be:
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    al, byte ptr [eax + 0x4b1]
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x2c]
        je    L_b60b
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x4b1]
        test    dl, dl
        sete    dl
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0x4b1], dl
L_b60b:
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x954], al
        ret    4
    }
}
