/*
 * FUN_007552E0 (65 B) — Virtual dispatch wrapper.
 *
 * Calls (*param_1)->vtable[3](param_1, param_2, param_3, param_4), stores
 * result in ESI. If result < 0, logs via FUN_00750550 / FUN_006FABF0 with
 * format string 0x7AE18C and asserts on the return. Returns result.
 *
 * __stdcall, RET 0x10 (four stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00750550(void *p);
extern int __cdecl FUN_006fabf0(void *fmt, ...);

__declspec(naked) int __stdcall FUN_007552e0(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        call    FUN_00750550
        push    eax
        push    0x7ae18c
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x10
    }
}
