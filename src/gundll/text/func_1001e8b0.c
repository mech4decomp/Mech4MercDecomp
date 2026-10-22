/*
 * FUN_1001e8b0 (110 B) - __stdcall, RET 0x1c (7 args).
 * Object init: if this->+0xc nonzero -> error 0xc112000d. Else calls
 * FUN_1001c760(this, arg2); on failure returns it. Duplicates arg7 via
 * FUN_10001dd0; on alloc failure returns 0x8007000e. Stores args 3-6 into
 * +0x20/+0x24/+0x28/+0x2c, sets +0x30=0, +0x04=1, returns 0.
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern void * __stdcall FUN_10001dd0(void *);

__declspec(naked) void __stdcall FUN_1001e8b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        push    edi
        je      loc_8c7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x1c
loc_8c7:
        mov     eax, dword ptr [esp+0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      loc_919
        mov     edi, dword ptr [esp+0x24]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     loc_8f2
        test    edi, edi
        je      loc_8f2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x1c
loc_8f2:
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x20], edx
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x24], edx
        mov     edx, dword ptr [esp+0x1c]
        mov     dword ptr [esi+0x28], edx
        mov     edx, dword ptr [esp+0x20]
        xor     ecx, ecx
        mov     dword ptr [esi+0x30], eax
        mov     byte ptr [esi+4], 1
        mov     dword ptr [esi+0x2c], edx
        mov     eax, ecx
loc_919:
        pop     edi
        pop     esi
        ret     0x1c
    }
}
