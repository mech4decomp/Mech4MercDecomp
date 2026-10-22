/*
 * FUN_0068eeca (extent 0x68eeca-0x68f11c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00411dc0(void);

__declspec(naked) void FUN_0068eeca(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x3c
        push    ebx
        mov    ebx, dword ptr [g_0076b420]
        push    ebp
        push    esi
        mov    ebp, ecx
        mov    eax, dword ptr [ebp]
        push    edi
        push    eax
        lea    ecx, [esp + 0x34]
        push    0x798fa4
        push    ecx
        mov    dword ptr [esp + 0x1c], ebp
        call    ebx
        mov    ecx, dword ptr [esp + 0x5c]
        add    esp, 0xc
        lea    edx, [esp + 0x30]
        push    edx
        call    FUN_0040eda0
        mov    esi, eax
        mov    eax, dword ptr [ebp + 4]
        mov    ecx, dword ptr [eax]
        push    ecx
        push    0x798f9c
        mov    ecx, esi
        call    FUN_00411d10
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [edx]
        push    eax
        push    0x798f94
        mov    ecx, esi
        call    FUN_00411d10
        xor    edi, edi
        add    ebp, 0x18
L_ef2f:
        push    0
        push    edi
        lea    ecx, [esp + 0x1c]
        push    0x798f74
        push    ecx
        call    ebx
        mov    edx, dword ptr [ebp - 4]
        add    esp, 0x10
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_00411dc0
        push    1
        push    edi
        lea    ecx, [esp + 0x1c]
        push    0x798f68
        push    ecx
        call    ebx
        mov    edx, dword ptr [ebp]
        add    esp, 0x10
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_00411dc0
        inc    edi
        add    ebp, 8
        cmp    edi, 9
        jl    L_ef2f
        mov    ecx, dword ptr [esp + 0x10]
        xor    edi, edi
        lea    ebp, [ecx + 0x60]
L_ef85:
        push    edi
        lea    edx, [esp + 0x18]
        push    0x798f48
        push    edx
        call    ebx
        mov    eax, dword ptr [ebp - 4]
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_00411dc0
        push    edi
        lea    edx, [esp + 0x18]
        push    0x798f38
        push    edx
        call    ebx
        mov    eax, dword ptr [ebp]
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        call    FUN_00411dc0
        inc    edi
        add    ebp, 8
        cmp    edi, 9
        jl    L_ef85
        mov    edi, dword ptr [esp + 0x10]
        mov    edx, dword ptr [edi + 0xa8]
        push    edx
        push    0x798f20
        mov    ecx, esi
        call    FUN_00411d10
        mov    eax, dword ptr [edi + 0xac]
        push    eax
        push    0x798f14
        mov    ecx, esi
        call    FUN_00411d10
        mov    ecx, dword ptr [edi + 0xa4]
        push    ecx
        push    0x798edc
        mov    ecx, esi
        call    FUN_00411d10
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x3c
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
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, -1
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edi + 0xc], ecx
        mov    dword ptr [edi + 0x10], edx
        je    L_f0fe
        cmp    edx, -1
        je    L_f0fe
        mov    eax, dword ptr [esp + 0x14]
        mov    eax, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + ecx*4]
        mov    edx, dword ptr [eax + edx*4]
        push    ebx
        push    ebp
        mov    dword ptr [edi + 4], ecx
        mov    dword ptr [edi + 8], edx
        lea    ebx, [edi + 0x18]
        mov    ebp, 9
L_f082:
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebx - 4]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        add    ebx, 8
        dec    ebp
        jne    L_f082
        lea    ebx, [edi + 0x60]
        mov    ebp, 9
L_f0a7:
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [ebx - 4]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        add    ebx, 8
        dec    ebp
        jne    L_f0a7
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [edi + 0xa8]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0xac]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0xa4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        pop    ebp
        pop    ebx
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ecx
        ret    8
L_f0fe:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ecx
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
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        lea    eax, [eax + ecx*4]
        ret    4
    }
}
