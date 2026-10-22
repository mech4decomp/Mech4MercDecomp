/*
 * FUN_004a6d53 (extent 0x4a6d53-0x4a6e36) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da884;
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_004a9250(void);

__declspec(naked) void FUN_004a6d53(void)
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
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    ebp
        push    ebx
        mov    esi, ecx
        push    0x527
        call    FUN_004a9250
        cmp    ebp, 0x19
        lea    edi, [esi + 0x2bc]
        mov    eax, 0x80
        mov    dword ptr [edi], 0
        mov    dword ptr [esi], 0x7703d0
        mov    dword ptr [esi + 0x270], eax
        mov    dword ptr [esi + 0x26c], eax
        jge    L_6dfc
        push    ebx
        call    FUN_00421e60
        push    eax
        push    ebx
        call    FUN_00487900
        add    esp, 0xc
        dec    word ptr [eax + 0x10]
        cmp    word ptr [eax + 0x10], 0
        jne    L_6dd9
        test    eax, eax
        je    L_6dd9
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_6dd9:
        mov    eax, dword ptr [ebx]
        push    4
        lea    ecx, [esi + 0x2b8]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x20]
L_6de9:
        pop    edi
        mov    dword ptr [esi + 0x2b4], 0
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_6dfc:
        push    edi
        push    ebx
        call    FUN_00412a00
        mov    edx, dword ptr [eax]
        add    esp, 8
        push    4
        lea    ecx, [esi + 0x2b8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    dword ptr [edi], 0
        je    L_6de9
        mov    ecx, dword ptr [g_007da884]
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 4]
        pop    edi
        mov    dword ptr [esi + 0x2b4], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
