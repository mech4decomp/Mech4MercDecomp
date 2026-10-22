/*
 * FUN_006e056a (extent 0x6e056a-0x6e061d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006e0620(void);

__declspec(naked) void FUN_006e056a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x108], eax
        mov    dword ptr [esi + 0x10c], eax
        mov    dword ptr [esi + 0x110], eax
        mov    dword ptr [esi + 0x114], eax
        mov    eax, dword ptr [esp + 8]
        push    eax
        call    FUN_006e0620
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        jle    L_05c8
        push    ebx
        push    edi
        mov    edi, dword ptr [esi + 0x110]
        mov    ebx, eax
L_05b4:
        mov    ecx, dword ptr [edi]
        test    ecx, ecx
        je    L_05c0
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_05c0:
        add    edi, 4
        dec    ebx
        jne    L_05b4
        pop    edi
        pop    ebx
L_05c8:
        mov    eax, dword ptr [esi + 0x114]
        test    eax, eax
        je    L_05f5
        mov    ecx, dword ptr [esi + 0x110]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x110], 0
        mov    dword ptr [esi + 0x114], 0
L_05f5:
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        je    L_0608
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0608:
        mov    esi, dword ptr [esi + 0x108]
        test    esi, esi
        je    L_061b
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_061b:
        pop    esi
        ret    
    }
}
