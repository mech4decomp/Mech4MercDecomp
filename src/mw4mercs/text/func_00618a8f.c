/*
 * FUN_00618a8f (extent 0x618a8f-0x618cad) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_005982d0(void);
extern void __cdecl FUN_00598420(void);
extern void __cdecl FUN_00598b60(void);
extern void __cdecl FUN_00598bd0(void);
extern void __cdecl FUN_00598bf0(void);
extern void __cdecl FUN_00598c50(void);
extern void __cdecl FUN_00599050(void);
extern void __cdecl FUN_005991b0(void);
extern void __cdecl FUN_00599220(void);
extern void __cdecl FUN_00599290(void);
extern void __cdecl FUN_00599300(void);
extern void __cdecl FUN_005996c0(void);
extern void __cdecl FUN_0059e3b0(void);

__declspec(naked) void FUN_00618a8f(void)
{
    __asm {
        nop    
        sub    esp, 0x48
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x2c]
        test    ecx, ecx
        je    L_8aa3
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_8aa3:
        push    1
        lea    ecx, [esp + 8]
        mov    eax, 5
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    word ptr [esp + 0xc], ax
        mov    word ptr [esp + 0xe], ax
        call    FUN_004d1f80
        lea    edx, [esp + 4]
        push    edx
        call    FUN_0059e3b0
        add    esp, 4
        lea    ecx, [esp + 8]
        mov    dword ptr [esi + 0x2c], eax
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x48
        ret    
        sub    esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x10]
        test    edi, edi
        je    L_8c89
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_00599220
        lea    edx, [esp + 0x34]
        mov    esi, eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005991b0
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00598bf0
        mov    ecx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_005996c0
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0x10
        test    eax, eax
        jbe    L_8bef
        lea    edx, [esp + 0x34]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_00599290
        push    eax
        lea    ecx, [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_00598b60
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00598c50
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00598bd0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00598bd0
        lea    ecx, [esp + 0xc]
        push    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x18], 0
        call    FUN_005982d0
        push    ecx
        lea    eax, [esp + 0x24]
        mov    ecx, esp
        push    eax
        call    FUN_005982d0
        call    FUN_00599300
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 8
        mov    eax, esp
        push    ecx
        mov    dword ptr [eax], ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_005982d0
        mov    ecx, edi
        call    FUN_00599050
L_8bef:
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00598b60
        mov    ebp, dword ptr [eax]
        cmp    ebp, dword ptr [edi]
        mov    dword ptr [esp + 0xc], ebp
        je    L_8c3e
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [esp + 0x34]
L_8c11:
        mov    al, byte ptr [ecx]
        mov    dl, al
        cmp    al, byte ptr [esi]
        jne    L_8c35
        test    dl, dl
        je    L_8c31
        mov    al, byte ptr [ecx + 1]
        mov    dl, al
        cmp    al, byte ptr [esi + 1]
        jne    L_8c35
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_8c11
L_8c31:
        xor    ecx, ecx
        jmp    L_8c3a
L_8c35:
        sbb    ecx, ecx
        sbb    ecx, -1
L_8c3a:
        test    ecx, ecx
        jge    L_8c82
L_8c3e:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_0040f060
        lea    edx, [esp + 0x18]
        push    edx
        push    ecx
        lea    eax, [esp + 0x14]
        mov    ecx, esp
        push    eax
        mov    byte ptr [esp + 0x28], 0
        call    FUN_005982d0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00598420
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0xc], edx
        call    FUN_0040d9b0
        mov    ebp, dword ptr [esp + 0xc]
L_8c82:
        mov    al, byte ptr [esp + 0x38]
        mov    byte ptr [ebp + 0x14], al
L_8c89:
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_8ca4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8ca4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8ca4:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x24
        ret    8
    }
}
