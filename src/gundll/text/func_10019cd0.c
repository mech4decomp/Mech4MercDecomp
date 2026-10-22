/*
 * FUN_10019cd0 (103 B) — __stdcall, RET 0x18 (6 params).
 * Object init: if obj->[0xc] != 0 return 0xc112000d; else init fields.
 */

extern int __stdcall FUN_1001c760(void *a, void *b);
extern void *__stdcall FUN_10001dd0(void *a);

__declspec(naked) void __stdcall FUN_10019cd0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L1
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
    L1:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L2
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jnz     L3
        test    edi, edi
        jz      L3
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x18
    L3:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x2c], eax
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x28], edx
        mov     eax, ecx
    L2:
        pop     edi
        pop     esi
        ret     0x18
    }
}
