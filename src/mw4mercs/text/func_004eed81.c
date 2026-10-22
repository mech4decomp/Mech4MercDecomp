/*
 * FUN_004eed81 (extent 0x4eed81-0x4eef61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_00498ff0(void);
extern void __cdecl FUN_004f2350(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004eed81(void)
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
        sub    esp, 0x30
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x24]
        mov    ebp, dword ptr [esi + 0x144]
        mov    byte ptr [esp + 0xf], 0
        test    byte ptr [ebp + 0x9c], 1
        je    L_ee5c
        mov    ecx, dword ptr [edi + 0x30]
        mov    eax, dword ptr [ecx]
        lea    edx, [esp + 0x10]
        push    edx
        mov    edx, dword ptr [edi + 0x28]
        push    edx
        call    dword ptr [eax + 8]
        push    0
        call    FUN_00707e70
        lea    eax, [esi + 0x80]
        mov    dword ptr [esp + 0x30], eax
        lea    ecx, [esi + 0xb0]
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x34], ecx
        lea    edx, [esp + 0x10]
        fstp    qword ptr [esp + 0x1c]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0
        mov    dword ptr [esp + 0x30], 0xbf800000
        mov    dword ptr [esp + 0x3c], edx
        call    FUN_00498ff0
        test    al, al
        mov    byte ptr [esp + 0xf], al
        je    L_ee38
        fld    dword ptr [esi + 0xec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ee38
        mov    ecx, dword ptr [esi + 0x18]
        and    ecx, 0xffffff7f
        or    ecx, 0x48
        jmp    L_ee44
L_ee38:
        mov    ecx, dword ptr [esi + 0x18]
        and    ecx, 0xffffffbf
        or    ecx, 0x80
L_ee44:
        mov    edx, dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, esi
        call    dword ptr [esi + 0x1c]
        jmp    L_ee75
L_ee5c:
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        or    eax, 0xc0
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
L_ee75:
        mov    ecx, dword ptr [edi + 0x2c]
        test    ecx, ecx
        je    L_ee9c
        mov    edx, dword ptr [ebp + 0x9c]
        shr    edx, 1
        test    dl, 1
        je    L_ee8e
        mov    byte ptr [esp + 0xf], 1
L_ee8e:
        mov    eax, dword ptr [ecx]
        lea    edx, [esp + 0xf]
        push    edx
        mov    edx, dword ptr [edi + 0x28]
        push    edx
        call    dword ptr [eax + 4]
L_ee9c:
        pop    edi
        pop    esi
        pop    ebp
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1c
        push    ebx
        push    edi
        push    0x774c0c
        mov    ebx, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_eecc
        int 3    
L_eecc:
        push    esi
        mov    esi, dword ptr [ebx + 0x24]
        mov    edi, dword ptr [esi + 0x144]
        push    0
        call    FUN_00707e70
        mov    ecx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ecx + 0x2c]
        add    esi, 0x80
        sub    eax, 4
        fstp    qword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 8], esi
        mov    dword ptr [ebp - 0x14], 0xbf800000
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x10], 0
        mov    dword ptr [ebp - 0xc], 0xbf800000
        pop    esi
        je    L_ef45
        dec    eax
        je    L_ef36
        dec    eax
        je    L_ef27
        push    ecx
        mov    ecx, ebx
        call    FUN_004f2350
        pop    edi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_ef27:
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x10]
        pop    edi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_ef36:
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 8]
        pop    edi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_ef45:
        mov    eax, dword ptr [edi]
        lea    ecx, [ebp - 0x1c]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 4]
        pop    edi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
