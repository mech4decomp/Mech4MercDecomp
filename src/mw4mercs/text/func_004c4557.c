/*
 * FUN_004c4557 (extent 0x4c4557-0x4c45fb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004c4557(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        push    esi
        lea    ecx, [edi + 0x144]
        call    FUN_004179b0
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, eax
        shr    ecx, 1
        test    cl, 1
        mov    dword ptr [esi + 0x10], edi
        jne    L_45ac
        mov    edx, dword ptr [edi]
        and    eax, 0xffffff7f
        or    eax, 0x48
        mov    ecx, edi
        mov    dword ptr [edi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
L_45ac:
        mov    ecx, dword ptr [esi + 0x18]
        test    cl, 0xc0
        jne    L_45f6
        fld    dword ptr [esi + 0xec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_45dc
        mov    edx, ecx
        shr    edx, 3
        test    dl, 1
        jne    L_45dc
        and    ecx, 0xffffffbf
        or    ecx, 0x80
        jmp    L_45e5
L_45dc:
        and    ecx, 0xffffff7f
        or    ecx, 0x44
L_45e5:
        mov    eax, dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
L_45f6:
        pop    edi
        pop    esi
        ret    4
    }
}
