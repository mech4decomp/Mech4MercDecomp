/*
 * FUN_100199f0 (298 B) - __stdcall, RET 0x4 (1 arg). Registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then makes 4 virtual dispatch calls (vtable[5] x3 with GUIDs 0x10049c70,
 * 0x10049c7c, 0x10049b58 and vtable[4] with 0x10049b5c) passing g_10075060
 * and out-slots; on success stores the 4 results into this->+0x20/+0x24/
 * +0x28/+0x2c.  On failure frees the last out-slot via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100199f0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0xc], ebx
        jne     L_ok
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
    L_ok:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_afe
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c70
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_2
        cmp     esi, ebx
        jl      L_afe
    L_2:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c7c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_3
        cmp     esi, ebx
        jl      L_afe
    L_3:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b58
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_4
        cmp     esi, ebx
        jl      L_afe
    L_4:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_5
        xor     esi, esi
        jmp     L_store
    L_5:
        cmp     esi, ebx
        jl      L_afe
    L_store:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    L_afe:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_ret
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_ret:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
