/*
 * FUN_005e6cf0 (134 B) — __thiscall constructor (RET 0x10, 4 stack params).
 *
 * Calls FUN_005eeda0(param_1..param_4), zeroes several fields, sets up
 * vtable pointers (0x773328 scalar-deleting-dtor at +0x214, 0x78929c at
 * +0x0), calls FUN_0041fc80(0) and FUN_005e6dc0(param_2). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005eeda0(void);
extern void __cdecl FUN_0041fc80(int arg);
extern void FUN_005e6dc0(void);

__declspec(naked) void func_005e6cf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005eeda0
        xor     eax, eax
        lea     edi, [esi + 0x214]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x1d4], eax
        mov     dword ptr [esi + 0x1d8], eax
        mov     dword ptr [esi + 0x1dc], eax
        mov     dword ptr [esi + 0x1e4], eax
        mov     dword ptr [esi + 0x1e8], 0x2000
        call    FUN_0041fc80
        lea     ecx, [esi + 0x208]
        lea     eax, [esi + 0x1ec]
        mov     dword ptr [esi + 0x1d8], ecx
        mov     dword ptr [edi], 0x773328
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], 0x78929c
        mov     dword ptr [esi + 0x1d4], eax
        call    FUN_005e6dc0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
