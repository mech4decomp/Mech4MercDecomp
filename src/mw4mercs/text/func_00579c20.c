/*
 * FUN_00579C20 (108 B) — Searches for an object with a matching field.
 *
 * Enumerates objects via FUN_0063B370, then searches for one where
 * field at offset 0x574 equals the input parameter.
 *
 * __cdecl, returns 1 if found, 0 otherwise.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_0063B370(void *buf, int count);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) int __cdecl FUN_00579C20(int param_1)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    edi
        lea     eax, [esp + 0x0c]
        push    1
        push    eax
        xor     bl, bl
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x1c], 0
        call    FUN_0063B370
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 8
        cmp     edx, ecx
        mov     eax, edx
        jz      l_free
        mov     edi, dword ptr [esp + 0x1c]
l_loop:
        mov     ebp, dword ptr [eax]
        cmp     dword ptr [ebp + 0x574], edi
        jz      l_found
        add     eax, 4
        cmp     eax, ecx
        jnz     l_loop
        jmp     l_free
l_found:
        mov     bl, 1
l_free:
        test    edx, edx
        jz      l_done
        push    edx
        call    FUN_004084E0
        add     esp, 4
l_done:
        pop     edi
        pop     ebp
        mov     al, bl
        pop     ebx
        add     esp, 0xc
        ret
    }
}
