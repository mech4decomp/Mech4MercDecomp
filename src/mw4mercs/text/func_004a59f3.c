/*
 * FUN_004a59f3 (extent 0x4a59f3-0x4a5c05) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004a59f3(void)
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
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebx
        push    edi
        mov    esi, ecx
        push    0x525
        call    FUN_004a9250
        lea    ecx, [esi + 0x2b8]
        mov    dword ptr [esi + 0x2b4], 6
        call    FUN_004ae3c0
        mov    eax, 2
        mov    dword ptr [esi + 0x2c4], eax
        mov    dword ptr [esi + 0x2dc], 9
        mov    dword ptr [esi + 0x2e0], 0
        mov    dword ptr [esi + 0x2e8], eax
        lea    ecx, [esi + 0x304]
        mov    dword ptr [esi + 0x300], 4
        call    FUN_004ae3c0
        mov    ebp, 1
        mov    dword ptr [esi + 0x310], ebp
        lea    ecx, [esi + 0x324]
        mov    dword ptr [esi + 0x320], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x330], ebp
        lea    ecx, [esi + 0x344]
        mov    dword ptr [esi + 0x340], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x350], ebp
        lea    ecx, [esi + 0x364]
        mov    dword ptr [esi + 0x360], 4
        call    FUN_004ae3c0
        push    ebx
        mov    dword ptr [esi + 0x370], ebp
        push    edi
        lea    ecx, [esi + 0x2b8]
        mov    dword ptr [esi], 0x770394
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x2c4]
        call    FUN_004adf70
        mov    eax, dword ptr [edi]
        push    ebp
        lea    ecx, [esi + 0x2d8]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x2e0]
        call    FUN_004add90
        push    ebx
        push    edi
        lea    ecx, [esi + 0x2e8]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    ebp
        lea    eax, [esi + 0x2fc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x304]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x310]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebp
        lea    eax, [esi + 0x31c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x324]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x330]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebp
        lea    eax, [esi + 0x33c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x344]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x350]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebp
        lea    eax, [esi + 0x35c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebx
        push    edi
        lea    ecx, [esi + 0x364]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x370]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    ebp
        lea    eax, [esi + 0x37c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    ebx, [esi + 0x380]
        push    ebx
        mov    ecx, edi
        mov    dword ptr [esi + 0x270], 0xdc
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebx]
        add    eax, 0x15
        lea    eax, [eax + eax*2]
        shl    eax, 2
        pop    edi
        mov    dword ptr [esi + 0x26c], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
