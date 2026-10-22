/*
 * FUN_1000ee60 (322 B) - __stdcall, RET 0x10.
 * Parses an event string via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660 /
 * FUN_1002e090, advancing a buffer, frees a temp buffer via FUN_10001d60,
 * writes a result offset into arg4. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_1002e090(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1000ee60(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x10049f7c
        push    ecx
        xor     ebx, ebx
        push    ebp
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_1001c7a0
        mov     esi, eax
        cmp     esi, ebx
        jl      Lf84
        mov     ebx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x20]
        lea     eax, [edx + ebx*2]
        mov     edx, dword ptr [ebp + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x28], eax
        sub     edi, ebx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      Lf84
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    0x10049b60
        push    0x100502b8
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    edx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      Lf84
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049db4
        add     ebx, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x34], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      Lf84
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x28]
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049dc8
        add     ebx, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x34], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      Lf84
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        push    0x10049f7c
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ecx, [ecx + eax*2]
        push    edi
        push    ecx
        add     ebx, eax
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      Lf84
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        add     ebx, eax
        mov     dword ptr [ecx], ebx
    Lf84:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x20]
        je      Lf96
        push    eax
        call    FUN_10001d60
        add     esp, 4
    Lf96:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
