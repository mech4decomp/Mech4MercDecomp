/*
 * FUN_1000e430 (357 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then a series of virtual calls through
 * [obj+0xc]->vtable[0x10] and FUN_1002e100 calls with g_10075060 and various
 * string keys, storing results into obj+0x20..+0x2c. On failure frees via
 * FUN_10001d60 / FUN_1002e220. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_1002e100(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __cdecl FUN_1002e220(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000e430(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        jne     L45f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     0x4
    L45f:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L53e
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L49b
        cmp     esi, ebx
        jl      L53e
    L49b:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0x10]
        push    eax
        push    0x10049da8
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L4c3
        cmp     esi, ebx
        jl      L53e
    L4c3:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b94
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L4eb
        cmp     esi, ebx
        jl      L53e
    L4eb:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0x18]
        push    eax
        push    0x10049db4
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L513
        xor     esi, esi
        jmp     L517
    L513:
        cmp     esi, ebx
        jl      L53e
    L517:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    L53e:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L54f
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L54f:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L564
        cmp     dword ptr [edi + 0xc], ebx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002e220
    L564:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L575
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L575:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        je      L58a
        cmp     dword ptr [edi + 0xc], ebx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e220
    L58a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
