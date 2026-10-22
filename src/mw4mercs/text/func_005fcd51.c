/*
 * FUN_005fcd51 (extent 0x5fcd51-0x5fcfe8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004d9f50(void);
extern void __cdecl FUN_004da5d0(void);
extern void __cdecl FUN_004da620(void);
extern void __cdecl FUN_004db210(void);
extern void __cdecl FUN_005e8160(void);
extern void __cdecl FUN_005fd010(void);
extern void __cdecl FUN_005fd1f0(void);
extern void __cdecl FUN_005fd500(void);

__declspec(naked) void FUN_005fcd51(void)
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x280]
        test    eax, eax
        je    L_cd7c
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x90]
        ret    4
L_cd7c:
        mov    edx, dword ptr [esp + 4]
        push    edx
        call    FUN_004d9f50
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 0x280]
        test    esi, esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        je    L_cdd0
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x80]
        mov    dl, byte ptr [edi + 0x18]
        mov    ax, word ptr [edi + 0x1a]
        mov    ecx, dword ptr [edi + 0x40]
        mov    byte ptr [esi + 0x15c], dl
        mov    word ptr [esi + 0x15e], ax
        mov    dword ptr [esi + 0x160], ecx
L_cdd0:
        test    esi, esi
        je    L_ce0f
        mov    eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        je    L_ce0f
        mov    al, byte ptr [edi + 0x1c]
        test    al, al
        jl    L_ce0f
        cmp    al, 2
        jg    L_ce0f
        mov    dl, byte ptr [edi + 0x18]
        push    ecx
        mov    cx, word ptr [edi + 0x1a]
        mov    eax, esp
        mov    word ptr [eax + 2], cx
        mov    ecx, ebx
        mov    byte ptr [eax], dl
        call    FUN_005fd500
        mov    ecx, eax
        call    FUN_005e8160
        push    eax
        mov    ecx, ebx
        call    FUN_005fd1f0
L_ce0f:
        pop    edi
        pop    esi
        pop    ebx
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
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        test    al, 1
        mov    byte ptr [esp + 0xf], 1
        jne    L_cf1f
        push    esi
        mov    esi, dword ptr [edi + 0x280]
        test    esi, esi
        je    L_ce71
        mov    eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        je    L_ce71
        mov    eax, dword ptr [edi + 0x150]
        test    eax, eax
        je    L_ce71
        mov    eax, dword ptr [eax + 0x28]
        test    eax, eax
        je    L_ce71
        mov    ecx, dword ptr [esi + 0x2fc]
        mov    eax, dword ptr [eax + 0x3c]
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xe4]
L_ce71:
        mov    ebp, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [esp + 0x1c]
        lea    eax, [ebp - 1]
        cmp    eax, 6
        ja    L_cf06
        jmp    dword ptr [eax*4 + 0x5fcfe8]
        test    esi, esi
        je    L_cf06
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xd0]
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        jmp    L_cf06
        test    esi, esi
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    word ptr [esp + 0x18], cx
        mov    word ptr [esp + 0x1a], dx
        je    L_cef2
        cmp    dword ptr [esi + 0x160], -0x4b
        je    L_cef2
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xdc]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov    cx, word ptr [eax + 0x60]
        add    eax, 0x60
        mov    word ptr [esp + 0x18], cx
        mov    dx, word ptr [eax + 2]
        mov    word ptr [esp + 0x1a], dx
L_cef2:
        lea    eax, [esp + 0x18]
L_cef6:
        push    eax
        mov    ecx, edi
        call    FUN_005fd010
L_cefe:
        push    ebp
        mov    ecx, edi
        call    FUN_004da5d0
L_cf06:
        mov    ecx, edi
        call    FUN_004db210
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        pop    esi
        je    L_cf1f
        push    ebx
        push    ebp
        mov    ecx, edi
        call    FUN_004da620
L_cf1f:
        pop    edi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        test    esi, esi
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    word ptr [esp + 0x18], cx
        mov    word ptr [esp + 0x1a], dx
        je    L_cf73
        cmp    dword ptr [esi + 0x160], -0x4b
        je    L_cf73
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xe0]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov    cx, word ptr [eax + 0x60]
        add    eax, 0x60
        mov    word ptr [esp + 0x18], cx
        mov    dx, word ptr [eax + 2]
        mov    word ptr [esp + 0x1a], dx
L_cf73:
        lea    eax, [esp + 0x18]
        jmp    L_cef6
        test    esi, esi
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    word ptr [esp + 0x18], cx
        mov    word ptr [esp + 0x1a], dx
        je    L_cfbf
        cmp    dword ptr [esi + 0x160], -0x4b
        je    L_cfbf
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    cx, word ptr [eax + 0x60]
        add    eax, 0x60
        mov    word ptr [esp + 0x18], cx
        mov    dx, word ptr [eax + 2]
        mov    word ptr [esp + 0x1a], dx
L_cfbf:
        lea    eax, [esp + 0x18]
        jmp    L_cef6
        test    esi, esi
        je    L_cefe
        mov    edx, dword ptr [esi]
        push    ebx
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        mov    byte ptr [esp + 0x13], 0
        jmp    L_cf06
        mov    edi, edi
        // jump-table data @ 0x005FCFE8 (10 relocated pointers)
        __emit 0xA5
        __emit 0xCE
        __emit 0x5F
        __emit 0x00
        __emit 0x26
        __emit 0xCF
        __emit 0x5F
        __emit 0x00
        __emit 0xC8
        __emit 0xCF
        __emit 0x5F
        __emit 0x00
        __emit 0x7C
        __emit 0xCF
        __emit 0x5F
        __emit 0x00
        __emit 0x8C
        __emit 0xCE
        __emit 0x5F
        __emit 0x00
        __emit 0x06
        __emit 0xCF
        __emit 0x5F
        __emit 0x00
        __emit 0xC8
        __emit 0xCF
        __emit 0x5F
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
