/*
 * FUN_004C1A10 (131 B) - MLR node sphere-intersection test (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00487e30(int idx);
extern char __cdecl FUN_00418880(int off);

__declspec(naked) void __cdecl FUN_004c1a10(void)
{
    __asm {
        sub     esp, 0x8
        mov     ecx, dword ptr [esp + 0xc]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x1c]
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        push    edi
        mov     esi, eax
        test    esi, esi
        mov     dword ptr [esp + 0x14], esi
        jle     l_done
        mov     ebp, dword ptr [esp + 0x20]
    l_outer:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_00487e30
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esp + 0x20]
        xor     edi, edi
        test    eax, eax
        jle     l_next
        xor     esi, esi
    l_inner:
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [esi + edx]
        push    eax
        mov     ecx, ebp
        call    FUN_00418880
        test    al, al
        jz      l_fail
        mov     eax, dword ptr [esp + 0x20]
        inc     edi
        add     esi, 0xc
        cmp     edi, eax
        jl      l_inner
        mov     esi, dword ptr [esp + 0x14]
    l_next:
        inc     ebx
        cmp     ebx, esi
        jl      l_outer
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x8
        ret
    l_fail:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8
        ret
    }
}
