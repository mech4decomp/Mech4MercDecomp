/*
 * FUN_00603f80 (extent 0x603f80-0x604262) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00603d70(void);
extern void __cdecl FUN_00603d80(void);
extern void __cdecl FUN_00603d90(void);
extern void __cdecl FUN_00603da0(void);
extern void __cdecl FUN_00603e30(void);
extern void __cdecl FUN_00603e60(void);
extern void __cdecl FUN_00604ba0(void);

__declspec(naked) void FUN_00603f80(void)
{
    __asm {
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x2c]
        mov    dword ptr [ecx], 0
        mov    ecx, dword ptr [esp + 0x28]
        mov    byte ptr [ecx], 0
        mov    cl, byte ptr [esi + 0x1e]
        test    cl, cl
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        mov    dword ptr [eax], 0
        mov    eax, dword ptr [esp + 0x1c]
        mov    byte ptr [edx], 0
        mov    edx, dword ptr [esi + 0x14]
        mov    dword ptr [ebx], 1
        mov    dword ptr [edi], 0
        mov    byte ptr [eax], 0
        mov    dword ptr [ebp], edx
        je    L_3fe2
        mov    ecx, esi
        mov    byte ptr [eax], 1
        call    FUN_00603d80
        fstp    dword ptr [edi]
        jmp    L_3feb
L_3fe2:
        mov    byte ptr [eax], 0
        mov    dword ptr [edi], 0
L_3feb:
        mov    al, byte ptr [esi + 0x1d]
        test    al, al
        je    L_4026
        mov    ecx, esi
        call    FUN_00603d70
        cmp    eax, dword ptr [ebp]
        mov    dword ptr [ebx], eax
        jne    L_400e
        lea    ecx, [esi + 0x50]
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0x14]
        mov    dword ptr [ebp], eax
L_400e:
        mov    cl, byte ptr [esi + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        mov    byte ptr [edx], cl
        mov    ecx, esi
        call    FUN_00603d90
        mov    eax, dword ptr [esp + 0x28]
        fstp    dword ptr [eax]
        jmp    L_403d
L_4026:
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x28]
        mov    byte ptr [ecx], 0
        mov    dword ptr [ebx], 1
        mov    dword ptr [edx], 0
L_403d:
        mov    al, byte ptr [esi + 0x1f]
        test    al, al
        je    L_405f
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, esi
        mov    byte ptr [eax], 1
        call    FUN_00603da0
        mov    ecx, dword ptr [esp + 0x30]
        pop    edi
        fstp    dword ptr [ecx]
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x20
L_405f:
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esp + 0x30]
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [edx], 0
        mov    dword ptr [eax], 0
        pop    ebx
        ret    0x20
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
        push    ebp
        push    esi
        mov    esi, ecx
        lea    ebx, [esi + 0x40]
        push    edi
        mov    ecx, ebx
        mov    byte ptr [esi + 0x1d], 0
        mov    byte ptr [esi + 0x1e], 0
        mov    byte ptr [esi + 0x1f], 0
        mov    byte ptr [esi + 0x20], 0
        mov    dword ptr [esi + 0x28], 0xffffffff
        call    FUN_0041fd80
        mov    ebp, dword ptr [esp + 0x14]
        mov    edi, eax
        test    edi, edi
        je    L_40f4
        cmp    dword ptr [edi + 0x14], ebp
        je    L_4106
        mov    ecx, ebx
        call    FUN_0041fcb0
        push    ebp
        mov    ecx, esi
        call    FUN_00603e30
        mov    edi, eax
        test    edi, edi
        je    L_40de
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 0x14], ebp
        jmp    L_4106
L_40de:
        mov    ecx, ebx
        mov    byte ptr [esi + 0x1d], 0
        call    FUN_0041fcb0
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [esi + 0x14], ebp
        jmp    L_4106
L_40f4:
        push    ebp
        mov    ecx, esi
        call    FUN_00603e30
        mov    edi, eax
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
L_4106:
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        je    L_413f
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [edi]
        push    eax
        push    ecx
        push    0xbf800000
        mov    ecx, edi
        mov    byte ptr [esi + 0x1e], 1
        call    dword ptr [edx + 0x18]
        mov    ecx, edi
        call    FUN_00604ba0
        mov    edx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [esi + 0x10], edx
        mov    dword ptr [esi + 0x14], ebp
        mov    dword ptr [esi + 0x24], eax
L_413f:
        cmp    dword ptr [esp + 0x18], 1
        je    L_422a
        lea    ebx, [esi + 0x50]
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_4176
        cmp    dword ptr [edi + 0x14], ebp
        je    L_418d
        mov    ecx, dword ptr [edi + 0x48]
        cmp    ecx, dword ptr [esp + 0x18]
        je    L_418d
        mov    ecx, ebx
        call    FUN_0041fcb0
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        jmp    L_417b
L_4176:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
L_417b:
        push    ebp
        mov    ecx, esi
        call    FUN_00603e60
        mov    edi, eax
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
L_418d:
        mov    al, byte ptr [esp + 0x24]
        test    al, al
        mov    ecx, dword ptr [esp + 0x18]
        mov    byte ptr [esi + 0x1d], 1
        mov    dword ptr [esi + 0x28], ecx
        je    L_41c1
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [edi]
        push    eax
        push    ecx
        push    0xbf800000
        mov    ecx, edi
        mov    byte ptr [esi + 0x20], 1
        call    dword ptr [edx + 0x18]
        mov    ecx, edi
        call    FUN_00604ba0
L_41c1:
        lea    ebx, [esi + 0x48]
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_41e4
        mov    ebp, dword ptr [esp + 0x18]
        cmp    dword ptr [edi + 0x14], ebp
        je    L_41fa
        mov    ecx, ebx
        call    FUN_0041fcb0
        push    ebp
        jmp    L_41e9
L_41e4:
        mov    edx, dword ptr [esp + 0x18]
        push    edx
L_41e9:
        mov    ecx, esi
        call    FUN_00603e30
        mov    edi, eax
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
L_41fa:
        mov    al, byte ptr [esp + 0x2c]
        test    al, al
        je    L_425b
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    0xbf800000
        mov    ecx, edi
        mov    byte ptr [esi + 0x1f], 1
        call    dword ptr [eax + 0x18]
        mov    ecx, edi
        call    FUN_00604ba0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x24
L_422a:
        lea    edi, [esi + 0x50]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_425b
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, edi
        call    FUN_0041fcb0
        add    esi, 0x48
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_425b
        mov    ecx, esi
        call    FUN_0041fcb0
L_425b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x24
    }
}
