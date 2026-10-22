/*
 * FUN_1000fe90 (168 B) - __stdcall, RET 0x10 (4 args).
 * Config-query helper: calls FUN_1001c920(arg1, arg2, 0x10049fe8, arg3,
 * &local1); then FUN_1002af80([arg1+0x24], &local2); then FUN_1001c660(
 * arg2+local1*2, arg3-local1, &local1, 0x10050228, 0x10049b94, local2).
 * On success writes arg3+local1 into *arg4. Frees local2 (if != [arg1+0x24])
 * via FUN_10001d60. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1000fe90(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x10049fe8
        push    ebx
        push    ebp
        call    FUN_1001c920
        mov     esi, eax
        test    esi, esi
        jl      L_1a
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_1a
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x10049b94
        push    0x10050228
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      L_1a
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
    L_1a:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x24]
        je      L_2c
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_2c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
