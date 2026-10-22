/*
 * FUN_0060e340 (175 B) — For each of `count` entries, frees the
 * existing pointer, allocates a 0x80-byte buffer, copies the string
 * "I Love Mech 4" into it, and decrements a refcount on the source
 * string (freeing it when it hits zero).
 *
 * RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(int p);
extern void *__cdecl FUN_006f3c80(int a, int b);
extern void __cdecl FUN_00412570(int p);
extern void __cdecl FUN_004084e0(int p);

__declspec(naked) int __cdecl FUN_0060e340(char *param1, int param2)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        test    eax, eax
        jle     l_ret
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
    l_loop:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], 0
    l_alloc:
        push    0
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
        push    0x779f7c
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [ebp], ebx
        call    FUN_00412570
        mov     edi, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_cont
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_cont
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_cont:
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, 1
        pop     ebp
        pop     ecx
        ret     8
    l_ret:
        mov     eax, 1
        pop     ebp
        pop     ecx
        ret     8
    }
}
