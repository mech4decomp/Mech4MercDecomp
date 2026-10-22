/*
 * FUN_00561291 (extent 0x561291-0x5614c1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00561a90(void);

__declspec(naked) void FUN_00561291(void)
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
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0xc]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        lea    eax, [esp + 0x10]
        mov    dword ptr [edi], 0x77dfdc
        push    eax
        lea    ecx, [esp + 0x13]
        lea    edi, [esi + 0x38]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00561a90
        push    0x18
        call    FUN_004084d0
        mov    dl, byte ptr [esp + 0x13]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [edi], eax
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 0xc], eax
        mov    al, byte ptr [esp + 0x13]
        mov    byte ptr [esi + 0x44], al
        push    0x18
        mov    dword ptr [edi + 4], ebx
        mov    byte ptr [edi + 8], dl
        mov    dword ptr [esi + 0x44], ebx
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0x17]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        add    esp, 8
        mov    dword ptr [esi + 0x44], eax
        mov    dword ptr [esi + 0x48], ebx
        mov    dword ptr [eax + 8], eax
        pop    edi
        mov    dword ptr [eax + 0xc], eax
        mov    byte ptr [esi + 4], bl
        mov    byte ptr [esi + 0x4c], cl
        mov    dword ptr [esi], 0x77dfc4
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 8
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x2c], eax
        mov    dword ptr [ecx + 0x30], edx
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
        mov    byte ptr [ecx + 4], 1
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
        mov    byte ptr [ecx + 4], 0
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
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0xc]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        lea    eax, [esp + 0x10]
        mov    dword ptr [edi], 0x77dfdc
        push    eax
        lea    ecx, [esp + 0x13]
        lea    edi, [esi + 0x38]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00561a90
        push    0x18
        call    FUN_004084d0
        mov    dl, byte ptr [esp + 0x13]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [edi], eax
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 0xc], eax
        mov    al, byte ptr [esp + 0x13]
        mov    byte ptr [esi + 0x44], al
        push    0x18
        mov    dword ptr [edi + 4], ebx
        mov    byte ptr [edi + 8], dl
        mov    dword ptr [esi + 0x44], ebx
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0x17]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        add    esp, 8
        mov    dword ptr [esi + 0x44], eax
        mov    dword ptr [esi + 0x48], ebx
        mov    dword ptr [eax + 8], eax
        pop    edi
        mov    dword ptr [eax + 0xc], eax
        mov    byte ptr [esi + 4], bl
        mov    byte ptr [esi + 0x4c], cl
        mov    dword ptr [esi], 0x77dfc4
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 8
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
        nop    
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0xc]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        lea    eax, [esp + 0x10]
        mov    dword ptr [edi], 0x77dfdc
        push    eax
        lea    ecx, [esp + 0x13]
        lea    edi, [esi + 0x38]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00561a90
        push    0x18
        call    FUN_004084d0
        mov    dl, byte ptr [esp + 0x13]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [edi], eax
        mov    dword ptr [eax + 8], eax
        mov    dword ptr [eax + 0xc], eax
        mov    al, byte ptr [esp + 0x13]
        mov    byte ptr [esi + 0x44], al
        push    0x18
        mov    dword ptr [edi + 4], ebx
        mov    byte ptr [edi + 8], dl
        mov    dword ptr [esi + 0x44], ebx
        call    FUN_004084d0
        mov    cl, byte ptr [esp + 0x17]
        mov    byte ptr [eax], bl
        mov    dword ptr [eax + 4], ebx
        add    esp, 8
        mov    dword ptr [esi + 0x44], eax
        mov    dword ptr [esi + 0x48], ebx
        mov    dword ptr [eax + 8], eax
        pop    edi
        mov    dword ptr [eax + 0xc], eax
        mov    byte ptr [esi + 4], bl
        mov    byte ptr [esi + 0x4c], cl
        mov    dword ptr [esi], 0x77dfc4
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    4
    }
}
