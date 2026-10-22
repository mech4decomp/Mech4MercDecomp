/*
 * FUN_005df4d1 (extent 0x5df4d1-0x5df5f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_005df620(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005df4d1(void)
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        call    FUN_005df620
        mov    esi, dword ptr [esp + 0x18]
        cmp    eax, esi
        je    L_f5e8
        lea    ebx, [edi + 0x42c]
L_f50e:
        test    esi, esi
        jne    L_f518
        mov    dword ptr [edi + 0x488], esi
L_f518:
        mov    ecx, ebx
        call    FUN_0041fcb0
        test    esi, esi
        je    L_f5e8
        cmp    byte ptr [edi + 0x41c], 1
        jne    L_f5e8
        push    0
        call    FUN_00707e70
        fstp    qword ptr [edi + 0x424]
        push    esi
        mov    ecx, ebx
        call    FUN_0041fcd0
        push    0x788894
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        lea    eax, [esp + 0x18]
        add    esi, 0x28c
        push    eax
        mov    ecx, esi
        call    FUN_00416b60
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f586
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f586
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f586:
        test    ebp, ebp
        mov    dword ptr [edi + 0x434], ebp
        jne    L_f5cd
        push    0x782330
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_00416b60
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_f5c7
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f5c7
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f5c7:
        mov    dword ptr [edi + 0x434], esi
L_f5cd:
        mov    eax, dword ptr [edi + 0x434]
        test    eax, eax
        jne    L_f5e8
        mov    ecx, edi
        xor    esi, esi
        call    FUN_005df620
        test    eax, eax
        jne    L_f50e
L_f5e8:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
