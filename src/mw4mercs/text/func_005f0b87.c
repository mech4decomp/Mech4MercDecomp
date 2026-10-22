/*
 * FUN_005f0b87 (extent 0x5f0b87-0x5f0ca7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f25b8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fca80(void);
extern void __cdecl FUN_00545460(void);
extern void __cdecl FUN_005f0cb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005f0b87(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1dc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0bd2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f25b8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005f0cb0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_0bd2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    ecx
        cmp    dword ptr [ebp + 8], 8
        push    ebx
        push    esi
        push    edi
        je    L_0c3f
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x24]
        xor    ebx, ebx
        test    ecx, ecx
        mov    dword ptr [ebp - 4], ecx
        jle    L_0c3f
        mov    esi, dword ptr [eax + 0x20]
        add    esi, 0x14
L_0c14:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_0c34
        mov    edx, dword ptr [edi + 0x2c]
        push    edx
        call    FUN_00545460
        mov    ecx, dword ptr [ebp + 8]
        add    esp, 4
        cmp    eax, ecx
        je    L_0c5a
L_0c34:
        mov    eax, dword ptr [ebp - 4]
        inc    ebx
        add    esi, 0x1c
        cmp    ebx, eax
        jl    L_0c14
L_0c3f:
        mov    al, byte ptr [ebp + 0xc]
        test    al, al
        je    L_0c64
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    0x78a234
        jmp    L_0c77
L_0c5a:
        mov    eax, dword ptr [edi + 0x30]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_0c64:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        push    0x77b380
L_0c77:
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fca80
        mov    esi, eax
        cmp    esi, -1
        jne    L_0c9e
        push    0x78a220
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0c9e
        int 3    
L_0c9e:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
