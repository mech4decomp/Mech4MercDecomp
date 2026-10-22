/*
 * FUN_005e7b1b (extent 0x5e7b1b-0x5e7bc6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005fbc80(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005e7b1b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    cl, byte ptr [eax + 0x88]
        test    cl, cl
        je    L_7b63
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    2
        call    dword ptr [eax + 8]
L_7b63:
        mov    eax, dword ptr [esi + 0x354]
        test    eax, eax
        je    L_7b7c
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [edx + 4]
L_7b7c:
        pop    esi
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        ret    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7ba8
        int 3    
L_7ba8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005fbc80
        pop    esi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        mov    eax, 5
        ret    
    }
}
