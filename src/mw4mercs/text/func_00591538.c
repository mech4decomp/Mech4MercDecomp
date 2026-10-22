/*
 * FUN_00591538 (extent 0x591538-0x591684) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412800(void);
extern void __cdecl FUN_00500950(void);

__declspec(naked) void FUN_00591538(void)
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
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        fld    qword ptr [ecx + 0x18]
        fcomp    qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x40
        je    L_155a
        xor    eax, eax
        ret    8
L_155a:
        fld    qword ptr [ecx + 0x18]
        fcomp    qword ptr [edx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_156f
        mov    eax, 1
        ret    8
L_156f:
        or    eax, 0xffffffff
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
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        fld    qword ptr [edx]
        fcomp    qword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x40
        je    L_1599
        xor    eax, eax
        ret    8
L_1599:
        fld    qword ptr [edx]
        fcomp    qword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_15ad
        mov    eax, 1
        ret    8
L_15ad:
        or    eax, 0xffffffff
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
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_15d7
        xor    eax, eax
        ret    8
L_15d7:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_1606
        xor    eax, eax
        ret    8
L_1606:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [ecx]
        push    esi
        add    eax, dword ptr [esp + 8]
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [esp + 0x14]
        push    eax
        push    edx
        push    esi
        call    FUN_00412800
        add    esp, 0xc
        test    al, al
        jne    L_164f
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [eax], esi
        mov    al, 1
        pop    esi
        ret    0x10
L_164f:
        xor    al, al
        pop    esi
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x781900
        call    FUN_00500950
        test    byte ptr [esp + 8], 1
        je    L_167e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_167e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
