/*
 * FUN_00603420 (82 B) — __thiscall (ECX = this), RET 4 (one stack arg).
 * Resizes a dynamic array: frees old buffer, allocates new one of
 * arg*4 bytes, or frees and nulls if arg==0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *param);
extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __stdcall FUN_00603420(void *param_1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        jz      L_end
        test    edi, edi
        jbe     L_zero
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_alloc:
        lea     eax, [edi * 4 + 0]
        push    eax
        mov     dword ptr [esi + 4], edi
        call    FUN_004084d0
        add     esp, 4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    L_zero:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    L_end:
        pop     edi
        pop     esi
        ret     4
    }
}
