/*
 * FUN_0074A1E0 (73 B) — wrapper: calls a virtual method (vtable+0x18) with
 * (this, param_2, param_3, param_4); on failure logs
 * "FAILED (0x%x - %s) - EnumZBufferFormats(%s)" and __debugbreak().
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00750480(void *param);
extern int __cdecl FUN_0073e160(int param);
extern int __cdecl FUN_006fabf0(const char *fmt, ...);

__declspec(naked) int __stdcall FUN_0074a1e0(void *param_1, void *param_2, void *param_3, void *param_4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    edi
        push    eax
        call    dword ptr [ecx + 0x18]
        mov     esi, eax
        test    esi, esi
        jge     done
        push    edi
        call    FUN_00750480
        push    eax
        push    esi
        call    FUN_0073e160
        push    eax
        push    esi
        push    0x7aa648
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
        ret     0x10
    }
}
