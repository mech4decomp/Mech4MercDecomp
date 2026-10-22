/*
 * FUN_007351F0 (64 B) — Virtual dispatch wrapper.
 *
 * Calls (*param_1)->vtable[4](param_1, param_2, param_3, param_4), stores
 * result in ESI. If result < 0, logs via FUN_0073E160 / FUN_006FABF0 with
 * format string 0x7A6340 and asserts on the return. Returns result.
 *
 * __stdcall, RET 0x10 (four stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073e160(void *p);
extern int __cdecl FUN_006fabf0(void *fmt, void *a, void *b);

__declspec(naked) int __stdcall FUN_007351f0(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6340
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      done
        int     3
done:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x10
    }
}
