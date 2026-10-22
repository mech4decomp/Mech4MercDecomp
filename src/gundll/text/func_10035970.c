/*
 * FUN_10035970 (380 B) - __stdcall, RET 0xc.  COM-style object builder: takes
 * 3 args (this-ish + two out ptrs), makes several virtual calls through
 * arg1->+0xc / arg1->+0x10 object vtables, allocates a 0x118-byte-per-entry
 * buffer, and fills it from a source array (0x20-byte stride) via an IAT
 * copy (0x100490bc) and FUN_10038272 / FUN_100332f0.  Returns an HRESULT.
 * Byte-identical to FUN_10031B00.  Real entry at 0x10035970 (leading
 * 0x10035928-0x1003596f is jump-table data).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490bc;   /* IAT: memcpy-ish copy */
extern void __cdecl FUN_10038272(void);   /* rel32 call */
extern void __cdecl FUN_100332f0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10035970(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        xor     ecx, ecx
        push    ecx
        lea     edi, [esp + 0x30]
        push    edi
        lea     edi, [esp + 0x18]
        push    edi
        push    ecx
        mov     dword ptr [ebx], ecx
        push    ecx
        mov     dword ptr [ebp], ecx
        mov     eax, dword ptr [esi + 0xc]
        push    0x1004addc
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x44], ecx
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x10]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [esp + 0x1c], edi
        jne     L2
        mov     dword ptr [esp + 0x14], 0x8007000e
        jmp     L9
L2:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    0
        lea     edx, [esp + 0x30]
        push    edx
        lea     edx, [esp + 0x18]
        push    edx
        push    edi
        push    0
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jl      L9
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [ebp], eax
        imul    eax, eax, 0x118
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0xc]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [ebx], eax
        jne     L4
        mov     dword ptr [esp + 0x14], 0x8007000e
        jmp     L9
L4:
        cmp     dword ptr [esp + 0x2c], ebp
        mov     dword ptr [esp + 0x18], ebp
        jle     L9
        add     edi, 0x14
        jmp     L6
L5:
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, edi
L6:
        mov     esi, dword ptr [ebx]
        mov     eax, dword ptr [edi]
        push    eax
        add     esi, ebp
        push    esi
        call    dword ptr [g_100490bc]
        lea     ecx, [edi - 0x10]
        mov     eax, dword ptr [ecx]
        lea     edx, [esi + 0x108]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], eax
        mov     eax, dword ptr [ecx + 8]
        mov     dword ptr [edx + 8], eax
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 0xc], ecx
        mov     edx, dword ptr [edi]
        push    0x10051580
        push    edx
        xor     ebx, ebx
        call    FUN_10038272
        add     esp, 8
        test    eax, eax
        je      L7
L8:
        push    0x10051580
        push    0
        mov     ebx, eax
        call    FUN_10038272
        add     esp, 8
        test    eax, eax
        jne     L8
L7:
        lea     eax, [esi + 0x100]
        push    eax
        push    ebx
        call    FUN_100332f0
        mov     eax, dword ptr [esp + 0x18]
        mov     word ptr [esi + 0x104], 0
        mov     ecx, dword ptr [esp + 0x2c]
        inc     eax
        add     ebp, 0x118
        add     edi, 0x20
        cmp     eax, ecx
        mov     dword ptr [esp + 0x18], eax
        jl      L5
        mov     esi, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x1c]
L9:
        mov     esi, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0xc
    }
}
