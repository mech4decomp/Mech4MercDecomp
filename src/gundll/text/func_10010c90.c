/*
 * FUN_10010c90 (142 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then a virtual call through [obj+0xc]->vtable[0x10]
 * with (obj+0xc, g_10075060, 0x10049b60, &out). Stores out into obj+0x20.
 * On failure frees via FUN_10001d60. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10010c90(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     Lb1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
    Lb1:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L105
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
        jne     Lf2
        mov     eax, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    Lf2:
        test    esi, esi
        jl      L105
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    L105:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L116
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L116:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
