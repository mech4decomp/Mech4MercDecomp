/*
 * FUN_004ea105 (extent 0x4ea105-0x4ea280) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_00840048;
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_006d1980(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004ea105(void)
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
        mov    edx, dword ptr [ecx + 0x14c]
        mov    eax, dword ptr [g_007dab44]
        and    edx, 0xfffffe7f
        mov    dword ptr [ecx + 0x14c], edx
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx + 0x1c]
        xor    eax, 0x85739531
        add    eax, 0x184
        push    eax
        call    FUN_004154d0
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a154
        int 3    
L_a154:
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
        mov    edx, dword ptr [ecx + 0x14c]
        and    edx, 0xfffffe7f
        push    0x76d414
        mov    dword ptr [ecx + 0x14c], edx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_a184
        int 3    
L_a184:
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
        sub    esp, 0xc
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x14c]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        push    esi
        and    eax, 0xfffffeff
        push    edi
        mov    edi, dword ptr [g_007dab40]
        or    eax, 0x80
        mov    dword ptr [ebx + 0x14c], eax
        xor    edx, edi
        mov    eax, dword ptr [edx + 0x1c]
        xor    eax, 0x85739531
        add    eax, 0x18c
        push    eax
        mov    ecx, ebx
        call    FUN_004154d0
        lea    eax, [ebx + 0x16c]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0xc], 0x772d80
L_a1eb:
        test    eax, eax
        je    L_a219
        mov    esi, dword ptr [eax]
        test    esi, esi
        je    L_a219
        lea    ecx, [esp + 0xc]
        call    FUN_00417ad0
        push    esi
        lea    ecx, [ebx + 0x164]
        call    FUN_004179b0
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        mov    eax, dword ptr [esp + 0x14]
        jmp    L_a1eb
L_a219:
        mov    eax, dword ptr [ebx + 0x17c]
        mov    edi, dword ptr [eax + 0x144]
        push    ebp
        mov    ebp, 0x40
L_a22b:
        mov    esi, dword ptr [edi]
        mov    ecx, dword ptr [esi + 0x14c]
        test    ecx, ecx
        je    L_a23d
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_a23d:
        add    edi, 4
        dec    ebp
        mov    dword ptr [esi + 0x14c], 0
        jne    L_a22b
        mov    ecx, dword ptr [g_00840048]
        test    ecx, ecx
        pop    ebp
        je    L_a279
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x151]
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x150]
        push    8
        push    8
        shl    eax, 3
        push    eax
        shl    edx, 3
        push    edx
        call    FUN_006d1980
L_a279:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
