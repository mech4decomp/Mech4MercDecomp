/*
 * FUN_0041f5f9 (extent 0x41f5f9-0x41f6e0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2dc;
extern int    g_0076b420;
extern float  g_0076d824;
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0041f5f9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_0041ac80
        fld    dword ptr [g_0076d824]
        fmul    dword ptr [esp + 0xc]
        sub    esp, 8
        sub    esp, 8
        sub    esp, 8
        fstp    qword ptr [esp + 0x10]
        fld    dword ptr [g_0076d824]
        fmul    dword ptr [esp + 0x20]
        fstp    qword ptr [esp + 8]
        fld    dword ptr [g_0076d824]
        fmul    dword ptr [esp + 0x1c]
        fstp    qword ptr [esp]
        push    0x76d860
        push    0x7b9398
        call    dword ptr [g_0076b420]
        add    esp, 0x20
        push    0x7b9398
        lea    ecx, [esi + 0x18]
        call    FUN_00412780
        mov    ecx, dword ptr [esi + 0x10]
        mov    edx, dword ptr [ecx + 0x10]
        mov    byte ptr [edx + 4], 1
        pop    esi
        add    esp, 0xc
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
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0x18]
        lea    ecx, [eax + 0x14]
        push    ecx
        lea    edx, [eax + 0x10]
        push    edx
        lea    ecx, [eax + 0xc]
        push    ecx
        lea    edx, [eax + 8]
        push    edx
        lea    ecx, [eax + 4]
        push    ecx
        push    eax
        push    0x76d8e4
        push    edi
        call    dword ptr [g_0076b2dc]
        add    esp, 0x20
        cmp    eax, 6
        je    L_f6da
        mov    eax, dword ptr [esi + 0x10]
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [eax + 0x14]
        push    edi
        push    edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [edx]
        push    ecx
        push    eax
        push    0x76d8c0
        call    FUN_006fab90
        add    esp, 0x14
        test    eax, eax
        je    L_f6da
        int 3    
L_f6da:
        pop    edi
        pop    esi
        pop    ebp
        ret    4
    }
}
