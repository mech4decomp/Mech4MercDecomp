/*
 * FUN_007589a0 (extent 0x7589a0-0x758b08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b410;
extern int    g_008492fc;
extern int    g_008816d0;
extern int    g_008bc00c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_0074dd10(void);
extern void __cdecl FUN_00758ca0(void);
extern void __cdecl FUN_00758cd0(void);
extern void __cdecl FUN_00759150(void);
extern void __cdecl FUN_0075d820(void);
extern void __cdecl FUN_0075e0e8(void);

__declspec(naked) void FUN_007589a0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x100
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [ebp + 8]
        push    ebx
        mov    ebx, dword ptr [ebp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        push    edi
        push    ebx
        push    eax
        push    ecx
        push    edx
        call    FUN_0075e0e8
        mov    esi, eax
        test    esi, esi
        jge    L_8a0a
        mov    eax, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        lea    ecx, [ebp - 0x100]
        push    ecx
        call    FUN_0074dd10
        mov    edx, dword ptr [ebp + 0xc]
        push    eax
        push    edx
        lea    eax, [ebp - 0x80]
        push    eax
        call    FUN_0074dd10
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aee2c
        call    FUN_006fabf0
        add    esp, 0x20
        test    eax, eax
        je    L_8a0a
        int 3    
L_8a0a:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x14
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
        mov    eax, dword ptr [g_008816d0]
        push    ebx
        mov    bl, byte ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    ecx
        lea    edx, [esi + 0x4c]
        push    edx
        mov    dword ptr [esi], 0
        mov    dword ptr [esi + 4], ebp
        mov    dword ptr [esi + 8], edi
        mov    dword ptr [esi + 0x2050], 0x3f800000
        mov    byte ptr [esi + 0x2054], 0
        mov    dword ptr [esi + 0x2058], eax
        mov    byte ptr [esi + 0x204d], bl
        call    dword ptr [g_0076b410]
        xor    ecx, ecx
        add    esp, 8
        cmp    edi, ecx
        mov    dword ptr [esi + 0x20], ecx
        mov    dword ptr [esi + 0x18], ecx
        je    L_8ace
        cmp    ebp, ecx
        je    L_8ace
        mov    eax, dword ptr [g_008492fc]
        push    eax
        push    0x14
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_8aa1
        push    ebp
        push    edi
        mov    ecx, eax
        call    FUN_0075d820
        jmp    L_8aa3
L_8aa1:
        xor    eax, eax
L_8aa3:
        mov    ecx, esi
        mov    dword ptr [esi + 0x1c], eax
        call    FUN_00759150
        test    bl, bl
        je    L_8ab5
        push    -1
        jmp    L_8abc
L_8ab5:
        mov    ecx, dword ptr [g_008816d0]
        push    ecx
L_8abc:
        mov    ecx, esi
        call    FUN_00758ca0
        mov    ecx, esi
        call    FUN_00758cd0
        xor    ecx, ecx
        jmp    L_8ae7
L_8ace:
        test    bl, bl
        je    L_8adb
        mov    dword ptr [esi + 0x14], 0xffffffff
        jmp    L_8ae4
L_8adb:
        mov    edx, dword ptr [g_008816d0]
        mov    dword ptr [esi + 0x14], edx
L_8ae4:
        mov    dword ptr [esi + 0x1c], ecx
L_8ae7:
        mov    eax, dword ptr [g_008bc00c]
        cmp    eax, ecx
        mov    dword ptr [esi + 0x24], eax
        je    L_8af6
        mov    dword ptr [eax + 0x28], esi
L_8af6:
        pop    edi
        mov    dword ptr [esi + 0x28], ecx
        mov    dword ptr [g_008bc00c], esi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
