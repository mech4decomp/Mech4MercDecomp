/*
 * FUN_10009620 (204 B) - SEH-guarded destructor. Sets vtable to
 * 0x10021368, frees three dynamically-allocated buffers (via
 * FUN_1000a110 / the free pointer at 0x100210ec), zeroes the counter
 * groups, then tears down the SEH frame.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000a110(void *);
extern void *g_100210ec;   /* free() function pointer @ 0x100210ec */

__declspec(naked) void __cdecl FUN_10009620(void)
{
    __asm {
        push    -1
        push    0x1001f8d7
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esi], 0x10021368
        mov     eax, dword ptr [esi + 8]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], 2
        jz      L1
        push    eax
        call    FUN_1000a110
        add     esp, 4
L1:
        mov     eax, dword ptr [esi + 0x164]
        mov     ebx, dword ptr [g_100210ec]
        cmp     eax, edi
        jbe     L2
        mov     eax, dword ptr [esi + 0x158]
        cmp     eax, edi
        jz      L2
        push    eax
        call    ebx
        add     esp, 4
L2:
        mov     dword ptr [esi + 0x158], edi
        mov     dword ptr [esi + 0x168], edi
        mov     dword ptr [esi + 0x164], edi
        mov     eax, dword ptr [esi + 0xcc]
        cmp     eax, edi
        jbe     L3
        mov     eax, dword ptr [esi + 0xc0]
        cmp     eax, edi
        jz      L3
        push    eax
        call    ebx
        add     esp, 4
L3:
        mov     dword ptr [esi + 0xc0], edi
        mov     dword ptr [esi + 0xd0], edi
        mov     dword ptr [esi + 0xcc], edi
        mov     eax, dword ptr [esi + 0x34]
        cmp     eax, edi
        jbe     L4
        mov     eax, dword ptr [esi + 0x28]
        cmp     eax, edi
        jz      L4
        push    eax
        call    ebx
        add     esp, 4
L4:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi + 0x34], edi
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
