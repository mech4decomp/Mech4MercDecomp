/*
 * FUN_004ef251 (extent 0x4ef251-0x4ef43b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dc814;
extern int    g_007dc83c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);
extern void __cdecl FUN_004f2350(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004ef251(void)
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
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 0x24]
        push    edi
        mov    edi, dword ptr [esi + 0x144]
        mov    byte ptr [esp + 0xf], 0
        test    byte ptr [edi + 0x9c], 1
        je    L_f313
        push    0
        call    FUN_00707e70
        mov    edx, dword ptr [edi]
        lea    eax, [esi + 0x80]
        mov    dword ptr [esp + 0x24], eax
        lea    ecx, [esi + 0xb0]
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x28], ecx
        fstp    qword ptr [esp + 0x10]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0xbf800000
        mov    dword ptr [esp + 0x20], 0
        mov    dword ptr [esp + 0x24], 0xbf800000
        call    dword ptr [edx + 0xc]
        test    al, al
        mov    byte ptr [esp + 0xf], al
        je    L_f2ef
        fld    dword ptr [esi + 0xec]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f2ef
        mov    ecx, dword ptr [esi + 0x18]
        and    ecx, 0xffffff7f
        or    ecx, 0x48
        jmp    L_f2fb
L_f2ef:
        mov    ecx, dword ptr [esi + 0x18]
        and    ecx, 0xffffffbf
        or    ecx, 0x80
L_f2fb:
        mov    edx, dword ptr [esi]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, esi
        call    dword ptr [esi + 0x1c]
        jmp    L_f32c
L_f313:
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi]
        or    eax, 0xc0
        mov    ecx, esi
        mov    dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
L_f32c:
        mov    ecx, dword ptr [ebx + 0x2c]
        test    ecx, ecx
        je    L_f341
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0xf]
        push    eax
        mov    eax, dword ptr [ebx + 0x28]
        push    eax
        call    dword ptr [edx + 4]
L_f341:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x20
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x24]
        mov    ebx, dword ptr [esi + 0x144]
        push    0
        call    FUN_00707e70
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [ecx + 0x2c]
        add    esi, 0x80
        sub    eax, 4
        fstp    qword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x14], 0xbf800000
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0xbf800000
        je    L_f3d9
        dec    eax
        je    L_f3c9
        dec    eax
        je    L_f3b9
        push    ecx
        mov    ecx, edi
        call    FUN_004f2350
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    4
L_f3b9:
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x10]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    4
L_f3c9:
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 8]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    4
L_f3d9:
        mov    eax, dword ptr [ebx]
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1c
        ret    4
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f430
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774c40
        push    0x21f
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc814], eax
        ret    
L_f430:
        mov    dword ptr [g_007dc814], 0
        ret    
    }
}
