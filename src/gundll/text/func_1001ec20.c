/*
 * FUN_1001ec20 (190 B) - __stdcall, RET 0x24 (9 args).
 * Registration helper: if this->obj(+0xc) is non-null returns 0xC112000D;
 * else calls FUN_1001c760(this, arg2), then FUN_1002b370(&local, arg6,
 * arg5); on success duplicates arg9 via FUN_10001dd0 and stores args 3-8
 * into this->+0x20..+0x38, sets +0x04=1, returns 0.  On failure calls
 * FUN_1002b420(arg5, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern int __stdcall FUN_1002b370(int a, int b, void *c);
extern void * __stdcall FUN_10001dd0(void *);
extern void __cdecl FUN_1002b420(void);

__declspec(naked) void __stdcall FUN_1001ec20(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0xc], 0
        je      L_ec43
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x24
L_ec43:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001c760
        mov     ebx, dword ptr [esp + 0x24]
        mov     edi, eax
        test    edi, edi
        jl      L_ec87
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002b370
        mov     edi, eax
        test    edi, edi
        jl      L_ec87
        mov     edi, dword ptr [esp + 0x34]
        push    edi
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jne     L_eca8
        test    edi, edi
        je      L_eca8
        mov     edi, 0x8007000e
L_ec87:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_ec9f
        mov     edx, dword ptr [esi + 0xc]
        push    ebx
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002b420
L_ec9f:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x24
L_eca8:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x2c], edx
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x30], edx
        mov     edx, dword ptr [esp + 0x30]
        pop     edi
        mov     dword ptr [esi + 0x28], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x34], edx
        mov     dword ptr [esi + 0x38], ecx
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x24
    }
}
