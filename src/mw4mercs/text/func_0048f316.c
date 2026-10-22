/*
 * FUN_0048f316 (extent 0x48f316-0x48f633) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b95a4;
extern int    g_007b95c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00422510(void);
extern void __cdecl FUN_0048f1b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0048f316(void)
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
        mov    eax, dword ptr [g_007b95a4]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1003c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f354
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, eax
        call    FUN_0048f1b0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_f354:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f372
        int 3    
L_f372:
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x18
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x10038]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 4], 0
        je    L_f3a8
        mov    ecx, dword ptr [ebp + 8]
        push    ecx
        call    eax
        add    esp, 4
        push    eax
        jmp    L_f3ac
L_f3a8:
        mov    edx, dword ptr [ebp + 8]
        push    edx
L_f3ac:
        lea    ecx, [ebp - 4]
        call    FUN_00412780
        mov    eax, dword ptr [ebp - 4]
        push    eax
        call    FUN_00412ab0
        mov    ecx, dword ptr [esi + 0x20]
        mov    dword ptr [ebp - 0x14], eax
        xor    eax, eax
        add    esp, 4
        test    ecx, ecx
        mov    dword ptr [ebp - 0x10], eax
        jle    L_f483
L_f3d3:
        mov    ecx, dword ptr [esi + 0x10]
        shl    eax, cl
        mov    ecx, dword ptr [esi + 0x14]
        mov    byte ptr [ebp + 0xb], 0
        lea    ebx, [eax + ecx]
        cmp    eax, ebx
        mov    dword ptr [ebp - 0x18], ebx
        jge    L_f471
        lea    ecx, [esi + eax*4 + 0x28]
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, ebx
        sub    ecx, eax
L_f3fb:
        mov    edx, dword ptr [ebp - 8]
        mov    edx, dword ptr [edx]
        test    edx, edx
        je    L_f410
        mov    edi, dword ptr [ebp - 0x14]
        cmp    dword ptr [edx + 0x14], edi
        jne    L_f410
        mov    byte ptr [ebp + 0xb], 1
L_f410:
        mov    edi, dword ptr [ebp - 8]
        add    edi, 4
        dec    ecx
        mov    dword ptr [ebp - 8], edi
        jne    L_f3fb
        mov    cl, byte ptr [ebp + 0xb]
        test    cl, cl
        je    L_f471
        mov    edx, dword ptr [ebp - 0xc]
        mov    ecx, eax
L_f428:
        mov    edi, dword ptr [edx]
        test    edi, edi
        je    L_f43d
        mov    ebx, dword ptr [ebp + 0xc]
        cmp    dword ptr [edi + 0x18], ebx
        je    L_f4f5
        mov    ebx, dword ptr [ebp - 0x18]
L_f43d:
        inc    ecx
        add    edx, 4
        cmp    ecx, ebx
        jl    L_f428
        cmp    eax, ebx
        mov    edi, eax
        jge    L_f45f
        mov    eax, dword ptr [ebp - 0xc]
L_f44e:
        cmp    dword ptr [eax], 0
        je    L_f4fb
        inc    edi
        add    eax, 4
        cmp    edi, ebx
        jl    L_f44e
L_f45f:
        push    0x76fee8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f471
        int 3    
L_f471:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [esi + 0x20]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        jl    L_f3d3
L_f483:
        mov    eax, dword ptr [g_007b95a4]
        push    eax
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0x1002c]
        cmp    eax, dword ptr [esi + 0x10030]
        jge    L_f5a1
        mov    ecx, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [esi + 0x10028]
        dec    ecx
        and    ecx, eax
        mov    edi, dword ptr [edx + ecx*4]
        mov    eax, dword ptr [g_007b95a4]
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        shl    edi, cl
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f575
        mov    ecx, dword ptr [g_007b95c8]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    0
        lea    edx, [edi + 1]
        push    edx
        mov    edx, dword ptr [ebp - 4]
        push    ecx
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_00422510
        mov    ebx, eax
        jmp    L_f577
L_f4f5:
        mov    esi, dword ptr [esi + ecx*4 + 0x28]
        jmp    L_f550
L_f4fb:
        mov    eax, dword ptr [g_007b95a4]
        push    eax
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f535
        mov    ecx, dword ptr [g_007b95c8]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    0
        lea    edx, [edi + 1]
        push    edx
        mov    edx, dword ptr [ebp - 4]
        push    ecx
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_00422510
        mov    ebx, eax
        jmp    L_f537
L_f535:
        xor    ebx, ebx
L_f537:
        mov    dword ptr [esi + edi*4 + 0x28], ebx
        call    FUN_006f49a0
        push    ebx
        lea    ecx, [esi + 8]
        call    FUN_004179b0
        inc    dword ptr [esi + 0x24]
        mov    esi, dword ptr [esi + edi*4 + 0x28]
L_f550:
        mov    eax, dword ptr [ebp - 4]
        test    eax, eax
        je    L_f56a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f56a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f56a:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_f575:
        xor    ebx, ebx
L_f577:
        lea    edi, [esi + edi*4 + 0x28]
        mov    dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea    ecx, [esi + 8]
        call    FUN_004179b0
        mov    ecx, dword ptr [esi + 0x24]
        mov    eax, dword ptr [esi + 0x1002c]
        inc    ecx
        inc    eax
        mov    dword ptr [esi + 0x24], ecx
        mov    dword ptr [esi + 0x1002c], eax
        jmp    L_f607
L_f5a1:
        mov    eax, dword ptr [g_007b95a4]
        mov    ecx, dword ptr [esi + 0x10]
        mov    edi, dword ptr [esi + 0x20]
        push    eax
        shl    edi, cl
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f5e3
        mov    ecx, dword ptr [g_007b95c8]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    0
        lea    edx, [edi + 1]
        push    edx
        mov    edx, dword ptr [ebp - 4]
        push    ecx
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_00422510
        mov    ebx, eax
        jmp    L_f5e5
L_f5e3:
        xor    ebx, ebx
L_f5e5:
        lea    edi, [esi + edi*4 + 0x28]
        mov    dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea    ecx, [esi + 8]
        call    FUN_004179b0
        mov    ecx, dword ptr [esi + 0x24]
        mov    eax, dword ptr [esi + 0x20]
        inc    ecx
        inc    eax
        mov    dword ptr [esi + 0x24], ecx
        mov    dword ptr [esi + 0x20], eax
L_f607:
        call    FUN_006f49a0
        mov    eax, dword ptr [ebp - 4]
        test    eax, eax
        mov    edi, dword ptr [edi]
        je    L_f628
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f628
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f628:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
