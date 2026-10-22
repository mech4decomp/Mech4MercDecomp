/*
 * FUN_006666dd (extent 0x6666dd-0x66765a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058ac;
extern int    g_008058e0;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9b8;
extern int    g_0080d9bc;
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_00666440(void);
extern void __cdecl FUN_00666460(void);
extern void __cdecl FUN_00666480(void);
extern void __cdecl FUN_006664d0(void);
extern void __cdecl FUN_00666550(void);
extern void __cdecl FUN_006665a0(void);
extern void __cdecl FUN_006665f0(void);
extern void __cdecl FUN_00666640(void);
extern void __cdecl FUN_00666690(void);
extern void __cdecl FUN_0069ae70(void);

__declspec(naked) void FUN_006666dd(void)
{
    __asm {
        nop    
        nop    
        nop    
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [eax + 4]
        add    esp, 4
        cmp    ecx, 3
        jne    L_6701
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, dword ptr [g_0080d9b4]
        je    L_670b
L_6701:
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_670b:
        mov    al, byte ptr [esp + 4]
        test    al, al
        je    L_6720
        push    0xb
        push    7
        call    FUN_0069ae70
        add    esp, 8
        ret    
L_6720:
        push    0x37
        push    0x11
        call    FUN_0069ae70
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        cmp    dword ptr [g_008058ac], 6
        jne    L_677b
        push    esi
        call    FUN_00649150
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov    esi, eax
        mov    eax, dword ptr [g_008058e0]
        mov    ecx, dword ptr [eax + 0x3c]
        push    ecx
        call    FUN_0064c950
        add    esp, 8
        cmp    esi, eax
        pop    esi
        je    L_676c
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_676c:
        push    0xb
        push    7
        call    FUN_0069ae70
        add    esp, 8
        xor    eax, eax
        ret    
L_677b:
        mov    edx, dword ptr [g_008058e0]
        mov    eax, dword ptr [edx + 0x3c]
        test    eax, eax
        je    L_6792
        push    0x2a
        call    FUN_00562f40
        add    esp, 4
L_6792:
        xor    eax, eax
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
        call    FUN_00666460
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 4
        cmp    eax, ecx
        je    L_67e4
        cmp    eax, dword ptr [g_0080d9b4]
        je    L_67e4
        mov    ecx, dword ptr [g_0080d9b8]
        cmp    eax, ecx
        je    L_67e4
        cmp    dword ptr [eax + 4], 3
        jne    L_67da
        cmp    dword ptr [eax + 0x14], ecx
        je    L_67e4
L_67da:
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_67e4:
        push    0xb
        push    7
        call    FUN_0069ae70
        add    esp, 8
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666640
        call    FUN_0064d170
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080d9bc]
        add    esp, 8
        cmp    eax, ecx
        je    L_6853
        cmp    eax, dword ptr [g_0080d9b4]
        je    L_6853
        mov    ecx, dword ptr [g_0080d9b8]
        cmp    eax, ecx
        je    L_6853
        cmp    eax, dword ptr [g_0080d9b0]
        je    L_6853
        cmp    dword ptr [eax + 4], 3
        jne    L_6849
        cmp    dword ptr [eax + 0x14], ecx
        je    L_6853
L_6849:
        push    0x10
        call    FUN_00562f40
        add    esp, 4
L_6853:
        push    0xb
        push    7
        call    FUN_0069ae70
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 8
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
        call    FUN_00666460
        push    1
        call    FUN_00666550
        mov    eax, dword ptr [g_0080d9b4]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_00666550
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b4]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 4
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
        call    FUN_00666440
        mov    eax, dword ptr [g_0080d9bc]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666440
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666640
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666640
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_006665a0
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666640
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666440
        mov    eax, dword ptr [g_0080d9bc]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666440
        mov    eax, dword ptr [g_0080d9bc]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666440
        mov    eax, dword ptr [g_0080d9b0]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666440
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_006665a0
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 4
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_006664d0
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666640
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666640
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 4
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
        call    FUN_00666460
        push    0
        call    FUN_00666640
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666640
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 4
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
        call    FUN_00666460
        push    0
        call    FUN_00666640
        push    1
        call    FUN_006665a0
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 0x1c
        ret    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666690
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666690
        push    1
        call    FUN_00666690
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666690
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0xc
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666690
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0xc
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
        call    FUN_00666460
        push    0
        call    FUN_006665f0
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_006665f0
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_006665f0
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0xc
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665f0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666690
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666690
        push    1
        call    FUN_00666480
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666690
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666690
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666690
        push    0
        call    FUN_00666690
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 0x1c
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0x1c
        ret    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_006665a0
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0x14
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_006665a0
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0x14
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    1
        call    FUN_006665a0
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666690
        push    0
        call    FUN_00666480
        push    0
        call    FUN_006665a0
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 4
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666690
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0xc
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_006665a0
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666550
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666550
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666550
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666550
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    1
        call    FUN_006665a0
        add    esp, 0x14
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    1
        call    FUN_00666480
        add    esp, 4
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666550
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    1
        call    FUN_006665a0
        add    esp, 0x14
        xor    eax, eax
        ret    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b4]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666550
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_006665a0
        push    1
        call    FUN_00666480
        add    esp, 8
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666640
        add    esp, 0xc
        xor    eax, eax
        ret    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_006665a0
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 0x18
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666690
        push    0
        call    FUN_00666480
        push    1
        call    FUN_006665a0
        add    esp, 0x10
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9bc]
        add    esp, 0x10
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_00666480
        push    0
        call    FUN_006665a0
        push    1
        call    FUN_00666480
        add    esp, 0x18
        xor    eax, eax
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
        call    FUN_00666460
        push    0
        call    FUN_00666640
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00666460
        push    0
        call    FUN_00666640
        push    0
        call    FUN_00666550
        push    0
        call    FUN_00666550
        push    1
        call    FUN_00666480
        mov    eax, dword ptr [g_0080d9b0]
        add    esp, 0x10
        ret    
    }
}
