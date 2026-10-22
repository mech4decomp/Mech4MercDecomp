/*
 * FUN_00606f00 (108 B) — __thiscall initializer (ECX = this, RET 0x10).
 *
 * Calls FUN_004e1d10(this, p1, p2, p3, p4, 0x15), zeroes fields at
 * this+0x1e4/0x1e8, sets vtable at this, invokes virtual method at
 * offset 0x4, and copies a string (from the returned object + 0x38)
 * into the global buffer at 0x007F27F0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e1d10(void);

extern char g_7f27f0[];   /* 0x007F27F0 */

__declspec(naked) void *__cdecl FUN_00606f00(void *this, int p1, int p2, int p3, int p4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        push    0x15
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_004e1d10
        mov     edx, dword ptr [ebx + 0x78]
        xor     eax, eax
        lea     ecx, [ebx + 0x78]
        mov     dword ptr [ebx + 0x1e4], eax
        mov     dword ptr [ebx + 0x1e8], eax
        mov     dword ptr [ebx], 0x78bae8
        call    dword ptr [edx + 4]
        or      ecx, 0xffffffff
        mov     edi, eax
        add     edi, 0x38
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7f27f0
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x10
    }
}
