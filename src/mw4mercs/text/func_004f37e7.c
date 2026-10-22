/*
 * FUN_004f37e7 (extent 0x4f37e7-0x4f3866) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc88c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_004f3870(void);

__declspec(naked) void FUN_004f37e7(void)
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
        push    0x184
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_381c
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc88c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f3870
        ret    
L_381c:
        xor    eax, eax
        ret    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x64
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004d9400
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    cx, word ptr [edi + 0x16c]
        mov    dx, word ptr [edi + 0x16e]
        mov    dword ptr [eax], 0x64
        pop    edi
        mov    word ptr [eax + 0x60], cx
        mov    word ptr [eax + 0x62], dx
        pop    esi
        ret    8
    }
}
