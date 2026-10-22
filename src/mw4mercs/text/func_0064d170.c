/*
 * FUN_0064d170 (70 B) — resolves two handles via FUN_0064c950 and
 *   combines them with FUN_0064c960; returns a global (0x0080d9b0)
 *   on success, else the first handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080d9b0;

extern void *__cdecl FUN_0064d050(void);
extern char __cdecl FUN_006498f0(const char *);
extern int __cdecl FUN_0064c950(void *);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064c960(void *, void *);

__declspec(naked) void FUN_0064d170(void)
{
    __asm {
        push    esi
        call    FUN_0064d050
        push    0x7b5a48
        mov     esi, eax
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      Ld1b2
        push    esi
        call    FUN_0064c950
        mov     esi, eax
        call    FUN_00649150
        call    FUN_0064d050
        push    eax
        call    FUN_0064c950
        push    eax
        push    esi
        call    FUN_0064c960
        mov     eax, dword ptr [g_0080d9b0]
        add     esp, 0x10
        pop     esi
        ret
    Ld1b2:
        mov     eax, esi
        pop     esi
        ret
    }
}
