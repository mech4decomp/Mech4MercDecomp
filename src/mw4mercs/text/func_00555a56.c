/*
 * FUN_00555a56 (extent 0x555a56-0x555cca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00559ab0(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_00627a00(void);
extern void __cdecl FUN_00627a80(void);
extern void __cdecl FUN_00627ad0(void);
extern void __cdecl FUN_00627b40(void);
extern void __cdecl FUN_00627b70(void);

__declspec(naked) void FUN_00555a56(void)
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
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 0x384]
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_5bb6
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_5bb6
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_5bb6
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle    L_5bb6
        mov    al, byte ptr [edi + 0x510]
        test    al, al
        je    L_5bb6
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        add    eax, 0x40
        xor    ecx, 0x85739531
        je    L_5bb6
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x50]
        mov    dl, byte ptr [ecx + 0x28]
        test    dl, dl
        mov    ecx, dword ptr [eax]
        je    L_5b5f
        xor    ecx, 0x85739531
        call    FUN_00627b70
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0xa0]
        pop    edi
        pop    esi
        ret    4
L_5b5f:
        xor    ecx, 0x85739531
        call    FUN_00627b40
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x20]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0xa4]
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    al, byte ptr [esi + 0x32e]
        xor    ecx, edx
        add    ecx, 0x40
        test    al, al
        mov    dword ptr [esp + 0xc], ecx
        je    L_5bb6
        mov    ecx, esi
        mov    byte ptr [esi + 0x32e], 0
        call    FUN_00559ab0
L_5bb6:
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_5c09
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_5c09
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x40]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x40]
        je    L_5c09
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        call    FUN_00627a00
L_5c09:
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x10]
        test    eax, eax
        push    ebx
        jle    L_5c8e
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x40]
        xor    edx, 0x85739531
        je    L_5cc6
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    bl, byte ptr [edx + 0x17]
        test    bl, bl
        je    L_5cc6
        mov    dl, byte ptr [ecx + 0x584]
        test    dl, dl
        jne    L_5c6b
        mov    dl, byte ptr [ecx + 0x586]
        test    dl, dl
        jne    L_5c6b
        mov    dl, byte ptr [ecx + 0x588]
        test    dl, dl
        jne    L_5c6b
        xor    ecx, ecx
        jmp    L_5c70
L_5c6b:
        mov    ecx, 1
L_5c70:
        mov    edx, dword ptr [eax + 0x40]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x64], cl
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        call    FUN_00627a80
        pop    ebx
        ret    4
L_5c8e:
        jge    L_5cc6
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_5cc6
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    cl, byte ptr [edx + 0x17]
        test    cl, cl
        je    L_5cc6
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        call    FUN_00627ad0
L_5cc6:
        pop    ebx
        ret    4
    }
}
