/*
 * FUN_007414b0 (70 B) — __stdcall (RET 0xC, 3 params).
 *
 * Calls virtual method at vtable+0xAC on param_1 with (param_2, param_3).
 * If result < 0, formats an error string via FUN_006fabf0 and asserts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);
extern char g_str_7a9258[];

__declspec(naked) int __stdcall FUN_007414b0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ebx
        push    edi
        push    eax
        call    dword ptr [ecx + 0xac]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    ebx
        push    edi
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7a9258
        call    FUN_006fabf0
        add     esp, 0x18
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
