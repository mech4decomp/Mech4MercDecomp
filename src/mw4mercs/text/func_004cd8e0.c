/*
 * FUN_004cd8e0 (98 B) — MLR subsystem: __thiscall helper that walks a
 * linked list at [this+0x180c], calls FUN_004cd950 for each node, and
 * returns whether the head node is non-null. Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004cd950(void);
extern void FUN_00417ad0(void);

__declspec(naked) void FUN_004cd8e0(void)
{
    __asm {
        sub     esp, 0xc
        lea     eax, [ecx+0x180c]
        mov     dword ptr [esp+4], eax
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [esp+8], eax
        __emit 0xC7  /* __emit: mov dword ptr [esp],0x771afc — zero-disp [esp] form (C7 44 24 00); MSVC6 drops the 00 disp byte */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xFC
        __emit 0x1A
        __emit 0x77
        __emit 0x00
        jz      L_4cd93c
        push    esi
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_4cd92c
        mov     eax, dword ptr [esi+0x10]
        mov     edx, dword ptr [esi+0x14]
        push    eax
        mov     eax, dword ptr [esi+0x18]
        push    edx
        push    eax
        call    FUN_004cd950
        lea     ecx, [esp+4]
        call    FUN_00417ad0
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     eax, dword ptr [esp+0xc]
L_4cd92c:
        test    eax, eax
        pop     esi
        jz      L_4cd93c
        cmp     dword ptr [eax], 0
        jz      L_4cd93c
        mov     al, 1
        add     esp, 0xc
        ret
L_4cd93c:
        xor     al, al
        add     esp, 0xc
        ret
    }
}
