/*
 * FUN_007413A0 (66 B) — __stdcall RET 0xC (3 params).
 *
 * Virtual call through *param_1's vtable slot +0x38 with (param_1,
 * param_2, param_3). If result < 0, logs "FAILED (0x%x - %s) -
 * GetCaps(0x%x, %d)" via FUN_006fabf0 and traps (int 3) on failure.
 * Returns the call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_007413A0(int *param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xC]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x38]
        mov     esi, eax
        test    esi, esi
        jge     L_d9
        push    edi
        push    ebx
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7A91B4
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_d9
        int     3
L_d9:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xC
    }
}
