/*
 * FUN_004a32a5 (extent 0x4a32a5-0x4a34db) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004ade00(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004a32a5(void)
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
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    ebp
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00493660
        lea    ecx, [esi + 0x64]
        mov    dword ptr [esi + 0x60], 4
        call    FUN_004ae3c0
        mov    ebx, 1
        mov    dword ptr [esi + 0x70], ebx
        lea    ecx, [esi + 0x84]
        mov    dword ptr [esi + 0x80], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x90], ebx
        lea    ecx, [esi + 0xa4]
        mov    dword ptr [esi + 0xa0], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0xb0], ebx
        lea    ecx, [esi + 0xc4]
        mov    dword ptr [esi + 0xc0], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0xd0], ebx
        mov    dword ptr [esi + 0xe0], 8
        mov    dword ptr [esi + 0xe4], 0
        mov    dword ptr [esi + 0xec], ebx
        lea    ecx, [esi + 0x100]
        mov    dword ptr [esi + 0xfc], 5
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x10c]
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x64]
        mov    dword ptr [esi], 0x770304
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x70]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0x7c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x84]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x90]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0x9c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0xa4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0xb0]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0xbc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0xc4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0xd0]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0xdc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0x16
        jl    L_344d
        push    ebp
        push    edi
        lea    ecx, [esi + 0xe4]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0xec]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0xf8]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        jmp    L_346e
L_344d:
        mov    dword ptr [esi + 0xe8], 0
        push    0x3f800000
        lea    ecx, [esi + 0xec]
        mov    byte ptr [esi + 0xf8], 0
        call    FUN_004ade00
L_346e:
        push    ebp
        push    edi
        lea    ecx, [esi + 0x100]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x10c]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0x118]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0x16
        jl    L_34ad
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0x11c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        jmp    L_34b4
L_34ad:
        mov    byte ptr [esi + 0x11c], 0
L_34b4:
        mov    edx, dword ptr [edi]
        push    ebx
        lea    eax, [esi + 0x11d]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    ebx
        lea    ecx, [esi + 0x11e]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    }
}
