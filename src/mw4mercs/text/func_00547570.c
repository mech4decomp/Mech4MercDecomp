/*
 * FUN_00547570 (extent 0x547570-0x547640) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc728;
extern void __cdecl FUN_004e41f0(void);
extern void __cdecl FUN_005404a0(void);

__declspec(naked) void FUN_00547570(void)
{
    __asm {
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        push    0
        mov    byte ptr [ecx + 0xf0], 1
        push    0x5475c0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], eax
        mov    eax, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x18], 0x41200000
        call    FUN_004e41f0
        mov    al, 1
        add    esp, 0x10
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 4]
        cmp    dword ptr [ecx], 0x429
        jne    L_75ef
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    byte ptr [ecx + 0xf0], 0
L_75ef:
        ret    
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    al, byte ptr [ebp + 0x16]
        test    al, al
        je    L_763d
        mov    ebx, dword ptr [ebp + 0x50]
        mov    eax, dword ptr [ebx + 0xe4]
        test    eax, eax
        je    L_763d
        mov    eax, dword ptr [ebx + 0xe8]
        push    esi
        xor    esi, esi
        test    eax, eax
        jle    L_7635
        push    edi
        lea    edi, [ebx + 0xfc]
L_761c:
        push    esi
        mov    ecx, ebp
        call    FUN_005404a0
        fstp    dword ptr [edi]
        mov    eax, dword ptr [ebx + 0xe8]
        inc    esi
        add    edi, 0x50
        cmp    esi, eax
        jl    L_761c
        pop    edi
L_7635:
        mov    byte ptr [ebp + 0x239df0], 1
        pop    esi
L_763d:
        pop    ebp
        pop    ebx
        ret    
    }
}
