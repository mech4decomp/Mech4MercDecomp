/*
 * FUN_0040b4d2 (extent 0x40b4d2-0x40b661) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040b410(void);
extern void __cdecl FUN_0040b450(void);
extern void __cdecl FUN_0040b4b0(void);
extern void __cdecl FUN_0040b540(void);
extern void __cdecl FUN_0040b670(void);
extern void __cdecl FUN_00417530(void);
extern void __cdecl FUN_00417640(void);
extern void __cdecl FUN_004176a0(void);
extern void __cdecl FUN_00417700(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_0040b4d2(void)
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
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b450
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b540
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b4b0
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
        sub    esp, 0x30
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b450
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b670
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_0040b4b0
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
    }
}
