/*
 * FUN_00593ff0 (extent 0x593ff0-0x59411e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411c80(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_005971b0(void);
extern void __cdecl FUN_00597280(void);

__declspec(naked) void FUN_00593ff0(void)
{
    __asm {
        add    ecx, 0x2c
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        call    FUN_004154d0
        ret    4
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_005971b0
        mov    ebx, dword ptr [esp + 0x14]
        add    esp, 4
        push    eax
        push    0x776994
        mov    ecx, ebx
        call    FUN_00411c40
        mov    ecx, dword ptr [edi + 0x40]
        push    ecx
        push    0x782cb8
        mov    ecx, ebx
        call    FUN_00411d10
        mov    edx, dword ptr [edi + 0x50]
        push    edx
        push    0x782cac
        mov    ecx, ebx
        call    FUN_00411d10
        mov    eax, dword ptr [edi + 0x60]
        push    eax
        push    0x782c98
        mov    ecx, ebx
        call    FUN_00411c40
        mov    ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_00597280
        add    esp, 4
        push    eax
        push    0x773784
        mov    ecx, ebx
        call    FUN_00411c40
        mov    eax, dword ptr [edi + 0x14]
        test    eax, eax
        je    L_4092
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        push    0x782c88
        mov    ecx, ebx
        call    FUN_00411c40
        mov    eax, dword ptr [edi + 0x1c]
        push    eax
        push    0x782c74
        mov    ecx, ebx
        call    FUN_00411d10
L_4092:
        mov    esi, dword ptr [edi + 0x24]
L_4095:
        test    esi, esi
        je    L_40b4
        mov    eax, dword ptr [esi]
        test    eax, eax
        mov    esi, dword ptr [esi + 4]
        je    L_40b4
        mov    ecx, dword ptr [eax + 0x10]
        push    ecx
        push    0x782c5c
        mov    ecx, ebx
        call    FUN_00411c80
        jmp    L_4095
L_40b4:
        mov    esi, dword ptr [edi + 0x2c]
L_40b7:
        test    esi, esi
        je    L_40d6
        mov    eax, dword ptr [esi]
        test    eax, eax
        mov    esi, dword ptr [esi + 4]
        je    L_40d6
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        push    0x782c48
        mov    ecx, ebx
        call    FUN_00411c80
        jmp    L_40b7
L_40d6:
        mov    edi, dword ptr [edi + 0x58]
L_40d9:
        test    edi, edi
        je    L_4118
        mov    eax, dword ptr [edi]
        test    eax, eax
        mov    edi, dword ptr [edi + 4]
        je    L_4118
        mov    esi, dword ptr [eax + 0x10]
        test    esi, esi
        je    L_40f0
        inc    byte ptr [esi - 1]
L_40f0:
        push    esi
        push    0x782c2c
        mov    ecx, ebx
        call    FUN_00411c80
        test    esi, esi
        je    L_40d9
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_40d9
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_40d9
L_4118:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
