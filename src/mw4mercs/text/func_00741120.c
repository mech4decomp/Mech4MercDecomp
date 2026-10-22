/*
 * FUN_00741120 (59 B) — Virtual-call wrapper (slot 0x24); on failure
 * logs via FUN_0073E170 + FUN_006FAC00 and __debugbreak().
 *
 * __stdcall (RET 0x8, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0073E170(void);
extern int __cdecl FUN_006FAC00(void);

__declspec(naked) int __stdcall FUN_00741120(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x24]
        mov     esi, eax
        test    esi, esi
        jge     skip
        push    edi
        push    esi
        call    FUN_0073E170
        push    eax
        push    esi
        push    0x7a9044
        call    FUN_006FAC00
        add     esp, 0x10
        test    eax, eax
        jz      skip
        int     3
skip:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     0x8
    }
}
