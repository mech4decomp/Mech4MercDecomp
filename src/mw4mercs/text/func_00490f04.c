/*
 * FUN_00490f04 (extent 0x490f04-0x491143) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007da854;
extern int    g_007da858;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);

__declspec(naked) void FUN_00490f04(void)
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
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_0f66
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0f5c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_0f66
L_0f5c:
        mov    dword ptr [g_007b8ef4], 0
L_0f66:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0fa4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_0fa4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_0fff
        mov    ecx, dword ptr [g_007da854]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007da858]
        jne    L_0fff
        push    edi
        mov    edi, dword ptr [g_007da854]
        test    edi, edi
        je    L_0fee
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_0fee:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007da854], 0
        pop    esi
        ret    4
L_0fff:
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_1026:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_104e
        test    cl, cl
        je    L_104a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_104e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1026
L_104a:
        xor    eax, eax
        jmp    L_1053
L_104e:
        sbb    eax, eax
        sbb    eax, -1
L_1053:
        test    eax, eax
        jne    L_105e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_105e:
        mov    esi, edi
        mov    eax, ebp
L_1062:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_108a
        test    cl, cl
        je    L_1086
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_108a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1062
L_1086:
        xor    eax, eax
        jmp    L_108f
L_108a:
        sbb    eax, eax
        sbb    eax, -1
L_108f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
        ret    8
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_10c5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_10ed
        test    cl, cl
        je    L_10e9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_10ed
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_10c5
L_10e9:
        xor    eax, eax
        jmp    L_10f2
L_10ed:
        sbb    eax, eax
        sbb    eax, -1
L_10f2:
        test    eax, eax
        jne    L_10fd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_10fd:
        mov    esi, edi
        mov    eax, ebp
L_1101:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_1129
        test    cl, cl
        je    L_1125
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_1129
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1101
L_1125:
        xor    eax, eax
        jmp    L_112e
L_1129:
        sbb    eax, eax
        sbb    eax, -1
L_112e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
        ret    8
    }
}
