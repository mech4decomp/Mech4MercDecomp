/*
 * FUN_004a9233 (extent 0x4a9233-0x4a935d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ab1e0(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004a9233(void)
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
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_004ab1e0
        mov    dword ptr [esi + 0x274], 8
        mov    dword ptr [esi + 0x278], 0
        mov    dword ptr [esi + 0x280], 1
        lea    ecx, [esi + 0x294]
        mov    dword ptr [esi + 0x290], 5
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x2a0]
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x278]
        mov    dword ptr [esi], 0x770450
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x280]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x28c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x294]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x2a0]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x2ac]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x2b0]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x2b2]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [esi + 0x2b3]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0xa
        jl    L_934e
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x2b1]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
L_934e:
        pop    edi
        mov    byte ptr [esi + 0x2b1], 0
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
