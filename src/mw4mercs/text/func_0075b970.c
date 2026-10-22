/*
 * FUN_0075b970 (70 B) — __stdcall (RET 0xC, 3 params).
 *
 * Calls virtual method at vtable+0xC on param_1 with (param_2, param_3).
 * If result < 0, formats an error string via FUN_006fabf0 and asserts.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);
extern char g_str_7af850[];

__declspec(naked) int __stdcall FUN_0075b970(void *param_1, void *param_2, void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0xc]
        mov     esi, eax
        test    esi, esi
        jge     done
        mov     edx, dword ptr [ebp + 0xc]
        push    ebx
        push    edx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_str_7af850
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
