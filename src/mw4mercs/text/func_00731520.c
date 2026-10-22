/*
 * FUN_00731520 (81 B) — __stdcall (1 param). Counts the length of a string
 * (treating 0x0A as two chars), allocates a buffer via IAT 0x76B294, then
 * copies the string expanding each 0x0A into 0x0D 0x0A, null-terminating it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76B294;   /* IAT: allocation function */

__declspec(naked) void __stdcall FUN_00731520(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        mov     bl, byte ptr [esi]
        test    bl, bl
        mov     edx, esi
        mov     ecx, 1
        jz      alloc
        mov     al, bl
loop1:
        cmp     al, 0xA
        jne     skip1
        inc     ecx
skip1:
        mov     al, byte ptr [edx + 1]
        inc     ecx
        inc     edx
        test    al, al
        jnz     loop1
alloc:
        push    ecx
        call    dword ptr [g_76B294]
        add     esp, 4
        test    bl, bl
        mov     ecx, eax
        jz      done
        mov     dl, bl
loop2:
        cmp     dl, 0xA
        jne     skip2
        mov     byte ptr [ecx], 0xD
        inc     ecx
skip2:
        mov     byte ptr [ecx], dl
        mov     dl, byte ptr [esi + 1]
        inc     ecx
        inc     esi
        test    dl, dl
        jnz     loop2
done:
        pop     esi
        mov     byte ptr [ecx], 0
        pop     ebx
        ret     4
    }
}
