/*
 * FUN_00545620 (extent 0x545620-0x5456f4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_00545620(void)
{
    __asm {
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        cmp    byte ptr [eax + 0x17fc], 1
        jne    L_5643
        mov    eax, dword ptr [ecx + 0x50]
        jmp    L_5646
L_5643:
        mov    eax, dword ptr [ecx + 0x54]
L_5646:
        test    eax, eax
        jne    L_564b
        ret    
L_564b:
        mov    eax, dword ptr [eax + 0xa4]
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        jl    L_56ee
        cmp    esi, 7
        jg    L_56ee
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        je    L_56ee
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + esi*4 + 0x204d00]
        test    ecx, ecx
        je    L_56ee
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + esi*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        je    L_56ee
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + esi*4 + 0x204d00]
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x520]
        test    ecx, ecx
        je    L_56ee
        mov    eax, 1
        pop    esi
        ret    4
L_56ee:
        xor    eax, eax
        pop    esi
        ret    4
    }
}
