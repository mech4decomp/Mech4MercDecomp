/*
 * FUN_0063b1ba (extent 0x63b1ba-0x63b36d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0063af40(void);
extern void __cdecl FUN_0063b1c0(void);
extern void __cdecl FUN_0064df20(void);
extern void __cdecl FUN_0064df50(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e600(void);

__declspec(naked) void FUN_0063b1ba(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, dword ptr [esp + 8]
        xor    eax, edx
        mov    ecx, dword ptr [eax + 0x20]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e600
        test    al, al
        je    L_b287
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e5a0
        mov    esi, eax
        mov    ecx, esi
        call    FUN_0064e100
        mov    edx, dword ptr [eax + 4]
        sub    edx, dword ptr [eax]
        test    edx, 0xfffffffc
        je    L_b287
        mov    ecx, esi
        call    FUN_0064df20
        test    al, al
        je    L_b287
        mov    ecx, esi
        call    FUN_0064df50
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    eax, 0xfa1
        jne    L_b287
        mov    ecx, esi
        call    FUN_0064e100
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_b287
        cmp    byte ptr [eax + 0xdc], 1
        jne    L_b287
        mov    al, 1
        pop    esi
        ret    
L_b287:
        xor    al, al
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [eax + 4]
        push    esi
        mov    esi, dword ptr [eax]
        cmp    esi, ebx
        push    edi
        je    L_b2c3
L_b2a0:
        mov    edi, dword ptr [esi]
        push    edi
        call    FUN_0063af40
        add    esp, 4
        test    eax, eax
        jle    L_b2bc
        push    edi
        call    FUN_0063b1c0
        add    esp, 4
        cmp    al, 1
        je    L_b2c9
L_b2bc:
        add    esi, 4
        cmp    esi, ebx
        jne    L_b2a0
L_b2c3:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    
L_b2c9:
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        mov    dword ptr [ecx], eax
        mov    al, 1
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 8]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x20]
        push    edi
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e600
        test    al, al
        jne    L_b312
        pop    edi
        pop    esi
        ret    
L_b312:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, eax
        call    FUN_0064e5a0
        mov    esi, eax
        mov    ecx, esi
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        sub    edx, edi
        mov    edi, dword ptr [esp + 0x10]
        sar    edx, 2
        cmp    edi, edx
        jb    L_b356
        pop    edi
        xor    al, al
        pop    esi
        ret    
L_b356:
        mov    ecx, esi
        call    FUN_0064e100
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [eax + edi*4]
        mov    edx, dword ptr [esp + 0x14]
        pop    edi
        mov    dword ptr [edx], ecx
        mov    al, 1
        pop    esi
        ret    
    }
}
