/*
 * FUN_00602a20 (extent 0x602a20-0x602bb1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_004f78d0(void);

__declspec(naked) void FUN_00602a20(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x3b0]
        mov    byte ptr [ecx + 0x32c], 1
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x78b3d4
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_2a5e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2a5e:
        mov    eax, esi
        pop    esi
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
        sub    esp, 0x48
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0xc]
        mov    dword ptr [esp + 4], edi
        je    L_2ac5
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0x17]
        test    cl, cl
        je    L_2ac5
        mov    cl, byte ptr [eax + 0x16]
        test    cl, cl
        je    L_2ab1
        mov    eax, dword ptr [eax + 0x50]
        jmp    L_2ab4
L_2ab1:
        mov    eax, dword ptr [eax + 0x54]
L_2ab4:
        test    eax, eax
        je    L_2ac5
        mov    ecx, dword ptr [eax + 0x40]
        test    ecx, ecx
        jle    L_2ac5
        inc    dword ptr [edi + 0x226c]
L_2ac5:
        mov    cx, word ptr [edi + 0x16a]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [edi + 0x16a]
        jne    L_2aec
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_2ba5
L_2aec:
        push    1
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        add    eax, 2
        cmp    eax, ecx
        mov    dword ptr [esp + 0x1c], eax
        jbe    L_2b0f
        mov    dword ptr [esp + 0x20], eax
L_2b0f:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x24]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [edi + 0x184]
        sub    ecx, eax
        add    ecx, edx
        push    esi
        je    L_2b90
L_2b26:
        test    ebp, ebp
        je    L_2b90
        mov    esi, dword ptr [ebp]
        test    esi, esi
        mov    ebp, dword ptr [ebp + 4]
        je    L_2b90
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        mov    ebx, eax
        call    dword ptr [edx + 0x14]
        lea    edi, [esi + 0x148]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_2b5d
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x18]
L_2b5d:
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x48]
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [ebx]
        mov    ecx, dword ptr [esp + 0x2c]
        add    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esp + 0x28], eax
        jbe    L_2b7e
        mov    dword ptr [esp + 0x2c], eax
L_2b7e:
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x30]
        mov    edi, dword ptr [esp + 0x10]
        sub    ecx, eax
        add    ecx, edx
        jne    L_2b26
L_2b90:
        lea    ecx, [esp + 0x14]
        call    FUN_004d2330
        lea    ecx, [esp + 0x14]
        call    FUN_004d21c0
        pop    esi
        pop    ebp
        pop    ebx
L_2ba5:
        mov    ecx, edi
        call    FUN_004f78d0
        pop    edi
        add    esp, 0x48
        ret    
    }
}
