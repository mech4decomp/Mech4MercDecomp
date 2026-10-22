/*
 * FUN_00599590 (43 B) — Allocates a 0x18-byte ref-counted object and
 * copies data from source. Increments refcount at [ptr-1].
 *
 * __stdcall with 1 arg. Returns pointer to object+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(int);

__declspec(naked) void __stdcall FUN_00599590(void)
{
    __asm {
        push    0x18
        call    FUN_004084D0
        lea     edx, [eax + 0x10]
        add     esp, 4
        test    edx, edx
        je      done
        push    esi
        mov     esi, [esp + 8]      /* source arg */
        mov     ecx, [esi]          /* pointer from source */
        test    ecx, ecx
        mov     [edx], ecx          /* store pointer */
        je      skip_inc
        inc     byte ptr [ecx - 1]  /* increment refcount */
    skip_inc:
        mov     cl, [esi + 4]       /* byte from source+4 */
        mov     [edx + 4], cl       /* store byte */
        pop     esi
    done:
        ret     4
    }
}
