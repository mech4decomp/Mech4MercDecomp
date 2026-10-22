/*
 * FUN_005bceeb (extent 0x5bceeb-0x5bd0ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_005bdb60(void);
extern void __cdecl FUN_0067c2f0(void);
extern void __cdecl FUN_0067c430(void);
extern void __cdecl FUN_0067c440(void);
extern void __cdecl FUN_0067ddd0(void);

__declspec(naked) void FUN_005bceeb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x6ba0
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cf13
        mov    ecx, eax
        call    FUN_0067c2f0
        mov    dword ptr [esi + 0x92c], eax
        pop    esi
        ret    
L_cf13:
        xor    eax, eax
        mov    dword ptr [esi + 0x92c], eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x92c]
        test    esi, esi
        je    L_cf48
        mov    ecx, esi
        call    FUN_0067c430
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 0x92c], 0
L_cf48:
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x24
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x930]
        mov    eax, 0x100
        xor    ebp, ebp
        cmp    ecx, ebp
        mov    dword ptr [edi + 0x524], 0x7c
        mov    dword ptr [edi + 0x528], eax
        mov    dword ptr [edi + 0x52c], eax
        je    L_cf84
        call    FUN_0067ddd0
L_cf84:
        mov    ecx, dword ptr [edi + 0x92c]
        cmp    ecx, ebp
        je    L_cf93
        call    FUN_0067c440
L_cf93:
        push    ebx
        mov    dword ptr [edi + 0x504], ebp
        mov    dword ptr [edi + 0x508], ebp
        lea    esi, [edi + 0xb4]
        mov    ebx, 0xff
L_cfab:
        mov    dword ptr [esi + 0x47c], ebp
        mov    ecx, dword ptr [esi]
        cmp    ecx, ebp
        je    L_cfbf
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [esi], ebp
L_cfbf:
        add    esi, 4
        dec    ebx
        jne    L_cfab
        lea    eax, [edi + 0x94]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [eax]
        mov    ebx, 0x78714c
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x10], ebx
L_cfde:
        cmp    eax, ebp
        je    L_cfff
        mov    esi, dword ptr [eax]
        cmp    esi, ebp
        je    L_cfff
        lea    ecx, [esp + 0x10]
        call    FUN_00417ad0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        mov    eax, dword ptr [esp + 0x18]
        jmp    L_cfde
L_cfff:
        lea    eax, [edi + 0xa8]
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], ebx
        mov    dword ptr [esp + 0x24], eax
        pop    ebx
L_d014:
        cmp    eax, ebp
        je    L_d035
        mov    esi, dword ptr [eax]
        cmp    esi, ebp
        je    L_d035
        lea    ecx, [esp + 0x18]
        call    FUN_00417ad0
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
        mov    eax, dword ptr [esp + 0x20]
        jmp    L_d014
L_d035:
        lea    eax, [edi + 0x9c]
        mov    dword ptr [esp + 0x28], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x24], 0x77d010
L_d04d:
        cmp    eax, ebp
        je    L_d06e
        mov    esi, dword ptr [eax]
        cmp    esi, ebp
        je    L_d06e
        lea    ecx, [esp + 0x24]
        call    FUN_00417ad0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        mov    eax, dword ptr [esp + 0x2c]
        jmp    L_d04d
L_d06e:
        mov    dword ptr [edi + 0xa4], ebp
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x24
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0xa8]
        mov    dword ptr [esp + 0xc], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 8], 0x78714c
L_d09f:
        test    eax, eax
        je    L_d0c8
        mov    esi, dword ptr [eax]
        test    esi, esi
        je    L_d0c8
        push    esi
        mov    ecx, edi
        call    FUN_005bdb60
        lea    ecx, [esp + 8]
        call    FUN_00417ad0
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
        mov    eax, dword ptr [esp + 0x10]
        jmp    L_d09f
L_d0c8:
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    
    }
}
