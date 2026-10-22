/*
 * FUN_00578bec (extent 0x578bec-0x578f8c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00578a80(void);
extern void __cdecl FUN_00578d50(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_00581350(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00578bec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ecx
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
        cmp    ecx, 1
        sete    bl
        push    esi
        mov    dword ptr [g_0080592c], eax
        mov    byte ptr [esp + 0xc], bl
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_8c8d
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_00578a80
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 8
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    
L_8c8d:
        push    esi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_8ca0
        mov    byte ptr [eax + 0x614], bl
L_8ca0:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
        pop    ecx
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
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_8d2d
        cmp    edi, 1
        sete    cl
        mov    byte ptr [eax + 0x5fe], cl
L_8d2d:
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
        sub    esp, 0xc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_8d93
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_8e83
L_8d93:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_8e83
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebp, eax
        mov    ecx, ebp
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_8e83
L_8dcd:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [edi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_8e70
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_8e70
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_8e70
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_8e70
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_8e70
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_8e70
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_8e5f
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_00581350
        mov    eax, dword ptr [esp + 0x18]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_8e70
L_8e5f:
        push    1
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00580d50
L_8e70:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_8dcd
L_8e83:
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, dword ptr [esp + 0x10]
        mov    esi, eax
        je    L_8eb2
L_8e8f:
        mov    ecx, dword ptr [esi]
        mov    dl, byte ptr [ecx + 0x2f9]
        test    dl, dl
        jne    L_8ea7
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x11c]
        mov    eax, dword ptr [esp + 0xc]
L_8ea7:
        mov    ecx, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, ecx
        jne    L_8e8f
L_8eb2:
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        je    L_8ec2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8ec2:
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
        jne    L_8f19
        call    FUN_00566c30
        push    eax
        call    FUN_00578d50
        add    esp, 8
        jmp    L_8f74
L_8f19:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_8f3f
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_8f3f:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8f6a
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_8f6a
        push    0x7812f4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8f6a
        int 3    
L_8f6a:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x11c]
L_8f74:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
    }
}
