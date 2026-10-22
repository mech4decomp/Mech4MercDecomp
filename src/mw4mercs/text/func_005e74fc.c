/*
 * FUN_005e74fc (extent 0x5e74fc-0x5e76c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007704c0;
extern float  g_0078235c;
extern int    g_007db090;
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_005ef5a0(void);
extern void __cdecl FUN_005ef7f0(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005e74fc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    7
        mov    esi, eax
        call    dword ptr [edx + 4]
        mov    ebp, dword ptr [esp + 0x5c]
        test    ebp, ebp
        je    L_75ea
        push    ebx
        mov    ecx, edi
        call    FUN_005f07c0
        mov    bl, byte ptr [eax + 0x14]
        mov    di, word ptr [eax + 0x16]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [esi + 0x54]
        add    eax, 0x14
        mov    eax, dword ptr [esi + 0x30]
        mov    dword ptr [esp + 0x14], eax
        lea    eax, [ebp + 0x14]
        mov    dword ptr [esp + 0x10], ecx
        push    eax
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x64], edx
        mov    dword ptr [esp + 0x1c], 0x44
        mov    dword ptr [esp + 0x20], 4
        mov    dword ptr [esp + 0x24], 2
        mov    dword ptr [esp + 0x28], 0
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esp + 0x60]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ecx
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x3c], 0x3f800000
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x48], 0xbf800000
        mov    dword ptr [esp + 0x4c], 0xbf800000
        mov    dword ptr [esp + 0x50], 0xbf800000
        mov    byte ptr [esp + 0x34], bl
        mov    word ptr [esp + 0x36], di
        mov    byte ptr [esp + 0x38], 2
        mov    dword ptr [esp + 0x54], edx
        mov    byte ptr [esp + 0x58], 1
        mov    dword ptr [esp + 0x5c], eax
        call    FUN_004d5b70
        pop    ebx
L_75ea:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x4c
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
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007db090]
        mov    al, byte ptr [esi + 0x14]
        cmp    al, byte ptr [ecx + 0x28]
        jne    L_7641
        mov    ecx, esi
        call    FUN_005ef5a0
        test    al, al
        je    L_76ba
        mov    edx, dword ptr [esi + 0xe0]
        cmp    dword ptr [edx + 0x14], 1
        jne    L_76ba
        mov    ecx, esi
        call    FUN_005ef7f0
        test    al, al
        je    L_76ba
        mov    al, 1
        pop    esi
        ret    4
L_7641:
        mov    eax, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 7
        jne    L_76a4
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 4]
        push    0
        mov    edi, eax
        call    FUN_00707e70
        fsub    qword ptr [esi + 0xec]
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0078235c]
        fld    dword ptr [edi + 0x6c]
        fmul    dword ptr [g_007704c0]
        faddp st(1), st(0)
        fsubr    dword ptr [edi + 0x6c]
        pop    edi
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_7699
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
L_7699:
        mov    ecx, esi
        call    FUN_005ef7f0
        pop    esi
        ret    4
L_76a4:
        cmp    eax, 1
        jne    L_76ba
        mov    ecx, esi
        call    FUN_005ef7f0
        test    al, al
        je    L_76ba
        mov    al, 1
        pop    esi
        ret    4
L_76ba:
        xor    al, al
        pop    esi
        ret    4
    }
}
