/*
 * FUN_004d7138 (extent 0x4d7138-0x4d72f1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern void __cdecl FUN_004d79d0(void);
extern void __cdecl FUN_004ff200(void);
extern void __cdecl FUN_004ff210(void);
extern void __cdecl FUN_004ff300(void);
extern void __cdecl FUN_004ff330(void);
extern void __cdecl FUN_004ffa40(void);
extern void __cdecl FUN_00500110(void);
extern void __cdecl FUN_00500150(void);
extern void __cdecl FUN_00500520(void);
extern void __cdecl FUN_00500540(void);
extern void __cdecl FUN_005006a0(void);

__declspec(naked) void FUN_004d7138(void)
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [eax + 0x15c]
        test    esi, esi
        je    L_7165
        push    esi
        call    FUN_004ff200
        add    esp, 4
        test    al, al
        jne    L_716b
        push    esi
        call    FUN_004ffa40
        add    esp, 4
L_7165:
        mov    al, 1
        pop    esi
        ret    4
L_716b:
        xor    al, al
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x15c]
        test    eax, eax
        jne    L_7191
        ret    4
L_7191:
        push    eax
        call    FUN_00500150
        add    esp, 4
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x15c]
        push    eax
        push    edx
        call    FUN_00500110
        add    esp, 8
        test    eax, eax
        je    L_71d2
        mov    ecx, dword ptr [esp + 0xc]
        push    0x76b768
        push    ecx
        push    eax
        call    FUN_00500540
        add    esp, 0xc
        ret    0xc
L_71d2:
        xor    eax, eax
        ret    0xc
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
        mov    edx, dword ptr [ecx + 0x15c]
        push    eax
        push    edx
        call    FUN_00500110
        add    esp, 8
        test    eax, eax
        je    L_7208
        push    eax
        call    FUN_00500520
        add    esp, 4
        ret    8
L_7208:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x15c]
        push    eax
        push    edx
        call    FUN_00500110
        add    esp, 8
        test    eax, eax
        je    L_7247
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    0x76b768
        push    ecx
        push    edx
        push    eax
        call    FUN_005006a0
        add    esp, 0x10
        ret    0x10
L_7247:
        xor    eax, eax
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [eax + 0x1c]
        push    0x50
        lea    edi, [esi + 0x104]
        call    FUN_004d79d0
        push    eax
        push    edi
        call    dword ptr [g_0076b320]
        push    0
        push    1
        push    0x4d72f0
        push    0xa
        push    edi
        push    0x772ec4
        push    0x772ec4
        call    FUN_004ff210
        add    esp, 0x28
        test    eax, eax
        mov    dword ptr [esi + 0x15c], eax
        je    L_72d6
        mov    ecx, dword ptr [esi + 0x154]
        push    ecx
        lea    edx, [esi + 4]
        push    edx
        push    1
        push    eax
        call    FUN_004ff330
        add    esp, 0x10
        test    eax, eax
        je    L_72d6
        mov    eax, dword ptr [esi + 0x15c]
        push    eax
        mov    dword ptr [esi + 0x158], 7
        call    FUN_004ff300
        add    esp, 4
        mov    dword ptr [esi + 0x15c], 0
L_72d6:
        mov    ecx, dword ptr [esi + 0x15c]
        xor    eax, eax
        test    ecx, ecx
        pop    edi
        setne    al
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
        ret    
    }
}
