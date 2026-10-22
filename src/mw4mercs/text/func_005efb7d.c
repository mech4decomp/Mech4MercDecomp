/*
 * FUN_005efb7d (extent 0x5efb7d-0x5efc38) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_0050e1a0(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_005efcf0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005fbe90(void);

__declspec(naked) void FUN_005efb7d(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        inc    ecx
        sti    
        pop    esi
        add    byte ptr [ebx - 5], cl
        pop    esi
        add    byte ptr [ebp - 5], dl
        pop    esi
        add    byte ptr [edi - 5], bl
        pop    esi
        add    byte ptr [ecx - 5], ch
        pop    esi
        add    byte ptr [ebx - 5], dh
        pop    esi
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x1ac]
        mov    ebx, dword ptr [eax + 0x44]
        push    ecx
        call    FUN_0050e1b0
        add    esp, 4
        cmp    eax, ebx
        jge    L_fc33
        push    0x3f800000
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, eax
        call    FUN_005fbe90
        test    al, al
        je    L_fc33
        mov    edx, dword ptr [esi + 0x1ac]
        push    edi
        push    edx
        call    FUN_0050e1b0
        add    esp, 4
        mov    ecx, esi
        mov    edi, eax
        call    FUN_005efcf0
        add    edi, eax
        cmp    edi, ebx
        jle    L_fbfb
        mov    edi, ebx
L_fbfb:
        test    eax, eax
        mov    dword ptr [esi + 0x1b0], edi
        jle    L_fc1e
        mov    ecx, esi
        call    FUN_005f07c0
        fld    dword ptr [eax + 0x3b8]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [eax + 0x3b8]
L_fc1e:
        push    edi
        call    FUN_0050e1a0
        add    esp, 4
        pop    edi
        mov    dword ptr [esi + 0x1ac], eax
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_fc33:
        pop    esi
        xor    al, al
        pop    ebx
        ret    
    }
}
