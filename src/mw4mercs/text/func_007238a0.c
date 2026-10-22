/*
 * FUN_007238a0 (extent 0x7238a0-0x723998) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b468;
extern char   g_0087bc34;
extern int    g_0087dde4;
extern int    g_0087dde8;
extern int    g_0087e1ec;
extern int    g_0087e1f0;
extern int    g_0087e5f4;
extern int    g_008aaea4;
extern void __cdecl FUN_007238a0(void);

__declspec(naked) void FUN_007238a0(void)
{
    __asm {
        mov    ecx, dword ptr [g_0087e1ec]
        mov    edx, dword ptr [g_0087e1f0]
        lea    eax, [ecx + 1]
        and    eax, 0xff
        cmp    eax, edx
        je    L_38c8
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx*4 + 0x87e1f4], edx
        mov    dword ptr [g_0087e1ec], eax
L_38c8:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        mov    ecx, ebx
        and    ecx, 7
        mov    dl, 1
        shl    dl, cl
        mov    eax, ebx
        shr    eax, 3
        mov    cl, byte ptr [eax + 0x87ddc4]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        or    cl, dl
        cmp    ebx, 6
        push    edi
        mov    byte ptr [eax + 0x87ddc4], cl
        jae    L_3904
        test    esi, esi
        je    L_3992
L_3904:
        mov    edx, dword ptr [g_0087e5f4]
        test    edx, edx
        je    L_394a
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_3944
        mov    ecx, dword ptr [g_0087dde4]
        mov    edi, dword ptr [g_0087dde8]
        lea    eax, [ecx + 1]
        and    eax, 0xff
        cmp    eax, edi
        je    L_393b
        mov    dword ptr [ecx*4 + 0x87ddec], edx
        mov    dword ptr [g_0087dde4], eax
L_393b:
        mov    eax, dword ptr [g_008aaea4]
        test    eax, eax
        je    L_394a
L_3944:
        push    edx
        call    FUN_007238a0
L_394a:
        mov    edi, dword ptr [g_0076b468]
        push    0
        call    edi
        cmp    eax, 7
        jne    L_3978
        push    1
        call    edi
        and    eax, 0xffffff00
        cmp    eax, 0xd00
        jne    L_3978
        xor    eax, eax
        mov    ah, bl
        pop    edi
        pop    esi
        pop    ebx
        mov    dword ptr [g_0087e5f4], eax
        ret    8
L_3978:
        and    ebx, 0xff
        shr    esi, 8
        shl    ebx, 8
        and    esi, 0x10000
        add    ebx, esi
        mov    dword ptr [g_0087e5f4], ebx
L_3992:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
