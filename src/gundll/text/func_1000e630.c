/*
 * FUN_1000e630 (378 B) - __stdcall, RET 0x10.
 * Parses an event string via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660 /
 * FUN_1002e090, advancing a buffer, frees temp buffers via FUN_10001d60,
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

__declspec(naked) void __stdcall FUN_1000e630(void)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x10049f34
        xor     ebx, ebx
        push    ecx
        push    ebp
        mov     dword ptr [esp + 0x28], ebx
        mov     dword ptr [esp + 0x2c], ebx
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_1001c7a0
        mov     esi, eax
        cmp     esi, ebx
        jl      L77a
        mov     ebx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        lea     eax, [edx + ebx*2]
        mov     edx, dword ptr [ebp + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        sub     edi, ebx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L77a
        mov     ecx, dword ptr [ebp + 0x28]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L77a
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x28]
        push    0x10049b94
        push    eax
        push    0x10049b60
        push    0x100502d0
        lea     ecx, [esp + 0x24]
        push    ecx
        push    edi
        push    edx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L77a
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049da8
        add     ebx, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      L77a
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x2c]
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        lea     ecx, [ecx + eax*2]
        sub     edi, eax
        push    0x10049db4
        add     ebx, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_1002e090
        mov     esi, eax
        test    esi, esi
        jl      L77a
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        push    0x10049f34
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
        jl      L77a
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x2c]
        add     ebx, eax
        mov     dword ptr [ecx], ebx
    L77a:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x20]
        je      L78c
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L78c:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [ebp + 0x28]
        je      L79e
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L79e:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
