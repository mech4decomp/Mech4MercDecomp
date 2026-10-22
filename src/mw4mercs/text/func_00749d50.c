/*
 * FUN_00749d50 (extent 0x749d50-0x749de6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007a6110;
extern int    g_008b79f0;
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b6e0(void);
extern void __cdecl FUN_0075b970(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075dca0(void);

__declspec(naked) void FUN_00749d50(void)
{
    __asm {
        sub    esp, 0x10
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi]
        lea    eax, [esp + 0xc]
        push    eax
        lea    ecx, [esp + 0xc]
        push    ecx
        push    edi
        call    FUN_0075b970
        test    byte ptr [esp + 8], 2
        je    L_9db5
        lea    edx, [esp + 0x10]
        push    edx
        push    edi
        call    FUN_0075b6e0
        fld    qword ptr [esp + 0x1c]
        fmul    qword ptr [g_007a6110]
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0x10]
        sub    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        sbb    eax, edx
        mov    edx, dword ptr [esi + 0x2c]
        push    edx
        mov    edx, dword ptr [esi + 0x28]
        push    edx
        push    eax
        push    ecx
        call    FUN_0075dca0
        push    edx
        push    eax
        push    edi
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x20], edx
        call    FUN_0075b0d0
L_9db5:
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008b79f0]
        xor    ecx, ecx
        cmp    eax, ecx
        je    L_9de5
        push    esi
        mov    edx, 1
L_9dd1:
        cmp    dword ptr [eax + 0xc], edx
        jne    L_9dde
        mov    esi, dword ptr [eax + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    byte ptr [esi], dl
L_9dde:
        mov    eax, dword ptr [eax]
        cmp    eax, ecx
        jne    L_9dd1
        pop    esi
L_9de5:
        ret    
    }
}
