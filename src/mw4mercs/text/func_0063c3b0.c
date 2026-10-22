/*
 * FUN_0063c3b0 (177 B) — Destructor. Sets vtable pointer 0x0078f1b4,
 * calls virtual method 0 on each of 0x1e pairs of member pointers
 * (this+0x50 .. this+0xc8), then on five more members (this+0x164..
 * this+0x174), then destroys sub-objects and calls FUN_00561730.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00561730(void);

__declspec(naked) void __fastcall FUN_0063c3b0(int param_1)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x78f1b4
        lea     esi, [edi + 0xc8]
        mov     ebx, 0x1e
    l_loop:
        mov     ecx, dword ptr [esi - 0x78]
        test    ecx, ecx
        jz      l_skip1
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip1:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      l_skip2
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_skip2:
        add     esi, 4
        dec     ebx
        jnz     l_loop
        mov     ecx, dword ptr [edi + 0x164]
        test    ecx, ecx
        jz      l_a
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_a:
        mov     ecx, dword ptr [edi + 0x168]
        test    ecx, ecx
        jz      l_b
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_b:
        mov     ecx, dword ptr [edi + 0x16c]
        test    ecx, ecx
        jz      l_c
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_c:
        mov     ecx, dword ptr [edi + 0x170]
        test    ecx, ecx
        jz      l_d
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_d:
        mov     ecx, dword ptr [edi + 0x174]
        test    ecx, ecx
        jz      l_e
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_e:
        lea     ecx, [edi + 0x15c]
        call    FUN_0041fc90
        lea     ecx, [edi + 0x154]
        call    FUN_00417980
        lea     ecx, [edi + 0x144]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00561730
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
