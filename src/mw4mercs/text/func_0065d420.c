/*
 * FUN_0065D420 (122 B) — Sequence of __thiscall state-machine calls.
 *
 * __thiscall (ECX = this), RET (no stack params).
 * Calls a chain of methods on this, branching on their byte returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0065d7c0(void);
extern void __cdecl FUN_0065d700(void);
extern void __cdecl FUN_0065d720(void);
extern void __cdecl FUN_0065d4a0(void);
extern void __cdecl FUN_0065d740(void);
extern void __cdecl FUN_0065d880(void);
extern void __cdecl FUN_0065d6d0(void);
extern void __cdecl FUN_0065d760(void);
extern void __cdecl FUN_0065d6f0(void);
extern void __cdecl FUN_0065d8a0(void);
extern void __cdecl FUN_0065d4b0(void);
extern void __cdecl FUN_0065d8c0(void);
extern void __cdecl FUN_0065e1b0(void);

__declspec(naked) void __stdcall FUN_0065d420(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0065d7c0
        mov     ecx, esi
        call    FUN_0065d700
        test    eax, eax
        jnz     l_43e
        mov     ecx, esi
        call    FUN_0065d720
        cmp     al, 0x1
        jnz     l_445
    l_43e:
        mov     ecx, esi
        call    FUN_0065d4a0
    l_445:
        mov     ecx, esi
        call    FUN_0065d740
        cmp     al, 0x1
        jz      l_45b
        mov     ecx, esi
        call    FUN_0065d880
        cmp     al, 0x1
        jnz     l_462
    l_45b:
        mov     ecx, esi
        call    FUN_0065d6d0
    l_462:
        mov     ecx, esi
        call    FUN_0065d760
        cmp     al, 0x1
        jnz     l_474
        mov     ecx, esi
        call    FUN_0065d6f0
    l_474:
        mov     ecx, esi
        call    FUN_0065d8a0
        cmp     al, 0x1
        jnz     l_486
        mov     ecx, esi
        call    FUN_0065d4b0
    l_486:
        mov     ecx, esi
        call    FUN_0065d8c0
        cmp     al, 0x1
        jnz     l_498
        mov     ecx, esi
        call    FUN_0065e1b0
    l_498:
        pop     esi
        ret
    }
}
