/*
 * FUN_006D2B40 (89 B) — String setter: frees old string, allocates new
 * buffer, copies string via strlen + alloc + memcpy.
 *
 * __thiscall (ECX = this), RET 4 (1 param: char*).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void * __cdecl FUN_004084d0(int);

__declspec(naked) void __stdcall FUN_006d2b40(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        test    ebx, ebx
        push    esi
        mov     esi, ecx
        jz      l_done
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        push    edi
        or      ecx, -1
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        or      ecx, -1
        mov     edx, eax
        xor     eax, eax
        add     esp, 4
        mov     edi, ebx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
    l_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
