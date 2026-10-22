/*
 * FUN_004d8f60 (72 B) — __fastcall (this in ECX). Iterates a renderer list:
 * FUN_00416bc0(this+0x10), then repeatedly FUN_00416cc0() and dispatches
 * virtual method [vtbl+0xc](2), finally FUN_00416c60().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004d8f60(void)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x10
        push    ecx
        lea     ecx, [esp+0x4]
        call    FUN_00416bc0
        __emit 0x8D   /* lea ecx,[esp+0] — MSVC6 drops zero disp (8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        __emit 0xC7   /* mov dword ptr [esp+0],0x7730ec — MSVC6 drops zero disp (C7 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xEC
        __emit 0x30
        __emit 0x77
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jz      done
loop_body:
        mov     edx, dword ptr [eax]
        push    0x2
        mov     ecx, eax
        call    dword ptr [edx+0xc]        /* virtual dispatch */
        __emit 0x8D   /* lea ecx,[esp+0] — MSVC6 drops zero disp (8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        jnz     loop_body
done:
        __emit 0x8D   /* lea ecx,[esp+0] — MSVC6 drops zero disp (8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416c60
        add     esp, 0x14
        ret
    }
}
