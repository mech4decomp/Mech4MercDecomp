/*
 * FUN_005cd5dc (extent 0x5cd5dc-0x5cd705) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f23c0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005cd5e0(void);
extern void __cdecl FUN_005cd730(void);
extern void __cdecl FUN_005dcd40(void);

__declspec(naked) void FUN_005cd5dc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    eax, dword ptr [ebp + 0x378]
        mov    edx, dword ptr [ebp + 0x37c]
        cmp    eax, edx
        lea    ecx, [ebp + 0x378]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        je    L_d60f
L_d600:
        cmp    dword ptr [eax], esi
        je    L_d6ad
        add    eax, 4
        cmp    eax, edx
        jne    L_d600
L_d60f:
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        je    L_d625
        test    eax, eax
        je    L_d61d
        mov    dword ptr [eax], esi
L_d61d:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        jmp    L_d632
L_d625:
        push    1
        lea    edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_005cd730
L_d632:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x1c]
        xor    eax, 0x85739531
        mov    edi, dword ptr [eax + 0x1e4]
        add    eax, 0x1e4
L_d652:
        test    edi, edi
        je    L_d6ad
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_d6ad
        mov    eax, dword ptr [g_007f23c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d652
        cmp    esi, ebp
        je    L_d652
        cmp    dword ptr [esi + 0x1e4], 0x40000000
        jne    L_d652
        lea    ecx, [ebp + 0x1c8]
        call    FUN_0041fd80
        lea    ecx, [esi + 0x1c8]
        mov    ebx, eax
        call    FUN_0041fd80
        cmp    eax, ebx
        jne    L_d652
        mov    edx, dword ptr [ebp + 0x314]
        push    edx
        mov    ecx, esi
        call    FUN_005cd5e0
        jmp    L_d652
L_d6ad:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_005dcd40
        ret    4
        nop    
        nop    
        nop    
        cmp    dword ptr [ecx + 0x204], 0x3f800000
        jne    L_d702
        mov    eax, 1
        ret    
L_d702:
        xor    eax, eax
        ret    
    }
}
