/*
 * FUN_00726df0 (extent 0x726df0-0x727051) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b160;
extern int    g_0085899c;
extern int    g_008aadc8;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_006fc600(void);
extern void __cdecl FUN_006fc640(void);
extern void __cdecl FUN_00726550(void);
extern void __cdecl FUN_007265f0(void);
extern void __cdecl FUN_007588c0(void);
extern void __cdecl FUN_007589a0(void);

__declspec(naked) void FUN_00726df0(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        cmp    eax, 3
        push    edi
        jne    L_6e15
        xor    edi, edi
        mov    dword ptr [esi + 0x54], edi
        mov    dword ptr [esi + 0x2c], edi
        mov    dword ptr [esi + 0x30], edi
        mov    dword ptr [esi + 0xb8], edi
        mov    dword ptr [esi + 0xc0], edi
        pop    edi
        pop    esi
        ret    
L_6e15:
        xor    edi, edi
        cmp    eax, 4
        jne    L_6e22
        push    edi
        push    edi
        push    0x5a
        jmp    L_6e30
L_6e22:
        cmp    eax, 6
        jne    L_6e40
        mov    edx, dword ptr [esi + 0x34]
        push    1
        push    edi
        neg    edx
        push    edx
L_6e30:
        mov    eax, dword ptr [esi + 0xb4]
        mov    ecx, dword ptr [eax + 4]
        push    ecx
        call    dword ptr [g_0076b160]
L_6e40:
        mov    dword ptr [esi + 0x30], edi
        mov    dword ptr [esi + 0x54], edi
        mov    dword ptr [esi + 0x34], edi
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [ecx + 0x14]
        push    eax
        lea    edx, [ecx + 0xc]
        push    edx
        mov    edx, dword ptr [ecx + 8]
        lea    eax, [ecx + 0x20]
        push    eax
        push    edx
        call    FUN_007265f0
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x414
        mov    eax, dword ptr [g_008aadc8]
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        lea    edi, [esi + 0xb4]
        push    eax
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [edi], 0
        call    FUN_006f4950
        mov    ecx, dword ptr [esi + 4]
        push    0
        push    ecx
        push    edi
        call    FUN_006fc400
        call    FUN_006f49a0
        cmp    dword ptr [edi], 0
        jne    L_6ec5
        mov    edx, dword ptr [esi + 4]
        push    edx
        push    0x7a5624
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_6ec5
        int 3    
L_6ec5:
        mov    ecx, dword ptr [edi]
        push    0x400
        lea    eax, [ebp - 0x414]
        push    eax
        push    ecx
        call    FUN_006fc600
        lea    ebx, [esi + 0x14]
        push    ebx
        lea    eax, [esi + 0xc]
        push    eax
        lea    edx, [ebp + 8]
        mov    dword ptr [ebp - 0xc], eax
        push    edx
        lea    eax, [ebp - 0x414]
        push    eax
        mov    ecx, esi
        call    FUN_007265f0
        push    0
        push    0x12
        call    FUN_006f3c80
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, eax
        mov    eax, dword ptr [ecx]
        mov    edx, edi
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [edx + 4], eax
        mov    eax, dword ptr [ecx + 8]
        mov    dword ptr [edx + 8], eax
        mov    eax, dword ptr [ecx + 0xc]
        mov    cx, word ptr [ecx + 0x10]
        mov    dword ptr [edx + 0xc], eax
        mov    eax, dword ptr [ebx]
        mov    word ptr [edx + 0x10], cx
        mov    edx, dword ptr [g_0085899c]
        xor    ecx, ecx
        cmp    edx, ecx
        mov    dword ptr [esi + 0x20], edi
        mov    dword ptr [esi + 0xec], ecx
        mov    dword ptr [esi + 0xbc], eax
        je    L_6f93
        cmp    eax, edx
        jae    L_6f93
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [edx]
        push    eax
        call    FUN_006fc580
        mov    ecx, dword ptr [ebp - 0x14]
        push    edi
        mov    dword ptr [ecx], 0
        call    FUN_006f4230
        xor    edi, edi
        mov    ecx, esi
        mov    dword ptr [esi + 0x20], edi
        mov    dword ptr [esi], edi
        call    FUN_00726550
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x10], edx
        fild    qword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x10], ecx
        pop    edi
        fidiv    dword ptr [ebp - 0x10]
        fstp    dword ptr [esi + 0x24]
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_6f93:
        cmp    word ptr [edi], 1
        jne    L_6fb7
        mov    edx, dword ptr [edi + 8]
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], ecx
        fild    qword ptr [ebp - 8]
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp - 4], ecx
        mov    byte ptr [esi + 0x38], 1
        fidiv    dword ptr [ebp - 8]
        fstp    dword ptr [esi + 0x24]
        jmp    L_702e
L_6fb7:
        mov    dword ptr [ebp - 8], eax
        mov    eax, dword ptr [edi + 8]
        mov    dword ptr [ebp - 4], ecx
        fild    qword ptr [ebp - 8]
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], ecx
        xor    edx, edx
        fidiv    dword ptr [ebp - 8]
        mov    byte ptr [esi + 0x38], 0
        lea    edi, [esi + 0x39]
        mov    eax, edi
        push    0x10000
        push    0x12
        push    edi
        fstp    dword ptr [esi + 0x24]
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], edx
        mov    word ptr [eax + 0x10], dx
        mov    edx, dword ptr [ebp + 8]
        push    edx
        push    ecx
        mov    word ptr [edi], 1
        call    FUN_007589a0
        mov    eax, dword ptr [ebp + 8]
        push    0
        push    0
        push    0
        push    0
        push    edi
        push    eax
        push    0
        lea    ecx, [esi + 0x4c]
        push    ecx
        call    FUN_007588c0
        mov    edx, dword ptr [g_008aadc8]
        push    edx
        push    0x4000
        call    FUN_006f3c80
        mov    dword ptr [esi + 0x50], eax
        xor    ecx, ecx
L_702e:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [eax]
        lea    eax, [ebp - 0x414]
        sub    edx, eax
        push    edx
        push    ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ecx]
        push    edx
        call    FUN_006fc640
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
