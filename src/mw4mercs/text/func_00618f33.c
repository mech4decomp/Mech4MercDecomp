/*
 * FUN_00618f33 (extent 0x618f33-0x619160) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004925b0(void);
extern void __cdecl FUN_00492650(void);
extern void __cdecl FUN_00492cf0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00598c10(void);
extern void __cdecl FUN_00598c30(void);
extern void __cdecl FUN_00598c70(void);
extern void __cdecl FUN_00599330(void);
extern void __cdecl FUN_00599410(void);
extern void __cdecl FUN_00599480(void);
extern void __cdecl FUN_005994f0(void);
extern void __cdecl FUN_00599560(void);
extern void __cdecl FUN_00599780(void);
extern void __cdecl FUN_0059c5c0(void);

__declspec(naked) void FUN_00618f33(void)
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
        sub    esp, 0x48
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x1c]
        test    ecx, ecx
        je    L_8f53
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_8f53:
        push    1
        lea    ecx, [esp + 8]
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    word ptr [esp + 0xc], 5
        mov    word ptr [esp + 0xe], 6
        call    FUN_004d1f80
        lea    edx, [esp + 4]
        push    edx
        call    FUN_0059c5c0
        add    esp, 4
        lea    ecx, [esp + 8]
        mov    dword ptr [esi + 0x1c], eax
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x48
        ret    
        nop    
        sub    esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x18]
        test    edi, edi
        je    L_913c
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_00599480
        lea    edx, [esp + 0x34]
        mov    esi, eax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_00599410
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00598c30
        mov    ecx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00599780
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0x10
        test    eax, eax
        jbe    L_909f
        lea    edx, [esp + 0x34]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    FUN_005994f0
        push    eax
        lea    ecx, [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_00492cf0
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00598c70
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00598c10
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00598c10
        lea    ecx, [esp + 0xc]
        push    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x18], 0
        call    FUN_004925b0
        push    ecx
        lea    eax, [esp + 0x24]
        mov    ecx, esp
        push    eax
        call    FUN_004925b0
        call    FUN_00599560
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 8
        mov    eax, esp
        push    ecx
        mov    dword ptr [eax], ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_004925b0
        mov    ecx, edi
        call    FUN_00599330
L_909f:
        lea    eax, [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00492cf0
        mov    ebp, dword ptr [eax]
        cmp    ebp, dword ptr [edi]
        mov    dword ptr [esp + 0xc], ebp
        je    L_90ee
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [esp + 0x34]
L_90c1:
        mov    al, byte ptr [ecx]
        mov    dl, al
        cmp    al, byte ptr [esi]
        jne    L_90e5
        test    dl, dl
        je    L_90e1
        mov    al, byte ptr [ecx + 1]
        mov    dl, al
        cmp    al, byte ptr [esi + 1]
        jne    L_90e5
        add    ecx, 2
        add    esi, 2
        test    dl, dl
        jne    L_90c1
L_90e1:
        xor    ecx, ecx
        jmp    L_90ea
L_90e5:
        sbb    ecx, ecx
        sbb    ecx, -1
L_90ea:
        test    ecx, ecx
        jge    L_9135
L_90ee:
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
        mov    dword ptr [esp + 0x28], 0
        call    FUN_004925b0
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        call    FUN_00492650
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0xc], edx
        call    FUN_0040d9b0
        mov    ebp, dword ptr [esp + 0xc]
L_9135:
        mov    eax, dword ptr [esp + 0x38]
        mov    dword ptr [ebp + 0x14], eax
L_913c:
        mov    eax, dword ptr [esp + 0x34]
        test    eax, eax
        je    L_9157
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9157
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9157:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x24
        ret    8
    }
}
