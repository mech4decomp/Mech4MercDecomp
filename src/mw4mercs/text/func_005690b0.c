/*
 * FUN_005690b0 (extent 0x5690b0-0x5693b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00568ea0(void);
extern void __cdecl FUN_00568f00(void);
extern void __cdecl FUN_00568f20(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_00581350(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_005690b0(void)
{
    __asm {
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
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_9122
        call    FUN_00566c30
        push    eax
        call    FUN_00568f20
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_91e7
        jmp    L_91dd
L_9122:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_9162
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_9157
        push    0
        call    FUN_00563060
        add    esp, 4
L_9157:
        mov    dword ptr [esi], 0xfffffffe
        jmp    L_91e9
L_9162:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_91b3
        cmp    esi, -1
        jne    L_9188
        push    0x77fac0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_9188
        int 3    
L_9188:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_91b3
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_91b3
        push    0x77fa90
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_91b3
        int 3    
L_91b3:
        push    esi
        call    FUN_00568f00
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 4
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_91e7
L_91dd:
        push    0
        call    FUN_00563060
        add    esp, 4
L_91e7:
        mov    dword ptr [esi], edi
L_91e9:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        xor    eax, eax
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x18], eax
        je    L_924a
        lea    eax, [esp + 0x10]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_933a
L_924a:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_933a
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_933a
L_9284:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ebp, dword ptr [g_007dab40]
        mov    edx, dword ptr [edi]
        xor    eax, ebp
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_9327
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_9327
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_9327
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_9327
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_9327
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_9327
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x20], esi
        je    L_9316
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        call    FUN_00581350
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x14], eax
        jmp    L_9327
L_9316:
        push    1
        lea    edx, [esp + 0x24]
        push    edx
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00580d50
L_9327:
        mov    ecx, ebx
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_9284
L_933a:
        mov    edi, dword ptr [esp + 0x10]
        cmp    edi, dword ptr [esp + 0x14]
        je    L_9382
        mov    ebp, dword ptr [esp + 0x38]
        mov    ebx, dword ptr [esp + 0x34]
L_934c:
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x28]
        push    ebp
        push    ebx
        push    eax
        mov    eax, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [edi]
        push    edx
        push    eax
        push    ecx
        call    FUN_00568ea0
        mov    esi, eax
        add    esp, 0x1c
        test    esi, esi
        jge    L_939c
        mov    eax, dword ptr [esp + 0x14]
        add    edi, 4
        cmp    edi, eax
        jne    L_934c
        mov    edi, dword ptr [esp + 0x10]
L_9382:
        test    edi, edi
        je    L_938f
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_938f:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xfffffffe
        pop    ebx
        add    esp, 0xc
        ret    
L_939c:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_93ad
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_93ad:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
