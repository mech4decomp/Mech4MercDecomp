/*
 * FUN_004f1d50 (158 B) -- MLR/Adept component-list build helper (__thiscall,
 * RET 4, 1 stack param). Reads a count from the stream via virtual call
 * [vtbl+0x20], then loops that many times reading two values and calling a
 * virtual factory [vtbl+0x14] to construct/lookup an object, releasing it via
 * [vtbl+0xc], and conditionally calling FUN_004f3410 / setting a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f3410(void);

__declspec(naked) void func_004f1d50(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     dword ptr [esp + 0x14], eax
        jz      l_end
        push    ebx
    l_loop:
        mov     eax, dword ptr [edi]
        push    4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi + 0x4c]
        mov     ecx, dword ptr [esi + 0x50]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    eax
        call    dword ptr [edx + 0x14]
        mov     edx, dword ptr [esi]
        mov     ebx, eax
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebx + 0x1c]
        shr     eax, 2
        test    al, 1
        jz      l_skip1
        mov     ecx, dword ptr [esi + 0x50]
        push    ebx
        call    FUN_004f3410
    l_skip1:
        mov     ecx, dword ptr [ebx + 0x1c]
        shr     ecx, 1
        test    cl, 1
        jz      l_skip2
        mov     eax, dword ptr [esi + 0x4c]
        or      dword ptr [eax + 0x10], 0x40
    l_skip2:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     dword ptr [esp + 0x18], eax
        jnz     l_loop
        pop     ebx
    l_end:
        pop     edi
        pop     esi
        add     esp, 8
        ret     4
    }
}
