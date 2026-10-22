/*
 * FUN_1000eca0 (297 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then a virtual call through [obj+0xc]->vtable[0x10]
 * with g_10075060/0x10049b60, then two FUN_1002e100 calls with keys
 * 0x10049db4 / 0x10049dc8, storing results into obj+0x20/+0x24/+0x28. On
 * failure frees via FUN_10001d60 / FUN_1002e220. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_1002e100(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __cdecl FUN_1002e220(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000eca0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        jne     Lcd5
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     0x4
    Lcd5:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      Ld80
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      Ld0d
        test    esi, esi
        jl      Ld80
    Ld0d:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10049db4
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      Ld35
        test    esi, esi
        jl      Ld80
    Ld35:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0x10]
        push    eax
        push    0x10049dc8
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     Ld5d
        xor     esi, esi
        jmp     Ld61
    Ld5d:
        test    esi, esi
        jl      Ld80
    Ld61:
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     0x4
    Ld80:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      Ld91
        push    eax
        call    FUN_10001d60
        add     esp, 4
    Ld91:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      Lda8
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002e220
    Lda8:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      Ldbf
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002e220
    Ldbf:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
