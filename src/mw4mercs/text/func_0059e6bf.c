/*
 * FUN_0059e6bf (extent 0x59e6bf-0x59e7c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00531f40(void);
extern void __cdecl FUN_00532030(void);
extern void __cdecl FUN_0059e730(void);

__declspec(naked) void FUN_0059e6bf(void)
{
    __asm {
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        cmp    esi, 0x96
        push    edi
        mov    edi, ecx
        jge    L_e6fa
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_00531f40
        push    eax
        push    esi
        mov    ecx, edi
        call    FUN_0059e730
        pop    edi
        pop    esi
        ret    4
L_e6fa:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        lea    edx, [esi - 0x96]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_00532030
        push    eax
        push    esi
        mov    ecx, edi
        call    FUN_0059e730
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        push    edi
        mov    edi, ecx
        lea    eax, [esp + 0xc]
        lea    ebp, [edi + 0x10]
        push    eax
        mov    ecx, ebp
        call    FUN_00416b60
        test    eax, eax
        je    L_e752
        inc    dword ptr [eax + 0x18]
        inc    dword ptr [edi + 0x2c]
        pop    edi
        pop    ebp
        ret    8
L_e752:
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e7a4
        mov    ecx, dword ptr [g_007b8c10]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, esi
        call    FUN_00415180
        mov    edx, dword ptr [esp + 0x18]
        xor    eax, eax
        push    edx
        lea    ecx, [esi + 0x10]
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi], 0x76cd9c
        call    FUN_00412570
        mov    dword ptr [esi + 0x14], ebx
        mov    dword ptr [esi + 0x18], 1
        mov    dword ptr [esi], 0x783998
        pop    ebx
        jmp    L_e7a6
L_e7a4:
        xor    esi, esi
L_e7a6:
        lea    eax, [esp + 0x10]
        push    eax
        push    esi
        mov    ecx, ebp
        call    FUN_00416a90
        mov    eax, dword ptr [edi + 0x2c]
        inc    eax
        pop    esi
        mov    dword ptr [edi + 0x2c], eax
        pop    edi
        pop    ebp
        ret    8
    }
}
