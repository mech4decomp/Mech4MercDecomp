/*
 * FUN_00584a3e (extent 0x584a3e-0x584b3d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007f1f7d;
extern void __cdecl FUN_004d9f30(void);
extern void __cdecl FUN_004da180(void);
extern void __cdecl FUN_005f3760(void);
extern void __cdecl FUN_00603cd0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00584a3e(void)
{
    __asm {
        nop    
        nop    
        push    esi
        push    edi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    edi, dword ptr [esi + 0x2f4]
        mov    ecx, edi
        call    FUN_00603cd0
        mov    eax, dword ptr [edi]
        xor    ecx, ecx
        mov    cl, byte ptr [g_007f1f7d]
        push    0
        push    ecx
        push    0xa
        mov    ecx, edi
        call    dword ptr [eax + 8]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [esi + 0x428]
        mov    edx, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x428], edx
        mov    dl, byte ptr [eax + 0xdc]
        test    dl, dl
        jne    L_4abd
        cmp    dword ptr [eax + 0x5d0], -1
        jne    L_4abd
        mov    eax, dword ptr [ecx]
        push    0
        push    0xd
        call    dword ptr [eax + 4]
L_4abd:
        ret    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x782224
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_4ad8
        int 3    
L_4ad8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005f3760
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004d9f30
        mov    eax, dword ptr [edi + 0x44]
        pop    edi
        mov    dword ptr [esi + 0x440], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    0x48
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        push    edi
        mov    ecx, esi
        call    FUN_004da180
        mov    ecx, dword ptr [esi + 0x440]
        pop    edi
        mov    dword ptr [eax], 0x48
        mov    dword ptr [eax + 0x44], ecx
        pop    esi
        ret    4
    }
}
