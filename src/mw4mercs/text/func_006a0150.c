/*
 * FUN_006a0150 (extent 0x6a0150-0x6a022e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006a02e0(void);
extern void __cdecl FUN_006a0400(void);
extern void __cdecl FUN_006a04e0(void);
extern void __cdecl FUN_006a04f0(void);

__declspec(naked) void FUN_006a0150(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a02e0
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
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        call    FUN_006a0400
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a04e0
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
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a04f0
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
        push    ecx
        mov    al, byte ptr [esp + 3]
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x799c54
        mov    byte ptr [esi + 4], al
        push    0x1c
        mov    dword ptr [esi + 4], 0
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0xb]
        mov    byte ptr [eax], 0
        mov    dword ptr [eax + 4], 0
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [eax + 8], eax
        add    esp, 4
        mov    dword ptr [eax + 0xc], eax
        mov    dword ptr [esi + 8], 0
        mov    byte ptr [esi + 0xc], cl
        mov    dword ptr [esi], 0x799c2c
        mov    eax, esi
        pop    esi
        pop    ecx
        ret    
    }
}
