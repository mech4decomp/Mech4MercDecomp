/*
 * FUN_00682e97 (extent 0x682e97-0x682f64) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005ef700(void);
extern void __cdecl FUN_005ef710(void);
extern void __cdecl FUN_00682e30(void);
extern void __cdecl FUN_00682ea0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00682e97(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x3f8]
        xor    eax, eax
L_2eac:
        test    ecx, ecx
        je    L_2ebc
        mov    edx, dword ptr [ecx]
        test    edx, edx
        mov    ecx, dword ptr [ecx + 4]
        je    L_2ebc
        inc    eax
        jmp    L_2eac
L_2ebc:
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x10
        mov    eax, dword ptr [ebp + 8]
        push    esi
        mov    esi, dword ptr [eax + 0x3f8]
        push    edi
L_2ed4:
        test    esi, esi
        je    L_2f20
        mov    edi, dword ptr [esi]
        test    edi, edi
        mov    esi, dword ptr [esi + 4]
        je    L_2f20
        mov    ecx, edi
        call    FUN_005ef700
        fld    qword ptr [ebp + 0x14]
        fsub    qword ptr [ebp + 0xc]
        push    0
        fmulp st(1), st(0)
        fadd    qword ptr [ebp + 0xc]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        mov    ecx, edi
        fstp    qword ptr [esp + 0x10]
        call    FUN_005ef710
        fadd    qword ptr [esp + 8]
        fcomp    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_2ed4
        mov    al, 1
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
L_2f20:
        pop    edi
        xor    al, al
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_00682e30
        push    esi
        mov    edi, eax
        call    FUN_00682ea0
        add    esp, 0x18
        cmp    edi, eax
        sbb    eax, eax
        pop    edi
        neg    eax
        pop    esi
        ret    
    }
}
