/*
 * FUN_0057D150 (125 B) — Container iteration with method dispatch.
 *
 * Takes a container, an object with a method table at field_0x225c,
 * and a parameter. Iterates through container elements calling the
 * method on each.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057D150(void)
{
    

extern void __cdecl FUN_100566ecd(void);
extern void __cdecl FUN_00621af0(void);
extern void __cdecl FUN_100408475(void);
__asm {
sub     esp, 0x0c
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    0
        lea     eax, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call FUN_100566ecd
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x0c
        cmp     esi, eax
        je      skip_loop
        mov     edx, dword ptr [esp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [edx + 0x225c]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
loop_start:
        mov     eax, dword ptr [esi]
        push    edi
        add     eax, 0x14
        push    eax
        mov     ecx, ebx
        call FUN_00621af0
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 4
        cmp     esi, eax
        jne     loop_start
        mov     esi, dword ptr [esp + 0x0c]
        pop     edi
        pop     ebx
skip_loop:
        test    esi, esi
        je      done
        push    esi
        call FUN_100408475
        add     esp, 4
done:
        pop     esi
        add     esp, 0x0c
        ret
    }


}
