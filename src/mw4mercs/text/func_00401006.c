/*
 * FUN_00401006 (extent 0x401006-0x401350) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b320;
extern int    g_007b7be0;
extern char   g_007b7c47;
extern char   g_007b7c5b;
extern int    g_007b7c5c;
extern int    g_007b7c64;
extern int    g_007b7c68;
extern int    g_007b7e44;
extern void __cdecl FUN_00408500(void);
extern void __cdecl FUN_00408b60(void);
extern void __cdecl FUN_00408b70(void);
extern void __cdecl FUN_00408c90(void);
extern void __cdecl FUN_004096d0(void);
extern void __cdecl FUN_0040a0e0(void);
extern void __cdecl FUN_0040ab10(void);
extern void __cdecl FUN_0040b510(void);
extern void __cdecl FUN_0040bc90(void);
extern void __cdecl FUN_0040c100(void);
extern void __cdecl FUN_0040c350(void);
extern void __cdecl FUN_0040c360(void);
extern void __cdecl FUN_0040c370(void);
extern void __cdecl FUN_0040c380(void);
extern void __cdecl FUN_0040c390(void);
extern void __cdecl FUN_0040c450(void);
extern void __cdecl FUN_0040c4e0(void);
extern void __cdecl FUN_0040c4f0(void);
extern void __cdecl FUN_0040c630(void);
extern void __cdecl FUN_0040ccf0(void);
extern void __cdecl FUN_0040d310(void);
extern void __cdecl FUN_0040d5b0(void);
extern void __cdecl FUN_0040d5f0(void);
extern void __cdecl FUN_0040d600(void);
extern void __cdecl FUN_0040d640(void);
extern void __cdecl FUN_0040d690(void);
extern void __cdecl FUN_004c8de0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f6350(void);
extern void __cdecl FUN_006f7bf0(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00401006(void)
{
    __asm {
        call    FUN_006f4950
        call    FUN_0040d690
        call    FUN_0040d640
        call    FUN_0040d5b0
        call    FUN_0040d5f0
        call    FUN_0040d600
        call    FUN_0040d310
        call    FUN_0040ccf0
        call    FUN_0040c630
        call    FUN_0040c4f0
        call    FUN_0040c450
        call    FUN_0040c4e0
        call    FUN_0040c390
        call    FUN_0040c380
        call    FUN_0040c370
        call    FUN_0040c360
        call    FUN_0040c350
        call    FUN_0040c100
        call    FUN_0040bc90
        call    FUN_0040b510
        call    FUN_0040ab10
        call    FUN_0040a0e0
        call    FUN_004096d0
        call    FUN_00408c90
        call    FUN_00408b60
        call    FUN_00408b70
        call    FUN_00408500
        call    FUN_004c8de0
        jmp    FUN_006f49a0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_006f89f0
        mov    ecx, dword ptr [eax + 0x3c]
        call    FUN_006f8430
        ret    0xc
        push    esi
        push    edi
        xor    edi, edi
        call    FUN_006f5ed0
        call    FUN_006f89f0
        test    eax, eax
        je    L_111c
        call    FUN_006f89f0
        mov    esi, eax
        test    esi, esi
        je    L_111c
        mov    ecx, esi
        call    FUN_006f6350
        test    eax, eax
        je    L_111c
        push    0x79fa48
        push    eax
        mov    ecx, esi
        call    FUN_006f5b80
        test    eax, eax
        je    L_111c
        push    0xff
        push    eax
        mov    eax, dword ptr [g_007b7e44]
        push    eax
        call    dword ptr [g_0076b320]
        mov    ecx, dword ptr [g_007b7e44]
        add    esp, 0xc
        mov    byte ptr [ecx + 0xff], 0
        mov    edi, 1
        call    FUN_006f5ee0
        mov    eax, edi
        pop    edi
        pop    esi
        ret    0xc
L_111c:
        mov    edx, dword ptr [g_007b7e44]
        mov    byte ptr [edx], 0
        call    FUN_006f5ee0
        mov    eax, edi
        pop    edi
        pop    esi
        ret    0xc
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
        push    ebp
        mov    ebp, esp
        sub    esp, 8
        push    esi
        call    FUN_006f89f0
        test    eax, eax
        je    L_1344
        call    FUN_006f89f0
        mov    ecx, dword ptr [eax + 0x3c]
        test    ecx, ecx
        je    L_1344
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, 4
        jl    L_1331
        cmp    eax, 5
        jg    L_1331
        mov    esi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    dword ptr [ebp - 8], ecx
        jl    L_118d
        cmp    ecx, 0x270f
        jle    L_11a6
L_118d:
        mov    ecx, dword ptr [ecx]
        test    ecx, ecx
        mov    dword ptr [ebp - 8], ecx
        jl    L_1327
        cmp    ecx, 0x270f
        jg    L_1327
L_11a6:
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 8]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        mov    dword ptr [ebp + 0x10], edx
        mov    dword ptr [ebp + 0xc], ecx
        jl    L_11c5
        cmp    ecx, 1
        jle    L_11ca
L_11c5:
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp + 0xc], ecx
L_11ca:
        push    ebx
        xor    ebx, ebx
        cmp    eax, 5
        push    edi
        jne    L_126a
        mov    edi, dword ptr [g_0076b2ac]
        push    0x79fa48
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_1232
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_126a
        mov    eax, dword ptr [g_007b7c64]
        cmp    eax, 6
        ja    L_126a
        jmp    dword ptr [eax*4 + 0x401350]
        xor    ebx, ebx
        jmp    L_126a
        mov    ebx, 1
        jmp    L_126a
        mov    ebx, 2
        jmp    L_126a
        mov    ebx, 3
        jmp    L_126a
        mov    ebx, 4
        jmp    L_126a
        mov    ebx, 5
        jmp    L_126a
        mov    ebx, 6
        jmp    L_126a
L_1232:
        mov    edx, dword ptr [ebp + 0x10]
        push    0x79fae0
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_126a
        mov    dword ptr [g_007b7c68], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    eax, dword ptr [eax]
        dec    eax
        je    L_1260
        dec    eax
        jne    L_126a
        mov    dword ptr [g_007b7c68], 2
        jmp    L_126a
L_1260:
        mov    dword ptr [g_007b7c68], 1
L_126a:
        mov    eax, dword ptr [ebp - 4]
        mov    esi, 0x76b6dc
L_1272:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_1296
        test    cl, cl
        je    L_1292
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_1296
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1272
L_1292:
        xor    eax, eax
        jmp    L_129b
L_1296:
        sbb    eax, eax
        sbb    eax, -1
L_129b:
        test    eax, eax
        jne    L_12ab
        mov    ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        setne    al
        mov    edi, eax
        jmp    L_12ba
L_12ab:
        mov    edx, dword ptr [ebp + 0xc]
        xor    ecx, ecx
        test    edx, edx
        setne    cl
        add    ecx, 2
        mov    edi, ecx
L_12ba:
        mov    edx, dword ptr [ebp - 4]
        mov    esi, dword ptr [g_0076b320]
        push    0x13
        push    edx
        push    0x7b7c48
        call    esi
        mov    eax, dword ptr [ebp + 0x10]
        push    0x63
        push    eax
        push    0x7b7be4
        mov    byte ptr [g_007b7c5b], 0
        call    esi
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [ebp - 8]
        add    esp, 0x18
        mov    byte ptr [g_007b7c47], 0
        mov    dword ptr [g_007b7c5c], ecx
        mov    dword ptr [g_007b7be0], edx
        call    FUN_006f89f0
        mov    ecx, dword ptr [g_007b7c68]
        mov    eax, dword ptr [eax + 0x3c]
        mov    edx, dword ptr [ebp + 0x10]
        push    ecx
        push    ebx
        push    edi
        push    edx
        mov    ecx, eax
        call    FUN_006f7bf0
        pop    edi
        pop    ebx
        pop    esi
        and    eax, 0xff
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_1327:
        or    eax, 0xffffffff
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_1331:
        push    eax
        push    0x76b6a8
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_1344
        int 3    
L_1344:
        xor    eax, eax
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00401350 (0 relocated pointers)
    }
}
