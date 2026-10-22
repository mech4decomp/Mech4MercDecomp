/*
 * FUN_00699631 (extent 0x699631-0x699939) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00698f20(void);
extern void __cdecl FUN_00699140(void);

__declspec(naked) void FUN_00699631(void)
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
        nop    
        nop    
        fld    dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        fadd    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [ecx + 4]
        fst    dword ptr [esi + 0x10]
        fcomp    dword ptr [eax + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_9663
        mov    al, 1
        pop    esi
        ret    4
L_9663:
        mov    edx, dword ptr [ecx + 0x30]
        push    edi
        shr    edx, 4
        xor    edi, edi
        test    edx, edx
        jle    L_9713
        push    ebx
        push    ebp
        xor    ebp, ebp
L_9678:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        je    L_968e
        mov    eax, dword ptr [ecx + 0x2c]
        mov    al, byte ptr [eax + ebp + 0xd]
        test    al, al
        jne    L_968e
        cmp    al, 4
        je    L_96fc
L_968e:
        mov    ecx, dword ptr [ecx + 0x2c]
        lea    eax, [ecx + ebp]
        mov    cl, byte ptr [eax + 0xc]
        test    cl, cl
        jbe    L_96fc
        xor    edx, edx
        mov    dl, byte ptr [eax + 0xf]
        mov    eax, dword ptr [esi + 0x28]
        mov    ecx, dword ptr [eax + 0x14]
        cmp    dword ptr [ecx + edx*4], 0xff
        je    L_96fc
        mov    edx, dword ptr [esi + 0x1c]
        xor    eax, eax
        mov    al, byte ptr [edi + edx]
        cmp    al, 0xff
        je    L_96fc
        and    eax, 0xff
        mov    ebx, eax
        push    ebx
        push    edi
        mov    ecx, esi
        call    FUN_00699140
        test    eax, eax
        je    L_96fc
L_96cf:
        fld    dword ptr [eax]
        fcomp    dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_96ed
        dec    ebx
        js    L_96f5
        push    ebx
        push    edi
        mov    ecx, esi
        call    FUN_00699140
        test    eax, eax
        jne    L_96cf
        jmp    L_96fc
L_96ed:
        mov    eax, dword ptr [esi + 0x1c]
        mov    byte ptr [edi + eax], bl
        jmp    L_96fc
L_96f5:
        mov    ecx, dword ptr [esi + 0x1c]
        mov    byte ptr [edi + ecx], 0
L_96fc:
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [ecx + 0x30]
        inc    edi
        shr    edx, 4
        add    ebp, 0x10
        cmp    edi, edx
        jl    L_9678
        pop    ebp
        pop    ebx
L_9713:
        pop    edi
        xor    al, al
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 8]
        sub    esp, 8
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [eax + 4]
        fadd    dword ptr [ecx + 8]
        mov    eax, dword ptr [eax + 0x2c]
        mov    edx, ebx
        shl    edx, 4
        mov    al, byte ptr [eax + edx + 0xc]
        fst    dword ptr [esp + 0x20]
        test    al, al
        fstp    dword ptr [edi + 0x10]
        jbe    L_9819
        and    eax, 0xff
        cmp    eax, 1
        mov    dword ptr [esp + 0x1c], 1
        mov    dword ptr [esp + 0x10], eax
        jl    L_97db
        jmp    L_9771
L_976d:
        mov    eax, dword ptr [esp + 0x10]
L_9771:
        mov    ecx, dword ptr [esp + 0x1c]
        add    eax, ecx
        cdq    
        sub    eax, edx
        mov    esi, eax
        sar    esi, 1
        push    esi
        push    ebx
        mov    ecx, edi
        call    FUN_00699140
        lea    ebp, [esi - 1]
        push    ebp
        push    ebx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00699140
        fld    dword ptr [eax]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_97b5
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [edx]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9806
L_97b5:
        mov    eax, dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [eax]
        fnstsw  ax
        test    ah, 1
        je    L_97cc
        mov    dword ptr [esp + 0x10], ebp
        jmp    L_97d1
L_97cc:
        inc    esi
        mov    dword ptr [esp + 0x1c], esi
L_97d1:
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    dword ptr [esp + 0x10], ecx
        jge    L_976d
L_97db:
        push    0
        push    ebx
        mov    ecx, edi
        call    FUN_00699140
        fld    dword ptr [eax]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9819
        push    0
        push    ebx
        mov    ecx, edi
        call    FUN_00698f20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
L_9806:
        push    esi
        push    ebx
        mov    ecx, edi
        call    FUN_00698f20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
L_9819:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 8
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
        fld    dword ptr [esp + 8]
        sub    esp, 8
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [eax + 4]
        fadd    dword ptr [ecx + 8]
        mov    eax, dword ptr [eax + 0x2c]
        mov    edx, ebp
        shl    edx, 4
        mov    al, byte ptr [eax + edx + 0xc]
        fst    dword ptr [esp + 0x20]
        test    al, al
        fstp    dword ptr [edi + 0x10]
        jbe    L_990c
        and    eax, 0xff
        cmp    eax, 1
        mov    dword ptr [esp + 0x1c], 1
        mov    dword ptr [esp + 0x10], eax
        jl    L_98e7
        jmp    L_9881
L_987d:
        mov    eax, dword ptr [esp + 0x10]
L_9881:
        mov    ecx, dword ptr [esp + 0x1c]
        add    eax, ecx
        cdq    
        sub    eax, edx
        mov    esi, eax
        sar    esi, 1
        push    esi
        push    ebp
        mov    ecx, edi
        call    FUN_00699140
        lea    ebx, [esi - 1]
        push    ebx
        push    ebp
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00699140
        fld    dword ptr [eax]
        fcomp    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_98c5
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9900
L_98c5:
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        je    L_98d8
        mov    dword ptr [esp + 0x10], ebx
        jmp    L_98dd
L_98d8:
        inc    esi
        mov    dword ptr [esp + 0x1c], esi
L_98dd:
        mov    edx, dword ptr [esp + 0x1c]
        cmp    dword ptr [esp + 0x10], edx
        jge    L_987d
L_98e7:
        push    0
        push    ebp
        mov    ecx, edi
        call    FUN_00699140
        mov    ecx, eax
        fld    dword ptr [ecx]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_990c
L_9900:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ecx
        pop    ebx
        add    esp, 8
        ret    8
L_990c:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    
    }
}
