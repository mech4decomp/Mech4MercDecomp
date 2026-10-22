/*
 * FUN_00713920 (100 B) — Stack-validated random-fill helper.
 *
 * Records EBP/ESP into globals 0x0085b5c0/0x0085b5c4 and validates the
 * saved frame pointer (4-aligned, within stack bounds); if invalid,
 * clears 0x0085b5c0. Then calls FUN_00713910 param_3 times (results
 * discarded) and param_2 times, storing each result into the param_1
 * dword array.
 *
 * __stdcall (RET 0xC = 3 dword params), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00713910(void);
extern int g_0085b5c0;
extern int g_0085b5c4;

__declspec(naked) void __stdcall FUN_00713920(int *param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     dword ptr [g_0085b5c0], ebp
        mov     dword ptr [g_0085b5c4], esp
        mov     eax, dword ptr [g_0085b5c0]
        mov     ecx, eax
        and     ecx, 3
        test    cl, cl
        jnz     label_1394c
        cmp     eax, dword ptr [g_0085b5c4]
        jc      label_1394c
        cmp     eax, 0x80000000
        jbe     label_13956
label_1394c:
        mov     dword ptr [g_0085b5c0], 0
label_13956:
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        test    esi, esi
        push    edi
        jbe     label_13967
label_1395f:
        call    FUN_00713910
        dec     esi
        jnz     label_1395f
label_13967:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jbe     label_1397e
        mov     esi, dword ptr [ebp + 0x8]
label_13971:
        call    FUN_00713910
        mov     dword ptr [esi], eax
        add     esi, 4
        dec     edi
        jnz     label_13971
label_1397e:
        pop     edi
        pop     esi
        pop     ebp
        ret     0xc
    }
}
