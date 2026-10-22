/*
 * FUN_0056D9B0 (148 B) ??? Search AI group for matching object.
 *
 * Takes a group identifier and two additional parameters, builds a
 * list of AI objects, and calls a virtual method on each. Returns 1
 * if any object's method returns 1, otherwise 0.
 *
 * __cdecl (3 params: undefined4, undefined4, undefined4).
 * Returns bool (AL = 0 or 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_0056D9B0(void)
{
    

extern void __cdecl FUN_100566ecb(void);
extern void __cdecl FUN_10040847c(void);
extern void __cdecl FUN_100408462(void);
__asm {
sub     esp, 0xc
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        push    edi
        push    0
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x1c], 0
        mov     dword ptr [esp + 0x20], 0
        call FUN_100566ecb
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0xc
        cmp     esi, eax
        jz      label_free_and_return0

label_loop:
        mov     edi, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x20]

label_inner:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    1
        push    edi
        push    ebx
        call    dword ptr [edx + 0x5c]
        cmp     al, 1
        jz      label_found
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     label_inner
        mov     esi, dword ptr [esp + 0x0c]

label_free_and_return0:
        test    esi, esi
        jz      label_return0
        push    esi
        call FUN_10040847c
        add     esp, 4

label_return0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret

label_found:
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      label_return1
        push    eax
        call FUN_100408462
        add     esp, 4

label_return1:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret
    }


}
