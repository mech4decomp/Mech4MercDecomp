/*
 * FUN_0049a550 (extent 0x49a550-0x49a69e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_0049a550(void)
{
    __asm {
        mov    eax, ecx
        ret    8
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
        ret    8
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        push    ebx
        mov    esi, ecx
        push    0x52e
        call    FUN_00493660
        lea    ebp, [esi + 0x60]
        mov    ecx, ebp
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x6c]
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x78]
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x84]
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x90], 2
        mov    dword ptr [esi + 0xa4], 2
        push    edi
        mov    dword ptr [esi + 0xbc], 0
        push    ebx
        mov    ecx, ebp
        mov    dword ptr [esi], 0x7701f8
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea    ecx, [esi + 0x6c]
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea    ecx, [esi + 0x78]
        call    FUN_004ae5a0
        push    edi
        push    ebx
        lea    ecx, [esi + 0x84]
        call    FUN_004ae5a0
        cmp    edi, 0xf
        jle    L_a643
        push    edi
        push    ebx
        lea    ecx, [esi + 0x90]
        call    FUN_004adf70
        push    edi
        push    ebx
        lea    ecx, [esi + 0xa4]
        call    FUN_004adf70
        cmp    edi, 0x10
        jle    L_a660
        lea    eax, [esi + 0xbc]
        push    eax
        push    ebx
        call    FUN_00412a00
        add    esp, 8
        jmp    L_a660
L_a643:
        push    0
        lea    ecx, [esi + 0x90]
        call    FUN_004adfb0
        push    0x41c80000
        lea    ecx, [esi + 0xa4]
        call    FUN_004adfb0
L_a660:
        mov    eax, dword ptr [ebx]
        push    1
        lea    ecx, [esi + 0xb8]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x20]
        cmp    edi, 0x17
        jl    L_a68e
        mov    edx, dword ptr [ebx]
        push    1
        lea    eax, [esi + 0xb9]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x20]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_a68e:
        pop    edi
        mov    byte ptr [esi + 0xb9], 1
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
