/*
 * FUN_00568290 (124 B) — Object method dispatch with validation.
 *
 * __thiscall (ECX = this), takes one stack param (int).
 *
 * Validates the parameter, performs conditional calls, and dispatches
 * to a handler. Includes debug assertion on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00568290(void)
{
    

extern void __cdecl FUN_005dd743(void);
extern void __cdecl FUN_100566bd9(void);
extern void __cdecl FUN_100566c09(void);
extern void __cdecl FUN_1005680d2(void);
extern void __cdecl FUN_100566879(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_10056667c(void);
extern void __cdecl FUN_006fab96(void);
extern void __cdecl FUN_005dd6e6(void);
extern void __cdecl FUN_005dd6d6(void);
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x0c]
        cmp     esi, -2
        push    edi
        jne     normal_path
        mov     ecx, dword ptr [ebp + 8]
        push    0
        call FUN_005dd743
        pop     edi
        pop     esi
        pop     ebp
        ret
normal_path:
        push    esi
        call FUN_100566bd9
        mov     edi, dword ptr [ebp + 8]
        add     esp, 4
        cmp     al, 1
        jne     skip_call1
        push    esi
        call FUN_100566c09
        push    eax
        push    edi
        call FUN_1005680d2
        add     esp, 0x0c
skip_call1:
        push    esi
        call FUN_100566879
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        add     esp, 4
        test    al, al
        je      check_null
        cmp     esi, -1
        jne     check_null
        push    0x77f8e0
        call FUN_10056667c
        push    eax
        call FUN_006fab96
        add     esp, 8
        test    eax, eax
        je      check_null_entry
        int     3
        push    esi
        mov     ecx, edi
        call FUN_005dd6e6
        pop     edi
        pop     esi
        pop     ebp
        ret
check_null:
        test    esi, esi
        je      return
check_null_entry:
        push    esi
        mov     ecx, edi
        call FUN_005dd6d6
return:
        pop     edi
        pop     esi
        pop     ebp
        ret
    }


}
