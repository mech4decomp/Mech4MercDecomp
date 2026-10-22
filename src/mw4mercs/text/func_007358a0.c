/*
 * FUN_007358a0 (62 B) — __stdcall (RET 8). Calls a virtual method
 * (this->vtbl[0x1c]) with (param2, param1). If the result is negative,
 * formats an error via FUN_0073e160 + FUN_006fabf0 (with string 0x7a6678)
 * and INT3 if that returns non-zero. Returns the virtual-call result.
 *
 * __stdcall (RET 8), two params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7a6678[];   /* format string */
extern int __cdecl FUN_0073e160(void *a, void *b, int c);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_007358a0(void *param1, void *param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    edi
        call    dword ptr [eax + 0x70]
        mov     esi, eax
        test    esi, esi
        jge     L_done
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    offset g_7a6678
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_done
        int     3
    L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     8
    }
}
