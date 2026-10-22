/*
 * FUN_00574edc (extent 0x574edc-0x57510b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25b8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00574e20(void);
extern void __cdecl FUN_005f2690(void);
extern void __cdecl FUN_005fb7d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0070eec0(void);

__declspec(naked) void FUN_00574edc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_4f3f
        call    FUN_00566c30
        push    eax
        call    FUN_00574e20
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_4f3f:
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4fa5
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        je    L_4fa5
        mov    ecx, dword ptr [g_007f25b8]
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [edx + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_4fa5
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [esi + 0x30]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0x18]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_005f2690
L_4fa5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        push    3
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_0070eec0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        push    1
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_0070eec0
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        test    eax, eax
        setne    bl
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_5072
        push    0
        call    FUN_00563060
        add    esp, 4
L_5072:
        xor    eax, eax
        test    bl, bl
        setne    al
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
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
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        push    esi
        push    0
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_00566ef0
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        add    esp, 0xc
        cmp    esi, eax
        je    L_50f9
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
L_50e1:
        mov    ecx, dword ptr [esi]
        push    edi
        call    FUN_005fb7d0
        mov    eax, dword ptr [esp + 0xc]
        add    esi, 4
        cmp    esi, eax
        jne    L_50e1
        mov    esi, dword ptr [esp + 8]
        pop    edi
L_50f9:
        test    esi, esi
        je    L_5106
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_5106:
        pop    esi
        add    esp, 0xc
        ret    
    }
}
