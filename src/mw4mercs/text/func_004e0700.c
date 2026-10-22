/*
 * FUN_004e0700 (extent 0x4e0700-0x4e08f5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417b00(void);
extern void __cdecl FUN_004e03c0(void);
extern void __cdecl FUN_004e0820(void);

__declspec(naked) void FUN_004e0700(void)
{
    __asm {
        push    esi
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0745
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    0
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x14
L_0745:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x14
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
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_07a2
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    1
        push    edx
        push    0
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_07a2:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
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
        nop    
        nop    
        push    esi
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0802
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    2
        push    edx
        push    0
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_0802:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
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
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x10
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 8]
        mov    edx, dword ptr [edi + 0x10]
        test    edx, edx
        mov    eax, dword ptr [edi + 0x18]
        mov    eax, dword ptr [eax + 8]
        jne    L_0859
        cmp    dword ptr [edi + 0x14], 0xbff00000
        jne    L_0859
        lea    edx, [eax + eax*4]
        push    edi
        lea    ecx, [ecx + edx*8 + 0x14]
        call    FUN_004179b0
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
L_0859:
        lea    eax, [eax + eax*4]
        mov    edx, dword ptr [ecx + eax*8 + 0x1c]
        lea    ecx, [ecx + eax*8 + 0x1c]
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0xc], 0x773ae0
        mov    edx, dword ptr [ecx + 4]
        test    edx, edx
        mov    dword ptr [esp + 0x14], edx
        je    L_08e7
        mov    eax, dword ptr [edx]
        test    eax, eax
        je    L_08e7
        fld    qword ptr [eax + 0x10]
        fcomp    qword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_08e7
L_0892:
        mov    edx, dword ptr [edx + 8]
        test    edx, edx
        mov    dword ptr [esp + 0x14], edx
        je    L_08b2
        mov    esi, dword ptr [edx]
        test    esi, esi
        je    L_08b2
        fld    qword ptr [esi + 0x10]
        fcomp    qword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_08ca
        jmp    L_0892
L_08b2:
        mov    eax, dword ptr [ecx]
        push    edi
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00417b00
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
L_08ca:
        test    esi, esi
        je    L_08d5
        mov    ecx, dword ptr [edx + 4]
        mov    dword ptr [esp + 0x14], ecx
L_08d5:
        push    edi
        lea    ecx, [esp + 0x10]
        call    FUN_00417b00
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
L_08e7:
        push    edi
        call    FUN_004179b0
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
