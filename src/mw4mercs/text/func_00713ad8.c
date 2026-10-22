/*
 * FUN_00713ad8 (extent 0x713ad8-0x713bbf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085a248;
extern char   g_0087c254;
extern void __cdecl FUN_00713de0(void);

__declspec(naked) void FUN_00713ad8(void)
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
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3aee
        call    FUN_00713de0
L_3aee:
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, 0x80
        push    edi
        jge    L_3b27
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        mov    edx, esi
        sar    edx, 1
        add    edx, esi
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    0x87c2d0
        push    esi
        push    edx
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [ecx + 0x68]
        pop    edi
        pop    esi
        ret    8
L_3b27:
        mov    edi, dword ptr [esp + 0xc]
L_3b2b:
        cmp    esi, 0x80
        mov    eax, dword ptr [g_0085a248]
        jl    L_3b69
        mov    ecx, dword ptr [eax]
        push    0
        push    0xc0
        push    0x87c2d0
        push    0x80
        push    edi
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [ecx + 0x68]
        sub    esi, 0x80
        add    edi, 0x1000
        test    esi, esi
        je    L_3b86
        jmp    L_3b2b
L_3b69:
        mov    edx, dword ptr [eax]
        push    0
        mov    ecx, esi
        sar    ecx, 1
        add    ecx, esi
        push    ecx
        push    0x87c2d0
        push    esi
        push    edi
        push    0x1c4
        push    4
        push    eax
        call    dword ptr [edx + 0x68]
L_3b86:
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3b9e
        call    FUN_00713de0
L_3b9e:
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [g_0085a248]
        mov    ecx, dword ptr [eax]
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        push    0x1c4
        push    5
        push    eax
        call    dword ptr [ecx + 0x64]
        ret    8
    }
}
