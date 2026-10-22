/*
 * FUN_00699042 (extent 0x699042-0x69915e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00699140(void);

__declspec(naked) void FUN_00699042(void)
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    ebp, ebx
        shl    ebp, 4
        mov    al, byte ptr [ecx + ebp + 0xc]
        test    al, al
        jne    L_9074
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    4
L_9074:
        push    edi
        xor    ecx, ecx
        xor    edi, edi
        test    al, al
        jbe    L_90b8
L_907d:
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00699140
        mov    edx, dword ptr [esi + 0x18]
        mov    ecx, eax
        mov    eax, dword ptr [edx + 4]
        fld    dword ptr [ecx]
        fcomp    dword ptr [eax + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_90a5
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00699140
        mov    ecx, eax
L_90a5:
        xor    edx, edx
        mov    edx, dword ptr [esi + 0x18]
        mov    eax, dword ptr [edx + 0x2c]
        xor    edx, edx
        mov    dl, byte ptr [eax + ebp + 0xc]
        inc    edi
        cmp    edi, edx
        jl    L_907d
L_90b8:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ecx
        pop    ebx
        ret    4
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        xor    eax, eax
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    eax, ebx
        shl    eax, 4
        mov    al, byte ptr [eax + edx + 0xc]
        test    al, al
        jne    L_90f4
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    4
L_90f4:
        and    eax, 0xff
        xor    ecx, ecx
        dec    eax
        push    edi
        mov    edi, eax
        js    L_912c
L_9101:
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00699140
        mov    ecx, eax
        mov    eax, dword ptr [esi + 0x18]
        fld    dword ptr [ecx]
        mov    edx, dword ptr [eax + 4]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_9129
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00699140
        mov    ecx, eax
L_9129:
        dec    edi
        jns    L_9101
L_912c:
        pop    edi
        pop    esi
        mov    eax, ecx
        pop    ebx
        ret    4
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
        mov    eax, dword ptr [ecx + 0x18]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x2c]
        shl    ecx, 4
        mov    ecx, dword ptr [edx + ecx + 8]
        add    ecx, dword ptr [eax + 0x24]
        mov    edx, dword ptr [esp + 8]
        lea    eax, [ecx + edx*4]
        ret    8
    }
}
