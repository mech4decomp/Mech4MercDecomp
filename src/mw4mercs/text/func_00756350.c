/*
 * FUN_00756350 (extent 0x756350-0x7564b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern float  g_0076d064;
extern float  g_0076d978;
extern void __cdecl FUN_00749c30(void);
extern void __cdecl FUN_00756140(void);
extern void __cdecl FUN_00756350(void);
extern void __cdecl FUN_007564c0(void);
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00757c70(void);

__declspec(naked) void FUN_00756350(void)
{
    __asm {
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    ecx, esi
        call    FUN_00756940
        test    al, al
        jne    L_6373
        mov    al, byte ptr [esi + 0x82]
        test    al, al
        je    L_63ae
L_6373:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_639d
        push    eax
        call    FUN_00757c70
        mov    eax, dword ptr [esi + 0x70]
        push    0x858ac8
        mov    byte ptr [esi + 0x82], 0
        mov    dword ptr [eax + 0x2c], 0
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
L_639d:
        mov    ecx, dword ptr [esi + 0x70]
        mov    edx, dword ptr [ecx + 0xec]
        push    4
        push    edx
        call    FUN_00749c30
L_63ae:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    esi
        push    edi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    ecx, esi
        call    FUN_007564c0
        xor    ebx, ebx
        cmp    eax, ebx
        je    L_63e8
        push    eax
        mov    ecx, esi
        call    FUN_00756140
L_63e8:
        mov    ecx, dword ptr [esi + 0x70]
        mov    eax, dword ptr [ecx]
        cmp    eax, 4
        je    L_644d
        cmp    eax, 6
        je    L_644d
        cmp    byte ptr [ecx + 0x38], bl
        mov    edi, dword ptr [ecx + 0xbc]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [esp + 0xc], edi
        je    L_641b
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        fidiv    dword ptr [esp + 0xc]
        jmp    L_6431
L_641b:
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        fidiv    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d978]
L_6431:
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jne    L_64a0
        cmp    byte ptr [esi + 0x80], bl
        je    L_6499
        sub    edx, edi
        mov    dword ptr [ecx + 0x2c], edx
        jmp    L_64a0
L_644d:
        mov    al, byte ptr [ecx + 0x38]
        mov    edx, dword ptr [ecx + 0x2c]
        neg    al
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], ebx
        sbb    eax, eax
        and    eax, 0xfffffffd
        add    eax, 4
        imul    eax, dword ptr [ecx + 0x14]
        mov    dword ptr [esp + 0x10], eax
        fidiv    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        jne    L_64a0
        cmp    byte ptr [esi + 0x80], bl
        je    L_6499
        sub    edx, dword ptr [ecx + 0xbc]
        mov    dword ptr [ecx + 0x2c], edx
        jmp    L_64a0
L_6499:
        mov    ecx, esi
        call    FUN_00756350
L_64a0:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
