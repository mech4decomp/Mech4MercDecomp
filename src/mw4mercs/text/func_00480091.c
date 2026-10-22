/*
 * FUN_00480091 (extent 0x480091-0x4801eb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076dd64;
extern int    g_007da64c;
extern int    g_007da650;
extern float  g_007da654;
extern int    g_007da658;
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00480091(void)
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
        sub    esp, 0x18
        push    ebx
        push    edi
        mov    ebx, ecx
        mov    edi, dword ptr [ebx + 0x24]
        shr    edi, 0x13
        and    edi, 3
        jne    L_00c0
        and    byte ptr [ebx + 0x13], 0xfe
        pop    edi
        xor    al, al
        pop    ebx
        add    esp, 0x18
        ret    0xc
L_00c0:
        dec    edi
        cmp    word ptr [ebx + 0x56], 0
        jne    L_00d2
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x98]
L_00d2:
        mov    eax, dword ptr [esp + 0x28]
        fld    dword ptr [g_007da654]
        mov    ecx, dword ptr [eax]
        fmul    dword ptr [g_0076dd64]
        mov    edx, dword ptr [eax + 4]
        fld    dword ptr [g_0076dd64]
        mov    eax, dword ptr [eax + 8]
        push    esi
        fsub st(0), st(1)
        mov    esi, dword ptr [esp + 0x30]
        mov    dword ptr [esi + 0x20], ecx
        mov    dword ptr [esi + 0x24], edx
        mov    dword ptr [esi + 0x28], eax
        shl    edi, 4
        mov    ecx, dword ptr [edi + 0x7da60c]
        mov    edx, dword ptr [edi + 0x7da610]
        mov    eax, dword ptr [edi + 0x7da618]
        mov    dword ptr [esi], ecx
        mov    ecx, dword ptr [g_007da64c]
        mov    dword ptr [esi + 4], edx
        mov    edx, dword ptr [g_007da650]
        mov    dword ptr [esi + 8], eax
        mov    eax, dword ptr [g_007da658]
        mov    dword ptr [esi + 0xc], ecx
        mov    dword ptr [esi + 0x10], edx
        mov    dword ptr [esi + 0x14], eax
        call    FUN_0075db4a
        fmul    dword ptr [esi + 0x14]
        mov    edi, dword ptr [esp + 0x28]
        push    edi
        lea    ecx, [esp + 0x10]
        fstp    dword ptr [esi + 0x18]
        push    ecx
        lea    ecx, [esi + 0x2c]
        mov    byte ptr [esi + 0x1c], al
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_0041c7d0
        push    edi
        lea    edx, [esp + 0x1c]
        push    edx
        lea    ecx, [esi + 0x38]
        mov    dword ptr [esp + 0x20], 0
        mov    dword ptr [esp + 0x24], 0x3f800000
        mov    dword ptr [esp + 0x28], 0
        call    FUN_0041c680
        mov    cl, byte ptr [ebx + 0x13]
        mov    al, 1
        pop    esi
        or    cl, al
        pop    edi
        mov    byte ptr [ebx + 0x13], cl
        pop    ebx
        add    esp, 0x18
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    esi, ecx
        xor    edi, edi
        cmp    word ptr [esi + 0x54], di
        jbe    L_01e6
L_01bc:
        mov    eax, dword ptr [esi + 0x50]
        mov    cx, word ptr [eax + edi*2]
        cmp    cx, word ptr [esi + 0xa]
        jb    L_01db
        push    0x76f6c4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_01db
        int 3    
L_01db:
        xor    edx, edx
        mov    dx, word ptr [esi + 0x54]
        inc    edi
        cmp    edi, edx
        jl    L_01bc
L_01e6:
        pop    edi
        mov    al, 1
        pop    esi
        ret    
    }
}
