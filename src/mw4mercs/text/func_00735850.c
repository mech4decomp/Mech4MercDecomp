/*
 * FUN_00735850 (66 B) — __stdcall RET 0xC (3 params).
 *
 * Virtual call through *param_1's vtable slot +0x20 with (param_1,
 * param_2, param_3). If result < 0, logs "FAILED (0x%x - %s) -
 * DeleteAttachedSurface(0x%x,0x%x)" via FUN_006fabf0 and traps
 * (int 3) on failure. Returns the call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(const char *, ...);

__declspec(naked) int __stdcall FUN_00735850(int *param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xC]
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    ebx
        push    ecx
        push    edi
        call    dword ptr [eax + 0x20]
        mov     esi, eax
        test    esi, esi
        jge     L_89
        push    ebx
        push    edi
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7A6640
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      L_89
        int     3
L_89:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xC
    }
}
