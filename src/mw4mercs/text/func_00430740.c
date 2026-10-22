/*
 * FUN_00430740 (95 B) — __thiscall, RET 0x4. MLR buffer allocator helper:
 * checks capacity, sets up a buffer descriptor, calls FUN_00491340.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b960c;
extern void __cdecl FUN_00491340(void *p);

__declspec(naked) void FUN_00430740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x8]
        cmp     eax, 0x100
        jnc     L_5b
        xor     al, al
        pop     esi
        ret     0x4
L_5b:
        mov     eax, dword ptr [esi+0x1c]
        mov     edx, dword ptr [esi+0x10]
        lea     ecx, [esi+0xc]
        or      eax, 0xf
        mov     dword ptr [ecx+0x10], eax
        mov     eax, dword ptr [esp+0x8]
        and     edx, 0xfffffff0
        or      edx, eax
        mov     eax, dword ptr [g_007b960c]
        push    eax
        mov     dword ptr [ecx+0x4], edx
        call    FUN_00491340
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx+0x14]
        test    al, 3
        jz      L_99
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 3
        push    eax
        call    dword ptr [edx+0x18]
L_99:
        mov     al, 1
        pop     esi
        ret     0x4
    }
}
