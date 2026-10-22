/*
 * FUN_005eeda0 (191 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * Initializer: calls FUN_005f0740, zeroes several fields, sets up two
 * string members (via FUN_00412780), stores vtable pointers, and calls
 * FUN_005eeeb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f0740(void);
extern void __stdcall FUN_0041fc80(void);
extern void __stdcall FUN_00412780(void *a);
extern void __stdcall FUN_005eeeb0(void *a);

__declspec(naked) void __stdcall FUN_005eeda0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005f0740
        lea     ebp, [esi + 0x188]
        mov     dword ptr [ebp], 0x0
        lea     ebx, [esi + 0x18c]
        lea     ecx, [esi + 0x1a4]
        push    0x0
        mov     dword ptr [ebx], 0x0
        call    FUN_0041fc80
        xor     eax, eax
        mov     dword ptr [esi + 0x1b4], eax
        mov     dword ptr [esi + 0x1c0], eax
        mov     byte ptr [esi + 0x1c4], al
        lea     eax, [edi + 0x6c]
        mov     dword ptr [esi + 0x1a4], 0x789f88
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esi], 0x789ec4
        call    FUN_00412780
        lea     ecx, [edi + 0xec]
        push    ecx
        mov     ecx, ebx
        call    FUN_00412780
        mov     edx, dword ptr [edi + 0x16c]
        xor     eax, eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi + 0x1a0], edx
        mov     dword ptr [esi + 0x198], eax
        mov     dword ptr [esi + 0x19c], eax
        mov     dword ptr [esi + 0x190], eax
        mov     dword ptr [esi + 0x184], 0xffffffff
        call    FUN_005eeeb0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
