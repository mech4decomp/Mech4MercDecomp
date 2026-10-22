/*
 * FUN_1000e060 (263 B) - __stdcall, RET 0x10.
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

__declspec(naked) void __stdcall FUN_1000e060(void)
{
    __asm {
        sub     esp, 8
        mov     ecx, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x10049f0c
        push    ebp
        xor     ebx, ebx
        push    ecx
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_1001c7a0
        mov     esi, eax
        cmp     esi, ebx
        jl      L145
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x20]
        lea     edx, [esp + 0x14]
        push    edx
        push    ecx
        lea     ebp, [ebp + ebx*2]
        sub     edi, ebx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L145
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        push    0x10049b60
        push    0x100502b8
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      L145
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx + 0x24]
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        push    0x10049da8
        add     ebx, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ebp
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      L145
        mov     eax, dword ptr [esp + 0x10]
        push    0x10049f0c
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ecx, [ebp + eax*2]
        push    edi
        push    ecx
        add     ebx, eax
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L145
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        add     ebx, eax
        mov     dword ptr [ecx], ebx
    L145:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edx + 0x20]
        je      L15b
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L15b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
