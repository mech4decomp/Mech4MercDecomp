/*
 * FUN_00555bbb (extent 0x555bbb-0x555d80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c01d0(void);
extern void __cdecl FUN_005e1f50(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);
extern void __cdecl FUN_00627a00(void);
extern void __cdecl FUN_00627a80(void);
extern void __cdecl FUN_00627ad0(void);

__declspec(naked) void FUN_00555bbb(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        push    edi
        jne    L_5d7b
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_5d7b
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_5d7b
        push    0x100
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_5d7b
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_5d7b
        lea    edi, [esi + 0x6a8]
        mov    ecx, edi
        call    FUN_0041fcb0
        call    FUN_005e1f50
        test    eax, eax
        je    L_5d3f
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
L_5d3f:
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jne    L_5d5e
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        ret    4
L_5d5e:
        mov    eax, dword ptr [esi + 0x2d0]
        test    eax, eax
        je    L_5d7b
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, dword ptr [esi + 0x2d0]
        push    eax
        call    FUN_005c01d0
L_5d7b:
        pop    edi
        pop    esi
        ret    4
    }
}
