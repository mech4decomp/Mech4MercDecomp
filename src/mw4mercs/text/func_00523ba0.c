/*
 * FUN_00523BA0 (172 B) — Bot AI player initialization helper.
 *
 * __cdecl (3 params), returns int (EAX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00523ba0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0052e102(void);
extern void __cdecl FUN_006f8f22(void);
extern void __cdecl FUN_00543e56(void);
extern int DAT_007db090;
extern void __cdecl FUN_100408453(void);
extern void __cdecl FUN_0053fff9(void);
__asm {
mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [ecx]
        test    edi, edi
        jge     l_check_max
        or      eax, 0xffffffff
        pop     edi
        ret     0xc

    l_check_max:
        cmp     edi, 0x18
        jl      l_ok
        or      eax, 0xffffffff
        pop     edi
        ret     0xc

    l_ok:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, edi
        imul    ecx, ecx, 0x22ac
        push    ebx
        xor     eax, edx
        push    esi
        mov     esi, dword ptr [eax + 0xc]
        xor     esi, 0x85739531
        mov     ebx, dword ptr [ecx + esi + 0x205f38]
        lea     eax, [ecx + esi]
        lea     ecx, [eax + 0x205d24]
        call FUN_0052e102
        push    1
        push    0
        add     edi, 0x100
        push    edi
        call FUN_006f8f22
        cmp     ebx, 8
        jz      l_skip_create
        mov     ecx, esi
        call FUN_00543e56
        mov     edi, eax
        test    edi, edi
        jz      l_skip_create
        mov eax, dword ptr [DAT_007db090]
        mov     edx, dword ptr [esi]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    edi
        push    0
        push    0
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x30]
        push    edi
        call FUN_100408453
        add     esp, 4

    l_skip_create:
        mov     ecx, esi
        call FUN_0053fff9
        pop     esi
        pop     ebx
        mov     eax, 1
        pop     edi
        ret     0xc
    }


}
