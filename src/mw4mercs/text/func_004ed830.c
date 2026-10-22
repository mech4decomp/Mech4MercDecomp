/*
 * FUN_004ed830 (extent 0x4ed830-0x4ed9b5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077490c;
extern int    g_00858940;
extern int    g_00858944;
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_00728fd0(void);

__declspec(naked) void FUN_004ed830(void)
{
    __asm {
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
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc
        push    edi
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x2c]
        test    al, al
        je    L_d99b
        mov    eax, dword ptr [g_00858944]
        mov    ecx, dword ptr [g_00858940]
        push    ebx
        push    esi
        push    eax
        push    ecx
        push    0
        push    0
        call    FUN_00727630
        lea    edx, [edi + 0x1c]
        mov    dword ptr [ebp - 8], edx
        fld    dword ptr [g_0077490c]
        mov    esi, dword ptr [ebp - 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 4], ecx
        xor    eax, eax
        mov    al, byte ptr [edi + 0x30]
        push    0
        push    0
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 0x2f]
        xor    edx, edx
        mov    dl, byte ptr [edi + 0x2e]
        push    eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x2d]
        push    ecx
        mov    ecx, dword ptr [edi + 0x18]
        push    edx
        mov    edx, dword ptr [ebp - 4]
        push    eax
        mov    eax, dword ptr [edi + 0x10]
        push    ecx
        push    edx
        push    eax
        call    FUN_007274d0
        mov    ecx, dword ptr [edi + 0x40]
        mov    edx, dword ptr [edi + 0x3c]
        push    ecx
        push    edx
        call    FUN_007275f0
        mov    eax, dword ptr [edi + 0x34]
        push    eax
        call    FUN_00728fd0
        add    esp, 4
        pop    esi
        pop    ebx
L_d99b:
        pop    edi
        mov    esp, ebp
        pop    ebp
        ret    
        mov    byte ptr [ecx + 0x2c], 0
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
        mov    byte ptr [ecx + 0x2c], 1
        ret    
    }
}
