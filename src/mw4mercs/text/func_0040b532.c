/*
 * FUN_0040b532 (extent 0x40b532-0x40bb05) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040b410(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00417530(void);
extern void __cdecl FUN_00417640(void);
extern void __cdecl FUN_004176a0(void);
extern void __cdecl FUN_004176c0(void);
extern void __cdecl FUN_004176d0(void);
extern void __cdecl FUN_004176e0(void);
extern void __cdecl FUN_004176f0(void);
extern void __cdecl FUN_00417700(void);
extern void __cdecl FUN_00417720(void);
extern void __cdecl FUN_00417740(void);
extern void __cdecl FUN_00417750(void);
extern void __cdecl FUN_00417780(void);
extern void __cdecl FUN_00417790(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040b532(void)
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
        sub    esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebp, ecx
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        xor    edi, edi
        lea    ebx, [ebp + 0x10]
        add    ebp, 0x20
L_b558:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b572
        push    edi
        mov    ecx, eax
        call    FUN_0040b410
        mov    esi, eax
        jmp    L_b574
L_b572:
        xor    esi, esi
L_b574:
        push    esi
        mov    ecx, ebx
        call    FUN_00417530
        push    esi
        mov    ecx, ebp
        call    FUN_00417530
        inc    edi
        cmp    edi, 0x32
        jl    L_b558
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        push    1
        mov    esi, 0x76cff8
        push    ebp
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], esi
        call    FUN_00417640
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], esi
        call    FUN_00417700
        test    eax, eax
        je    L_b5d0
L_b5c3:
        lea    ecx, [esp + 0x28]
        call    FUN_00417700
        test    eax, eax
        jne    L_b5c3
L_b5d0:
        lea    ecx, [esp + 0x10]
        call    FUN_00417700
        test    eax, eax
        je    L_b5ea
L_b5dd:
        lea    ecx, [esp + 0x10]
        call    FUN_00417700
        test    eax, eax
        jne    L_b5dd
L_b5ea:
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        call    FUN_00707e90
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        push    1
        push    ebp
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], esi
        call    FUN_00417640
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], esi
        call    FUN_00417700
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        je    L_b649
L_b634:
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
        lea    ecx, [esp + 0x18]
        call    FUN_00417700
        test    eax, eax
        jne    L_b634
L_b649:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_004176a0
        lea    ecx, [esp + 0x18]
        call    FUN_004176a0
        mov    al, 1
        add    esp, 0x30
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
        nop    
        sub    esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor    ebp, ebp
        lea    ebx, [ecx + 0x10]
        lea    esi, [ecx + 0x20]
L_b67f:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b699
        push    ebp
        mov    ecx, eax
        call    FUN_0040b410
        mov    edi, eax
        jmp    L_b69b
L_b699:
        xor    edi, edi
L_b69b:
        push    edi
        mov    ecx, ebx
        call    FUN_00417530
        push    edi
        mov    ecx, esi
        call    FUN_00417530
        inc    ebp
        cmp    ebp, 0x32
        jl    L_b67f
        push    1
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_00417640
        push    1
        mov    edi, 0x76cff8
        push    esi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00417640
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x28], edi
        call    FUN_004176c0
        lea    ecx, [esp + 0x28]
        call    FUN_004176c0
        lea    ecx, [esp + 0x10]
        call    FUN_00417740
        lea    ecx, [esp + 0x28]
        call    FUN_00417740
        lea    ecx, [esp + 0x10]
        call    FUN_004176d0
        lea    ecx, [esp + 0x28]
        call    FUN_004176d0
        lea    ecx, [esp + 0x10]
        call    FUN_00417740
        lea    ecx, [esp + 0x28]
        call    FUN_00417740
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_00417640
        push    1
        push    esi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00417640
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x28], edi
        call    FUN_00417740
        test    eax, eax
        je    L_b785
L_b75d:
        lea    ecx, [esp + 0x28]
        call    FUN_00417740
        lea    ecx, [esp + 0x10]
        call    FUN_004176e0
        lea    ecx, [esp + 0x28]
        call    FUN_004176e0
        lea    ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        jne    L_b75d
L_b785:
        lea    ecx, [esp + 0x10]
        call    FUN_004176d0
        lea    ecx, [esp + 0x28]
        call    FUN_004176d0
        lea    ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        je    L_b7cc
L_b7a4:
        lea    ecx, [esp + 0x28]
        call    FUN_00417740
        lea    ecx, [esp + 0x10]
        call    FUN_004176f0
        lea    ecx, [esp + 0x28]
        call    FUN_004176f0
        lea    ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        jne    L_b7a4
L_b7cc:
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        push    1
        push    esi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], edi
        call    FUN_00417640
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edi
        call    FUN_00417700
        test    eax, eax
        je    L_b821
L_b80b:
        lea    ecx, [esp + 0x10]
        call    FUN_00417700
        lea    ecx, [esp + 0x28]
        call    FUN_00417700
        test    eax, eax
        jne    L_b80b
L_b821:
        lea    ecx, [esp + 0x28]
        call    FUN_004176d0
        lea    ecx, [esp + 0x10]
        call    FUN_004176d0
        lea    ecx, [esp + 0x28]
        call    FUN_00417720
        test    eax, eax
        je    L_b856
L_b840:
        lea    ecx, [esp + 0x10]
        call    FUN_00417720
        lea    ecx, [esp + 0x28]
        call    FUN_00417720
        test    eax, eax
        jne    L_b840
L_b856:
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_00417640
        push    1
        push    esi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00417640
        mov    dword ptr [esp + 0x28], edi
        xor    ebp, ebp
L_b88a:
        push    ebp
        lea    ecx, [esp + 0x14]
        call    FUN_00417750
        push    ebp
        lea    ecx, [esp + 0x2c]
        call    FUN_00417750
        inc    ebp
        cmp    ebp, 0x32
        jl    L_b88a
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        push    1
        push    esi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], edi
        call    FUN_00417640
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], edi
        call    FUN_00417740
        test    eax, eax
        je    L_b910
L_b8e3:
        lea    ecx, [esp + 0x28]
        call    FUN_00417780
        push    0
        lea    ecx, [esp + 0x14]
        call    FUN_00417750
        test    eax, eax
        je    L_b903
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_b903:
        lea    ecx, [esp + 0x28]
        call    FUN_00417740
        test    eax, eax
        jne    L_b8e3
L_b910:
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_00417640
        push    1
        push    esi
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00417640
        mov    dword ptr [esp + 0x28], edi
        xor    ebp, ebp
L_b944:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b95e
        push    ebp
        mov    ecx, eax
        call    FUN_0040b410
        mov    edi, eax
        jmp    L_b960
L_b95e:
        xor    edi, edi
L_b960:
        push    edi
        mov    ecx, ebx
        call    FUN_00417530
        push    edi
        mov    ecx, esi
        call    FUN_00417530
        inc    ebp
        cmp    ebp, 0x32
        jl    L_b944
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        push    1
        mov    ebp, 0x76cff8
        push    esi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x30], ebp
        call    FUN_00417640
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x10], ebp
        call    FUN_00415cc0
        test    eax, eax
        je    L_b9fb
L_b9ba:
        push    eax
        call    FUN_00415040
        add    esp, 4
        mov    esi, eax
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417750
        lea    ecx, [esp + 0x28]
        call    FUN_00417780
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_00417750
        test    eax, eax
        je    L_b9ee
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_b9ee:
        lea    ecx, [esp + 0x28]
        call    FUN_00415cc0
        test    eax, eax
        jne    L_b9ba
L_b9fb:
        lea    ecx, [esp + 0x10]
        call    FUN_004176a0
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        mov    dword ptr [esp + 0x28], ebp
        xor    esi, esi
L_ba1f:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ba39
        push    esi
        mov    ecx, eax
        call    FUN_0040b410
        mov    edi, eax
        jmp    L_ba3b
L_ba39:
        xor    edi, edi
L_ba3b:
        test    esi, esi
        jne    L_ba49
        push    edi
        mov    ecx, ebx
        call    FUN_00417530
        jmp    L_ba5c
L_ba49:
        lea    ecx, [esp + 0x28]
        call    FUN_004176c0
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417790
L_ba5c:
        inc    esi
        cmp    esi, 0x32
        jl    L_ba1f
        xor    esi, esi
L_ba64:
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417750
        inc    esi
        cmp    esi, 0x32
        jl    L_ba64
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 8]
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        push    1
        push    ebx
        lea    ecx, [esp + 0x30]
        call    FUN_00417640
        mov    dword ptr [esp + 0x28], ebp
        xor    esi, esi
L_ba96:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_bab0
        push    esi
        mov    ecx, eax
        call    FUN_0040b410
        mov    edi, eax
        jmp    L_bab2
L_bab0:
        xor    edi, edi
L_bab2:
        test    esi, esi
        jne    L_bac0
        push    edi
        mov    ecx, ebx
        call    FUN_00417530
        jmp    L_bad3
L_bac0:
        lea    ecx, [esp + 0x28]
        call    FUN_004176d0
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417790
L_bad3:
        inc    esi
        cmp    esi, 0x32
        jl    L_ba96
        xor    esi, esi
L_badb:
        push    esi
        lea    ecx, [esp + 0x2c]
        call    FUN_00417750
        inc    esi
        cmp    esi, 0x32
        jl    L_badb
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 8]
        lea    ecx, [esp + 0x28]
        call    FUN_004176a0
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x30
        ret    
    }
}
