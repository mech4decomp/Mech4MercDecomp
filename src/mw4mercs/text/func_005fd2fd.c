/*
 * FUN_005fd2fd (extent 0x5fd2fd-0x5fd3f7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004da590(void);
extern void __cdecl FUN_005fd320(void);

__declspec(naked) void FUN_005fd2fd(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004da590
        mov    eax, dword ptr [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    FUN_005fd320
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        sub    esp, 0x14
        add    ecx, 0x28c
        push    esi
        push    ecx
        lea    ecx, [esp + 8]
        call    FUN_00416bc0
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 4], 0x774218
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_d3e7
        mov    eax, dword ptr [esp + 0x1c]
        push    ebx
        push    ebp
        push    edi
        lea    ebp, [eax + 0x58]
L_d359:
        mov    edi, dword ptr [esi + 0x44]
        mov    eax, edi
        test    eax, eax
        mov    dword ptr [esp + 0x28], eax
        je    L_d369
        inc    byte ptr [eax - 1]
L_d369:
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, ebp
        call    FUN_00416b60
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x28]
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    eax, eax
        je    L_d398
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d398
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d398:
        test    bl, bl
        je    L_d3d1
        mov    eax, edi
        test    eax, eax
        mov    dword ptr [esp + 0x28], eax
        je    L_d3a9
        inc    byte ptr [eax - 1]
L_d3a9:
        lea    edx, [esp + 0x28]
        push    edx
        push    esi
        mov    ecx, ebp
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_d3d1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d3d1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d3d1:
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_d359
        pop    edi
        pop    ebp
        pop    ebx
L_d3e7:
        lea    ecx, [esp + 4]
        call    FUN_00416c60
        pop    esi
        add    esp, 0x14
        ret    4
    }
}
