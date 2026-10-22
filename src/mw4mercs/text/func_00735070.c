/*
 * FUN_00735070 (77 B) — __stdcall (RET 0x14, 5 params). Calls a virtual
 * method (vtable+0x14) on param_1 with the 4 other params. If the result
 * is negative, formats a "FAILED (0x%x - %s) - CreatePalette(%s)" message
 * via FUN_006fabf0 and traps (int 3) if the message is non-null. Returns
 * the virtual call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00750e30(void *p);
extern void __cdecl FUN_0073e160(int v);
extern int  __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_00735070(void *param_1, void *param_2,
                                             void *param_3, void *param_4,
                                             void *param_5)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jge     label_7350b5
        push    edi
        call    FUN_00750e30
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7a6260
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      label_7350b5
        int     3
    label_7350b5:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x14
    }
}
