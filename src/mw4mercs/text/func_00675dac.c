/*
 * FUN_00675dac (extent 0x675dac-0x675f66) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_0080da90;
extern int    g_0080da94;
extern int    g_0080da98;
extern int    g_0080daa4;
extern int    g_0080daa8;
extern int    g_00849304;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_0066a3c0(void);
extern void __cdecl FUN_006768c0(void);

__declspec(naked) void FUN_00675dac(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0xc
        push    ebx
        mov    bl, byte ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_0066a3c0
        mov    ecx, dword ptr [esi + 0x10]
        add    esp, 0x14
        sub    ecx, 0x33
        je    L_5e4d
        dec    ecx
        je    L_5e16
        dec    ecx
        jne    L_5e78
        test    bl, bl
        jne    L_5e78
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x24]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], 0x41100000
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0xc
        ret    
L_5e16:
        test    bl, bl
        jne    L_5e78
        mov    eax, dword ptr [g_007b8d6c]
        mov    edx, dword ptr [g_007b8d68]
        mov    ecx, dword ptr [g_007b8d70]
        mov    dword ptr [esp + 0x10], eax
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x18], ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0xc
        ret    
L_5e4d:
        test    bl, bl
        jne    L_5e78
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x24], cx
        lea    ecx, [esp + 0x24]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2e], dx
        call    dword ptr [eax + 4]
        mov    al, 1
L_5e78:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
        nop    
        push    esi
        push    edi
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        xor    edi, edi
        add    esp, 4
        cmp    esi, edi
        je    L_5eb7
        mov    eax, dword ptr [g_00849304]
        push    eax
        push    0x797840
        push    0x64
        push    0x3e8
        push    0x38
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_0080daa4], esi
        jmp    L_5ebd
L_5eb7:
        mov    dword ptr [g_0080daa4], edi
L_5ebd:
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_5ef1
        mov    ecx, dword ptr [g_00849304]
        push    ecx
        push    0x797830
        push    0x64
        push    0x3e8
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_0080daa8], esi
        jmp    L_5ef7
L_5ef1:
        mov    dword ptr [g_0080daa8], edi
L_5ef7:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_5f18
        push    0xc8
        mov    ecx, eax
        call    FUN_006768c0
        mov    dword ptr [g_0080da94], eax
        jmp    L_5f1e
L_5f18:
        mov    dword ptr [g_0080da94], edi
L_5f1e:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_5f3f
        push    0xc8
        mov    ecx, eax
        call    FUN_006768c0
        mov    dword ptr [g_0080da90], eax
        jmp    L_5f45
L_5f3f:
        mov    dword ptr [g_0080da90], edi
L_5f45:
        push    0x1000
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        mov    dword ptr [g_0080da98], edi
        mov    ecx, 0x400
        xor    eax, eax
        rep stosd
        pop    edi
        pop    esi
        ret    
    }
}
