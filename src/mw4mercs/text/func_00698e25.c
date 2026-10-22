/*
 * FUN_00698e25 (extent 0x698e25-0x698f80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00698f20(void);
extern void __cdecl FUN_00699140(void);

__declspec(naked) void FUN_00698e25(void)
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
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x18]
        mov    ecx, dword ptr [eax + 0x2c]
        mov    ebx, ebp
        shl    ebx, 4
        mov    al, byte ptr [ecx + ebx + 0xc]
        test    al, al
        jne    L_8e54
        pop    edi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    4
L_8e54:
        push    esi
        xor    esi, esi
        test    al, al
        mov    dword ptr [esp + 0x14], 0
        jbe    L_8ea4
L_8e63:
        push    esi
        push    ebp
        mov    ecx, edi
        call    FUN_00699140
        fld    dword ptr [eax]
        mov    ecx, dword ptr [edi + 0x18]
        mov    edx, dword ptr [ecx + 4]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_8e97
        mov    eax, dword ptr [ecx + 0x2c]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + ebx + 0xc]
        inc    esi
        cmp    esi, ecx
        jl    L_8e63
        mov    eax, dword ptr [esp + 0x14]
        pop    esi
        pop    edi
        pop    ebp
        pop    ebx
        ret    4
L_8e97:
        push    esi
        push    ebp
        mov    ecx, edi
        call    FUN_00698f20
        mov    dword ptr [esp + 0x14], eax
L_8ea4:
        mov    eax, dword ptr [esp + 0x14]
        pop    esi
        pop    edi
        pop    ebp
        pop    ebx
        ret    4
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    eax, ebx
        shl    eax, 4
        mov    al, byte ptr [eax + edx + 0xc]
        test    al, al
        jne    L_8ed2
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    4
L_8ed2:
        push    ebp
        and    eax, 0xff
        xor    ebp, ebp
        dec    eax
        push    edi
        mov    edi, eax
        js    L_8f12
L_8ee0:
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00699140
        fld    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [ecx + 4]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 1
        jne    L_8f07
        dec    edi
        jns    L_8ee0
        pop    edi
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_8f07:
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_00698f20
        mov    ebp, eax
L_8f12:
        pop    edi
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x2c]
        shl    eax, 4
        add    edx, eax
        mov    eax, dword ptr [edx]
        imul    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, dword ptr [edx + 4]
        mov    edx, dword ptr [ecx + 0x1c]
        add    eax, esi
        add    eax, edx
        pop    esi
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
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [eax + edx]
        cmp    al, 0xff
        jne    L_8f63
        xor    eax, eax
        ret    4
L_8f63:
        mov    ecx, dword ptr [ecx + 0x18]
        push    esi
        mov    esi, dword ptr [ecx + 0x2c]
        shl    edx, 4
        mov    edx, dword ptr [esi + edx + 8]
        and    eax, 0xff
        lea    eax, [edx + eax*4]
        add    eax, dword ptr [ecx + 0x24]
        pop    esi
        ret    4
    }
}
