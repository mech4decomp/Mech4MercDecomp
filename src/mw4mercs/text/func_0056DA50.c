/*
 * FUN_0056DA50 (150 B) — Search AI group via FUN_0056D9B0.
 *
 * Takes a group identifier and two additional parameters, builds a
 * list of AI objects, and calls FUN_0056D9B0 on each. Returns 1 if
 * any call returns 1, otherwise 0.
 *
 * __cdecl (3 params: undefined4, undefined4, undefined4).
 * Returns bool (AL = 0 or 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_0056DA50(void)
{
    

extern void __cdecl FUN_100566ecb(void);
extern void __cdecl FUN_10056d96a(void);
extern void __cdecl FUN_10040847a(void);
extern void __cdecl FUN_100408460(void);
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
        mov     edx, dword ptr [esi]
        push    edi
        push    edx
        push    ebx
        call FUN_10056d96a
        add     esp, 0xc
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
        call FUN_10040847a
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
        call FUN_100408460
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
