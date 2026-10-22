/*
 * FUN_004eafa0 (extent 0x4eafa0-0x4eb158) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dc7b0;
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004eb0a0(void);
extern void __cdecl FUN_004eb480(void);
extern void __cdecl FUN_004eb920(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_004ebee0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_004eafa0(void)
{
    __asm {
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
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        push    edi
        lea    ecx, [esi + 0x6c]
        call    FUN_0041fd80
        mov    ecx, dword ptr [esi + 0x30]
        mov    edi, eax
        xor    eax, eax
        test    edi, edi
        setne    al
        test    ecx, ecx
        mov    dword ptr [esp + 8], eax
        je    L_afe1
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 8]
        push    eax
        mov    eax, dword ptr [esi + 0x2c]
        push    eax
        call    dword ptr [edx + 4]
L_afe1:
        push    0
        call    FUN_00707e70
        fst    qword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_b040
        fcomp    qword ptr [esi + 0x24]
        fnstsw  ax
        test    ah, 1
        jne    L_b042
        mov    ecx, dword ptr [esi + 0x2c]
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x14], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], edx
        call    FUN_004eb920
        fld    dword ptr [esi + 0x68]
        fadd    qword ptr [esp + 0xc]
        pop    edi
        fstp    qword ptr [esi + 0x24]
        pop    esi
        add    esp, 0x18
        ret    
L_b040:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_b042:
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x2c]
        cmp    eax, 4
        push    esi
        mov    esi, ecx
        je    L_b086
        jle    L_b099
        cmp    eax, 6
        jg    L_b099
        add    esi, 0x6c
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_b099
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_004ebee0
        pop    esi
        ret    4
L_b086:
        lea    ecx, [esi + 0x6c]
        call    FUN_0041fd80
        test    eax, eax
        jne    L_b099
        mov    ecx, esi
        call    FUN_004eb0a0
L_b099:
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x2c]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 0x10], ecx
        mov    edx, dword ptr [eax + 0x1c]
        push    edi
        mov    dword ptr [esp + 0x18], edx
        mov    eax, dword ptr [eax + 0x2c]
        push    0
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00707e70
        fadd    dword ptr [esi + 0x68]
        mov    al, byte ptr [g_007dc7b0]
        test    al, al
        fstp    qword ptr [esi + 0x24]
        lea    eax, [esi + 0x40]
        jne    L_b0e9
        lea    eax, [esi + 0x3c]
L_b0e9:
        mov    ecx, dword ptr [esi + 0x64]
        mov    edx, dword ptr [esi + 0x60]
        push    ecx
        mov    ecx, dword ptr [esi + 0x5c]
        push    edx
        mov    edx, dword ptr [esi + 0x58]
        push    ecx
        mov    ecx, dword ptr [esi + 0x54]
        push    edx
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esi + 0x50]
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esi + 0x4c]
        push    edx
        mov    edx, dword ptr [esi + 0x48]
        push    ecx
        mov    ecx, dword ptr [esi + 0x44]
        push    edx
        mov    edx, dword ptr [esi + 0x34]
        push    ecx
        push    eax
        push    edx
        mov    dword ptr [esp + 0x3c], 0
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0
        call    FUN_004eb480
        add    esp, 0x34
        mov    edi, eax
        push    edi
        lea    ecx, [esi + 0x6c]
        call    FUN_0041fcd0
        mov    eax, dword ptr [esi + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_004ebe90
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    
    }
}
