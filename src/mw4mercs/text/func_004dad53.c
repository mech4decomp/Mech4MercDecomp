/*
 * FUN_004dad53 (extent 0x4dad53-0x4dadcf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004d67d0(void);

__declspec(naked) void FUN_004dad53(void)
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
        nop    
        nop    
        nop    
        xor    eax, eax
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
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 6
        test    al, 1
        mov    byte ptr [ecx + 0x144], 1
        je    L_ada0
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx]
        xor    ecx, 0x85739531
        call    FUN_004d67d0
        ret    8
L_ada0:
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0xe4], eax
        mov    dword ptr [ecx + 0xe8], edx
        ret    8
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
        mov    dword ptr [ecx + 0x130], eax
        xor    al, al
        ret    8
    }
}
