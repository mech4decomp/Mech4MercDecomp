/*
 * FUN_0057BEA0 (129 B) — Container iteration with conditional method dispatch.
 *
 * Takes a container and a parameter. Iterates through elements, checks
 * a field at offset 0x3D4, and calls a method on matching elements.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057BEA0(void)
{
    

extern void __cdecl FUN_100566c7d(void);
extern void __cdecl FUN_005faed5(void);
extern void __cdecl FUN_005b9d0c(void);
extern void __cdecl FUN_100408470(void);
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
        call FUN_100566c7d
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 0x0c
        cmp     eax, ecx
        mov     edi, eax
        je      skip_loop
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    esi
loop_start:
        mov     ecx, dword ptr [edi]
        mov     esi, dword ptr [ecx + 0x3d4]
        test    esi, esi
        je      skip_set
        call FUN_005faed5
        mov     ecx, esi
        push    eax
        push    ebx
        call FUN_005b9d0c
        mov     eax, dword ptr [esp + 0x0c]
skip_set:
        mov     ecx, dword ptr [esp + 0x10]
        add     edi, 4
        cmp     edi, ecx
        jne     loop_start
        pop     esi
        pop     ebx
skip_loop:
        test    eax, eax
        pop     edi
        je      done
        push    eax
        call FUN_100408470
        add     esp, 4
done:
        add     esp, 0x0c
        ret
    }


}
