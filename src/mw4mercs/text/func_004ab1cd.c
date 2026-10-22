/*
 * FUN_004ab1cd (extent 0x4ab1cd-0x4ab59d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004ac9d0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004ab1cd(void)
{
    __asm {
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
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    ebx
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00493660
        lea    ecx, [esi + 0x68]
        mov    dword ptr [esi + 0x60], 0
        call    FUN_004ae3c0
        mov    ebp, 1
        mov    dword ptr [esi + 0x74], ebp
        mov    dword ptr [esi + 0x80], ebp
        mov    dword ptr [esi + 0x8c], ebp
        mov    dword ptr [esi + 0x98], 0
        mov    dword ptr [esi + 0xa0], 2
        lea    ecx, [esi + 0xb8]
        mov    dword ptr [esi + 0xb4], 5
        call    FUN_004ae3c0
        lea    ecx, [esi + 0xc4]
        call    FUN_004ae3c0
        lea    ecx, [esi + 0xd8]
        mov    dword ptr [esi + 0xd4], 6
        call    FUN_004ae3c0
        mov    eax, 2
        mov    dword ptr [esi + 0xe4], eax
        xor    ecx, ecx
        mov    edx, 8
        mov    dword ptr [esi + 0xfc], edx
        mov    dword ptr [esi + 0x100], ecx
        mov    dword ptr [esi + 0x108], ebp
        mov    dword ptr [esi + 0x118], edx
        mov    dword ptr [esi + 0x11c], ecx
        mov    dword ptr [esi + 0x124], ebp
        mov    dword ptr [esi + 0x134], edx
        mov    dword ptr [esi + 0x138], ecx
        mov    dword ptr [esi + 0x140], ebp
        mov    ecx, 0xa
        mov    dword ptr [esi + 0x150], ecx
        mov    dword ptr [esi + 0x154], eax
        mov    dword ptr [esi + 0x168], ebp
        mov    dword ptr [esi + 0x178], ecx
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x190], ebp
        mov    dword ptr [esi + 0x1a0], ecx
        mov    dword ptr [esi + 0x1a4], eax
        mov    dword ptr [esi + 0x1b8], ebp
        lea    ecx, [esi + 0x1cc]
        mov    dword ptr [esi + 0x1c8], 5
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x1d8]
        call    FUN_004ae3c0
        lea    ebp, [esi + 0x1e8]
        lea    ecx, [ebp + 4]
        mov    dword ptr [ebp], 4
        call    FUN_004ae3c0
        mov    dword ptr [ebp + 0x10], 1
        lea    ecx, [esi + 0x20c]
        mov    dword ptr [esi + 0x208], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x218], 1
        lea    ecx, [esi + 0x22c]
        mov    dword ptr [esi + 0x228], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x238], 1
        lea    ecx, [esi + 0x24c]
        mov    dword ptr [esi + 0x248], 4
        call    FUN_004ae3c0
        push    ebx
        mov    dword ptr [esi + 0x258], 1
        push    edi
        lea    ecx, [esi + 0x60]
        mov    dword ptr [esi], 0x7704ac
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0x68]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x74]
        call    FUN_004addd0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x80]
        call    FUN_004addd0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x8c]
        call    FUN_004addd0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x98]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0xa0]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0xb8]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0xc4]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0xd0]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0xd8]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0xe4]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0xf8]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x100]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0x108]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x114]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x11c]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0x124]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x130]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x138]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0x140]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x14c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x154]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0x168]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x174]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x17c]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0x190]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x19c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x1a4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea    ecx, [esi + 0x1b8]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x1c4]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x1cc]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x1d8]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x1e4]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        mov    ecx, ebp
        call    FUN_004ac9d0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x208]
        call    FUN_004ac9d0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x228]
        call    FUN_004ac9d0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x248]
        call    FUN_004ac9d0
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x268]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    }
}
