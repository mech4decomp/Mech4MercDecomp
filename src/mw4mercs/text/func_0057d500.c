/*
 * FUN_0057D500 (127 B) — Container iteration with conditional field set.
 *
 * Takes a container and a value. Iterates through elements, checks a
 * condition via a method call, and sets field_0x9C4 on matching elements.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057D500(void)
{
    

extern void __cdecl FUN_100566ecd(void);
extern int DAT_007f1f84;
extern void __cdecl FUN_1004151e8(void);
extern void __cdecl FUN_100408473(void);
__asm {
sub     esp, 0x0c
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    0
        lea     eax, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call FUN_100566ecd
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x0c
        cmp     edi, eax
        je      skip_loop
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    esi
loop_start:
        mov eax, dword ptr [DAT_007f1f84]
        mov     esi, dword ptr [edi]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_1004151e8
        cmp     al, 1
        jne     skip_set
        mov     dword ptr [esi + 0x9c4], ebx
skip_set:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 4
        cmp     edi, eax
        jne     loop_start
        mov     edi, dword ptr [esp + 0x0c]
        pop     esi
        pop     ebx
skip_loop:
        test    edi, edi
        je      done
        push    edi
        call FUN_100408473
        add     esp, 4
done:
        pop     edi
        add     esp, 0x0c
        ret
    }


}
