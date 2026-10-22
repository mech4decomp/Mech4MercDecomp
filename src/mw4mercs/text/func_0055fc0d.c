/*
 * FUN_0055fc0d (extent 0x55fc0d-0x55fcf8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern char   g_430055fb;
extern void __cdecl FUN_00717a60(void);

__declspec(naked) void FUN_0055fc0d(void)
{
    __asm {
        /* __emit: 0x55FC0D-0x55FC2F is prior fn's jump-table DATA + nop pad,
           not code. gen_bigfunc mis-disassembled it; emit literal bytes. */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x8A
        __emit 0xFA
        __emit 0x55
        __emit 0x00
        __emit 0xCD
        __emit 0xFA
        __emit 0x55
        __emit 0x00
        __emit 0x0D
        __emit 0xFB
        __emit 0x55
        __emit 0x00
        __emit 0x43
        __emit 0xFB
        __emit 0x55
        __emit 0x00
        __emit 0x8B
        __emit 0x01
        __emit 0xC3
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
        __emit 0x90
        mov    al, byte ptr [esp + 0x20]
        push    ebx
        push    esi
        xor    ebx, ebx
        cmp    al, bl
        push    ebx
        push    ebx
        mov    esi, ecx
        push    ebx
        je    L_fc4a
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    2
        jmp    L_fc50
L_fc4a:
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
L_fc50:
        call    FUN_00717a60
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076d064]
        mov    edx, dword ptr [esp + 0x20]
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [esp + 0x24]
        mov    dword ptr [esi + 0x18], eax
        fnstsw  ax
        mov    dword ptr [esi + 0x14], edx
        test    ah, 0x41
        jne    L_fc7a
        fdiv    dword ptr [esp + 0x20]
L_fc7a:
        fld    dword ptr [esp + 0x14]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_fc8f
        fdiv    dword ptr [esp + 0x24]
L_fc8f:
        fld    dword ptr [esp + 0x18]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_fca4
        fdiv    dword ptr [esp + 0x20]
L_fca4:
        fld    dword ptr [esp + 0x1c]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_fcb9
        fdiv    dword ptr [esp + 0x24]
L_fcb9:
        fxch    st(3)
        mov    eax, 0x3f800000
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x20], eax
        fxch    st(1)
        mov    dword ptr [esi + 0x34], eax
        fstp    dword ptr [esi + 8]
        mov    dword ptr [esi + 0x30], eax
        mov    eax, 3
        fstp    dword ptr [esi + 0xc]
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x3c], eax
        mov    dword ptr [esi + 0x1c], ebx
        fstp    dword ptr [esi + 0x10]
        mov    dword ptr [esi + 0x24], ebx
        mov    dword ptr [esi + 0x2c], ebx
        mov    dword ptr [esi + 0x28], ebx
        mov    byte ptr [esi + 0x40], bl
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x20
    }
}
