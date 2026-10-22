/*
 * FUN_0059F530 (148 B) — __cdecl function, RET 0, 1 stack param.
 *
 * Creates an object from a stream or returns NULL (variant 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004D2000(void);
extern int __cdecl FUN_004D2310(void);
extern void *__cdecl FUN_004084D0(int);
extern int __cdecl FUN_0059F250(void);
extern int __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_0059F530(void)
{
    __asm {
        mov     eax, [esp + 4]              ; param1
        sub     esp, 0x44
        push    esi
        push    0
        push    eax
        lea     ecx, [esp + 0x0C]           ; local stream
        call    FUN_004D2000                ; init stream from param1
        mov     eax, [esp + 0x40]           ; check field
        test    eax, eax
        je      L_create_empty
        mov     eax, [esp + 0x20]           ; check another field
        test    eax, eax
        jbe     L_create_empty              ; if zero or below, create empty

        ; Stream has data - create from stream
        lea     ecx, [esp + 4]
        call    FUN_004D2310                ; prepare stream
        push    0x54                        ; size = 0x54
        call    FUN_004084D0                ; allocate
        add     esp, 4
        test    eax, eax
        je      L_alloc_failed
        lea     ecx, [esp + 4]
        push    ecx
        mov     ecx, eax
        call    FUN_0059F250                ; construct from stream
        lea     ecx, [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0                ; cleanup stream
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

    L_create_empty:
        push    0x54                        ; size = 0x54
        call    FUN_004084D0                ; allocate
        add     esp, 4
        test    eax, eax
        je      L_alloc_failed
        push    0
        mov     ecx, eax
        call    FUN_0059F250                ; construct empty
        lea     ecx, [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0                ; cleanup stream
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

    L_alloc_failed:
        lea     ecx, [esp + 4]
        xor     esi, esi
        call    FUN_004D21C0                ; cleanup stream
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
