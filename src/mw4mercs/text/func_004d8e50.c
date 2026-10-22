/*
 * FUN_004d8e50 (86 B) — __thiscall (RET 0x8, 2 stack args). Iterates a
 * renderer list: FUN_00416bc0(this+0x10), then repeatedly FUN_00416cc0()
 * and dispatches virtual method [vtbl+0x18](param_1,param_2), finally
 * FUN_00416c60().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004d8e50(void)
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
        push    esi
        mov     esi, dword ptr [esp+0x1c]   /* param_1 */
        push    edi
        mov     edi, dword ptr [esp+0x24]   /* param_2 */
loop_body:
        mov     edx, dword ptr [eax]
        push    edi
        push    esi
        mov     ecx, eax
        call    dword ptr [edx+0x18]        /* virtual dispatch */
        lea     ecx, [esp+0x8]
        call    FUN_00416cc0
        test    eax, eax
        jnz     loop_body
        pop     edi
        pop     esi
done:
        __emit 0x8D   /* lea ecx,[esp+0] — MSVC6 drops zero disp (8D 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_00416c60
        add     esp, 0x14
        ret     0x8
    }
}
