/*
 * FUN_005c077e (extent 0x5c077e-0x5c0a65) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007f2024;
extern int    g_007f22c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005587b0(void);
extern void __cdecl FUN_005c0b40(void);
extern void __cdecl FUN_005c0b50(void);
extern void __cdecl FUN_005c0b60(void);
extern void __cdecl FUN_005c0b90(void);
extern void __cdecl FUN_005c0ba0(void);
extern void __cdecl FUN_005c0be0(void);
extern void __cdecl FUN_005c6d00(void);
extern void __cdecl FUN_005c9960(void);
extern void __cdecl FUN_005d6060(void);
extern void __cdecl FUN_005d62d0(void);
extern void __cdecl FUN_005dbb10(void);
extern void __cdecl FUN_005dbb70(void);

__declspec(naked) void FUN_005c077e(void)
{
    __asm {
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x450]
        test    eax, eax
        push    edi
        je    L_07ba
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005c6d00
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
L_07ba:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax + 4]
        xor    ebp, ebp
        test    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
        jbe    L_0825
        mov    ebx, dword ptr [eax]
        add    ebx, 8
L_07d0:
        mov    eax, dword ptr [g_007f2024]
        mov    edi, dword ptr [ebx]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_0815
        push    edi
        mov    ecx, esi
        call    FUN_005d6060
        test    al, al
        je    L_083a
        mov    edx, dword ptr [esi + 0x35c]
        mov    ecx, dword ptr [edx + 0x3b0]
        test    ecx, ecx
        je    L_0807
        push    1
        call    FUN_005587b0
L_0807:
        mov    ecx, esi
        call    FUN_005d62d0
        mov    eax, dword ptr [esp + 0x1c]
        mov    byte ptr [eax], 0
L_0815:
        mov    eax, dword ptr [esp + 0x10]
        inc    ebp
        add    ebx, 0x38
        cmp    ebp, eax
        jb    L_07d0
        mov    eax, dword ptr [esp + 0x18]
L_0825:
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov    ecx, esi
        call    FUN_005c6d00
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
L_083a:
        mov    ecx, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [ecx + 0x3b0]
        test    eax, eax
        jne    L_0854
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
L_0854:
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        mov    byte ptr [eax], 0
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        mov    ecx, esi
        call    FUN_005c6d00
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
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
        fld    dword ptr [esp + 4]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_08a3
        mov    eax, dword ptr [ecx + 0x35c]
        mov    edx, dword ptr [eax + 0x5b8]
        test    edx, edx
        je    L_08a3
        fchs    
L_08a3:
        fstp    dword ptr [ecx + 0x3b8]
        ret    4
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x6a4]
        mov    eax, dword ptr [ecx]
        push    1
        mov    byte ptr [esi + 0x308], 0
        call    dword ptr [eax + 0xb0]
        test    al, al
        jne    L_08da
        mov    byte ptr [esi + 0x309], 1
        jmp    L_08e1
L_08da:
        mov    byte ptr [esi + 0x309], 0
L_08e1:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
        mov    ecx, esi
        call    FUN_005dbb10
        mov    ecx, dword ptr [g_007f22c0]
        test    ecx, ecx
        je    L_0977
        lea    eax, [esp + 4]
        push    eax
        lea    edx, [esp + 0xc]
        push    edx
        mov    dword ptr [esp + 0xc], esi
        call    FUN_005c0b50
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005c0b90
        mov    ecx, dword ptr [g_007f22c0]
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_005c0b40
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005c0b90
        lea    ecx, [esp + 0x1c]
        push    ecx
        call    FUN_005c0be0
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [g_007f22c0]
        mov    ecx, dword ptr [eax]
        add    esp, 0x10
        cmp    edx, ecx
        jne    L_0977
        mov    dword ptr [esp + 4], esi
        mov    esi, eax
        lea    eax, [esp + 4]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        call    FUN_005c0b50
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005c0b90
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, esi
        call    FUN_005c0ba0
L_0977:
        pop    esi
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x6a4]
        mov    eax, dword ptr [ecx]
        push    0
        mov    byte ptr [esi + 0x309], 0
        call    dword ptr [eax + 0xb0]
        test    al, al
        jne    L_09aa
        mov    byte ptr [esi + 0x308], 1
        jmp    L_09b1
L_09aa:
        mov    byte ptr [esi + 0x308], 0
L_09b1:
        mov    ecx, esi
        call    FUN_005dbb70
        mov    ecx, dword ptr [g_007f22c0]
        test    ecx, ecx
        je    L_0a21
        lea    edx, [esp + 4]
        push    edx
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [esp + 0xc], esi
        call    FUN_005c0b50
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005c0b90
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [g_007f22c0]
        call    FUN_005c0b40
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_005c0b90
        lea    edx, [esp + 0x1c]
        push    edx
        call    FUN_005c0be0
        mov    ecx, dword ptr [g_007f22c0]
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        add    esp, 0x10
        cmp    eax, edx
        je    L_0a21
        push    ecx
        mov    edx, esp
        mov    dword ptr [edx], eax
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_005c0b60
L_0a21:
        pop    esi
        add    esp, 0x10
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    1
        lea    ecx, [edi + 0x308]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x309]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_005c9960
        pop    edi
        pop    esi
        ret    4
    }
}
