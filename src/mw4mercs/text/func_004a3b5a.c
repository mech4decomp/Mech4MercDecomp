/*
 * FUN_004a3b5a (extent 0x4a3b5a-0x4a3d32) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007702fc;
extern float  g_00770300;
extern int    g_007b8cd8;
extern int    g_007b8cdc;
extern int    g_007b8ce0;
extern int    g_007b8ce4;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0041af70(void);
extern void __cdecl FUN_004941d0(void);

__declspec(naked) void FUN_004a3b5a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        call    FUN_004941d0
        mov    esi, dword ptr [edi + 0x10]
        mov    al, byte ptr [esi + 0xf8]
        fld    dword ptr [esi + 0xe8]
        test    al, al
        je    L_3ba9
        fld    dword ptr [esi + 0xf4]
        fmul    dword ptr [edi + 0x98]
        fadd    dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_3ba9:
        mov    al, byte ptr [esi + 0xf8]
        fstp    dword ptr [edi + 0xa8]
        test    al, al
        fld    dword ptr [esi + 0xe8]
        je    L_3bd3
        fld    dword ptr [esi + 0xf4]
        fmul    dword ptr [edi + 0x98]
        fadd    dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_3bd3:
        mov    al, byte ptr [esi + 0xf8]
        fstp    dword ptr [edi + 0xac]
        test    al, al
        fld    dword ptr [esi + 0xe8]
        je    L_3bfd
        fld    dword ptr [esi + 0xf4]
        fmul    dword ptr [edi + 0x98]
        fadd    dword ptr [esi + 0xf0]
        fmulp st(1), st(0)
L_3bfd:
        mov    al, byte ptr [esi + 0x11c]
        fstp    dword ptr [edi + 0xb0]
        test    al, al
        je    L_3c5c
        call    FUN_00415020
        fmul    dword ptr [g_00770300]
        fstp    dword ptr [esp + 0xc]
        call    FUN_00415020
        fmul    dword ptr [g_007702fc]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00415020
        fmul    dword ptr [g_00770300]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0xc]
        lea    eax, [esp + 0x10]
        mov    dword ptr [esp + 0x14], ecx
        fstp    dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [edi + 0xb4]
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_0041af70
        jmp    L_3c8b
L_3c5c:
        mov    ecx, dword ptr [g_007b8cd8]
        mov    edx, dword ptr [g_007b8cdc]
        mov    eax, dword ptr [g_007b8ce0]
        mov    dword ptr [edi + 0xb4], ecx
        mov    ecx, dword ptr [g_007b8ce4]
        mov    dword ptr [edi + 0xb8], edx
        mov    dword ptr [edi + 0xbc], eax
        mov    dword ptr [edi + 0xc0], ecx
L_3c8b:
        mov    edx, dword ptr [edi + 0x98]
        fld    dword ptr [edi + 0x90]
        mov    dword ptr [esp + 0x20], edx
        mov    edx, dword ptr [esi + 0x108]
        xor    ecx, ecx
        test    edx, edx
        jbe    L_3cbe
        mov    ebx, dword ptr [esi + 0x104]
L_3cad:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_3cbe
        inc    ecx
        add    ebx, 0xc
        cmp    ecx, edx
        jb    L_3cad
L_3cbe:
        lea    eax, [ecx + ecx*2]
        mov    ecx, dword ptr [esi + 0x104]
        fsub    dword ptr [ecx + eax*4 - 0xc]
        lea    eax, [ecx + eax*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [esi + 0x118]
        test    al, al
        je    L_3d23
        mov    edx, dword ptr [esi + 0x114]
        xor    ecx, ecx
        test    edx, edx
        jbe    L_3d06
        mov    ebx, dword ptr [esi + 0x110]
L_3cf1:
        fld    dword ptr [ebx]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        je    L_3d06
        inc    ecx
        add    ebx, 0xc
        cmp    ecx, edx
        jb    L_3cf1
L_3d06:
        mov    eax, dword ptr [esi + 0x110]
        fld    dword ptr [esp + 0x20]
        lea    edx, [ecx + ecx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp st(1), st(0)
L_3d23:
        fstp    dword ptr [edi + 0xe8]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
    }
}
