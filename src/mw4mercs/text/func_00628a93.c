/*
 * FUN_00628a93 (extent 0x628a93-0x628cbe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_0055f020(void);
extern void __cdecl FUN_0055f280(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00713d70(void);

__declspec(naked) void FUN_00628a93(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    ebx
        mov    ebx, dword ptr [g_007dab40]
        push    esi
        xor    eax, ebx
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x589]
        test    dl, dl
        je    L_8b45
        mov    edx, dword ptr [eax + 0x2c]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x6b0]
        test    ecx, ecx
        je    L_8c70
        mov    eax, dword ptr [eax + 0x2c]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x6b0]
        add    ecx, 0x27c
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_8c70
        add    edi, 0x44
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_8b16
        mov    ecx, edi
        call    FUN_0041fcb0
L_8b16:
        push    esi
        mov    ecx, edi
        call    FUN_0041fcd0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x2c]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x6b0]
        push    0
        call    FUN_004c3d50
        pop    edi
        pop    esi
        pop    ebx
        ret    
L_8b45:
        push    ebp
        call    FUN_00713d10
        call    FUN_0055f020
        mov    al, byte ptr [edi + 0x16b]
        test    al, al
        jne    L_8c16
        mov    eax, dword ptr [edi + 0x164]
        test    eax, eax
        je    L_8be1
        mov    cl, byte ptr [eax + 0x2f8]
        test    cl, cl
        jne    L_8be1
        mov    ebx, dword ptr [edi + 0xf8]
        mov    ebp, dword ptr [edi + 0xfc]
        cmp    ebx, ebp
        je    L_8c27
L_8b86:
        mov    esi, dword ptr [ebx]
        cmp    dword ptr [edi + 0x154], esi
        je    L_8bd8
        cmp    dword ptr [edi + 0x138], esi
        je    L_8bcb
        cmp    dword ptr [edi + 0x14c], esi
        je    L_8bcb
        cmp    dword ptr [edi + 0x158], esi
        je    L_8bcb
        cmp    dword ptr [edi + 0x15c], esi
        je    L_8bcb
        mov    al, byte ptr [esi + 4]
        test    al, al
        je    L_8bd8
        lea    ecx, [esi + 0xc]
        call    FUN_0041fd80
        test    eax, eax
        je    L_8bd8
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx]
        jmp    L_8bd8
L_8bcb:
        mov    al, byte ptr [esi + 4]
        test    al, al
        je    L_8bd8
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax]
L_8bd8:
        add    ebx, 4
        cmp    ebx, ebp
        jne    L_8b86
        jmp    L_8c27
L_8be1:
        mov    ecx, dword ptr [edi + 0x138]
        mov    al, byte ptr [ecx + 4]
        test    al, al
        je    L_8bf2
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx]
L_8bf2:
        mov    ecx, dword ptr [edi + 0x15c]
        mov    al, byte ptr [ecx + 4]
        test    al, al
        je    L_8c03
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax]
L_8c03:
        mov    ecx, dword ptr [edi + 0x148]
        mov    al, byte ptr [ecx + 4]
        test    al, al
        je    L_8c27
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx]
        jmp    L_8c27
L_8c16:
        mov    ecx, dword ptr [edi + 0x14c]
        mov    al, byte ptr [ecx + 4]
        test    al, al
        je    L_8c27
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax]
L_8c27:
        call    FUN_0055f280
        mov    esi, dword ptr [edi + 0x154]
        mov    al, byte ptr [esi + 4]
        test    al, al
        pop    ebp
        je    L_8c4c
        lea    ecx, [esi + 0xc]
        call    FUN_0041fd80
        test    eax, eax
        je    L_8c4c
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx]
L_8c4c:
        mov    edi, dword ptr [edi + 0x158]
        mov    al, byte ptr [edi + 4]
        test    al, al
        je    L_8c6b
        lea    ecx, [edi + 0xc]
        call    FUN_0041fd80
        test    eax, eax
        je    L_8c6b
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax]
L_8c6b:
        call    FUN_00713d70
L_8c70:
        pop    edi
        pop    esi
        pop    ebx
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x3c]
        test    eax, eax
        mov    byte ptr [esi + 0x16d], bl
        jne    L_8ca0
        mov    ecx, dword ptr [esi + 0x154]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
L_8ca0:
        test    bl, bl
        mov    ecx, dword ptr [esi + 0x154]
        je    L_8cb4
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        pop    esi
        pop    ebx
        ret    4
L_8cb4:
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        pop    esi
        pop    ebx
        ret    4
    }
}
