/*
 * FUN_0067be90 (56 B) — 1-arg __cdecl. Calls FUN_0061acf0(param_1),
 * then FUN_0061ad20 on the returned object; if it returns 1, calls
 * FUN_0061acf0(param_1, 0) + FUN_0061ad30, else FUN_0061acf0(param_1, 1)
 * + FUN_0061ad30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0061acf0(int a);
extern char __fastcall FUN_0061ad20(void *this);
extern void __fastcall FUN_0061ad30(void *this);

__declspec(naked) void __cdecl FUN_0067be90(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        cmp     al, 1
        jnz     L_else
        push    0
        push    esi
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad30
        pop     esi
        ret
L_else:
        push    1
        push    esi
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad30
        pop     esi
        ret
    }
}
