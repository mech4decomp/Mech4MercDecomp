/*
 * FUN_0072ef90 (extent 0x72ef90-0x72f065) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00849308;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);
extern void __cdecl FUN_0072f4c0(void);

__declspec(naked) void FUN_0072ef90(void)
{
    __asm {
        mov    eax, dword ptr [g_00849308]
        push    eax
        push    0x24
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_efbe
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0072f4c0
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    0xc
L_efbe:
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        mov    dword ptr [edx], eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_f002
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_eff0
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_eff0
        xor    al, al
        ret    4
L_eff0:
        push    5
        push    1
        call    FUN_0070e220
        neg    eax
        sbb    eax, eax
        neg    eax
        ret    4
L_f002:
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    al, byte ptr [esi + 0x20]
        test    al, al
        je    L_f03c
        push    0
        push    0
        push    0
        push    0x27
        call    FUN_00704a80
        test    al, 2
        je    L_f03c
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x18]
        fcomp    qword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_f038
        mov    bl, 1
        jmp    L_f03e
L_f038:
        mov    byte ptr [esi + 0x20], 0
L_f03c:
        xor    bl, bl
L_f03e:
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        mov    byte ptr [esp + 0xc], bl
        jne    L_f05e
        mov    eax, dword ptr [esp + 0xc]
        push    5
        push    1
        and    eax, 0xff
        push    eax
        call    FUN_0070e1b0
L_f05e:
        pop    esi
        mov    al, bl
        pop    ebx
        ret    4
    }
}
