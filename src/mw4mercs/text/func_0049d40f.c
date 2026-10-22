/*
 * FUN_0049d40f (extent 0x49d40f-0x49d880) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00493660(void);
extern void __cdecl FUN_0049e530(void);
extern void __cdecl FUN_0049f580(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004aeb30(void);

__declspec(naked) void FUN_0049d40f(void)
{
    __asm {
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 4], ecx
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
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        mov    esi, ecx
        push    0x52c
        call    FUN_00493660
        mov    dword ptr [esi + 0x60], 0
        mov    dword ptr [esi + 0x68], 0
        mov    dword ptr [esi + 0x70], 1
        mov    dword ptr [esi + 0x7c], 1
        mov    dword ptr [esi + 0x88], 1
        lea    ecx, [esi + 0x9c]
        mov    dword ptr [esi + 0x94], 0
        call    FUN_004ae3c0
        lea    ecx, [esi + 0xac]
        mov    dword ptr [esi + 0xa8], 6
        call    FUN_004ae3c0
        mov    ebx, 2
        mov    dword ptr [esi + 0xb8], ebx
        lea    ecx, [esi + 0xd4]
        mov    dword ptr [esi + 0xd0], 6
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0xe0], ebx
        lea    ecx, [esi + 0xfc]
        mov    dword ptr [esi + 0xf8], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x108], 1
        lea    ecx, [esi + 0x11c]
        mov    dword ptr [esi + 0x118], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x128], 1
        lea    ecx, [esi + 0x13c]
        mov    dword ptr [esi + 0x138], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x148], 1
        lea    ecx, [esi + 0x15c]
        mov    dword ptr [esi + 0x158], 4
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x168], 1
        lea    ecx, [esi + 0x17c]
        mov    dword ptr [esi + 0x178], 6
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x188], ebx
        lea    ecx, [esi + 0x1a4]
        mov    dword ptr [esi + 0x1a0], 6
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x1b0], ebx
        mov    eax, 0xb
        mov    dword ptr [esi + 0x1c8], eax
        mov    dword ptr [esi + 0x1cc], ebx
        mov    dword ptr [esi + 0x1e0], ebx
        mov    dword ptr [esi + 0x1f8], eax
        mov    dword ptr [esi + 0x1fc], ebx
        xor    eax, eax
        mov    dword ptr [esi + 0x210], ebx
        mov    dword ptr [esi + 0x234], eax
        push    ebp
        mov    dword ptr [esi + 0x238], eax
        mov    dword ptr [esi + 0x23c], eax
        push    edi
        lea    ecx, [esi + 0x60]
        mov    dword ptr [esi + 0x240], eax
        mov    dword ptr [esi], 0x770268
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x68]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x70]
        call    FUN_004addd0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x7c]
        call    FUN_004addd0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x88]
        call    FUN_004addd0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x94]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x9c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0xac]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0xb8]
        call    FUN_004adf70
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esi + 0xcc]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        cmp    ebp, 0xc
        jge    L_d662
        push    0x3f800000
        lea    ecx, [esi + 0xd4]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0xe0]
        mov    byte ptr [esi + 0xf4], 0
        call    FUN_004adfb0
        jmp    L_d68c
L_d662:
        push    ebp
        push    edi
        lea    ecx, [esi + 0xd4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0xe0]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0xf4]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
L_d68c:
        push    ebp
        push    edi
        lea    ecx, [esi + 0xfc]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x108]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x114]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x11c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x128]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x134]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x13c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x148]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x154]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x15c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x168]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x174]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x17c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x188]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x19c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x1a4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x1b0]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x1c4]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x1cc]
        call    FUN_004adf70
        push    ebp
        push    edi
        lea    ecx, [esi + 0x1e0]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x1f4]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x1fc]
        call    FUN_004adf70
        push    ebp
        push    edi
        lea    ecx, [esi + 0x210]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x224]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x228]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0x16
        jl    L_d811
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x231]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        jmp    L_d818
L_d811:
        mov    byte ptr [esi + 0x231], 0
L_d818:
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x230]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0x18
        jl    L_d84f
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x232]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [eax]
        push    1
        lea    ecx, [esi + 0x233]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x20]
        jmp    L_d85d
L_d84f:
        mov    byte ptr [esi + 0x233], 0
        mov    byte ptr [esi + 0x232], 0
L_d85d:
        mov    edx, dword ptr [esp + 0x18]
        push    1
        mov    ecx, esi
        mov    dword ptr [esi + 0x22c], edx
        call    FUN_0049f580
        mov    ecx, esi
        call    FUN_0049e530
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
