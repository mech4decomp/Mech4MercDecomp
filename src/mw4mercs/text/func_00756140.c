/*
 * FUN_00756140 (extent 0x756140-0x7563bb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_007266d0(void);
extern void __cdecl FUN_00726940(void);
extern void __cdecl FUN_00749c30(void);
extern void __cdecl FUN_00756350(void);
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00757c70(void);

__declspec(naked) void FUN_00756140(void)
{
    __asm {
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        xor    ebx, ebx
        push    edi
        push    0x858ac8
        mov    esi, ecx
        mov    dword ptr [esp + 0x18], ebx
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x1c], ebx
        mov    dword ptr [esp + 0x20], ebx
        xor    ebp, ebp
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi + 0x84]
        mov    edi, dword ptr [esi]
        mov    ecx, dword ptr [edi]
        push    ebp
        lea    edx, [esp + 0x20]
        push    edx
        lea    edx, [esp + 0x18]
        push    edx
        lea    edx, [esp + 0x24]
        push    edx
        lea    edx, [esp + 0x24]
        push    edx
        mov    edx, dword ptr [esp + 0x38]
        push    edx
        push    eax
        push    edi
        call    dword ptr [ecx + 0x2c]
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_61d0
        mov    ecx, dword ptr [esi + 0x70]
        mov    dl, byte ptr [ecx + 0x38]
        test    dl, dl
        push    ebp
        je    L_61ba
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x80]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    FUN_007266d0
        jmp    L_61ce
L_61ba:
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x80]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    FUN_00726940
L_61ce:
        mov    ebx, eax
L_61d0:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_6218
        mov    ebp, dword ptr [esi + 0x70]
        mov    cl, byte ptr [ebp + 0x38]
        test    cl, cl
        push    0
        je    L_61fc
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x80]
        push    ecx
        push    edx
        push    eax
        mov    ecx, ebp
        call    FUN_007266d0
        jmp    L_6212
L_61fc:
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x80]
        push    ecx
        push    edx
        push    eax
        mov    ecx, ebp
        call    FUN_00726940
L_6212:
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x10]
L_6218:
        cmp    ebx, -1
        je    L_6319
        cmp    ebp, -1
        je    L_6319
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edi]
        push    ebp
        push    eax
        push    ebx
        push    edx
        push    edi
        call    dword ptr [ecx + 0x4c]
        mov    eax, dword ptr [esi + 0x70]
        mov    eax, dword ptr [eax]
        cmp    eax, 4
        je    L_62a0
        cmp    eax, 6
        je    L_62a0
        mov    eax, dword ptr [esi + 0x84]
        add    eax, ebp
        add    eax, ebx
        xor    edx, edx
        div    dword ptr [esi + 0x8c]
        mov    ecx, dword ptr [edi]
        push    0
        lea    ebx, [esi + 0x7c]
        push    ebx
        push    edi
        mov    dword ptr [esi + 0x84], edx
        call    dword ptr [ecx + 0x10]
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [esi + 0x78]
        cmp    eax, ecx
        mov    edx, dword ptr [esi + 0x70]
        mov    edi, eax
        jb    L_6286
        sub    edi, ecx
        add    dword ptr [edx + 0x2c], edi
        mov    dword ptr [esi + 0x78], eax
        jmp    L_6330
L_6286:
        mov    ebx, dword ptr [esi + 0x8c]
        sub    edi, ecx
        mov    ecx, dword ptr [edx + 0x2c]
        add    edi, ebx
        add    ecx, edi
        mov    dword ptr [edx + 0x2c], ecx
        mov    dword ptr [esi + 0x78], eax
        jmp    L_6330
L_62a0:
        mov    eax, dword ptr [esi + 0x84]
        add    eax, ebp
        add    eax, ebx
        xor    edx, edx
        div    dword ptr [esi + 0x8c]
        push    0
        lea    ebx, [esi + 0x7c]
        push    ebx
        push    edi
        mov    dword ptr [esi + 0x84], edx
        mov    edx, dword ptr [edi]
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [esi + 0x78]
        cmp    eax, ecx
        jbe    L_62d6
        mov    edx, dword ptr [esi + 0x70]
        mov    edi, eax
        sub    edi, ecx
        jmp    L_62e7
L_62d6:
        jae    L_62ea
        mov    ebx, dword ptr [esi + 0x8c]
        mov    edx, dword ptr [esi + 0x70]
        mov    edi, eax
        sub    edi, ecx
        add    edi, ebx
L_62e7:
        add    dword ptr [edx + 0x2c], edi
L_62ea:
        mov    dword ptr [esi + 0x78], eax
        mov    al, byte ptr [esi + 0x80]
        test    al, al
        je    L_6330
        mov    esi, dword ptr [esi + 0x70]
        mov    al, byte ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x2c]
        neg    al
        sbb    eax, eax
        and    eax, 0xfffffffd
        add    eax, 4
        imul    eax, dword ptr [esi + 0x14]
        cmp    ecx, eax
        jbe    L_6330
        sub    ecx, eax
        mov    dword ptr [esi + 0x2c], ecx
        jmp    L_6330
L_6319:
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [edi]
        push    0
        push    eax
        push    0
        push    edx
        push    edi
        call    dword ptr [ecx + 0x4c]
        mov    ecx, esi
        call    FUN_00756350
L_6330:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
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
    }
}
