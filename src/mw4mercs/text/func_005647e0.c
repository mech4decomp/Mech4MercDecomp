/*
 * FUN_005647e0 (236 B) — dispatcher: iterates weapon/power tables and
 * calls FUN_00563d90 (0xff entries) and FUN_005642e0 (0x18 entries)
 * for each valid slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007eebbc;
extern int *g_007dab44;
extern int g_007dab40;
extern int g_007ee7b8;

extern void __cdecl FUN_00563d90(int);
extern void __cdecl FUN_005642e0(int);

__declspec(naked) void FUN_005647e0(void)
{
    __asm {
        mov     eax, dword ptr [g_007eebbc]
        test    eax, eax
        push    esi
        jnz     L_7f1
        mov     eax, 0x1
        pop     esi
        ret
L_7f1:
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        jz      L_8c5
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jz      L_8c5
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17]
        test    dl, dl
        jz      L_8c5
        mov     ecx, dword ptr [g_007ee7b8]
        test    ecx, ecx
        jz      L_8c5
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        jz      L_8c5
        push    ebx
        mov     ebx, dword ptr [eax + 0xc]
        xor     ebx, 0x85739531
        push    edi
        mov     edi, 0x1
        lea     esi, [ebx + 0x55bc]
L_864:
        mov     al, byte ptr [esi - 0x4c]
        test    al, al
        jz      L_884
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_884
        mov     ecx, dword ptr [eax + 0x170]
        test    ecx, ecx
        jz      L_884
        push    edi
        call    FUN_00563d90
        add     esp, 0x4
L_884:
        inc     edi
        add     esi, 0x2038
        cmp     edi, 0xff
        jl      L_864
        xor     edi, edi
        lea     esi, [ebx + 0x205f34]
L_89b:
        mov     eax, dword ptr [esi - 0x204]
        test    eax, eax
        jz      L_8b3
        cmp     byte ptr [esi], 0x0
        jz      L_8b3
        push    edi
        call    FUN_005642e0
        add     esp, 0x4
L_8b3:
        inc     edi
        add     esi, 0x22ac
        cmp     edi, 0x18
        jl      L_89b
        pop     edi
        pop     ebx
        xor     eax, eax
        pop     esi
        ret
L_8c5:
        mov     eax, 0x80004005
        pop     esi
        ret
    }
}
