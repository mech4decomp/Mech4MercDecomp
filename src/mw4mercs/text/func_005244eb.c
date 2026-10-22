/*
 * FUN_005244eb (extent 0x5244eb-0x52464f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dd268;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_00546750(void);

__declspec(naked) void FUN_005244eb(void)
{
    __asm {
        nop    
        push    eax
        inc    esp
        push    edx
        add    byte ptr [esi + 0x44], ah
        push    edx
        add    byte ptr [ebx + 0x44], dh
        push    edx
        add    byte ptr [eax - 0x6fffadbc], al
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 4]
        sub    esp, 8
        push    ebx
        mov    ebx, dword ptr [eax + 0xc]
        push    esi
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0xc]
        push    edi
        mov    edi, dword ptr [ecx]
        xor    esi, 0x85739531
        test    edi, edi
        jge    L_4539
        or    eax, 0xffffffff
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    8
L_4539:
        cmp    edi, 0x18
        jl    L_454a
        or    eax, 0xffffffff
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 8
        ret    8
L_454a:
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x409a4]
        mov    cx, word ptr [edx + eax*4 - 4]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [edx + eax*4 - 4]
        mov    word ptr [esp + 0xc], cx
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esp + 0xe], ax
        mov    dword ptr [esp + 0x18], 0
        jne    L_460c
        cmp    ax, word ptr [g_007db0ae]
        jne    L_460c
        push    0x76c724
        lea    ecx, [esp + 0x1c]
        call    FUN_00412780
        mov    eax, dword ptr [ebx]
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_45d4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_45d4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_45d4:
        mov    edx, dword ptr [esp + 0x18]
        push    0x779f4c
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_460c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_460c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_460c:
        lea    eax, [esp + 0x18]
        push    eax
        push    ecx
        lea    edx, [esp + 0x14]
        mov    ecx, esp
        push    edx
        call    FUN_00523e60
        push    edi
        mov    ecx, esi
        call    FUN_00546750
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_4641
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_4641
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4641:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        add    esp, 8
        ret    8
    }
}
