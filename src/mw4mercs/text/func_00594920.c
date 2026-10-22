/*
 * FUN_00594920 (extent 0x594920-0x594a4c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007dd268;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00594a20(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00594920(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x24]
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_492c:
        test    ebp, ebp
        je    L_498d
        mov    edi, dword ptr [ebp]
        test    edi, edi
        mov    ebp, dword ptr [ebp + 4]
        je    L_498d
        mov    esi, dword ptr [edi + 0x24]
        test    esi, esi
        je    L_4944
        inc    byte ptr [esi - 1]
L_4944:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_4974
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_4974
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4974:
        test    bl, bl
        je    L_492c
        mov    eax, dword ptr [g_007dd268]
        test    eax, eax
        je    L_492c
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_00594a20
        jmp    L_492c
L_498d:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
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
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x2c]
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], ecx
L_49ac:
        test    ebp, ebp
        je    L_4a0d
        mov    edi, dword ptr [ebp]
        test    edi, edi
        mov    ebp, dword ptr [ebp + 4]
        je    L_4a0d
        mov    esi, dword ptr [edi + 0x24]
        test    esi, esi
        je    L_49c4
        inc    byte ptr [esi - 1]
L_49c4:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    esi, esi
        je    L_49f4
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_49f4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_49f4:
        test    bl, bl
        je    L_49ac
        mov    eax, dword ptr [g_007dd268]
        test    eax, eax
        je    L_49ac
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_00594a20
        jmp    L_49ac
L_4a0d:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
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
        sub    esp, 8
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        mov    eax, dword ptr [esp + 0x10]
        fiadd    dword ptr [eax + 0x1c]
        lea    ecx, [esp + 4]
        push    ecx
        push    eax
        mov    ecx, esi
        fstp    qword ptr [esp + 0xc]
        call    FUN_00416a90
        pop    esi
        add    esp, 8
        ret    4
    }
}
