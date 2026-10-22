/*
 * FUN_0074A450 (65 B) — Virtual dispatch wrapper.
 *
 * Calls (*param_1)->vtable[16](param_1, param_2), stores result in ESI.
 * If result < 0, logs via FUN_0074C5F0 / FUN_0073E160 / FUN_006FABF0 with
 * format string 0x7AA7A8 and asserts on the return. Returns result.
 *
 * __stdcall, RET 0x8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074c5f0(void *p);
extern int __cdecl FUN_0073e160(void *a, void *b);
extern int __cdecl FUN_006fabf0(void *fmt, void *a, void *b);

__declspec(naked) int __stdcall FUN_0074a450(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x40]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        call    FUN_0074c5f0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa7a8
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      done
        int     3
done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     8
    }
}
