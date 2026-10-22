/*
 * FUN_00741980 (78 B) — __stdcall (RET 0xC, 3 params). Calls a virtual
 * method (vtable+0x60) on param_1 with the 2 other params. If the result
 * is negative, formats a "FAILED (0x%x - %s) - Open(%s %s)" message via
 * FUN_006fabf0 and traps (int 3) if the message is non-null. Returns the
 * virtual call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0074d4d0(void *p);
extern void __cdecl FUN_0074d9b0(void *p);
extern void __cdecl FUN_0073e160(int v);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00741980(void *param_1, void *param_2,
                                             void *param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x60]
        mov     esi, eax
        test    esi, esi
        jge     label_7419c5
        push    ebx
        call    FUN_0074d4d0
        push    eax
        push    edi
        call    FUN_0074d9b0
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a9560
        call    FUN_006fabf0
        add     esp, 0x14
        test    eax, eax
        jz      label_7419c5
        int     3
    label_7419c5:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
