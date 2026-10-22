/*
 * FUN_004fec6b (extent 0x4fec6b-0x4ff015) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern char   g_007dc955;
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004c8510(void);
extern void __cdecl FUN_004ff015(void);
extern void __cdecl FUN_004ff081(void);

__declspec(naked) void FUN_004fec6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx]
        push    4
        lea    edx, [esp + 4]
        push    edx
        mov    dword ptr [esp + 0xc], 3
        mov    dword ptr [esp + 8], 0x4f424223
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        add    esp, 8
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
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ebx + 0x14]
        mov    ebp, dword ptr [edi + 0x128]
        test    ebp, ebp
        je    L_ecce
        mov    al, byte ptr [g_007dc955]
        test    al, al
        je    L_ecd4
L_ecce:
        mov    ebp, dword ptr [edi + 0x124]
L_ecd4:
        test    ebp, ebp
        je    L_ed1c
        fld    dword ptr [ebp + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ed2c
        mov    eax, dword ptr [edi + 0xd8]
        add    eax, 0x80
        lea    esi, [ebp + 0x50]
        push    eax
        add    ebp, 0x10
        push    ebp
        mov    ecx, esi
        call    FUN_00417d80
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    0x3f
        push    ecx
        push    edx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        add    esp, 0x14
L_ed1c:
        mov    eax, dword ptr [ebx + 0x18]
        pop    edi
        pop    esi
        and    eax, 0xffffc7ff
        pop    ebp
        mov    dword ptr [ebx + 0x18], eax
        pop    ebx
        ret    
L_ed2c:
        mov    ebx, dword ptr [ebp + 0x90]
L_ed32:
        test    ebx, ebx
        je    L_ed94
        mov    ecx, dword ptr [ebx]
        test    ecx, ecx
        mov    ebx, dword ptr [ebx + 4]
        je    L_ed94
        fld    dword ptr [ecx + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ed32
        mov    eax, dword ptr [ecx + 0x98]
        cmp    eax, dword ptr [ebp + 0x98]
        jne    L_ed32
        mov    edx, dword ptr [edi + 0xd8]
        lea    esi, [ecx + 0x50]
        add    edx, 0x80
        add    ecx, 0x10
        push    edx
        push    ecx
        mov    ecx, esi
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    0x3f
        push    eax
        push    ecx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        add    esp, 0x14
        jmp    L_ed32
L_ed94:
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [eax + 0x18]
        pop    edi
        pop    esi
        and    ecx, 0xffffc7ff
        pop    ebp
        mov    dword ptr [eax + 0x18], ecx
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x20]
        push    ebx
        mov    ebx, dword ptr [eax + 0x14]
        mov    edx, dword ptr [ebx + 0x128]
        test    edx, edx
        push    ebp
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], edx
        je    L_edd5
        mov    al, byte ptr [g_007dc955]
        test    al, al
        je    L_ede1
L_edd5:
        mov    ecx, dword ptr [ebx + 0x124]
        mov    dword ptr [esp + 0x10], ecx
        mov    edx, ecx
L_ede1:
        test    edx, edx
        je    L_ee3c
        fld    dword ptr [edx + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_eeaa
        mov    edi, dword ptr [edx + 0x90]
        test    edi, edi
        je    L_ee08
        cmp    dword ptr [edi], 0
        jne    L_ee54
L_ee08:
        mov    eax, dword ptr [ebx + 0xd8]
        lea    esi, [edx + 0x50]
        add    eax, 0x80
        push    eax
        add    edx, 0x10
        push    edx
        mov    ecx, esi
        call    FUN_00417d80
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x24]
        push    0x3f
        push    ecx
        push    edx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        add    esp, 0x14
L_ee3c:
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [eax + 0x18]
        pop    edi
        pop    esi
        and    ecx, 0xffffc7ff
        pop    ebp
        mov    dword ptr [eax + 0x18], ecx
        pop    ebx
        add    esp, 0x10
        ret    
L_ee54:
        mov    ebp, dword ptr [esp + 0x28]
L_ee58:
        test    edi, edi
        je    L_ee3c
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_ee3c
        mov    ecx, dword ptr [eax + 0x98]
        cmp    ecx, dword ptr [edx + 0x98]
        jne    L_ee58
        mov    edx, dword ptr [ebx + 0xd8]
        lea    esi, [eax + 0x50]
        add    edx, 0x80
        push    edx
        add    eax, 0x10
        push    eax
        mov    ecx, esi
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x24]
        push    0x3f
        push    ebp
        push    eax
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0x14
        jmp    L_ee58
L_eeaa:
        mov    ecx, dword ptr [edx + 0x90]
        mov    ebp, dword ptr [esp + 0x28]
        jmp    L_eeba
L_eeb6:
        mov    ecx, dword ptr [esp + 0x1c]
L_eeba:
        test    ecx, ecx
        je    L_ee3c
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x1c], ecx
        je    L_ee3c
        mov    ecx, dword ptr [eax + 0x98]
        cmp    ecx, dword ptr [edx + 0x98]
        jne    L_eeb6
        mov    edi, dword ptr [eax + 0x90]
        test    edi, edi
        je    L_eef0
        cmp    dword ptr [edi], 0
        jne    L_ef27
L_eef0:
        mov    edx, dword ptr [ebx + 0xd8]
        lea    esi, [eax + 0x50]
        add    edx, 0x80
        push    edx
        add    eax, 0x10
        push    eax
        mov    ecx, esi
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x24]
        push    0x3f
        push    ebp
        push    eax
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0x14
        jmp    L_eeb6
L_ef27:
        test    edi, edi
        je    L_eeb6
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_eeb6
        mov    ecx, dword ptr [ebx + 0xd8]
        add    ecx, 0x80
        lea    esi, [eax + 0x50]
        push    ecx
        add    eax, 0x10
        push    eax
        mov    ecx, esi
        call    FUN_00417d80
        mov    edx, dword ptr [esp + 0x24]
        push    0x3f
        push    ebp
        push    edx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0x14
        jmp    L_ef27
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        mov    eax, dword ptr [esp + 0x2c]
        push    ebx
        mov    ebx, dword ptr [eax + 0x14]
        push    ebp
        push    esi
        mov    esi, dword ptr [ebx + 0x128]
        test    esi, esi
        push    edi
        mov    dword ptr [esp + 0x10], esi
        je    L_ef95
        mov    al, byte ptr [g_007dc955]
        test    al, al
        je    L_efa1
L_ef95:
        mov    ecx, dword ptr [ebx + 0x124]
        mov    dword ptr [esp + 0x10], ecx
        mov    esi, ecx
L_efa1:
        test    esi, esi
        je    L_effd
        fld    dword ptr [esi + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    FUN_004ff081
        mov    ecx, dword ptr [esi + 0x90]
        test    ecx, ecx
        je    L_efc8
        cmp    dword ptr [ecx], 0
        __emit 0x75  // jne short FUN_004ff015 - MSVC6 emits rel32 (0f 85) for extern fn; ref uses 75 4d
        __emit 0x4D
L_efc8:
        mov    edx, dword ptr [ebx + 0xd8]
        add    edx, 0x80
        lea    edi, [esi + 0x50]
        push    edx
        add    esi, 0x10
        push    esi
        mov    ecx, edi
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x30]
        push    0x3f
        push    eax
        push    ecx
        push    0x7dc8f0
        push    edi
        call    FUN_004c8510
        add    esp, 0x14
L_effd:
        mov    eax, dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [eax + 0x18]
        pop    edi
        pop    esi
        and    ecx, 0xffffc7ff
        pop    ebp
        mov    dword ptr [eax + 0x18], ecx
        pop    ebx
        add    esp, 0x1c
        ret    
    }
}
