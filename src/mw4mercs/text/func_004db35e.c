/*
 * FUN_004db35e (extent 0x4db35e-0x4db4d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00501470(void);

__declspec(naked) void FUN_004db35e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax + ecx], edx
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        add    eax, ecx
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [edx]
        mov    eax, ecx
        sub    eax, esi
        mov    dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        pop    esi
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b3b7
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], ecx
        mov    al, 1
        ret    0x10
L_b3b7:
        xor    al, al
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax + ecx], edx
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x1c]
        fld    dword ptr [ecx + eax]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0xc]
        fsub    dword ptr [eax]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b42c
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], ecx
        mov    al, 1
        ret    0x10
L_b42c:
        xor    al, al
        ret    0x10
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
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        add    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [eax]
        xor    eax, eax
        mov    al, byte ptr [edx]
        mov    edx, ecx
        and    edx, 0xff
        sub    edx, eax
        mov    dword ptr [esp + 4], edx
        fild    dword ptr [esp + 4]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_b49f
        mov    eax, dword ptr [esp + 8]
        mov    byte ptr [eax], cl
        mov    al, 1
        ret    0x10
L_b49f:
        xor    al, al
        ret    0x10
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
        mov    esi, ecx
        mov    dword ptr [esi], 0x773234
        call    FUN_00501470
        test    byte ptr [esp + 8], 1
        je    L_b4ce
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_b4ce:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
