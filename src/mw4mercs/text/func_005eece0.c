/*
 * FUN_005eece0 (183 B) — __thiscall (ECX = this), RET 8.
 *
 * Constructs a new object: calls a virtual method on param_1, calls
 * FUN_005f06f0, then copies two strings (from this+0x188 and this+0x18c)
 * into the new object at +0x6c and +0xec, and stores several fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f06f0(void *a, void *b);
extern void * __stdcall FUN_0050e1b0(void *a);

__declspec(naked) void * __stdcall FUN_005eece0(void *this, void *param_1)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ebp, ecx
        push    0x178
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_005f06f0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edi, dword ptr [ebp + 0x188]
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [ebx + 0x6c]
        mov     edi, edx
        mov     dword ptr [ebx], 0x178
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [ebp + 0x18c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [ebx + 0xec]
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x1ac]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [ebp + 0x1a0]
        push    edx
        mov     dword ptr [ebx + 0x16c], ecx
        call    FUN_0050e1b0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [ebx + 0x170], eax
        mov     eax, dword ptr [ebp + 0x1b0]
        pop     esi
        mov     dword ptr [ebx + 0x174], eax
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x8
    }
}
