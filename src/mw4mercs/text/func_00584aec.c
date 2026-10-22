/*
 * FUN_00584aec (extent 0x584aec-0x584d73) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fa4;
extern int    g_007f1fa8;
extern int    g_007f1ff4;
extern int    g_007f2040;
extern int    g_007f206c;
extern int    g_007f20a8;
extern int    g_007f2120;
extern int    g_007f2124;
extern int    g_007f2584;
extern int    g_007f25ac;
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004d9f30(void);
extern void __cdecl FUN_004da180(void);
extern void __cdecl FUN_00591450(void);
extern void __cdecl FUN_005f00f0(void);

__declspec(naked) void FUN_00584aec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004d9f30
        mov    eax, dword ptr [edi + 0x44]
        pop    edi
        mov    dword ptr [esi + 0x440], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    0x48
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        push    edi
        mov    ecx, esi
        call    FUN_004da180
        mov    ecx, dword ptr [esi + 0x440]
        pop    edi
        mov    dword ptr [eax], 0x48
        mov    dword ptr [eax + 0x44], ecx
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        mov    ebp, ecx
        lea    eax, [ebp + 0x34c]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0xc], 0x782234
        call    FUN_0040c0e0
        mov    ebx, eax
        test    ebx, ebx
        je    L_4d5d
        push    esi
        push    edi
L_4b74:
        mov    edx, dword ptr [ebp + 0x78]
        lea    ecx, [ebp + 0x78]
        call    dword ptr [edx + 4]
        mov    esi, dword ptr [ebx + 4]
        mov    edi, eax
        mov    eax, dword ptr [g_007f206c]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4ba1
        mov    al, byte ptr [edi + 0x640]
        test    al, al
        je    L_4d48
L_4ba1:
        mov    eax, dword ptr [g_007f2120]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4bc0
        mov    al, byte ptr [edi + 0x641]
        test    al, al
        je    L_4d48
L_4bc0:
        mov    eax, dword ptr [g_007f2124]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4bdf
        mov    al, byte ptr [edi + 0x642]
        test    al, al
        je    L_4d48
L_4bdf:
        mov    eax, dword ptr [g_007f20a8]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4bfe
        mov    al, byte ptr [edi + 0x645]
        test    al, al
        je    L_4d48
L_4bfe:
        mov    eax, dword ptr [g_007f1fa8]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4c1d
        mov    al, byte ptr [edi + 0x668]
        test    al, al
        je    L_4d48
L_4c1d:
        mov    eax, dword ptr [g_007f1fa4]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4c3c
        mov    al, byte ptr [edi + 0x669]
        test    al, al
        je    L_4d48
L_4c3c:
        mov    eax, dword ptr [g_007f1ff4]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4c5b
        mov    al, byte ptr [edi + 0x66a]
        test    al, al
        je    L_4d48
L_4c5b:
        mov    eax, dword ptr [g_007f25ac]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4c77
        mov    dword ptr [ebp + 0x504], ebx
        jmp    L_4d3c
L_4c77:
        mov    eax, dword ptr [g_007f2584]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4cda
        mov    edx, dword ptr [ebp + 0x410]
        mov    eax, dword ptr [ebp + 0x40c]
        cmp    eax, edx
        lea    ecx, [ebp + 0x40c]
        mov    dword ptr [esp + 0x10], ebx
        je    L_4cb5
L_4ca2:
        cmp    dword ptr [eax], ebx
        je    L_4cad
        add    eax, 4
        cmp    eax, edx
        jne    L_4ca2
L_4cad:
        cmp    eax, edx
        jne    L_4d3c
L_4cb5:
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        je    L_4ccb
        test    eax, eax
        je    L_4cc3
        mov    dword ptr [eax], ebx
L_4cc3:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        jmp    L_4d3c
L_4ccb:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_00591450
        jmp    L_4d3c
L_4cda:
        mov    eax, dword ptr [g_007f2120]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4cf3
        mov    dword ptr [ebp + 0x3e0], ebx
        jmp    L_4d3c
L_4cf3:
        mov    eax, dword ptr [g_007f206c]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4d0c
        mov    dword ptr [ebp + 0x99c], ebx
        jmp    L_4d3c
L_4d0c:
        mov    eax, dword ptr [g_007f1fa4]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4d25
        mov    dword ptr [ebp + 0x3e8], ebx
        jmp    L_4d3c
L_4d25:
        mov    eax, dword ptr [g_007f2040]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        test    al, al
        je    L_4d3c
        mov    dword ptr [ebp + 0x9a4], ebx
L_4d3c:
        mov    eax, dword ptr [ebp]
        push    ebx
        mov    ecx, ebp
        call    dword ptr [eax + 0x100]
L_4d48:
        lea    ecx, [esp + 0x14]
        call    FUN_0040c0e0
        mov    ebx, eax
        test    ebx, ebx
        jne    L_4b74
        pop    edi
        pop    esi
L_4d5d:
        mov    ecx, dword ptr [ebp + 0x504]
        test    ecx, ecx
        je    L_4d6d
        push    ebp
        call    FUN_005f00f0
L_4d6d:
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    
    }
}
