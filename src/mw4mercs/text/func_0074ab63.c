/*
 * FUN_0074ab63 (extent 0x74ab63-0x74acda) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_0085a1dc;
extern int    g_0085a248;
extern char   g_0087c254;
extern int    g_008b7a18;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00713de0(void);
extern void __cdecl FUN_0074a020(void);
extern void __cdecl FUN_0074a070(void);
extern void __cdecl FUN_0074a0b0(void);
extern void __cdecl FUN_0074a770(void);
extern void __cdecl FUN_0074a840(void);

__declspec(naked) void FUN_0074ab63(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_ab80
        mov    al, byte ptr [g_0085a1dc]
        ret    4
L_ab80:
        mov    al, byte ptr [eax + 0x17]
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
        mov    cl, byte ptr [esp + 8]
        mov    dl, byte ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [g_008b7a18]
        inc    esi
        neg    cl
        push    0
        mov    dword ptr [g_008b7a18], esi
        lea    esi, [eax + 0x18]
        push    esi
        mov    byte ptr [eax + 0x14], 1
        mov    eax, dword ptr [eax + 0xc]
        sbb    ecx, ecx
        and    ecx, 0x2000
        neg    dl
        sbb    edx, edx
        and    edx, 0x1000
        or    ecx, edx
        or    ecx, 0x821
        push    ecx
        push    eax
        call    FUN_0074a020
        mov    eax, dword ptr [esi]
        pop    esi
        ret    0xc
        mov    edx, dword ptr [g_008b7a18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, dword ptr [esi + 0xc]
        dec    edx
        push    edi
        mov    byte ptr [esi + 0x14], 0
        mov    byte ptr [esi + 0x17], 0
        mov    dword ptr [g_008b7a18], edx
        call    FUN_0074a070
        mov    al, byte ptr [esi + 0x15]
        test    al, al
        je    L_ac1d
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    eax
        push    edi
        call    FUN_0074a0b0
        mov    byte ptr [esi + 0x16], 1
L_ac1d:
        pop    edi
        pop    esi
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
        nop    
        push    ebp
        mov    ebp, esp
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_ac41
        call    FUN_00713de0
L_ac41:
        mov    eax, dword ptr [ebp + 0x1c]
        dec    eax
        je    L_acb8
        dec    eax
        je    L_ac8d
        dec    eax
        je    L_ac63
        push    0x7aa9a8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_acd6
        int 3    
        pop    ebp
        ret    0x18
L_ac63:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    0
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        mov    edx, dword ptr [ecx + 0xc]
        push    eax
        mov    eax, dword ptr [g_0085a248]
        push    edx
        push    4
        push    eax
        call    FUN_0074a770
        pop    ebp
        ret    0x18
L_ac8d:
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        push    0
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    edx
        mov    edx, dword ptr [ebp + 8]
        push    eax
        mov    eax, dword ptr [edx + 0xc]
        push    ecx
        mov    ecx, dword ptr [g_0085a248]
        push    eax
        push    2
        push    ecx
        call    FUN_0074a770
        pop    ebp
        ret    0x18
L_acb8:
        mov    edx, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        push    edx
        mov    edx, dword ptr [ecx + 0xc]
        push    eax
        mov    eax, dword ptr [g_0085a248]
        push    edx
        push    1
        push    eax
        call    FUN_0074a840
L_acd6:
        pop    ebp
        ret    0x18
    }
}
