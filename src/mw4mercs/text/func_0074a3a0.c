/*
 * FUN_0074a3a0 (72 B) — __stdcall (RET 0xC, 3 params).
 *
 * Calls virtual method at vtable+0x48 on param_1 with (param_2, param_3).
 * If result < 0, formats an error string via FUN_006fabf0 and asserts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0074c3e0(int);
extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);
extern char g_str_7aa744[];

__declspec(naked) int __stdcall FUN_0074a3a0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x48]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        call    FUN_0074c3e0
        push    eax
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7aa744
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
