/*
 * FUN_0069fdc9 (extent 0x69fdc9-0x69ff69) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_00647970(void);
extern void __cdecl FUN_00647f90(void);
extern void __cdecl FUN_00647fb0(void);
extern void __cdecl FUN_0069ff70(void);

__declspec(naked) void FUN_0069fdc9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    al, al
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
        ret    0xc
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
        sub    esp, 0x24
        push    ebx
        mov    ebx, ecx
        cmp    eax, dword ptr [esp + 0x30]
        je    L_ff62
        push    ebp
        push    esi
        push    edi
L_fe07:
        mov    ecx, dword ptr [esp + 0x38]
        lea    ebp, [ecx + 0x10]
        mov    ecx, dword ptr [ebx]
        mov    esi, dword ptr [ecx + 4]
        test    esi, esi
        mov    edi, ecx
        mov    al, 1
        je    L_fe36
        mov    edx, dword ptr [ebp]
L_fe1e:
        cmp    edx, dword ptr [esi + 0x10]
        setl    al
        test    al, al
        mov    edi, esi
        je    L_fe2f
        mov    esi, dword ptr [esi + 8]
        jmp    L_fe32
L_fe2f:
        mov    esi, dword ptr [esi + 0xc]
L_fe32:
        test    esi, esi
        jne    L_fe1e
L_fe36:
        test    al, al
        mov    dword ptr [esp + 0x14], edi
        je    L_feca
        cmp    edi, dword ptr [ecx + 8]
        jne    L_febd
        cmp    edi, ecx
        je    L_fe70
        test    esi, esi
        jne    L_fe70
        mov    edx, dword ptr [ebp]
        cmp    edx, dword ptr [edi + 0x10]
        jl    L_fe70
        push    ebp
        mov    ecx, ebx
        call    FUN_0069ff70
        mov    esi, eax
        mov    eax, dword ptr [ebx]
        mov    dword ptr [edi + 0xc], esi
        cmp    edi, dword ptr [eax + 0xc]
        jne    L_fe93
        mov    dword ptr [eax + 0xc], esi
        jmp    L_fe93
L_fe70:
        push    ebp
        mov    ecx, ebx
        call    FUN_0069ff70
        mov    esi, eax
        mov    eax, dword ptr [ebx]
        cmp    edi, eax
        mov    dword ptr [edi + 8], esi
        jne    L_fe8b
        mov    dword ptr [eax + 4], esi
        mov    dword ptr [eax + 0xc], esi
        jmp    L_fe93
L_fe8b:
        cmp    edi, dword ptr [eax + 8]
        jne    L_fe93
        mov    dword ptr [eax + 8], esi
L_fe93:
        add    eax, 4
        xor    ecx, ecx
        push    eax
        push    esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 8], ecx
        mov    dword ptr [esi + 0xc], ecx
        call    FUN_00411670
        mov    eax, dword ptr [ebx + 4]
        add    esp, 8
        inc    eax
        mov    dword ptr [ebx + 4], eax
        mov    dword ptr [esp + 0x1c], esi
        mov    byte ptr [esp + 0x20], 1
        jmp    L_ff19
L_febd:
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_004114b0
        add    esp, 4
L_feca:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + 0x10]
        cmp    edx, dword ptr [ebp]
        jge    L_fef7
        push    ebp
        push    edi
        push    esi
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, ebx
        call    FUN_00647fb0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x24], ecx
        mov    byte ptr [esp + 0x28], 1
        push    edx
        jmp    L_ff10
L_fef7:
        lea    eax, [esp + 0x13]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    byte ptr [esp + 0x1b], 0
        call    FUN_00647f90
        push    eax
L_ff10:
        lea    ecx, [esp + 0x20]
        call    FUN_00647970
L_ff19:
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        je    L_ff38
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_ff51
L_ff2d:
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        jne    L_ff2d
        jmp    L_ff51
L_ff38:
        mov    ecx, dword ptr [eax + 4]
        cmp    eax, dword ptr [ecx + 0xc]
        jne    L_ff4a
L_ff40:
        mov    eax, ecx
        mov    ecx, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 0xc]
        je    L_ff40
L_ff4a:
        cmp    dword ptr [eax + 0xc], ecx
        je    L_ff51
        mov    eax, ecx
L_ff51:
        cmp    eax, dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x38], eax
        jne    L_fe07
        pop    edi
        pop    esi
        pop    ebp
L_ff62:
        pop    ebx
        add    esp, 0x24
        ret    8
    }
}
