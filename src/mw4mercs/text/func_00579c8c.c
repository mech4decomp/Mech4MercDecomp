/*
 * FUN_00579c8c (extent 0x579c8c-0x57be91) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b304;
extern float  g_0077f674;
extern int    g_007b46c4;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007ddd74;
extern char   g_007dde2c;
extern int    g_007f1f84;
extern int    g_007f20ec;
extern int    g_007f2568;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern char   g_0080da78;
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2690(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00570320(void);
extern void __cdecl FUN_00579c20(void);
extern void __cdecl FUN_0057bbe0(void);
extern void __cdecl FUN_00590310(void);
extern void __cdecl FUN_00590370(void);
extern void __cdecl FUN_00590380(void);
extern void __cdecl FUN_00590390(void);
extern void __cdecl FUN_005903a0(void);
extern void __cdecl FUN_0059bc80(void);
extern void __cdecl FUN_0059bf90(void);
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cf50(void);
extern void __cdecl FUN_0059cf80(void);
extern void __cdecl FUN_0059cf90(void);
extern void __cdecl FUN_0059cfa0(void);
extern void __cdecl FUN_0059cfb0(void);
extern void __cdecl FUN_0059d6e0(void);
extern void __cdecl FUN_0059d7e0(void);
extern void __cdecl FUN_0059d8e0(void);
extern void __cdecl FUN_0059d9f0(void);
extern void __cdecl FUN_005c1ae0(void);
extern void __cdecl FUN_005cae50(void);
extern void __cdecl FUN_005cae80(void);
extern void __cdecl FUN_00618120(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00579c8c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    esp, 0x14
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        je    L_9d62
        push    ebx
        push    esi
        xor    bl, bl
L_9cca:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        add    ecx, 0x54
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x779f0c
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_9d2b
L_9d07:
        push    esi
        call    FUN_00579c20
        add    esp, 4
        test    al, al
        je    L_9d27
        lea    ecx, [esp + 8]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_9d07
        mov    bl, 1
        jmp    L_9d4f
L_9d27:
        test    esi, esi
        jne    L_9d2f
L_9d2b:
        mov    bl, 1
        jmp    L_9d4f
L_9d2f:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        add    ecx, 0x54
        call    FUN_00415ca0
L_9d4f:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        test    bl, bl
        je    L_9cca
        pop    esi
        pop    ebx
L_9d62:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        add    esp, 0x14
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_9df7
        mov    eax, dword ptr [g_007f2568]
        mov    edi, dword ptr [esi + 4]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        jne    L_9df7
        mov    eax, dword ptr [g_007f20ec]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        jne    L_9df7
        push    0x781334
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_9df7
        int 3    
L_9df7:
        mov    eax, dword ptr [g_007f2568]
        mov    edi, dword ptr [esi + 4]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        je    L_9e14
        mov    byte ptr [esi + 0x41d], 1
        jmp    L_9e2c
L_9e14:
        mov    eax, dword ptr [g_007f20ec]
        push    eax
        mov    ecx, edi
        call    FUN_00415230
        test    al, al
        je    L_9e2c
        mov    byte ptr [esi + 0x625], 1
L_9e2c:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
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
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_9ef6
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x24]
        test    edx, edx
        je    L_9ef6
        push    ecx
        call    dword ptr [g_0076b304]
        mov    edx, dword ptr [g_007dab44]
        add    esp, 4
        push    1
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        call    FUN_00618120
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        add    dword ptr [eax + 0x28], ecx
L_9ef6:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
        ret    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_9fb6
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x24]
        test    edx, edx
        je    L_9fb6
        push    ecx
        call    dword ptr [g_0076b304]
        mov    edx, dword ptr [g_007dab44]
        add    esp, 4
        push    3
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        call    FUN_00618120
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        add    dword ptr [eax + 0x28], ecx
L_9fb6:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a01f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_a01f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        mov    edi, dword ptr [ecx + 0x1c]
L_a01f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a048
        push    0
        call    FUN_00563060
        add    esp, 4
L_a048:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a0bf
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_a0bf
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        mov    edi, dword ptr [ecx + 0x20]
L_a0bf:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a0e8
        push    0
        call    FUN_00563060
        add    esp, 4
L_a0e8:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a15f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_a15f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        mov    edi, dword ptr [ecx + 0x18]
L_a15f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a188
        push    0
        call    FUN_00563060
        add    esp, 4
L_a188:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a1ff
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_a1ff
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        mov    edi, dword ptr [ecx + 0x24]
L_a1ff:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a228
        push    0
        call    FUN_00563060
        add    esp, 4
L_a228:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a29f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        test    ecx, ecx
        je    L_a29f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        mov    edi, dword ptr [ecx + 0x28]
L_a29f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a2c8
        push    0
        call    FUN_00563060
        add    esp, 4
L_a2c8:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a359
        test    ecx, ecx
        jle    L_a34a
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    dword ptr [eax + 0x28], 0
        jmp    L_a359
L_a34a:
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    dword ptr [ecx + 0x28], 1
L_a359:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        add    esp, 4
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_a3ef
        fild    dword ptr [esp + 4]
        fstp    dword ptr [esi + 0x61c]
L_a3ef:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    
        nop    
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
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a480
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x24]
        test    esi, esi
        je    L_a480
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        mov    esi, dword ptr [eax + 0x20]
        mov    edx, dword ptr [eax + 0x1c]
        add    esi, ecx
        add    edx, ecx
        mov    dword ptr [eax + 0x20], esi
        mov    dword ptr [eax + 0x1c], edx
L_a480:
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
        nop    
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
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a518
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x24]
        test    esi, esi
        je    L_a518
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax + 0x18]
        mov    esi, dword ptr [eax + 0x24]
        add    edx, ecx
        mov    dword ptr [eax + 0x18], edx
        mov    edx, dword ptr [eax + 0x1c]
        add    esi, ecx
        add    edx, ecx
        mov    dword ptr [eax + 0x24], esi
        mov    dword ptr [eax + 0x1c], edx
L_a518:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a594
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x24]
        test    esi, esi
        pop    esi
        je    L_a594
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        add    dword ptr [eax + 0x1c], ecx
L_a594:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
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
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a620
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x24]
        test    esi, esi
        je    L_a620
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x24]
        mov    esi, dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax + 0x1c]
        add    esi, ecx
        add    edx, ecx
        mov    dword ptr [eax + 0x24], esi
        mov    dword ptr [eax + 0x1c], edx
L_a620:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a68f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_a68f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edi, dword ptr [ecx + 0x1c]
L_a68f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a6b8
        push    0
        call    FUN_00563060
        add    esp, 4
L_a6b8:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a72f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_a72f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edi, dword ptr [ecx + 0x24]
L_a72f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a758
        push    0
        call    FUN_00563060
        add    esp, 4
L_a758:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_a7e4
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_a7e4
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [edx + 0x24], ecx
L_a7e4:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a84f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_a84f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edi, dword ptr [ecx + 0x28]
L_a84f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_a878
        push    0
        call    FUN_00563060
        add    esp, 4
L_a878:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a8f5
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_a8f5
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059ced0
        mov    edi, eax
L_a8f5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_a91e
        push    0
        call    FUN_00563060
        add    esp, 4
L_a91e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_a995
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_a995
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cef0
        mov    edi, eax
L_a995:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_a9be
        push    0
        call    FUN_00563060
        add    esp, 4
L_a9be:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_aa35
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_aa35
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cf80
        mov    edi, eax
L_aa35:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_aa5e
        push    0
        call    FUN_00563060
        add    esp, 4
L_aa5e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
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
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_aae7
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_aae7
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059d6e0
L_aae7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_ab55
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_ab55
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cf10
        mov    edi, eax
L_ab55:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_ab7e
        push    0
        call    FUN_00563060
        add    esp, 4
L_ab7e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_abf5
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_abf5
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cf90
        mov    edi, eax
L_abf5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_ac1e
        push    0
        call    FUN_00563060
        add    esp, 4
L_ac1e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
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
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_aca7
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_aca7
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059d7e0
L_aca7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_ad15
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_ad15
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cf30
        mov    edi, eax
L_ad15:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_ad3e
        push    0
        call    FUN_00563060
        add    esp, 4
L_ad3e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_adb5
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_adb5
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cfa0
        mov    edi, eax
L_adb5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_adde
        push    0
        call    FUN_00563060
        add    esp, 4
L_adde:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
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
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_ae67
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_ae67
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059d8e0
L_ae67:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_aed5
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_aed5
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cf50
        mov    edi, eax
L_aed5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_aefe
        push    0
        call    FUN_00563060
        add    esp, 4
L_aefe:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        push    esi
        mov    esi, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x44]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_af75
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_af75
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059cfb0
        mov    edi, eax
L_af75:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_af9e
        push    0
        call    FUN_00563060
        add    esp, 4
L_af9e:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
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
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_b027
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_b027
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        push    ecx
        mov    ecx, dword ptr [eax + 0x1c]
        call    FUN_0059d9f0
L_b027:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_b08f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1c]
        test    ecx, ecx
        je    L_b08f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edi, dword ptr [ecx + 0x20]
L_b08f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_b0b8
        push    0
        call    FUN_00563060
        add    esp, 4
L_b0b8:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_b144
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop    esi
        je    L_b144
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [edx + 0x20], ecx
L_b144:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x44]
        push    esi
        lea    eax, [ecx + 0x44]
        push    edi
        or    edi, 0xffffffff
        xor    edx, 0x85739531
        je    L_b1b2
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        test    edx, edx
        je    L_b1b2
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x34]
        mov    edx, dword ptr [ecx + 0x48]
        test    edx, edx
        je    L_b1b2
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x34]
        mov    ecx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [ecx + 0x64]
L_b1b2:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_b1db
        push    0
        call    FUN_00563060
        add    esp, 4
L_b1db:
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_b257
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x34]
        test    ecx, ecx
        je    L_b257
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    ecx, dword ptr [edx + 0x48]
        test    ecx, ecx
        je    L_b257
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        mov    edx, dword ptr [ecx + 0x48]
        mov    edi, dword ptr [edx + 0x84]
L_b257:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_b27e
        push    0
        call    FUN_00563060
        add    esp, 4
L_b27e:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
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
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_b31b
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x34]
        test    esi, esi
        je    L_b31b
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x34]
        mov    esi, dword ptr [edx + 0x48]
        test    esi, esi
        je    L_b31b
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x34]
        mov    eax, dword ptr [edx + 0x48]
        mov    dword ptr [eax + 0x84], ecx
L_b31b:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        lea    eax, [ecx + 0x44]
        mov    ecx, dword ptr [eax]
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_b3b5
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x20]
        test    ecx, ecx
        je    L_b3b5
        push    1
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_00412570
        call    FUN_00570320
        mov    ecx, dword ptr [eax + 0x20]
        call    FUN_0059bc80
        test    eax, eax
        je    L_b3b5
        mov    edi, dword ptr [eax + 0x1c]
L_b3b5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_b3de
        push    0
        call    FUN_00563060
        add    esp, 4
L_b3de:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x44]
        je    L_b498
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x20]
        test    ecx, ecx
        je    L_b498
        push    0
        push    ecx
        mov    ecx, esp
        push    esi
        call    FUN_00412570
        push    edi
        call    FUN_00570320
        mov    ecx, dword ptr [eax + 0x20]
        call    FUN_0059bf90
L_b498:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        xor    edi, edi
        xor    ecx, 0x85739531
        je    L_b50f
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x34]
        test    ecx, ecx
        je    L_b50f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        mov    edi, dword ptr [ecx + 0x44]
L_b50f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_b538
        push    0
        call    FUN_00563060
        add    esp, 4
L_b538:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_b5c4
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        push    esi
        mov    esi, dword ptr [edx + 0x34]
        test    esi, esi
        pop    esi
        je    L_b5c4
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x34]
        mov    dword ptr [edx + 0x44], ecx
L_b5c4:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        or    edi, 0xffffffff
        cmp    ecx, 3
        jg    L_b675
        test    ecx, ecx
        jl    L_b675
        mov    edx, dword ptr [g_007dab44]
        mov    edx, dword ptr [edx]
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0x44]
        add    edx, 0x44
        xor    esi, 0x85739531
        je    L_b64f
        mov    esi, dword ptr [edx]
        xor    esi, 0x85739531
        push    ebx
        mov    ebx, dword ptr [esi + 0x1c]
        test    ebx, ebx
        pop    ebx
        je    L_b64f
        mov    edx, dword ptr [edx]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x1c]
        mov    edi, dword ptr [edx + ecx*4 + 0x34]
L_b64f:
        add    eax, 4
        mov    esi, eax
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_b671
        push    0
        call    FUN_00563060
        add    esp, 4
L_b671:
        mov    dword ptr [esi], edi
        jmp    L_b69f
L_b675:
        mov    edx, dword ptr [g_00805928]
        add    eax, 4
        mov    esi, eax
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], eax
        jb    L_b699
        push    0
        call    FUN_00563060
        add    esp, 4
L_b699:
        mov    dword ptr [esi], 0xffffffff
L_b69f:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        or    edi, 0xffffffff
        cmp    ecx, 3
        jg    L_b755
        test    ecx, ecx
        jl    L_b755
        mov    edx, dword ptr [g_007dab44]
        mov    edx, dword ptr [edx]
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0x44]
        add    edx, 0x44
        xor    esi, 0x85739531
        je    L_b72f
        mov    esi, dword ptr [edx]
        xor    esi, 0x85739531
        push    ebx
        mov    ebx, dword ptr [esi + 0x1c]
        test    ebx, ebx
        pop    ebx
        je    L_b72f
        mov    edx, dword ptr [edx]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x1c]
        mov    edi, dword ptr [edx + ecx*4 + 0x40]
L_b72f:
        add    eax, 4
        mov    esi, eax
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_b751
        push    0
        call    FUN_00563060
        add    esp, 4
L_b751:
        mov    dword ptr [esi], edi
        jmp    L_b77f
L_b755:
        mov    edx, dword ptr [g_00805928]
        add    eax, 4
        mov    esi, eax
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], eax
        jb    L_b779
        push    0
        call    FUN_00563060
        add    esp, 4
L_b779:
        mov    dword ptr [esi], 0xffffffff
L_b77f:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        add    eax, 0x44
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        push    edi
        or    edi, 0xffffffff
        xor    ecx, 0x85739531
        je    L_b805
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x34]
        test    ecx, ecx
        je    L_b805
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    ecx, dword ptr [edx + 0x48]
        test    ecx, ecx
        je    L_b805
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x34]
        mov    edx, dword ptr [ecx + 0x48]
        mov    edi, dword ptr [edx + 0x54]
L_b805:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_b82c
        push    0
        call    FUN_00563060
        add    esp, 4
L_b82c:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_b8c5
        __emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, eax
        fstp    dword ptr [esp]
        call    FUN_005c1ae0
L_b8c5:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
        ret    
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b936
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b936
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xb4]
L_b936:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b9f0
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b9f0
        sub    edi, 0
        je    L_b9e9
        dec    edi
        je    L_b9e0
        dec    edi
        mov    ecx, esi
        je    L_b9d9
        call    FUN_00590390
        jmp    L_b9f0
L_b9d9:
        call    FUN_005903a0
        jmp    L_b9f0
L_b9e0:
        mov    ecx, esi
        call    FUN_00590380
        jmp    L_b9f0
L_b9e9:
        mov    ecx, esi
        call    FUN_00590370
L_b9f0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566b60
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        sub    eax, 4
        test    esi, esi
        fld    dword ptr [eax + 4]
        mov    dword ptr [g_0080592c], eax
        je    L_ba80
        push    ecx
        fstp    dword ptr [esp]
        mov    ecx, esi
        call    FUN_005cae50
        jmp    L_ba82
L_ba80:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_ba82:
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566b60
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        sub    eax, 4
        test    esi, esi
        fld    dword ptr [eax + 4]
        mov    dword ptr [g_0080592c], eax
        je    L_bb10
        push    ecx
        fstp    dword ptr [esp]
        mov    ecx, esi
        call    FUN_005cae80
        jmp    L_bb12
L_bb10:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_bb12:
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 4
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        test    esi, esi
        mov    dword ptr [g_0080592c], eax
        je    L_bbbd
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_bbbd
        cmp    edi, 1
        jne    L_bbb3
        mov    ecx, esi
        call    FUN_00590310
        jmp    L_bbbd
L_bbb3:
        mov    dword ptr [esi + 0x5b8], 0
L_bbbd:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
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
        sub    esp, 0x48
        mov    eax, dword ptr [g_007b8cec]
        mov    ecx, dword ptr [g_007b8ce8]
        mov    edx, dword ptr [g_007b8cf0]
        push    esi
        mov    esi, dword ptr [esp + 0x50]
        mov    dword ptr [esp + 8], eax
        mov    eax, dword ptr [esi + 0xd8]
        push    edi
        lea    edi, [eax + 0x80]
        mov    dword ptr [esp + 8], ecx
        push    edi
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x14], edx
        call    FUN_0041acb0
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x58]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 8], edx
        fld    dword ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x1c]
        mov    ecx, dword ptr [edi + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        mov    edx, eax
        mov    dword ptr [esp + 0x18], eax
        mov    eax, ecx
        mov    dword ptr [esp + 0x1c], ecx
        lea    ecx, [esp + 8]
        push    ecx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x40], edx
        mov    dword ptr [esp + 0x50], eax
        call    FUN_0041a070
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, esi
        call    FUN_004daa20
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x48]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004e2690
        pop    edi
        pop    esi
        add    esp, 0x48
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_bd1d
        __emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    ecx
        fmul    dword ptr [g_0077f674]
        fstp    dword ptr [esp]
        push    eax
        call    FUN_0057bbe0
        add    esp, 8
L_bd1d:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    dl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    byte ptr [g_0080da78], dl
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_be2a
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_be2a
        mov    eax, dword ptr [eax + 0x3b0]
        test    eax, eax
        je    L_be2a
        mov    ecx, dword ptr [g_007ddd74]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_be2a
        dec    edi
        neg    edi
        sbb    edi, edi
        and    edi, 0xfffffffe
        add    edi, 2
        mov    dword ptr [g_007b46c4], edi
L_be2a:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        ret    
    }
}
